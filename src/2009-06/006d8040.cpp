// roc 2009-06 006d8040  unit: RBX::RotatePJoint  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006d8040
//
// 006d8040  53                   push ebx
// 006d8041  56                   push esi
// 006d8042  8bd9                 mov ebx, ecx
// 006d8044  33f6                 xor esi, esi
// 006d8046  39b3cc000000         cmp dword ptr [ebx + 0xcc], esi
// 006d804c  57                   push edi
// 006d804d  7e1f                 jle 0x6d806e
// 006d804f  8dbbbc000000         lea edi, [ebx + 0xbc]
// 006d8055  8b0f                 mov ecx, dword ptr [edi]
// 006d8057  8b01                 mov eax, dword ptr [ecx]
// 006d8059  8b500c               mov edx, dword ptr [eax + 0xc]
// 006d805c  ffd2                 call edx
// 006d805e  84c0                 test al, al
// 006d8060  7512                 jne 0x6d8074
// 006d8062  46                   inc esi
// 006d8063  83c704               add edi, 4
// 006d8066  3bb3cc000000         cmp esi, dword ptr [ebx + 0xcc]
// 006d806c  7ce7                 jl 0x6d8055
// 006d806e  5f                   pop edi
// 006d806f  5e                   pop esi
// 006d8070  32c0                 xor al, al
// 006d8072  5b                   pop ebx
// 006d8073  c3                   ret 
// 006d8074  5f                   pop edi
// 006d8075  5e                   pop esi
// 006d8076  b001                 mov al, 1
// 006d8078  5b                   pop ebx
// 006d8079  c3                   ret 
// copied from an identical function in another client (function ?f@S@ns_ROCX000016@@QAE_NXZ)

namespace ns_ROCX000016 {
// from server: 100% by atomic.potato
struct V
{
    virtual bool g();
    virtual bool h();
    virtual bool i();
    virtual bool j();
};

struct S
{
    bool f();
};

bool S::f()
{
    int i = 0;
    while (i < *(int*)((char*)this + 0xcc))
    {
        V* p = *(V**)((char*)this + 0xbc + i * 4);
        if (p->j())
            return true;
        ++i;
    }
    return false;
}
}
