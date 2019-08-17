/*
 * http_handle.h
 * CraftOS-PC 2
 * 
 * This file defines the methods for HTTP handles.
 * 
 * This code is licensed under the MIT license.
 * Copyright (c) 2019 JackMacWindows.
 */

#ifndef HTTP_HANDLE_H
#define HTTP_HANDLE_H
#ifdef __cplusplus
extern "C" {
#endif
#include <lua.h>
extern int http_handle_close(lua_State *L);
extern int http_handle_readAll(lua_State *L);
extern int http_handle_readLine(lua_State *L);
extern int http_handle_read(lua_State *L);
extern int http_handle_getResponseCode(lua_State *L);
extern int http_handle_getResponseHeaders(lua_State *L);
#ifdef __cplusplus
}
#endif
#endif