// roc 2010-06 00601520  unit: RBX::ArrowTool  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00601520
//
// 00601520  80790400             cmp byte ptr [ecx + 4], 0
// 00601524  7515                 jne 0x60153b
// 00601526  80790500             cmp byte ptr [ecx + 5], 0
// 0060152a  750f                 jne 0x60153b
// 0060152c  80790600             cmp byte ptr [ecx + 6], 0
// 00601530  7509                 jne 0x60153b
// 00601532  80790700             cmp byte ptr [ecx + 7], 0
// 00601536  7503                 jne 0x60153b
// 00601538  33c0                 xor eax, eax
// 0060153a  c3                   ret 
// 0060153b  b801000000           mov eax, 1
// 00601540  c3                   ret 
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