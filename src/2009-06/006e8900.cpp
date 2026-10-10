// from server: 54% by colin
struct S {
    char pad[0x28];
    bool flag;
    void* field2c;
    void* f(void* arg);
};

extern "C" void* __stdcall string_ctor(void*, const char*);

void* S::f(void* arg)
{
    const char* s;
    if (flag)
        s = (const char*)0x8eda68;
    else
        s = (const char*)0x8eacd8;
    string_ctor(arg, s);
    return arg;
}
