#include <iostream>
#include <sstream>
#include <vector>

#include "search_index.h"

using namespace std;

// ヘルプメッセージを表示する関数
void showHelp() {
    cout << "Search given number in array and return index of the number\n"
         << endl
         << "Usage: search_index <target_number> <number_array>\n"
         << endl
         << "Example:\n"
         << "  search_index 2 \"0 1 2 3 4\"\n"
         << endl;
}

// 文字列をカンマで区切って整数のベクトルに変換する関数
vector<int> parseNumberArray(const string &str) {
    vector<int> result;
    stringstream ss(str);
    string item;
    while (getline(ss, item, ' ')) {
        result.push_back(stoi(item));
    }
    return result;
}

int main(int argc, char *argv[]) {
    // コマンドライン引数のチェック
    if (argc < 2) {
        std::cerr << "Error: Missing required arguments.\n";
        showHelp();
        return 1;
    }

    // ヘルプオプションのチェック
    string arg1 = argv[1];
    if (arg1 == "--help") {
        showHelp();
        return 0;
    }

    // 引数の数をチェック
    if (argc < 3) {
        std::cerr << "Error: Missing required arguments.\n";
        showHelp();
        return 1;
    }

    // 第一引数を検索対象の数値としてパース
    int target = stoi(argv[1]);

    // 第二引数を数値配列としてパース
    vector<int> numberArray = parseNumberArray(argv[2]);

    // search index
    SearchIndex si;
    int index = si.search_index(target, numberArray);

    if (index != -1) {
        cout << index << endl;
        return 0;
    } else {
        return -1;
    }
}
