// from server: 63% by colin
// roc 2007-08 006e0a90  unit: CXTPDockingPaneAutoHidePanel  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e0a90
//
// 006e0a90  56                   push esi
// 006e0a91  8bf1                 mov esi, ecx
// 006e0a93  83be9401000000       cmp dword ptr [esi + 0x194], 0
// 006e0a9a  7428                 je 0x6e0ac4
// 006e0a9c  8b8ea0010000         mov ecx, dword ptr [esi + 0x1a0]
// 006e0aa2  85c9                 test ecx, ecx
// 006e0aa4  741e                 je 0x6e0ac4
// 006e0aa6  e835ebfaff           call 0x68f5e0
// 006e0aab  a808                 test al, 8
// 006e0aad  7515                 jne 0x6e0ac4
// 006e0aaf  8d4e54               lea ecx, [esi + 0x54]
// 006e0ab2  e899faffff           call 0x6e0550
// 006e0ab7  83782c00             cmp dword ptr [eax + 0x2c], 0
// 006e0abb  7407                 je 0x6e0ac4
// 006e0abd  b801000000           mov eax, 1
// 006e0ac2  5e                   pop esi
// 006e0ac3  c3                   ret 
// 006e0ac4  33c0                 xor eax, eax
// 006e0ac6  5e                   pop esi
// 006e0ac7  c3                   ret 

struct CXTPDockingPaneAutoHidePanel {
    char pad0[0x54];
    char field_54[0x140];
    int field_194;
    char pad198[8];
    void* field_1a0;
    int method_6e0a90();
};

extern "C" int __fastcall sub_68f5e0(void*);
extern "C" void* __fastcall sub_6e0550(void*);

int CXTPDockingPaneAutoHidePanel::method_6e0a90()
{
    if (field_194 != 0)
        return 0;
    if (field_1a0 == 0)
        return 0;
    if ((sub_68f5e0(field_1a0) & 8) != 0)
        return 0;
    void* p = sub_6e0550(field_54);
    if (*(int*)((char*)p + 0x2c) == 0)
        return 0;
    return 1;
}
