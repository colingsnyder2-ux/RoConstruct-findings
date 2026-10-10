// from server: 48% by colin
struct S_func_0054b290
{
    void f();
};

extern "C" void __stdcall sub_77E698(void*, const char*);
extern "C" void __stdcall sub_77E6AC(void*);
extern "C" void __stdcall sub_412DC0(void*, void*);

void S_func_0054b290::f()
{
    char buf[32];
    *(void**)buf = 0;
    sub_77E698(buf, "no random access");
    sub_412DC0(this, buf);
    *(void**)this = (void*)0x7A783C;
    sub_77E6AC(buf);
}
