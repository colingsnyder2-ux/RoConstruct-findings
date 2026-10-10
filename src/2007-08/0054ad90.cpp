// from server: 52% by colin
extern "C" {
    void __stdcall _invalid_parameter_noinfo(void);
    void __stdcall _invalid_parameter_noinfo_noreturn(void);
    void* __cdecl memcpy_s(void*, unsigned int, const void*, unsigned int);
}

struct S {
    void* field;
    void* f(void* a, int b, int c);
};

void* S::f(void* a, int b, int c) {
    if (c == 0) {
        _invalid_parameter_noinfo_noreturn();
    }
    if (a == 0 && b != 0) {
        _invalid_parameter_noinfo_noreturn();
    }
    void** vtable = *(void***)c;
    void* result = ((void* (__stdcall*)(int, int))vtable[0])(1, b);
    if (result == 0) {
        _invalid_parameter_noinfo();
    }
    char* p = (char*)result + 0x10;
    this->field = p;
    if (b < 0 || b > *(int*)(p - 8)) {
        _invalid_parameter_noinfo_noreturn();
    }
    *(int*)(p - 0xc) = b;
    char* dst = (char*)this->field;
    dst[b] = 0;
    memcpy_s(this->field, b, a, b);
    return this;
}
