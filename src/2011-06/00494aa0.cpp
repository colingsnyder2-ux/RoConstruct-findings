// roc 2011-06 00494aa0  unit: CTaskSchedulerPaneView  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00494aa0
//
// 00494aa0  80790400             cmp byte ptr [ecx + 4], 0
// 00494aa4  7515                 jne 0x494abb
// 00494aa6  80790500             cmp byte ptr [ecx + 5], 0
// 00494aaa  750f                 jne 0x494abb
// 00494aac  80790600             cmp byte ptr [ecx + 6], 0
// 00494ab0  7509                 jne 0x494abb
// 00494ab2  80790700             cmp byte ptr [ecx + 7], 0
// 00494ab6  7503                 jne 0x494abb
// 00494ab8  33c0                 xor eax, eax
// 00494aba  c3                   ret 
// 00494abb  b801000000           mov eax, 1
// 00494ac0  c3                   ret 
// copied from an identical function in another client (function ?f@ArrowTool@ns_ROCX000011@@QAEHXZ)

namespace ns_ROCX000011 {
// from server: 100% by atomic.potato
struct ArrowTool
{
    int f();
};

int ArrowTool::f()
{
    if (reinterpret_cast<unsigned char *>(this)[4] ||
        reinterpret_cast<unsigned char *>(this)[5] ||
        reinterpret_cast<unsigned char *>(this)[6] ||
        reinterpret_cast<unsigned char *>(this)[7])
        return 1;
    return 0;
}
}