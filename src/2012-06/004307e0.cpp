// roc 2012-06 004307e0  unit: CRobloxTreeCtrlNode  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004307e0
//
// 004307e0  8b442404             mov eax, dword ptr [esp + 4]
// 004307e4  8b480c               mov ecx, dword ptr [eax + 0xc]
// 004307e7  51                   push ecx
// 004307e8  8b485c               mov ecx, dword ptr [eax + 0x5c]
// 004307eb  e800feffff           call 0x4305f0
// 004307f0  8b542408             mov edx, dword ptr [esp + 8]
// 004307f4  c70200000000         mov dword ptr [edx], 0
// 004307fa  c20800               ret 8
// copied from an identical function in another client (function ?f_00421c90@ns_ROCX000000@@YGXPAUCOwner_00421c90@1@PAH@Z)

namespace ns_ROCX000000 {
struct CNode_00421aa0 {
    void f_00421aa0(int);
};

struct COwner_00421c90 {
    char pad0[0xc];
    int m_0c;
    char pad1[0x4c];
    CNode_00421aa0* m_5c;
};

void __stdcall f_00421c90(COwner_00421c90* self, int* out)
{
    self->m_5c->f_00421aa0(self->m_0c);
    *out = 0;
}
}
