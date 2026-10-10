// from server: 71% by colin
struct lua_State;

extern "C" void __cdecl luaG_runerror(lua_State* L, const char* msg);
extern "C" int __cdecl sub_5c6110(lua_State* L, int a, int b);
extern "C" void __cdecl sub_610d10(lua_State* L, int n);
extern "C" void __cdecl sub_60fe00(lua_State* L);
extern "C" void __cdecl sub_5c6020(lua_State* L, int n);

struct lua_State {
    char pad0[0x10];
    void* field10;
    char pad14[0x20];
    unsigned short nCcalls;
    char pad36[0x40];
};

void sub_5c62d0(lua_State* L, int a, int b) {
    L->nCcalls++;
    unsigned short n = L->nCcalls;
    if (n >= 200) {
        if (n == 200) {
            luaG_runerror(L, "C stack overflow");
        } else if (n >= 225) {
            sub_5c6020(L, 5);
        }
    }
    if (sub_5c6110(L, a, b) == 0) {
        sub_610d10(L, 1);
    }
    void* p = L->field10;
    L->nCcalls--;
    if (*(unsigned int*)((char*)p + 0x44) >= *(unsigned int*)((char*)p + 0x40)) {
        sub_60fe00(L);
    }
}
