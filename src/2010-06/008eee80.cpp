// from server: 100% by tester
// roc 2010-06 008eee80  unit: Ogre::RbxMeshPartAdapter  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008eee80
//
// 008eee80  8b4944               mov ecx, dword ptr [ecx + 0x44]
// 008eee83  8b542408             mov edx, dword ptr [esp + 8]
// 008eee87  8b01                 mov eax, dword ptr [ecx]
// 008eee89  8b4008               mov eax, dword ptr [eax + 8]
// 008eee8c  56                   push esi
// 008eee8d  8b742408             mov esi, dword ptr [esp + 8]
// 008eee91  52                   push edx
// 008eee92  56                   push esi
// 008eee93  ffd0                 call eax
// 008eee95  8bc6                 mov eax, esi
// 008eee97  5e                   pop esi
// 008eee98  c20800               ret 8

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