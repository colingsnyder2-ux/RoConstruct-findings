// from server: 59% by colin
struct String {
    char data[28];
    String(const String&);
    ~String();
};

extern "C" void* __cdecl operator_new(unsigned int);
extern "C" void __stdcall string_copy_ctor(String*, const String*);
extern "C" void __stdcall string_dtor(String*);

struct S {
    void __cdecl f(String* a, String* b);
};

void S::f(String* a, String* b)
{
    String tmp1(*a);
    String tmp2(*b);
    operator_new(4);
    tmp2.~String();
    tmp1.~String();
}
