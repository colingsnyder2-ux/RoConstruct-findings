// from server: 91% by colin
extern "C" void* __cdecl sub_0062FF02();
extern "C" int (__stdcall *PostMessageA)(void*, unsigned int, unsigned int, int);

struct S_func_00456070 {
    void f(int);
};

void S_func_00456070::f(int a)
{
    char* p = (char*)sub_0062FF02();
    p = *(char**)(p + 4);
    p = *(char**)(p + 0x20);
    int hwnd = *(int*)(p + 0x20);
    PostMessageA((void*)hwnd, 0x111, 0x80ff, 0);
}
