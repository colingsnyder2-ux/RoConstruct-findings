// from server: 75% by tester
struct S_func_005e9b80 {
    char pad[0x60];
    void f(bool b, void* p);
};

void S_func_005e9b80::f(bool b, void* p)
{
    char* q = *(char**)((char*)p + 0x24);
    void* arg = *(void**)(q + 0x1c);
    if (b)
        ((void (__thiscall*)(void*, void*))(*(void***)((char*)this + 0x40)))((char*)this + 0x40, arg);
    else
        ((void (__thiscall*)(void*, void*))(*(void***)((char*)this + 0x60)))((char*)this + 0x60, arg);
}
