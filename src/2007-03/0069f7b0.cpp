// roc 2007-03 0069f7b0  unit: seg_00690000  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0069f7b0
//
// 0069f7b0  8b8158010000         mov eax, dword ptr [ecx + 0x158]
// 0069f7b6  85c0                 test eax, eax
// 0069f7b8  7501                 jne 0x69f7bb
// 0069f7ba  c3                   ret 
// 0069f7bb  8b4020               mov eax, dword ptr [eax + 0x20]
// 0069f7be  c3                   ret 
// copied from an identical function in another client (function ?GetValue@CXTPControlGallery@ns_ROCX000032@@QAEHXZ)

namespace ns_ROCX000032 {
struct CXTPControlGallery {
    char pad[0x158];
    void* m_pSomething;
    int GetValue();
};

int CXTPControlGallery::GetValue()
{
    void* p = m_pSomething;
    if (p == 0)
        return 0;
    return *(int*)((char*)p + 0x20);
}
}
