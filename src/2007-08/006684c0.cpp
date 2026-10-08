// from server: 62% by colin
// roc 2007-08 006684c0  unit: CXTTreeBase::PAXPAXUCLRFONT::?$CMap  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006684c0
//
// 006684c0  8bd1                 mov edx, ecx
// 006684c2  8d4a04               lea ecx, [edx + 4]
// 006684c5  c70284a67c00         mov dword ptr [edx], 0x7ca684
// 006684cb  e8d0ffffff           call 0x6684a0
// 006684d0  8d4a10               lea ecx, [edx + 0x10]
// 006684d3  e8c8ffffff           call 0x6684a0
// 006684d8  d9059c7e7900         fld dword ptr [0x797e9c]
// 006684de  d95a1c               fstp dword ptr [edx + 0x1c]
// 006684e1  8bc2                 mov eax, edx
// 006684e3  c3                   ret 

struct CXTTreeBase
{
    void sub_6684a0();
    CXTTreeBase* sub_6684c0();
};

CXTTreeBase* CXTTreeBase::sub_6684c0()
{
    CXTTreeBase* p = this;
    *(int*)p = 0x7ca684;
    ((CXTTreeBase*)((char*)p + 4))->sub_6684a0();
    ((CXTTreeBase*)((char*)p + 0x10))->sub_6684a0();
    *(float*)((char*)p + 0x1c) = *(float*)0x797e9c;
    return p;
}
