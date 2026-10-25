// from server: 100% by atomic.potato
// roc 2008-06 005ca400  unit: RBX::Stats::Item  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ca400
//
// 005ca400  80790400             cmp byte ptr [ecx + 4], 0
// 005ca404  7403                 je 0x5ca409
// 005ca406  d9e8                 fld1 
// 005ca408  c3                   ret 
// 005ca409  80790500             cmp byte ptr [ecx + 5], 0
// 005ca40d  7407                 je 0x5ca416
// 005ca40f  d905b8c38100         fld dword ptr [0x81c3b8]
// 005ca415  c3                   ret 
// 005ca416  d9ee                 fldz 
// 005ca418  c3                   ret 

float g_value;

struct Item
{
    float get() const;
};

float Item::get() const
{
    if (*((unsigned char*)this + 4) != 0)
        return 1.0f;
    if (*((unsigned char*)this + 5) != 0)
        return g_value;
    return 0.0f;
}
