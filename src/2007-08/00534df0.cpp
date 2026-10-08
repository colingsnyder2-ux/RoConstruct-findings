// from server: 100% by colin
// roc 2007-08 00534df0  unit: std::logic_error  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00534df0
//
// 00534df0  8b81f0000000         mov eax, dword ptr [ecx + 0xf0]
// 00534df6  85c0                 test eax, eax
// 00534df8  7406                 je 0x534e00
// 00534dfa  8b40f4               mov eax, dword ptr [eax - 0xc]
// 00534dfd  8b00                 mov eax, dword ptr [eax]
// 00534dff  c3                   ret 
// 00534e00  33c0                 xor eax, eax
// 00534e02  c3                   ret 

struct S {
    char pad[0xf0];
    int* field;
    int f();
};

int S::f() {
    int* p = field;
    if (p)
        return **(int**)((char*)p - 0xc);
    return 0;
}
