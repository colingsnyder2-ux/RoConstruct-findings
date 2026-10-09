// from server: 70% by colin
// roc 2007-08 00597160  unit: RBX::Stats::VItem::?$BoundFuncDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00597160
//
// 00597160  8b442404             mov eax, dword ptr [esp + 4]
// 00597164  83ec0c               sub esp, 0xc
// 00597167  56                   push esi
// 00597168  6a00                 push 0
// 0059716a  68d49a8800           push 0x889ad4
// 0059716f  689c208800           push 0x88209c
// 00597174  6a00                 push 0
// 00597176  50                   push eax
// 00597177  8bf1                 mov esi, ecx
// 00597179  e8b89b0900           call 0x630d36
// 0059717e  83c414               add esp, 0x14
// 00597181  85c0                 test eax, eax
// 00597183  751e                 jne 0x5971a3
// 00597185  68046e7800           push 0x786e04
// 0059718a  8d4c2408             lea ecx, [esp + 8]
// 0059718e  ff1510e77700         call dword ptr [0x77e710]
// 00597194  680c1e8400           push 0x841e0c
// 00597199  8d4c2408             lea ecx, [esp + 8]
// 0059719d  51                   push ecx
// 0059719e  e8fb990900           call 0x630b9e
// 005971a3  8b542418             mov edx, dword ptr [esp + 0x18]
// 005971a7  83c204               add edx, 4
// 005971aa  52                   push edx
// 005971ab  50                   push eax
// 005971ac  8bce                 mov ecx, esi
// 005971ae  e84dffffff           call 0x597100
// 005971b3  5e                   pop esi
// 005971b4  83c40c               add esp, 0xc
// 005971b7  c20800               ret 8

struct DescribedBase {
    void* vtable;
};

struct Item {
    void* vtable;
};

struct BoundFuncDesc {
    void construct(void* function, const char* name, int security, int attributes);
};

extern "C" int __cdecl sub_630D36(void* a, void* b, void* c, void* d, void* e);
extern "C" void __cdecl sub_630B9E(void* a, void* b);
extern "C" void __stdcall sub_77E710(void* a);
extern "C" void __cdecl sub_597100(void* self, void* a, void* b);

void BoundFuncDesc::construct(void* function, const char* name, int security, int attributes)
{
    void* result = (void*)sub_630D36(function, (void*)0x88209C, (void*)0x889AD4, (void*)0, (void*)0);
    if (result == 0) {
        char buf[4];
        sub_77E710((void*)0x786E04);
        sub_630B9E((void*)0x841E0C, buf);
    }
    sub_597100(this, result, (char*)name + 4);
}
