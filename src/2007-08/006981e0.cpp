// from server: 82% by colin
// roc 2007-08 006981e0  unit: CXTPPropertyGridItemConstraint  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006981e0
//
// 006981e0  8b4130               mov eax, dword ptr [ecx + 0x30]
// 006981e3  85c0                 test eax, eax
// 006981e5  7503                 jne 0x6981ea
// 006981e7  33c0                 xor eax, eax
// 006981e9  c3                   ret 
// 006981ea  8b4928               mov ecx, dword ptr [ecx + 0x28]
// 006981ed  83f9ff               cmp ecx, -1
// 006981f0  74f5                 je 0x6981e7
// 006981f2  8b80b4000000         mov eax, dword ptr [eax + 0xb4]
// 006981f8  6a00                 push 0
// 006981fa  51                   push ecx
// 006981fb  8bc8                 mov ecx, eax
// 006981fd  e83e290000           call 0x69ab40
// 00698202  8bc8                 mov ecx, eax
// 00698204  e8a757fbff           call 0x64d9b0
// 00698209  c3                   ret 

struct CXTPPropertyGridItemConstraint {
    int GetValue();
};

struct CXTPPropertyGridItem {
    char pad[0x28];
    int m_nConstraint;
    char pad2[0x4];
    CXTPPropertyGridItemConstraint* m_pConstraint;
};

extern "C" int __stdcall sub_69AB40(int, int);
extern "C" int __stdcall sub_64D9B0(int);

int CXTPPropertyGridItemConstraint::GetValue()
{
    CXTPPropertyGridItem* pItem = *(CXTPPropertyGridItem**)((char*)this + 0x30);
    if (pItem == 0)
        return 0;
    int nConstraint = *(int*)((char*)pItem + 0x28);
    if (nConstraint == -1)
        return 0;
    int v = sub_69AB40(*(int*)((char*)pItem + 0xb4), nConstraint);
    return sub_64D9B0(v);
}
