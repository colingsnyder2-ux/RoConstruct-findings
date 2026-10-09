// from server: 95% by colin
// roc 2007-08 0066b6b0  unit: CXTPToolBar  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0066b6b0
//
// 0066b6b0  53                   push ebx
// 0066b6b1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0066b6b5  56                   push esi
// 0066b6b6  57                   push edi
// 0066b6b7  8bf9                 mov edi, ecx
// 0066b6b9  8da42400000000       lea esp, [esp]
// 0066b6c0  8b472c               mov eax, dword ptr [edi + 0x2c]
// 0066b6c3  33f6                 xor esi, esi
// 0066b6c5  85c0                 test eax, eax
// 0066b6c7  7e33                 jle 0x66b6fc
// 0066b6c9  8da42400000000       lea esp, [esp]
// 0066b6d0  85f6                 test esi, esi
// 0066b6d2  7c11                 jl 0x66b6e5
// 0066b6d4  3bf0                 cmp esi, eax
// 0066b6d6  7d0d                 jge 0x66b6e5
// 0066b6d8  3b772c               cmp esi, dword ptr [edi + 0x2c]
// 0066b6db  7d2c                 jge 0x66b709
// 0066b6dd  8b4728               mov eax, dword ptr [edi + 0x28]
// 0066b6e0  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 0066b6e3  eb02                 jmp 0x66b6e7
// 0066b6e5  33c9                 xor ecx, ecx
// 0066b6e7  8b11                 mov edx, dword ptr [ecx]
// 0066b6e9  8b822c010000         mov eax, dword ptr [edx + 0x12c]
// 0066b6ef  53                   push ebx
// 0066b6f0  ffd0                 call eax
// 0066b6f2  8b472c               mov eax, dword ptr [edi + 0x2c]
// 0066b6f5  83c601               add esi, 1
// 0066b6f8  3bf0                 cmp esi, eax
// 0066b6fa  7cd4                 jl 0x66b6d0
// 0066b6fc  8b7f3c               mov edi, dword ptr [edi + 0x3c]
// 0066b6ff  85ff                 test edi, edi
// 0066b701  75bd                 jne 0x66b6c0
// 0066b703  5f                   pop edi
// 0066b704  5e                   pop esi
// 0066b705  5b                   pop ebx
// 0066b706  c20400               ret 4
// 0066b709  e81248fcff           call 0x62ff20

struct CXTPToolBar {
    int field_0;
    int field_4;
    int field_8;
    int field_c;
    int field_10;
    int field_14;
    int field_18;
    int field_1c;
    int field_20;
    int field_24;
    int field_28;
    int field_2c;
    int field_30;
    int field_34;
    int field_38;
    int field_3c;
    void Func(int);
};

void CXTPToolBar::Func(int arg) {
    CXTPToolBar* p = this;
    do {
        int count = p->field_2c;
        int i = 0;
        if (count > 0) {
            do {
                CXTPToolBar* item;
                if (i >= 0 && i >= count) {
                    if (i >= p->field_2c) {
                        extern void __cdecl sub_62ff20();
                        sub_62ff20();
                    }
                    item = (CXTPToolBar*)((int*)p->field_28)[i];
                } else {
                    item = 0;
                }
                void (__thiscall *fn)(CXTPToolBar*, int) = *(void (__thiscall **)(CXTPToolBar*, int))((char*)(*(void**)item) + 0x12c);
                fn(item, arg);
                count = p->field_2c;
                i++;
            } while (i < count);
        }
        p = (CXTPToolBar*)p->field_3c;
    } while (p);
}
