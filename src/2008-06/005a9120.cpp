// from server: 100% by tester
// roc 2008-06 005a9120  unit: RBX::VScriptContext::?$FactoryProduct  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a9120
//
// 005a9120  8b8138010000         mov eax, dword ptr [ecx + 0x138]
// 005a9126  85c0                 test eax, eax
// 005a9128  7406                 je 0x5a9130
// 005a912a  8b40f4               mov eax, dword ptr [eax - 0xc]
// 005a912d  8b00                 mov eax, dword ptr [eax]
// 005a912f  c3                   ret 
// 005a9130  33c0                 xor eax, eax
// 005a9132  c3                   ret 

struct FactoryProduct {
    int get() const;
    char pad[0x138];
    void* field_8c;
};

int FactoryProduct::get() const {
    void* p = field_8c;
    if (p != 0) {
        return **(int**)((char*)p - 0xc);
    }
    return 0;
}
