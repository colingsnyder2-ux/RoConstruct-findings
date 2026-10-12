// from server: 37% by colin
struct ClearBackpack {
    char pad[0xc];
    void* field_c;
    void clear(int);
};

extern "C" void __cdecl func_0057d250();
extern "C" void* __cdecl func_0049ac80(void*);
extern "C" void __cdecl func_0048c470();
extern "C" void __cdecl func_0055afd0();

void ClearBackpack::clear(int) {
    void* p = field_c;
    func_0057d250();
    void* r = func_0049ac80(field_c);
    if (r) {
        func_0048c470();
        func_0055afd0();
    }
}
