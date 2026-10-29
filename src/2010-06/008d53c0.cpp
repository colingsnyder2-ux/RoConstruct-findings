// roc 2010-06 008d53c0  unit: Ogre::VertexStreamer  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008d53c0
//
// 008d53c0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 008d53c4  85c9                 test ecx, ecx
// 008d53c6  740c                 je 0x8d53d4
// 008d53c8  8b01                 mov eax, dword ptr [ecx]
// 008d53ca  8b90c8000000         mov edx, dword ptr [eax + 0xc8]
// 008d53d0  6a01                 push 1
// 008d53d2  ffd2                 call edx
// 008d53d4  c3                   ret 
// copied from an identical function in another client (function ?f@S@ns_ROCX000018@@SAXPAX@Z)

namespace ns_ROCX000018 {
struct S
{
    static void f(void *p);
};

void S::f(void *p)
{
    if (p)
    {
        typedef void (__thiscall *Fn)(void *, int);
        Fn *vtable = *(Fn **)p;
        vtable[50](p, 1);
    }
}
}
