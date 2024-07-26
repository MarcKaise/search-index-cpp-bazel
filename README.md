# Search index - build with bazel 7.x

Return index of the number "2" in list "0 1 2 3 4".

```
bazelisk run :main -- 2 "0 1 2 3 4"
=> 2
```

Return index of the number "1" in list "23 543 3 1 987".

```
bazelisk run :main -- 1 "23 543 3 1 987"
=> 3
```
