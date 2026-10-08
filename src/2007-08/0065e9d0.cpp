// from server: 100% by colin
// roc 2007-08 0065e9d0  unit: CXTPReportColumn  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0065e9d0
//
// 0065e9d0  83796400             cmp dword ptr [ecx + 0x64], 0
// 0065e9d4  56                   push esi
// 0065e9d5  7518                 jne 0x65e9ef
// 0065e9d7  83b9a400000000       cmp dword ptr [ecx + 0xa4], 0
// 0065e9de  750f                 jne 0x65e9ef
// 0065e9e0  8bb1a0000000         mov esi, dword ptr [ecx + 0xa0]
// 0065e9e6  e8b5ffffff           call 0x65e9a0
// 0065e9eb  03c6                 add eax, esi
// 0065e9ed  5e                   pop esi
// 0065e9ee  c3                   ret 
// 0065e9ef  8bb188000000         mov esi, dword ptr [ecx + 0x88]
// 0065e9f5  e8a6ffffff           call 0x65e9a0
// 0065e9fa  03c6                 add eax, esi
// 0065e9fc  5e                   pop esi
// 0065e9fd  c3                   ret 

struct CXTPReportColumn {
    int GetWidth();
};

int CXTPReportColumn::GetWidth()
{
    if (*(int*)((char*)this + 0x64) == 0 && *(int*)((char*)this + 0xa4) == 0)
    {
        int n = *(int*)((char*)this + 0xa0);
        return n + this->GetWidth();
    }
    else
    {
        int n = *(int*)((char*)this + 0x88);
        return n + this->GetWidth();
    }
}
