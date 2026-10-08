// from server: 91% by colin
// roc 2007-08 0070c9d0  unit: CXTColorBase  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0070c9d0
//
// 0070c9d0  56                   push esi
// 0070c9d1  8bf1                 mov esi, ecx
// 0070c9d3  837e60ff             cmp dword ptr [esi + 0x60], -1
// 0070c9d7  742a                 je 0x70ca03
// 0070c9d9  8b442408             mov eax, dword ptr [esp + 8]
// 0070c9dd  8d4e68               lea ecx, [esi + 0x68]
// 0070c9e0  51                   push ecx
// 0070c9e1  8d5670               lea edx, [esi + 0x70]
// 0070c9e4  52                   push edx
// 0070c9e5  8d4e78               lea ecx, [esi + 0x78]
// 0070c9e8  51                   push ecx
// 0070c9e9  50                   push eax
// 0070c9ea  894660               mov dword ptr [esi + 0x60], eax
// 0070c9ed  e85efcffff           call 0x70c650
// 0070c9f2  8b5620               mov edx, dword ptr [esi + 0x20]
// 0070c9f5  83c410               add esp, 0x10
// 0070c9f8  6a01                 push 1
// 0070c9fa  6a00                 push 0
// 0070c9fc  52                   push edx
// 0070c9fd  ff15dcec7700         call dword ptr [0x77ecdc]
// 0070ca03  5e                   pop esi
// 0070ca04  c20800               ret 8

struct CXTColorBase {
    char pad[0x20];
    void* hwnd;
    char pad2[0x3c];
    int field60;
    int field64;
    int field68;
    int field70;
    int field78;
    void SetColor(int a, int b);
};

extern "C" int __stdcall InvalidateRect(void*, const void*, int);
extern "C" void __cdecl sub_70c650(int, int*, int*, int*);

void CXTColorBase::SetColor(int a, int b)
{
    if (field60 != -1)
    {
        field60 = a;
        sub_70c650(a, &field78, &field70, &field68);
        InvalidateRect(hwnd, 0, 1);
    }
}
