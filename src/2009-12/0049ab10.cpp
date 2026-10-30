// roc 2009-12 0049ab10  unit: RBX::MeshFileKey  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0049ab10
//
// 0049ab10  8b09                 mov ecx, dword ptr [ecx]
// 0049ab12  85c9                 test ecx, ecx
// 0049ab14  7409                 je 0x49ab1f
// 0049ab16  8b01                 mov eax, dword ptr [ecx]
// 0049ab18  8b503c               mov edx, dword ptr [eax + 0x3c]
// 0049ab1b  6a01                 push 1
// 0049ab1d  ffd2                 call edx
// 0049ab1f  c3                   ret 
// copied from an identical function in another client (function ?f@S@ns_ROCX000002@@QAEXXZ)

namespace ns_ROCX000002 {
// from server: 100% by atomic.potato
struct S
{
    void f();
};

void S::f()
{
    int p = *(int *)this;
    if (p)
    {
        int v = *(int *)p;
        void (__thiscall *g)(int *, int) = *(void (__thiscall **)(int *, int))((char *)v + 0x3c);
        g((int *)p, 1);
    }
}
}
