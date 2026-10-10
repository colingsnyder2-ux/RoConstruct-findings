// from server: 65% by atomic.potato
struct S_func_005cee60
{
    void __cdecl f(float a, float b);
};

void S_func_005cee60::f(float a, float b)
{
    S_func_005cee60* p = *(S_func_005cee60**)((char*)this + 4);
    ((void (__thiscall *)(float))(*(void***)p + 0))(b);
}
