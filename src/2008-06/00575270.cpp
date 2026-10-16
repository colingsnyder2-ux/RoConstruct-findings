// from server: 39% by colin
// roc 2008-06 00575270  unit: RBX::ServiceProvider  size: 141 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00575270

struct std_string {
    char buf[28];
    std_string(const char*);
};

extern "C" void __stdcall sub_802458(std_string*, const char*);
extern "C" void __stdcall sub_6a158c(void*, void*);
extern "C" void __stdcall sub_409d50(void*, void*);

struct ServiceProvider {
    char pad[0x1c8];
    void* field_1c8;
    void* GetExitVerb();
};

void* ServiceProvider::GetExitVerb() {
    std_string s1("Exit");
    void* v = (*(void*(__thiscall**)(void*, int))((*(char**)&field_1c8) + 0x10))(field_1c8, 0);
    if (v == 0) {
        std_string s2("Couldn't find Exit Verb");
        void* tmp = 0;
        sub_409d50(&tmp, &s2);
        sub_6a158c(&s2, &tmp);
        v = (*(void*(__thiscall**)(void*, int))((*(char**)&field_1c8) + 0x10))(field_1c8, 0);
    }
    return v;
}
