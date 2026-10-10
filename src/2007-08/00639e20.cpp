// from server: 75% by colin
extern "C" char* __cdecl _mbschr(const char*, int);
extern "C" int __stdcall G1_func_007383b8(void*, const char*, int, int);
extern "C" int __stdcall G1_func_0077dd6c(void*);
extern "C" void __stdcall G1_func_0077d434(void*, int);
extern "C" char __stdcall G1_func_0077dcd0(void*);

struct S_func_00639e20 {
    char pad[0xd8];
    int field_d8;
    char pad2[0xc];
    int field_e8;
    int field_ec;
    void method(const char*);
};

void S_func_00639e20::method(const char* s)
{
    if (s == 0 || *s == 0)
        return;

    if (_mbschr(s, 0xa) != 0) {
        G1_func_007383b8(&field_e8, s, 1, 0xa);
        G1_func_007383b8(&field_ec, s, 0, 0xa);
    } else {
        G1_func_0077d434(&field_ec, G1_func_0077dd6c(&field_e8));
    }

    if (G1_func_0077dcd0(&field_d8)) {
        if (G1_func_007383b8(&field_d8, s, 2, 0xa) == 0)
            G1_func_0077d434(&field_e8, G1_func_0077dd6c(&field_d8));
    }
}
