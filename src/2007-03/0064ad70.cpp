// roc 2007-03 0064ad70  unit: seg_00640000  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0064ad70
//
// 0064ad70  83796400             cmp dword ptr [ecx + 0x64], 0
// 0064ad74  56                   push esi
// 0064ad75  7518                 jne 0x64ad8f
// 0064ad77  83b9a400000000       cmp dword ptr [ecx + 0xa4], 0
// 0064ad7e  750f                 jne 0x64ad8f
// 0064ad80  8bb1a0000000         mov esi, dword ptr [ecx + 0xa0]
// 0064ad86  e8b5ffffff           call 0x64ad40
// 0064ad8b  03c6                 add eax, esi
// 0064ad8d  5e                   pop esi
// 0064ad8e  c3                   ret 
// 0064ad8f  8bb188000000         mov esi, dword ptr [ecx + 0x88]
// 0064ad95  e8a6ffffff           call 0x64ad40
// 0064ad9a  03c6                 add eax, esi
// 0064ad9c  5e                   pop esi
// 0064ad9d  c3                   ret 
// copied from an identical function in another client (function ?GetWidth@CXTPReportColumn@ns_ROCX00000d@@QAEHXZ)

namespace ns_ROCX00000d {
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
}
