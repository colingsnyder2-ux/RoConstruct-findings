// from server: 92% by colin
// roc 2007-08 006b35b0  unit: CXTPControlGallery  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006b35b0
//
// 006b35b0  56                   push esi
// 006b35b1  8bf1                 mov esi, ecx
// 006b35b3  83be1802000000       cmp dword ptr [esi + 0x218], 0
// 006b35ba  7414                 je 0x6b35d0
// 006b35bc  6812100000           push 0x1012
// 006b35c1  e8da8ef8ff           call 0x63c4a0
// 006b35c6  c7861802000000000000 mov dword ptr [esi + 0x218], 0
// 006b35d0  8bce                 mov ecx, esi
// 006b35d2  5e                   pop esi
// 006b35d3  e9388ff8ff           jmp 0x63c510

struct CXTPControlGallery {
    char pad[0x218];
    void* field_218;
    void Cleanup();
};

extern "C" void __stdcall sub_63C4A0(unsigned int);
extern "C" void __stdcall sub_63C510();

void CXTPControlGallery::Cleanup()
{
    if (field_218 != 0)
    {
        sub_63C4A0(0x1012);
        field_218 = 0;
    }
    sub_63C510();
}
