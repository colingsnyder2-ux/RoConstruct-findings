// from server: 56% by atomic.potato
// roc 2010-06 008e3280  unit: RBX::RbxTextureProxy  size: 169 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008e3280
//
// 008e3280  64a100000000         mov eax, dword ptr fs:[0]
// 008e3286  6aff                 push -1
// 008e3288  689cf59b00           push 0x9bf59c
// 008e328d  50                   push eax
// 008e328e  64892500000000       mov dword ptr fs:[0], esp
// 008e3295  81ec90000000         sub esp, 0x90
// 008e329b  56                   push esi
// 008e329c  8bf1                 mov esi, ecx
// 008e329e  80bec800000000       cmp byte ptr [esi + 0xc8], 0
// 008e32a5  756c                 jne 0x8e3313
// 008e32a7  8b4e08               mov ecx, dword ptr [esi + 8]
// 008e32aa  ff15c0b69e00         call dword ptr [0x9eb6c0]
// 008e32b0  8d4c2404             lea ecx, [esp + 4]
// 008e32b4  c686c800000001       mov byte ptr [esi + 0xc8], 1
// 008e32bb  ff15bcb69e00         call dword ptr [0x9eb6bc]
// 008e32c1  8b4608               mov eax, dword ptr [esi + 8]
// 008e32c4  50                   push eax
// 008e32c5  8d4c2408             lea ecx, [esp + 8]
// 008e32c9  c78424a000000000000000 mov dword ptr [esp + 0xa0], 0
// 008e32d4  ff15b8b69e00         call dword ptr [0x9eb6b8]
// 008e32da  8b4e04               mov ecx, dword ptr [esi + 4]
// 008e32dd  8b560c               mov edx, dword ptr [esi + 0xc]
// 008e32e0  51                   push ecx
// 008e32e1  6a00                 push 0
// 008e32e3  52                   push edx
// 008e32e4  8d4c2410             lea ecx, [esp + 0x10]
// 008e32e8  ff15b4b69e00         call dword ptr [0x9eb6b4]
// 008e32ee  8d4c2404             lea ecx, [esp + 4]
// 008e32f2  ff15b0b69e00         call dword ptr [0x9eb6b0]
// 008e32f8  8d4c2404             lea ecx, [esp + 4]
// 008e32fc  8986cc000000         mov dword ptr [esi + 0xcc], eax
// 008e3302  c784249c000000ffffffff mov dword ptr [esp + 0x9c], 0xffffffff
// 008e330d  ff15acb69e00         call dword ptr [0x9eb6ac]
// 008e3313  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 008e331a  5e                   pop esi
// 008e331b  64890d00000000       mov dword ptr fs:[0], ecx
// 008e3322  81c49c000000         add esp, 0x9c
// 008e3328  c3                   ret 

struct EdgeListBuilder {
    EdgeListBuilder();
    ~EdgeListBuilder();
    void addVertexData(const void* vd);
    void addIndexData(const void* id, unsigned int offset, int opType);
    void* build();
};

struct VertexData {
    void prepareForShadowVolume();
};

struct RbxTextureProxy {
    char pad0[4];
    int field4;
    void* field8;
    void* fieldC;
    char pad10[0xb8];
    char fieldC8;
    char padC9[3];
    void* fieldCC;

    void func();
};

extern "C" {
    void __stdcall sub_9eb6c0();
    void __stdcall sub_9eb6bc();
    void __stdcall sub_9eb6b8();
    void __stdcall sub_9eb6b4();
    void __stdcall sub_9eb6b0();
    void __stdcall sub_9eb6ac();
}

void RbxTextureProxy::func()
{
    if (fieldC8 == 0)
    {
        sub_9eb6c0();
        EdgeListBuilder elb;
        fieldC8 = 1;
        sub_9eb6bc();
        sub_9eb6b8();
        elb.addVertexData(field8);
        elb.addIndexData(fieldC, 0, field4);
        void* result = elb.build();
        fieldCC = result;
        sub_9eb6ac();
    }
}
