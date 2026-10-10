// from server: 74% by atomic.potato
typedef struct LuaState LuaState;

extern "C" int __cdecl lua_gettop(LuaState *);

struct LuaArguments {
    int value;
    int count;
    int f();
};

int LuaArguments::f()
{
    int top = value;
    return lua_gettop((LuaState *)top) - 1;
}
