#include "force_verified.h"
// Lua: run a script that uses the base, string, table and math libraries.
extern "C" {
#include "lua.h"
#include "lualib.h"
#include "lauxlib.h"
}
#include <windows.h>
#include <stdio.h>
#include <string.h>

int main()
{
    lua_State* L = luaL_newstate();
    luaL_openlibs(L);
    const char* script =
        "local t = {} for i = 1, 10 do t[#t + 1] = i * i end "
        "table.sort(t, function(a, b) return a > b end) "
        "return string.format('%d|%d|%s|%.3f', #t, t[1], table.concat(t, ',', 9, 10), math.sqrt(2))";
    if (luaL_loadstring(L, script) || lua_pcall(L, 0, 1, 0))
        return printf("lua error: %s\n", lua_tostring(L, -1)), 2;
    const char* result = lua_tostring(L, -1);
    printf("%s %s\n", LUA_RELEASE, result);
    int ok = strcmp(result, "10|100|4,1|1.414") == 0;
    char tempDirectory[MAX_PATH], tempFile[MAX_PATH];
    if (!GetTempPathA(MAX_PATH, tempDirectory) ||
        !GetTempFileNameA(tempDirectory, "roc", 0, tempFile)) return 4;
    lua_pushstring(L, tempFile);
    lua_setglobal(L, "native_test_file");
    const char* checks =
        "local function near(a,b) assert(math.abs(a-b)<1e-10) end "
        "near(math.deg(math.pi),180) near(math.deg(-math.pi/2),-90) near(math.deg(0),0) "
        "near(math.rad(180),math.pi) near(math.sin(math.pi/2),1) near(math.cos(0),1) "
        "near(math.atan2(1,1),math.pi/4) near(math.sqrt(81),9) near(math.log(math.exp(2)),2) "
        "math.randomseed(12345) local sequence={} "
        "for i=1,128 do local a=math.random() assert(a>=0 and a<1) "
        "local b=math.random(7) assert(b>=1 and b<=7 and b==math.floor(b)) "
        "local c=math.random(-13,19) assert(c>=-13 and c<=19 and c==math.floor(c)) "
        "sequence[i]={a,b,c} end "
        "math.randomseed(12345) for i=1,128 do assert(math.random()==sequence[i][1]) "
        "assert(math.random(7)==sequence[i][2]) assert(math.random(-13,19)==sequence[i][3]) end "
        "assert(math.random(1)==1 and math.random(5,5)==5) "
        "assert(not pcall(math.random,0)) assert(not pcall(math.random,9,3)) "
        "assert(not pcall(math.random,1,2,3)) assert(not pcall(math.deg,{})) "
        "local f=assert(loadstring('return function(x) return x*x+3 end'))() "
        "assert(assert(loadstring(string.dump(f)))(7)==52) "
        "local co=coroutine.create(function() coroutine.yield(17) return 23 end) "
        "local a,b=coroutine.resume(co) assert(a and b==17) "
        "a,b=coroutine.resume(co) assert(a and b==23) "
        "for i=1,1000 do local t={i,string.rep('x',i%31)} end collectgarbage('collect') "
        "assert(('abc123'):match('%d+')=='123') "
        "local f=assert(io.open(native_test_file,'w+b')) assert(f:write('native lua')) assert(f:seek('set',0)) "
        "assert(f:read('*a')=='native lua') assert(f:close()) return 'native checks passed'";
    lua_settop(L, 0);
    int checkError = luaL_loadstring(L, checks) || lua_pcall(L, 0, 1, 0);
    DeleteFileA(tempFile);
    if (checkError) return printf("native Lua error: %s\n", lua_tostring(L, -1)), 3;
    printf("%s\n", lua_tostring(L, -1));
    lua_close(L);
    return ok ? 0 : 1;
}
