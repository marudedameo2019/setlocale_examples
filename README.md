setlocale()の使用例を示すコードです。
Windows VS2022とMSYS2とUbuntu24.04で確認しました。

# ビルド方法

cmakeを使います。

## VS2022などマルチコンフィグレーションの場合

VS2022のシェル実行環境(典型的には "C:\Program Files\Microsoft Visual Studio\2022\Community\Common7\Tools\VsDevCmd.bat" )から

```shell-session
C:\Users\user\setlocale_examples>cmake -B 任意のビルド結果格納用ディレクトリ
...
C:\Users\user\setlocale_examples>cmake --build 任意のビルド結果格納用ディレクトリ --verbose --config Release
...
```

## make(MSYS2やLinux)などシングルコンフィグレーションの場合

```shell-session
$ cmake -B 任意のビルド結果格納用ディレクトリ -DCMAKE_BUILD_TYPE=Release
...
$ cmake --build 任意のビルド結果格納用ディレクトリ --verbose
...
```
