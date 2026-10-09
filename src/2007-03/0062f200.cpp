// roc 2007-03 0062f200  unit: seg_00620000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0062f200
//
// 0062f200  8b81a0000000         mov eax, dword ptr [ecx + 0xa0]
// 0062f206  83f8ff               cmp eax, -1
// 0062f209  750d                 jne 0x62f218
// 0062f20b  8b8958010000         mov ecx, dword ptr [ecx + 0x158]
// 0062f211  85c9                 test ecx, ecx
// 0062f213  7403                 je 0x62f218
// 0062f215  8b4138               mov eax, dword ptr [ecx + 0x38]
// 0062f218  c3                   ret 
// copied from an identical function in another client (function ?f@S_639cc0@ns_ROCX000039@@QAEHXZ)

namespace ns_ROCX000039 {
struct Sub_639cc0 {
    char pad[0x38];
    int m_val;
};

struct S_639cc0 {
    char pad0[0xa0];
    int m_a0;
    char pad1[0x158 - 0xa0 - 4];
    Sub_639cc0* m_p158;
    int f();
};

int S_639cc0::f()
{
    int r = m_a0;
    if (r == -1) {
        Sub_639cc0* p = m_p158;
        if (p != 0) {
            r = p->m_val;
        }
    }
    return r;
}
}
