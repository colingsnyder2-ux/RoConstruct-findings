// from server: 86% by colin
// roc 2007-08 005999d0  unit: RBX::VCamera::?$FactoryProduct  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005999d0
//
// 005999d0  b801000000           mov eax, 1
// 005999d5  398190010000         cmp dword ptr [ecx + 0x190], eax
// 005999db  7418                 je 0x5999f5
// 005999dd  898190010000         mov dword ptr [ecx + 0x190], eax
// 005999e3  e898faffff           call 0x599480
// 005999e8  85c0                 test eax, eax
// 005999ea  7409                 je 0x5999f5
// 005999ec  8b10                 mov edx, dword ptr [eax]
// 005999ee  8bc8                 mov ecx, eax
// 005999f0  8b420c               mov eax, dword ptr [edx + 0xc]
// 005999f3  ffe0                 jmp eax
// 005999f5  c3                   ret 

struct VCamera {
    char pad[0x190];
    int field_0x190;
    void* getSomething();
    void doSomething();
};

void VCamera::doSomething()
{
    int one = 1;
    if (field_0x190 == one)
        return;
    field_0x190 = one;
    void* p = getSomething();
    if (p == 0)
        return;
    void** vtbl = *(void***)p;
    void (*fn)(void*) = (void (*)(void*))vtbl[3];
    fn(p);
}
