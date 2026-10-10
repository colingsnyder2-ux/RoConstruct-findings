// from server: 43% by tester
struct lua_State;

extern "C" int __cdecl lua_gettop(lua_State*);
extern "C" int __cdecl lua_type(lua_State*, int);
extern "C" double __cdecl lua_tonumber(lua_State*, int);
extern "C" const char* __cdecl lua_tolstring(lua_State*, int, unsigned int*);
extern "C" void __cdecl lua_pushnil(lua_State*);
extern "C" int __cdecl lua_pushfstring(lua_State*, const char*, ...);
extern "C" void __cdecl lua_pushvalue(lua_State*, int);
extern "C" int __cdecl lua_pcall(lua_State*, int, int, int);

extern "C" int* __cdecl _errno(void);
extern "C" int __cdecl fprintf(void*, const char*, ...);
extern "C" unsigned int __cdecl fwrite(const void*, unsigned int, unsigned int, void*);
extern "C" char* __cdecl strerror(int);

struct lua_exception {
    int __cdecl report(lua_State* L, void* f);
};

int lua_exception::report(lua_State* L, void* f)
{
    int status = 1;
    int n = lua_gettop(L) - 1;
    while (n != 0) {
        n = n - 1;
        if (lua_type(L, -1) == 3) {
            if (status) {
                double d = lua_tonumber(L, -1);
                if (fprintf(f, "%.14g", d) > 0) {
                    status = 1;
                    goto next;
                }
            }
            status = 0;
        } else {
            unsigned int len;
            const char* s = lua_tolstring(L, -1, &len);
            if (status) {
                if (fwrite(s, 1, len, f) == len) {
                    status = 1;
                    goto next;
                }
            }
            status = 0;
        }
    next:
        lua_pushnil(L);
        n = lua_gettop(L) - 1;
    }
    {
        int* err = _errno();
        int e = *err;
        if (status) {
            lua_pushvalue(L, -1);
            lua_pcall(L, 1, 0, 0);
            return 1;
        }
        lua_pushfstring(L, "HRESULT = %d: %s", e, strerror(e));
        lua_pushvalue(L, -1);
        lua_pcall(L, 1, 0, 0);
        return 3;
    }
}
