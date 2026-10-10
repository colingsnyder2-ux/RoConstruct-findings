// from server: 39% by colin
struct S_func_0054b310
{
    void f();
};

struct S_string
{
    char data[0x1c];
    S_string(const char*);
    ~S_string();
};

extern "C" void __stdcall sub_00412dc0(void*, const S_string*);

void S_func_0054b310::f()
{
    S_string s("putback buffer full");
    sub_00412dc0(this, &s);
    *(void**)this = (void*)0x7a783c;
    s.~S_string();
}
