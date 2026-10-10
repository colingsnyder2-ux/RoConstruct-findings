// from server: 90% by atomic.potato
struct LuaState
{
    int top;
};

extern "C" double __cdecl getNumber(LuaState *, int);
extern "C" void __cdecl pushNumber(LuaState *, double);

int function0079c870(LuaState *state)
{
    pushNumber(state, getNumber(state, 1));
    return 1;
}
