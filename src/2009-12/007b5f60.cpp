// roc 2009-12 007b5f60  unit: RBX::MultiJoint  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007b5f60
//
// 007b5f60  56                   push esi
// 007b5f61  57                   push edi
// 007b5f62  8bf9                 mov edi, ecx
// 007b5f64  33f6                 xor esi, esi
// 007b5f66  8b07                 mov eax, dword ptr [edi]
// 007b5f68  8b5014               mov edx, dword ptr [eax + 0x14]
// 007b5f6b  56                   push esi
// 007b5f6c  8bcf                 mov ecx, edi
// 007b5f6e  ffd2                 call edx
// 007b5f70  85c0                 test eax, eax
// 007b5f72  7405                 je 0x7b5f79
// 007b5f74  397824               cmp dword ptr [eax + 0x24], edi
// 007b5f77  7408                 je 0x7b5f81
// 007b5f79  46                   inc esi
// 007b5f7a  83fe02               cmp esi, 2
// 007b5f7d  7ce7                 jl 0x7b5f66
// 007b5f7f  33c0                 xor eax, eax
// 007b5f81  5f                   pop edi
// 007b5f82  5e                   pop esi
// 007b5f83  c3                   ret 
// copied from an identical function in another client (function ?f@S@ns_ROCX000001@@QAEPAXXZ)

namespace ns_ROCX000001 {
struct S
{
    int *v;
    void *f();
};

void *S::f()
{
    int i = 0;
    void *p;
    do
    {
        p = ((void *(__thiscall *)(S *, int))v[5])(this, i);
        if (p && *((S **) ((char *)p + 0x24)) == this)
            return p;
        ++i;
    } while (i < 2);
    return 0;
}
}
