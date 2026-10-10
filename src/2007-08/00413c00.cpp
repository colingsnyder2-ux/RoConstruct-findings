// from server: 38% by colin
struct S {
    void* vtable;
    void construct();
};

extern "C" {
    void* __stdcall sub_77E698(const char*);
    void __stdcall sub_77E6AC(void*);
    void __stdcall sub_412DC0(void*, void*);
}

void S::construct()
{
    char buf[32];
    sub_77E698("call to empty boost::function");
    sub_412DC0(this, buf);
    sub_77E6AC(buf);
    vtable = (void*)0x78718C;
}
