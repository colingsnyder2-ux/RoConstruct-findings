// from server: 100% by atomic.potato
// roc 2008-06 005ca3c0  unit: RBX::Stats::Item  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ca3c0
//
// 005ca3c0  80790600             cmp byte ptr [ecx + 6], 0
// 005ca3c4  7403                 je 0x5ca3c9
// 005ca3c6  d9e8                 fld1 
// 005ca3c8  c3                   ret 
// 005ca3c9  80790700             cmp byte ptr [ecx + 7], 0
// 005ca3cd  7407                 je 0x5ca3d6
// 005ca3cf  d905b8c38100         fld dword ptr [0x81c3b8]
// 005ca3d5  c3                   ret 
// 005ca3d6  d9ee                 fldz 
// 005ca3d8  c3                   ret 

float g_0081c3b8;

struct S
{
    float f();
};

float S::f()
{
    if (*((unsigned char*)this + 6))
        return 1.0f;
    if (*((unsigned char*)this + 7))
        return g_0081c3b8;
    return 0.0f;
}
