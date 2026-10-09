// from server: 100% by colin
// roc 2007-08 0049f850  unit: RBX::Network::VServer::?$BoundFuncDesc  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0049f850
//
// 0049f850  56                   push esi
// 0049f851  57                   push edi
// 0049f852  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0049f856  81ff00010000         cmp edi, 0x100
// 0049f85c  8bf1                 mov esi, ecx
// 0049f85e  c70600000000         mov dword ptr [esi], 0
// 0049f864  c7460800000000       mov dword ptr [esi + 8], 0
// 0049f86b  7f18                 jg 0x49f885
// 0049f86d  8d4611               lea eax, [esi + 0x11]
// 0049f870  89460c               mov dword ptr [esi + 0xc], eax
// 0049f873  5f                   pop edi
// 0049f874  c7460400080000       mov dword ptr [esi + 4], 0x800
// 0049f87b  8bc6                 mov eax, esi
// 0049f87d  c6461001             mov byte ptr [esi + 0x10], 1
// 0049f881  5e                   pop esi
// 0049f882  c20400               ret 4
// 0049f885  57                   push edi
// 0049f886  ff15d0e67700         call dword ptr [0x77e6d0]
// 0049f88c  83c404               add esp, 4
// 0049f88f  8d0cfd00000000       lea ecx, [edi*8]
// 0049f896  89460c               mov dword ptr [esi + 0xc], eax
// 0049f899  5f                   pop edi
// 0049f89a  894e04               mov dword ptr [esi + 4], ecx
// 0049f89d  8bc6                 mov eax, esi
// 0049f89f  c6461001             mov byte ptr [esi + 0x10], 1
// 0049f8a3  5e                   pop esi
// 0049f8a4  c20400               ret 4

extern "C" void* (__cdecl *malloc)(unsigned int size);

struct BoundFuncDesc {
    void* field0;
    unsigned int field4;
    void* field8;
    void* fieldC;
    unsigned char field10;
    char field11;
    void* construct(unsigned int size);
};

void* BoundFuncDesc::construct(unsigned int size) {
    field0 = 0;
    field8 = 0;
    if ((int)size <= 0x100) {
        fieldC = (char*)this + 0x11;
        field4 = 0x800;
    } else {
        fieldC = malloc(size);
        field4 = size * 8;
    }
    field10 = 1;
    return this;
}
