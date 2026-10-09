// from server: 100% by colin
// roc 2007-08 0070a1c0  unit: CXTColorHex::PAUHEXCOLOR_CELL::?$CList  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0070a1c0
//
// 0070a1c0  53                   push ebx
// 0070a1c1  55                   push ebp
// 0070a1c2  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0070a1c6  56                   push esi
// 0070a1c7  8bd9                 mov ebx, ecx
// 0070a1c9  8bb380000000         mov esi, dword ptr [ebx + 0x80]
// 0070a1cf  57                   push edi
// 0070a1d0  83cfff               or edi, 0xffffffff
// 0070a1d3  85f6                 test esi, esi
// 0070a1d5  896b78               mov dword ptr [ebx + 0x78], ebp
// 0070a1d8  7423                 je 0x70a1fd
// 0070a1da  8d9b00000000         lea ebx, [ebx]
// 0070a1e0  8b4608               mov eax, dword ptr [esi + 8]
// 0070a1e3  85c0                 test eax, eax
// 0070a1e5  740d                 je 0x70a1f4
// 0070a1e7  3b6818               cmp ebp, dword ptr [eax + 0x18]
// 0070a1ea  7508                 jne 0x70a1f4
// 0070a1ec  57                   push edi
// 0070a1ed  8bcb                 mov ecx, ebx
// 0070a1ef  e88cffffff           call 0x70a180
// 0070a1f4  8b36                 mov esi, dword ptr [esi]
// 0070a1f6  83c701               add edi, 1
// 0070a1f9  85f6                 test esi, esi
// 0070a1fb  75e3                 jne 0x70a1e0
// 0070a1fd  5f                   pop edi
// 0070a1fe  5e                   pop esi
// 0070a1ff  5d                   pop ebp
// 0070a200  5b                   pop ebx
// 0070a201  c20400               ret 4

struct CXTColorHex_PAUHEXCOLOR_CELL_CList
{
    void f(int);
    void sub_70A180(int);
    char pad[0x78];
    int field_78;
    char pad2[4];
    void* field_80;
};

void CXTColorHex_PAUHEXCOLOR_CELL_CList::f(int arg)
{
    void* node = field_80;
    int idx = -1;
    field_78 = arg;
    while (node != 0)
    {
        void* data = *(void**)((char*)node + 8);
        if (data != 0 && arg == *(int*)((char*)data + 0x18))
        {
            sub_70A180(idx);
        }
        node = *(void**)node;
        idx++;
    }
}
