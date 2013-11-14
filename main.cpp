/**
 * main.cpp
 *
 * C++ versions 4.4.5
 *
 *      fcgi_client : https://github.com/Yujiro3/fcgicli
 *      Copyright (c) 2011-2013 sheeps.me All Rights Reserved.
 *
 * @package         fcgi_client
 * @copyright       Copyright (c) 2011-2013 sheeps.me
 * @author          Yujiro Takahashi <yujiro3@gmail.com>
 * @filesource
 */

#include <iostream>
#include <sstream>
#include <string>
#include <unistd.h>

#include "log_logger.h"

using namespace std;

/**
 * メイン関数
 *
 * @access public
 * @param int  argc
 * @param char **argv
 * @return int
 */
int main(int argc, char **argv) {
    log::init("sample.log", "error.log", log::LOGDISP);
    
    log::msg("message");
    log::info("info");
    log::debug("debug");
    log::error("error");
    log::log("log");

    return 0;
}