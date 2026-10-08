// from server: 93% by colin
// roc 2007-08 007111b0  unit: CXTColorSelectorCtrl  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007111b0
//
// 007111b0  56                   push esi
// 007111b1  8bf1                 mov esi, ecx
// 007111b3  e818feffff           call 0x710fd0
// 007111b8  84c0                 test al, al
// 007111ba  7517                 jne 0x7111d3
// 007111bc  83c8ff               or eax, 0xffffffff
// 007111bf  6a00                 push 0
// 007111c1  894678               mov dword ptr [esi + 0x78], eax
// 007111c4  89467c               mov dword ptr [esi + 0x7c], eax
// 007111c7  8b4620               mov eax, dword ptr [esi + 0x20]
// 007111ca  6a00                 push 0
// 007111cc  50                   push eax
// 007111cd  ff15dcec7700         call dword ptr [0x77ecdc]
// 007111d3  5e                   pop esi
// 007111d4  c3                   ret 

struct CXTColorSelectorCtrl {
    char pad[0x20];
    void* field_20;
    char pad2[0x54];
    int field_78;
    int field_7c;
    bool sub_710fd0();
};

extern "C" int __stdcall InvalidateRect(void*, const void*, int);

bool CXTColorSelectorCtrl::sub_710fd0()
{
    if (!sub_710fd0()) {
        int v = -1;
        field_78 = v;
        field_7c = v;
        InvalidateRect(field_20, 0, 0);
    }
    return true;
}
