// from server: 100% by colin
// roc 2007-08 005dece0  unit: RBX::VMotorFeature::?$FactoryProduct  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005dece0
//
// 005dece0  56                   push esi
// 005dece1  57                   push edi
// 005dece2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005dece6  8b4728               mov eax, dword ptr [edi + 0x28]
// 005dece9  85c0                 test eax, eax
// 005deceb  8bf1                 mov esi, ecx
// 005deced  7410                 je 0x5decff
// 005decef  90                   nop 
// 005decf0  50                   push eax
// 005decf1  8bce                 mov ecx, esi
// 005decf3  e8c8f9ffff           call 0x5de6c0
// 005decf8  8b4728               mov eax, dword ptr [edi + 0x28]
// 005decfb  85c0                 test eax, eax
// 005decfd  75f1                 jne 0x5decf0
// 005decff  5f                   pop edi
// 005ded00  5e                   pop esi
// 005ded01  c20400               ret 4

struct VMotorFeature {
    void removeAll();
    void sub_5de6c0(void*);
    void func(void*);
};

void VMotorFeature::func(void* a) {
    void* p = *(void**)((char*)a + 0x28);
    if (p != 0) {
        do {
            sub_5de6c0(p);
            p = *(void**)((char*)a + 0x28);
        } while (p != 0);
    }
}
