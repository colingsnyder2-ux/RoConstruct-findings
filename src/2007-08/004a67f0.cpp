// from server: 100% by colin
// roc 2007-08 004a67f0  unit: RBX::Network::Replicator  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a67f0
//
// 004a67f0  8b818c1d0000         mov eax, dword ptr [ecx + 0x1d8c]
// 004a67f6  85c0                 test eax, eax
// 004a67f8  7407                 je 0x4a6801
// 004a67fa  8b8038010000         mov eax, dword ptr [eax + 0x138]
// 004a6800  c3                   ret 
// 004a6801  33c0                 xor eax, eax
// 004a6803  c3                   ret 

struct P_func_004a67f0 {
    char pad[0x138];
    int value;
};

struct S_func_004a67f0 {
    char pad[0x1d8c];
    P_func_004a67f0* m_p;
    int f();
};

int S_func_004a67f0::f()
{
    if (m_p)
        return m_p->value;
    return 0;
}
