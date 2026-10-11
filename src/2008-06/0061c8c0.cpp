// from server: 53% by colin
// roc 2008-06 0061c8c0  unit: seg_00610000  size: 314 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0061c8c0

extern "C" int __cdecl strcmp(const char*, const char*);

struct lua_State;

extern "C" void __cdecl lua_pushnumber(lua_State*, double);

struct LuaArguments {
    int method(lua_State* L, const char* name, float* v);
};

int LuaArguments::method(lua_State* L, const char* name, float* v)
{
    if (strcmp(name, "X") == 0) {
        lua_pushnumber(L, (double)v[0]);
        return 1;
    }
    if (strcmp(name, "Y") == 0) {
        lua_pushnumber(L, (double)v[1]);
        return 1;
    }
    if (strcmp(name, "Z") == 0) {
        lua_pushnumber(L, (double)v[2]);
        return 1;
    }
    return 0;
}
