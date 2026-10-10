// from server: 23% by atomic.potato
struct LuaArguments
{
    LuaArguments * __cdecl f(int, int);
};

LuaArguments *LuaArguments::f(int, int)
{
    return this;
}
