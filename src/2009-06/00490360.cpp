// from server: 40% by atomic.potato
struct S_func_00490360 {
    void f();
};

extern "C" void __stdcall sub_0089E4B4(void*, const char*);
extern "C" void __stdcall sub_0089E9B8(void*);
extern "C" void __stdcall sub_0089E4B8(void*, void*);
extern "C" void __cdecl sub_00719A4A(void*, void*);

void S_func_00490360::f()
{
    char buf[0x44];
    void* p;

    sub_0089E4B4(buf, (const char*)0x8AECA0);
    sub_0089E9B8(buf + 0x1C);
    p = buf;
    sub_0089E4B8(buf + 0x2C, p);
    sub_00719A4A((void*)0x979234, buf + 0x20);
}
