// from server: 100% by colin
// roc 2007-08 00597870  unit: RBX::Stats::N::?$TypedStatsItem  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00597870
//
// 00597870  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00597873  85c0                 test eax, eax
// 00597875  7407                 je 0x59787e
// 00597877  8b80e8000000         mov eax, dword ptr [eax + 0xe8]
// 0059787d  c3                   ret 
// 0059787e  33c0                 xor eax, eax
// 00597880  c3                   ret 

struct Inner {
    char pad[0xe8];
    void* m_value;
};

struct S {
    char pad[0xc];
    Inner* m_inner;

    void* getValue();
};

void* S::getValue() {
    Inner* p = m_inner;
    if (p) {
        return p->m_value;
    }
    return 0;
}
