// from server: 83% by colin
// roc 2007-08 006b30b0  unit: CXTPResourceManager  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006b30b0
//
// 006b30b0  56                   push esi
// 006b30b1  8bf1                 mov esi, ecx
// 006b30b3  e858fbffff           call 0x6b2c10
// 006b30b8  50                   push eax
// 006b30b9  e8b2ffffff           call 0x6b3070
// 006b30be  0fb7c0               movzx eax, ax
// 006b30c1  83c404               add esp, 4
// 006b30c4  6685c0               test ax, ax
// 006b30c7  0fb7c0               movzx eax, ax
// 006b30ca  7505                 jne 0x6b30d1
// 006b30cc  b809040000           mov eax, 0x409
// 006b30d1  6689460c             mov word ptr [esi + 0xc], ax
// 006b30d5  5e                   pop esi
// 006b30d6  c3                   ret 

struct CXTPResourceManager {
    char pad0[12];
    unsigned short m_field_c;
    unsigned short GetResourceHandle();
    unsigned short LoadResource(unsigned short);
};

unsigned short CXTPResourceManager::GetResourceHandle()
{
    unsigned short h = LoadResource(GetResourceHandle());
    if (h == 0)
        h = 0x409;
    m_field_c = h;
    return h;
}
