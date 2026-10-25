// from server: 100% by atomic.potato
// roc 2008-06 005ca3e0  unit: RBX::Stats::Item  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ca3e0
//
// 005ca3e0  80790200             cmp byte ptr [ecx + 2], 0
// 005ca3e4  7403                 je 0x5ca3e9
// 005ca3e6  d9e8                 fld1 
// 005ca3e8  c3                   ret 
// 005ca3e9  80790300             cmp byte ptr [ecx + 3], 0
// 005ca3ed  7407                 je 0x5ca3f6
// 005ca3ef  d905b8c38100         fld dword ptr [0x81c3b8]
// 005ca3f5  c3                   ret 
// 005ca3f6  d9ee                 fldz 
// 005ca3f8  c3                   ret 

struct StatsItem
{
    float get() const;
};

float g_value;

float StatsItem::get() const
{
    if (*((const unsigned char*)this + 2) != 0)
        return 1.0f;
    if (*((const unsigned char*)this + 3) != 0)
        return g_value;
    return 0.0f;
}
