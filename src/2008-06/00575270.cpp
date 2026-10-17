// from server: 41% by colin
struct std_string {
    char buf[28];
    std_string(const char*);
    ~std_string();
};

extern "C" void* __stdcall sub_802458(std_string*, const char*);
extern "C" void __stdcall sub_6a158c(void*, void*);
extern "C" void __stdcall sub_409d50(void*, void*);
extern "C" void* __stdcall sub_583380(void*);

struct ServiceProvider {
    char pad[0x1c8];
    void* field_1c8;
    void* GetExitVerb();
};

void* ServiceProvider::GetExitVerb() {
    std_string s1("Exit");
    void* v = sub_583380(&field_1c8);
    if (v == 0) {
        std_string s2("Couldn't find Exit Verb");
        void* tmp = 0;
        sub_409d50(&tmp, &s2);
        sub_6a158c(&s2, &tmp);
        v = sub_583380(&field_1c8);
    }
    return v;
}
