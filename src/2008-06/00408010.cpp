// from server: 100% by king_originala
// roc 2008-06 00408010  unit: VCBrowserViewExternal::?$CComContainedObject  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00408010
//
// 00408010  56                   push esi
// 00408011  8bf1                 mov esi, ecx
// 00408013  8b4610               mov eax, dword ptr [esi + 0x10]
// 00408016  85c0                 test eax, eax
// 00408018  7408                 je 0x408022
// 0040801a  8b08                 mov ecx, dword ptr [eax]
// 0040801c  8b5108               mov edx, dword ptr [ecx + 8]
// 0040801f  50                   push eax
// 00408020  ffd2                 call edx
// 00408022  f644240801           test byte ptr [esp + 8], 1
// 00408027  7409                 je 0x408032
// 00408029  56                   push esi
// 0040802a  e84b862900           call 0x6a067a
// 0040802f  83c404               add esp, 4
// 00408032  8bc6                 mov eax, esi
// 00408034  5e                   pop esi
// 00408035  c20400               ret 4

struct Interface
{
    unsigned long (__stdcall **vtable)(Interface*);
};

extern void __cdecl freeObject(void*);

struct S
{
    char padding[16];
    Interface* object;

    S* destroy(unsigned int flags);
};

S* S::destroy(unsigned int flags)
{
    Interface* p = object;
    if (p)
        p->vtable[2](p);

    if (flags & 1)
        freeObject(this);

    return this;
}
