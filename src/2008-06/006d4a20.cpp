// from server: 100% by tester
// roc 2008-06 006d4a20  unit: CXTPReportColumn  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d4a20
//
// 006d4a20  83796800             cmp dword ptr [ecx + 0x68], 0
// 006d4a24  56                   push esi
// 006d4a25  7518                 jne 0x6d4a3f
// 006d4a27  83b9a800000000       cmp dword ptr [ecx + 0xa8], 0
// 006d4a2e  750f                 jne 0x6d4a3f
// 006d4a30  8bb1a4000000         mov esi, dword ptr [ecx + 0xa4]
// 006d4a36  e8b5ffffff           call 0x6d49f0
// 006d4a3b  03c6                 add eax, esi
// 006d4a3d  5e                   pop esi
// 006d4a3e  c3                   ret 
// 006d4a3f  8bb18c000000         mov esi, dword ptr [ecx + 0x8c]
// 006d4a45  e8a6ffffff           call 0x6d49f0
// 006d4a4a  03c6                 add eax, esi
// 006d4a4c  5e                   pop esi
// 006d4a4d  c3                   ret 

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
