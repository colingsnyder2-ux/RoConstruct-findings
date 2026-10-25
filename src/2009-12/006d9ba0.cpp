// from server: 100% by colin
// roc 2009-12 006d9ba0  unit: RBX::Stats::Item  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006d9ba0
//
// 006d9ba0  80790600             cmp byte ptr [ecx + 6], 0
// 006d9ba4  7406                 je 0x6d9bac
// 006d9ba6  b801000000           mov eax, 1
// 006d9bab  c3                   ret 
// 006d9bac  0fb64107             movzx eax, byte ptr [ecx + 7]
// 006d9bb0  f7d8                 neg eax
// 006d9bb2  1bc0                 sbb eax, eax
// 006d9bb4  c3                   ret 

// from server: 95% by atomic.potato
struct S
{
    unsigned char pad[8];
    int f();
};

int S::f()
{
    if (pad[6])
        return 1;
    return pad[7] != 0 ? -1 : 0;
}