// from server: 100% by colin
// roc 2007-08 0068f490  unit: CXTPDockingPane  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0068f490
//
// 0068f490  8b4130               mov eax, dword ptr [ecx + 0x30]
// 0068f493  85c0                 test eax, eax
// 0068f495  7501                 jne 0x68f498
// 0068f497  c3                   ret 
// 0068f498  33d2                 xor edx, edx
// 0068f49a  39884c010000         cmp dword ptr [eax + 0x14c], ecx
// 0068f4a0  0f94c2               sete dl
// 0068f4a3  8bc2                 mov eax, edx
// 0068f4a5  c3                   ret 

struct CXTPDockingPane
{
    char pad[0x30];
    struct CXTPDockingPane *m_pPane;
    int IsActivePane();
};

int CXTPDockingPane::IsActivePane()
{
    CXTPDockingPane *p = m_pPane;
    if (p == 0)
        return 0;
    return *(CXTPDockingPane **)((char *)p + 0x14c) == this;
}
