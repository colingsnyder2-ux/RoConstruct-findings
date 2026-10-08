// from server: 82% by colin
// roc 2007-08 005b3c00  unit: RBX::Assembly  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b3c00
//
// 005b3c00  83ec08               sub esp, 8
// 005b3c03  53                   push ebx
// 005b3c04  8b591c               mov ebx, dword ptr [ecx + 0x1c]
// 005b3c07  56                   push esi
// 005b3c08  57                   push edi
// 005b3c09  8d7118               lea esi, [ecx + 0x18]
// 005b3c0c  8d442418             lea eax, [esp + 0x18]
// 005b3c10  50                   push eax
// 005b3c11  8d4c2410             lea ecx, [esp + 0x10]
// 005b3c15  51                   push ecx
// 005b3c16  8bce                 mov ecx, esi
// 005b3c18  e833190500           call 0x605550
// 005b3c1d  8bf8                 mov edi, eax
// 005b3c1f  8b07                 mov eax, dword ptr [edi]
// 005b3c21  85c0                 test eax, eax
// 005b3c23  7404                 je 0x5b3c29
// 005b3c25  3bc6                 cmp eax, esi
// 005b3c27  7406                 je 0x5b3c2f
// 005b3c29  ff15d8e67700         call dword ptr [0x77e6d8]
// 005b3c2f  33c0                 xor eax, eax
// 005b3c31  395f04               cmp dword ptr [edi + 4], ebx
// 005b3c34  5f                   pop edi
// 005b3c35  5e                   pop esi
// 005b3c36  0f95c0               setne al
// 005b3c39  5b                   pop ebx
// 005b3c3a  83c408               add esp, 8
// 005b3c3d  c20400               ret 4

struct Assembly {
    char pad[0x18];
    int field18;
    int field1c;
    bool f(int);
};

extern "C" void __stdcall _invalid_parameter_noinfo();

struct Iter {
    int* first;
    int* last;
};

struct Helper {
    Iter* __thiscall sub_605550(Iter* out, int* val);
};

bool Assembly::f(int arg) {
    int saved = field1c;
    Iter it;
    ((Helper*)&field18)->sub_605550(&it, &arg);
    int* node = it.first;
    int* head = (int*)&field18;
    if (node != 0 && node != head) {
        _invalid_parameter_noinfo();
    }
    return node[1] != saved;
}
