// from server: 100% by tester
// roc 2009-06 006d8140  unit: RBX::MultiJoint  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006d8140
//
// 006d8140  56                   push esi
// 006d8141  57                   push edi
// 006d8142  8bf9                 mov edi, ecx
// 006d8144  33f6                 xor esi, esi
// 006d8146  8b07                 mov eax, dword ptr [edi]
// 006d8148  8b5014               mov edx, dword ptr [eax + 0x14]
// 006d814b  56                   push esi
// 006d814c  8bcf                 mov ecx, edi
// 006d814e  ffd2                 call edx
// 006d8150  85c0                 test eax, eax
// 006d8152  7405                 je 0x6d8159
// 006d8154  397824               cmp dword ptr [eax + 0x24], edi
// 006d8157  7408                 je 0x6d8161
// 006d8159  46                   inc esi
// 006d815a  83fe02               cmp esi, 2
// 006d815d  7ce7                 jl 0x6d8146
// 006d815f  33c0                 xor eax, eax
// 006d8161  5f                   pop edi
// 006d8162  5e                   pop esi
// 006d8163  c3                   ret 

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
