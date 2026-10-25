// from server: 52% by atomic.potato
// roc 2011-06 0063db70  unit: RBX::ArrowToolBase  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0063db70
//
// 0063db70  80790800             cmp byte ptr [ecx + 8], 0
// 0063db74  7509                 jne 0x63db7f
// 0063db76  80790900             cmp byte ptr [ecx + 9], 0
// 0063db7a  7503                 jne 0x63db7f
// 0063db7c  33c0                 xor eax, eax
// 0063db7e  c3                   ret 
// 0063db7f  b801000000           mov eax, 1
// 0063db84  c3                   ret 

struct RBX_ArrowToolBase {
    char pad[8];
    bool field8;
    bool field9;
    bool check();
};

bool RBX_ArrowToolBase::check() {
    if (field8) return true;
    if (field9) return true;
    return false;
}
