// from server: 100% by tester
// roc 2008-06 005a05a0  unit: RBX::Workspace  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a05a0
//
// 005a05a0  8b8174010000         mov eax, dword ptr [ecx + 0x174]
// 005a05a6  85c0                 test eax, eax
// 005a05a8  7506                 jne 0x5a05b0
// 005a05aa  8b817c010000         mov eax, dword ptr [ecx + 0x17c]
// 005a05b0  c3                   ret 

struct RBX_Workspace {
    char pad[0x174];
    int field_110;
    char pad2[0x4];
    int field_118;
    int get();
};

int RBX_Workspace::get() {
    int v = field_110;
    if (v == 0)
        v = field_118;
    return v;
}
