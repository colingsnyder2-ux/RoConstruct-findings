// roc 2009-12 0049bb10  unit: Ogre::RbxMeshPartAdapter  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0049bb10
//
// 0049bb10  8b4944               mov ecx, dword ptr [ecx + 0x44]
// 0049bb13  8b542408             mov edx, dword ptr [esp + 8]
// 0049bb17  8b01                 mov eax, dword ptr [ecx]
// 0049bb19  8b4008               mov eax, dword ptr [eax + 8]
// 0049bb1c  56                   push esi
// 0049bb1d  8b742408             mov esi, dword ptr [esp + 8]
// 0049bb21  52                   push edx
// 0049bb22  56                   push esi
// 0049bb23  ffd0                 call eax
// 0049bb25  8bc6                 mov eax, esi
// 0049bb27  5e                   pop esi
// 0049bb28  c20800               ret 8
// copied from an identical function in another client (function ?f@S@ns_ROCX000005@@QAEHHH@Z)

namespace ns_ROCX000005 {
struct S
{
    int f(int a, int b);
};

int S::f(int a, int b)
{
    struct V
    {
        int **vtable;
    };

    V *p = *(V **)((char *)this + 0x44);
    typedef int (__thiscall *Fn)(V *, int, int);
    Fn fn = (Fn)p->vtable[2];
    fn(p, a, b);
    return a;
}
}
