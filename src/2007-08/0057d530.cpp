// from server: 88% by colin
// roc 2007-08 0057d530  unit: RBX::VFlag::?$FactoryProduct::Creator  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057d530
//
// 0057d530  56                   push esi
// 0057d531  57                   push edi
// 0057d532  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0057d536  57                   push edi
// 0057d537  e8940bf1ff           call 0x48e0d0
// 0057d53c  8bf0                 mov esi, eax
// 0057d53e  83c404               add esp, 4
// 0057d541  85f6                 test esi, esi
// 0057d543  7419                 je 0x57d55e
// 0057d545  3bfe                 cmp edi, esi
// 0057d547  740c                 je 0x57d555
// 0057d549  56                   push esi
// 0057d54a  8bcf                 mov ecx, edi
// 0057d54c  e86f2beaff           call 0x4200c0
// 0057d551  84c0                 test al, al
// 0057d553  7409                 je 0x57d55e
// 0057d555  8b867c020000         mov eax, dword ptr [esi + 0x27c]
// 0057d55b  5f                   pop edi
// 0057d55c  5e                   pop esi
// 0057d55d  c3                   ret 
// 0057d55e  5f                   pop edi
// 0057d55f  33c0                 xor eax, eax
// 0057d561  5e                   pop esi
// 0057d562  c3                   ret 

struct RBX_DescribedBase {
    char pad[0x27c];
    int field_27c;
};

extern "C" void* __cdecl sub_48E0D0(void*);

struct RBX_Other {
    bool method(void*);
};

struct RBX_VFlag_FactoryProduct_Creator {
    int getField();
};

int RBX_VFlag_FactoryProduct_Creator::getField() {
    RBX_DescribedBase* self = (RBX_DescribedBase*)this;
    void* p = sub_48E0D0(self);
    if (p != 0) {
        if (self == p || ((RBX_Other*)self)->method(p)) {
            return ((RBX_DescribedBase*)p)->field_27c;
        }
    }
    return 0;
}
