// from server: 100% by atomic.potato
// roc 2008-06 005ca370  unit: RBX::Stats::Item  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ca370
//
// 005ca370  8b410c               mov eax, dword ptr [ecx + 0xc]
// 005ca373  85c0                 test eax, eax
// 005ca375  7407                 je 0x5ca37e
// 005ca377  8b8030010000         mov eax, dword ptr [eax + 0x130]
// 005ca37d  c3                   ret 
// 005ca37e  33c0                 xor eax, eax
// 005ca380  c3                   ret 

struct Item
{
    int get() const;
    int pad0[3];
    int value;
};

int Item::get() const
{
    if (*(int*)((char*)this + 0xc) != 0)
        return *(int*)((char*)*(int*)((char*)this + 0xc) + 0x130);
    return 0;
}
