ログ出力
======================
ロガー

利用方法
------

### コンパイル ###
    
    $ make
    $ ./logger
        
### ソース ###

```cpp
log::init("sample.log", "error.log", log::LOGDISP);

log::msg("message");
log::info("info");
log::debug("debug");
log::error("error");
log::log("log");
```

### 結果 ###
```   
$ ./fcgicli
message
info
debug
error
```

ライセンス
----------
Copyright &copy; 2013 Yujiro Takahashi  
Licensed under the [MIT License][MIT].  
Distributed under the [MIT License][MIT].  

[MIT]: http://www.opensource.org/licenses/mit-license.php
