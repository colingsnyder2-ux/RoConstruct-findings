// from server: 100% by colin
// roc 2007-08 006b3580  unit: CXTPControlGallery  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006b3580
//
// 006b3580  8b8158010000         mov eax, dword ptr [ecx + 0x158]
// 006b3586  85c0                 test eax, eax
// 006b3588  7501                 jne 0x6b358b
// 006b358a  c3                   ret 
// 006b358b  8b4020               mov eax, dword ptr [eax + 0x20]
// 006b358e  c3                   ret 

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
