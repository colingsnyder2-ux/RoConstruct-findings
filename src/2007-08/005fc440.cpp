// from server: 51% by colin
// roc 2007-08 005fc440  unit: RBX::RocketTool  size: 256 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005fc440

extern "C" {
    int __stdcall MSVCP80_basic_string_ctor_PBD(void* self, const char* s);
    int __stdcall MSVCP80_basic_string_dtor(void* self);
    void __stdcall MSVCR80_invalid_parameter_noinfo();
}

struct String {
    void* data[4];
    String(const char* s);
    ~String();
};

struct Vec {
    void* begin;
    void* end;
    void* cap;
};

struct S {
    void func(int arg);
};

void __stdcall sub_5450b0(void* dst, void* src);
void* __stdcall sub_408740();
void __stdcall sub_549500(void* self, void* arg);
void __stdcall sub_492940(void* a, void* b);
void __stdcall sub_40db50(void* a, void* b, void* c, void* d);
void __stdcall sub_62fc62(void* p);

void S::func(int arg) {
    Vec v;
    v.begin = 0;
    v.end = 0;
    v.cap = 0;
    String s("Fonts\\Rocket.rbxm");
    void* tmp = 0;
    sub_5450b0(&tmp, &s);
    void* obj = sub_408740();
    sub_549500(obj, &tmp);
    s.~String();
    if (v.begin > v.end) MSVCR80_invalid_parameter_noinfo();
    if (v.begin < v.end) MSVCR80_invalid_parameter_noinfo();
    sub_492940(v.begin, (void*)arg);
    if (v.begin != 0) {
        sub_40db50(v.begin, v.end, &v.begin, v.cap);
        sub_62fc62(v.begin);
    }
}
