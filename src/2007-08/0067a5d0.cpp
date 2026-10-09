// from server: 77% by colin
// roc 2007-08 0067a5d0  unit: CXTPControls  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0067a5d0
//
// 0067a5d0  56                   push esi
// 0067a5d1  57                   push edi
// 0067a5d2  8bf9                 mov edi, ecx
// 0067a5d4  8b472c               mov eax, dword ptr [edi + 0x2c]
// 0067a5d7  33f6                 xor esi, esi
// 0067a5d9  85c0                 test eax, eax
// 0067a5db  7e3e                 jle 0x67a61b
// 0067a5dd  8d4900               lea ecx, [ecx]
// 0067a5e0  85f6                 test esi, esi
// 0067a5e2  7c11                 jl 0x67a5f5
// 0067a5e4  3bf0                 cmp esi, eax
// 0067a5e6  7d0d                 jge 0x67a5f5
// 0067a5e8  3b772c               cmp esi, dword ptr [edi + 0x2c]
// 0067a5eb  7d43                 jge 0x67a630
// 0067a5ed  8b4728               mov eax, dword ptr [edi + 0x28]
// 0067a5f0  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 0067a5f3  eb02                 jmp 0x67a5f7
// 0067a5f5  33c9                 xor ecx, ecx
// 0067a5f7  8b11                 mov edx, dword ptr [ecx]
// 0067a5f9  8b92dc000000         mov edx, dword ptr [edx + 0xdc]
// 0067a5ff  89b180000000         mov dword ptr [ecx + 0x80], esi
// 0067a605  89b9f4000000         mov dword ptr [ecx + 0xf4], edi
// 0067a60b  8b4720               mov eax, dword ptr [edi + 0x20]
// 0067a60e  50                   push eax
// 0067a60f  ffd2                 call edx
// 0067a611  8b472c               mov eax, dword ptr [edi + 0x2c]
// 0067a614  83c601               add esi, 1
// 0067a617  3bf0                 cmp esi, eax
// 0067a619  7cc5                 jl 0x67a5e0
// 0067a61b  837f2000             cmp dword ptr [edi + 0x20], 0
// 0067a61f  7414                 je 0x67a635
// 0067a621  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 0067a624  8b01                 mov eax, dword ptr [ecx]
// 0067a626  8b90c4010000         mov edx, dword ptr [eax + 0x1c4]
// 0067a62c  5f                   pop edi
// 0067a62d  5e                   pop esi
// 0067a62e  ffe2                 jmp edx
// 0067a630  e9eb58fbff           jmp 0x62ff20
// 0067a635  5f                   pop edi
// 0067a636  5e                   pop esi
// 0067a637  c3                   ret 

struct CXTPControls {
    int unknown0;
    int unknown4;
    int unknown8;
    int unknownC;
    int unknown10;
    int unknown14;
    int unknown18;
    int unknown1C;
    int unknown20;
    int unknown24;
    int unknown28;
    int count;
    int *items;
    void Refresh();
};

extern "C" void __cdecl sub_0062ff20();

void CXTPControls::Refresh()
{
    int i = 0;
    if (count > 0) {
        do {
            int *item;
            if (i >= 0 && i < count) {
                if (i >= count) {
                    sub_0062ff20();
                }
                item = (int*)items[i];
            } else {
                item = 0;
            }
            int *vtbl = (int*)*item;
            void (__thiscall *fn)(int*, int) = (void (__thiscall *)(int*, int))vtbl[0xdc / 4];
            *(int*)((char*)item + 0x80) = i;
            *(int*)((char*)item + 0xf4) = (int)this;
            fn(item, unknown20);
            i++;
        } while (i < count);
    }
    if (unknown20 != 0) {
        int *obj = (int*)unknown20;
        int *vtbl = (int*)*obj;
        void (__thiscall *fn)(int*) = (void (__thiscall *)(int*))vtbl[0x1c4 / 4];
        fn(obj);
    }
}
