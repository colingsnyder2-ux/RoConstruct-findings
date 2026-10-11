// from server: 68% by colin
// roc 2008-06 00681a00  unit: Ogre::RbxSceneNode  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00681a00
//
// 00681a00  83ec08               sub esp, 8
// 00681a03  56                   push esi
// 00681a04  57                   push edi
// 00681a05  8db128020000         lea esi, [ecx + 0x228]
// 00681a0b  8d442414             lea eax, [esp + 0x14]
// 00681a0f  50                   push eax
// 00681a10  8d4c240c             lea ecx, [esp + 0xc]
// 00681a14  51                   push ecx
// 00681a15  8bce                 mov ecx, esi
// 00681a17  e8e4fbdcff           call 0x451600
// 00681a1c  8b442408             mov eax, dword ptr [esp + 8]
// 00681a20  8b7e18               mov edi, dword ptr [esi + 0x18]
// 00681a23  8b36                 mov esi, dword ptr [esi]
// 00681a25  85c0                 test eax, eax
// 00681a27  7404                 je 0x681a2d
// 00681a29  3bc6                 cmp eax, esi
// 00681a2b  7406                 je 0x681a33
// 00681a2d  ff1590288000         call dword ptr [0x802890]
// 00681a33  33c0                 xor eax, eax
// 00681a35  397c240c             cmp dword ptr [esp + 0xc], edi
// 00681a39  5f                   pop edi
// 00681a3a  0f95c0               setne al
// 00681a3d  5e                   pop esi
// 00681a3e  83c408               add esp, 8
// 00681a41  c20400               ret 4

struct RbxSceneNode {
    char pad[0x228];
    struct Container {
        int* first;
        int* last;
        int* end;
        char pad2[0x18 - 0x0c];
        int* something;
    };
    Container container;

    bool func(int* arg);
};

extern "C" void __stdcall _invalid_parameter_noinfo();

extern "C" void __stdcall sub_451600(void* out1, void* out2);

bool RbxSceneNode::func(int* arg) {
    int* local1;
    int* local2;
    sub_451600(&local1, &local2);
    int* p = container.something;
    int* q = container.first;
    if (local1 != 0 && local1 == q) {
    } else {
        _invalid_parameter_noinfo();
    }
    return local2 != p;
}
