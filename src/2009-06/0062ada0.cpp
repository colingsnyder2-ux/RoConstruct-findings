// roc 2009-06 0062ada0  unit: RBX::ArrowTool  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0062ada0
//
// 0062ada0  80790400             cmp byte ptr [ecx + 4], 0
// 0062ada4  7515                 jne 0x62adbb
// 0062ada6  80790500             cmp byte ptr [ecx + 5], 0
// 0062adaa  750f                 jne 0x62adbb
// 0062adac  80790600             cmp byte ptr [ecx + 6], 0
// 0062adb0  7509                 jne 0x62adbb
// 0062adb2  80790700             cmp byte ptr [ecx + 7], 0
// 0062adb6  7503                 jne 0x62adbb
// 0062adb8  33c0                 xor eax, eax
// 0062adba  c3                   ret 
// 0062adbb  b801000000           mov eax, 1
// 0062adc0  c3                   ret 
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
