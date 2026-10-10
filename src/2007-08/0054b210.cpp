// from server: 45% by colin
struct S_func_0054b210
{
    void f();
};

extern "C" void __stdcall sub_77E698(void*);
extern "C" void __stdcall sub_77E6AC(void*);
extern "C" void __stdcall sub_412DC0(void*, void*);

void S_func_0054b210::f()
{
    char buf[32];
    *(void**)buf = 0;
    sub_77E698(buf);
    sub_412DC0(this, buf);
    *(void**)this = (void*)0x7a783c;
    *(char*)(buf + 24) = 0;
    sub_77E6AC(buf);
}
