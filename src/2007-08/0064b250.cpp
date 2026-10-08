// from server: 92% by colin
// roc 2007-08 0064b250  unit: CXTPImageManagerIcon  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0064b250
//
// 0064b250  56                   push esi
// 0064b251  8bf1                 mov esi, ecx
// 0064b253  e8e8d3ffff           call 0x648640
// 0064b258  8b442408             mov eax, dword ptr [esp + 8]
// 0064b25c  50                   push eax
// 0064b25d  e8aee7ffff           call 0x649a10
// 0064b262  83c404               add esp, 4
// 0064b265  894604               mov dword ptr [esi + 4], eax
// 0064b268  c7460c01000000       mov dword ptr [esi + 0xc], 1
// 0064b26f  5e                   pop esi
// 0064b270  c20400               ret 4

struct CXTPImageManagerIcon {
    char pad0[4];
    int m_nWidth;
    char pad1[4];
    int m_bLoaded;
    void sub_648640();
    int sub_649a10(int);
    void Init(int);
};

void CXTPImageManagerIcon::Init(int nWidth)
{
    sub_648640();
    m_nWidth = sub_649a10(nWidth);
    m_bLoaded = 1;
}
