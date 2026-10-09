// from server: 68% by colin
// roc 2007-08 005318a0  unit: RBX::VModelInstance::?$FactoryProduct  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005318a0
//
// 005318a0  8b442404             mov eax, dword ptr [esp + 4]
// 005318a4  83ec0c               sub esp, 0xc
// 005318a7  6a00                 push 0
// 005318a9  68284a8800           push 0x884a28
// 005318ae  689c208800           push 0x88209c
// 005318b3  6a00                 push 0
// 005318b5  50                   push eax
// 005318b6  e87bf40f00           call 0x630d36
// 005318bb  83c414               add esp, 0x14
// 005318be  85c0                 test eax, eax
// 005318c0  751e                 jne 0x5318e0
// 005318c2  68046e7800           push 0x786e04
// 005318c7  8d4c2404             lea ecx, [esp + 4]
// 005318cb  ff1510e77700         call dword ptr [0x77e710]
// 005318d1  680c1e8400           push 0x841e0c
// 005318d6  8d4c2404             lea ecx, [esp + 4]
// 005318da  51                   push ecx
// 005318db  e8bef20f00           call 0x630b9e
// 005318e0  83c40c               add esp, 0xc
// 005318e3  c3                   ret 

struct RBX_DescribedBase {
    void* vtable;
};

struct RBX_PartInstance {
    void* vtable;
};

struct RBX_VModelInstance_FactoryProduct {
    void* vtable;
};

extern "C" int __cdecl sub_630D36(void* a, void* b, void* c, void* d, void* e);
extern "C" void __cdecl sub_630B9E(void* a, void* b);
extern "C" void* __stdcall sub_77E710(void* a);

struct bad_cast_std {
    bad_cast_std(const char*);
};

extern "C" void __stdcall bad_cast_ctor(bad_cast_std* self, const char* msg);

void RBX_VModelInstance_FactoryProduct_ctor(RBX_VModelInstance_FactoryProduct* self, void* arg)
{
    int result = sub_630D36(arg, (void*)0x88209C, (void*)0x884A28, (void*)0, (void*)0);
    if (result == 0) {
        char buf[4];
        sub_77E710((void*)0x786E04);
        sub_630B9E(buf, (void*)0x841E0C);
    }
}
