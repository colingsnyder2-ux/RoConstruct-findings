// from server: 60% by atomic.potato
extern "C" double __cdecl universal_log(double);
extern "C" void __cdecl lua_pushnumber(void *, double);

int Function(void *state)
{
    lua_pushnumber(state, universal_log(1.0));
    return 1;
}
