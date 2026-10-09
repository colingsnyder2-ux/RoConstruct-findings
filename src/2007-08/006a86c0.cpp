// from server: 67% by colin
// roc 2007-08 006a86c0  unit: CXTPRibbonBarControlQuickAccessPopup  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a86c0
//
// 006a86c0  56                   push esi
// 006a86c1  57                   push edi
// 006a86c2  8bf1                 mov esi, ecx
// 006a86c4  e8071cfdff           call 0x67a2d0
// 006a86c9  b803000000           mov eax, 3
// 006a86ce  8986ec010000         mov dword ptr [esi + 0x1ec], eax
// 006a86d4  8bc8                 mov ecx, eax
// 006a86d6  8bd0                 mov edx, eax
// 006a86d8  8bf8                 mov edi, eax
// 006a86da  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006a86de  898ef0010000         mov dword ptr [esi + 0x1f0], ecx
// 006a86e4  8996f4010000         mov dword ptr [esi + 0x1f4], edx
// 006a86ea  89bef8010000         mov dword ptr [esi + 0x1f8], edi
// 006a86f0  898648020000         mov dword ptr [esi + 0x248], eax
// 006a86f6  5f                   pop edi
// 006a86f7  c706644f7d00         mov dword ptr [esi], 0x7d4f64
// 006a86fd  c74654544f7d00       mov dword ptr [esi + 0x54], 0x7d4f54
// 006a8704  c7465cf44e7d00       mov dword ptr [esi + 0x5c], 0x7d4ef4
// 006a870b  8bc6                 mov eax, esi
// 006a870d  5e                   pop esi
// 006a870e  c20400               ret 4

struct CXTPRibbonBarControlQuickAccessPopup {
    void construct(int);
};

void CXTPRibbonBarControlQuickAccessPopup::construct(int arg)
{
    void (*base)(void*) = (void (*)(void*))0x67a2d0;
    base(this);
    *(int*)((char*)this + 0x1ec) = 3;
    *(int*)((char*)this + 0x1f0) = 3;
    *(int*)((char*)this + 0x1f4) = 3;
    *(int*)((char*)this + 0x1f8) = 3;
    *(int*)((char*)this + 0x248) = arg;
    *(int*)((char*)this + 0x00) = 0x7d4f64;
    *(int*)((char*)this + 0x54) = 0x7d4f54;
    *(int*)((char*)this + 0x5c) = 0x7d4ef4;
}
