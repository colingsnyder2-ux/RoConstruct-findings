// roc 2009-12 00827f50  unit: CXTPReportColumn  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00827f50
//
// 00827f50  83796800             cmp dword ptr [ecx + 0x68], 0
// 00827f54  56                   push esi
// 00827f55  7518                 jne 0x827f6f
// 00827f57  83b9a800000000       cmp dword ptr [ecx + 0xa8], 0
// 00827f5e  750f                 jne 0x827f6f
// 00827f60  8bb1a4000000         mov esi, dword ptr [ecx + 0xa4]
// 00827f66  e8b5ffffff           call 0x827f20
// 00827f6b  03c6                 add eax, esi
// 00827f6d  5e                   pop esi
// 00827f6e  c3                   ret 
// 00827f6f  8bb18c000000         mov esi, dword ptr [ecx + 0x8c]
// 00827f75  e8a6ffffff           call 0x827f20
// 00827f7a  03c6                 add eax, esi
// 00827f7c  5e                   pop esi
// 00827f7d  c3                   ret 
// copied from an identical function in another client (function ?GetWidth@CXTPReportColumn@@QAEHXZ)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// from server: 100% by tester
struct CXTPReportColumn {
    int GetWidth();
};

int CXTPReportColumn::GetWidth()
{
    if (*(int*)((char*)this + 0x68) == 0 && *(int*)((char*)this + 0xa8) == 0)
    {
        int n = *(int*)((char*)this + 0xa4);
        return n + this->GetWidth();
    }
    else
    {
        int n = *(int*)((char*)this + 0x8c);
        return n + this->GetWidth();
    }
}