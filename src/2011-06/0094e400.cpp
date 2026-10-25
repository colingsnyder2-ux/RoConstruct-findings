// from server: 100% by tester
// roc 2011-06 0094e400  unit: RBX::MeshFileKey  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0094e400
//
// 0094e400  8b09                 mov ecx, dword ptr [ecx]
// 0094e402  85c9                 test ecx, ecx
// 0094e404  7409                 je 0x94e40f
// 0094e406  8b01                 mov eax, dword ptr [ecx]
// 0094e408  8b503c               mov edx, dword ptr [eax + 0x3c]
// 0094e40b  6a01                 push 1
// 0094e40d  ffd2                 call edx
// 0094e40f  c3                   ret 

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
