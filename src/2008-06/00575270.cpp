// from server: 56% by colin
// from server: 41% by colin
// roc 2008-06 00575270  unit: RBX::ServiceProvider  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00575270
//
// 00575270  6aff                 push -1
// 00575272  68b9fe7c00           push 0x7cfeb9
// 00575277  64a100000000         mov eax, dword ptr fs:[0]
// 0057527d  50                   push eax
// 0057527e  64892500000000       mov dword ptr fs:[0], esp
// 00575285  83ec48               sub esp, 0x48
// 00575288  56                   push esi
// 00575289  83ec1c               sub esp, 0x1c
// 0057528c  8bf1                 mov esi, ecx

struct std_string {
    char buf[28];
    std_string(const char*);
    __declspec(dllimport) ~std_string() throw();
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
