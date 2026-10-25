// from server: 100% by atomic.potato
// roc 2011-06 0063db50  unit: RBX::ArrowToolBase  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0063db50
//
// 0063db50  803900               cmp byte ptr [ecx], 0
// 0063db53  7515                 jne 0x63db6a
// 0063db55  80790100             cmp byte ptr [ecx + 1], 0
// 0063db59  750f                 jne 0x63db6a
// 0063db5b  80790200             cmp byte ptr [ecx + 2], 0
// 0063db5f  7509                 jne 0x63db6a
// 0063db61  80790300             cmp byte ptr [ecx + 3], 0
// 0063db65  7503                 jne 0x63db6a
// 0063db67  33c0                 xor eax, eax
// 0063db69  c3                   ret 
// 0063db6a  b801000000           mov eax, 1
// 0063db6f  c3                   ret 

struct ArrowToolBase {
    char f0;
    char f1;
    char f2;
    char f3;
    int isIdle() const;
};

int ArrowToolBase::isIdle() const {
    if (f0 || f1 || f2 || f3)
        return 1;
    return 0;
}
