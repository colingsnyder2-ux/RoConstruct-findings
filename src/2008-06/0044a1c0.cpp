// from server: 100% by king_originala
// roc 2008-06 0044a1c0  unit: CRbxPlayDocTemplate  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0044a1c0
//
// 0044a1c0  56                   push esi
// 0044a1c1  8bf1                 mov esi, ecx
// 0044a1c3  8d8e94000000         lea ecx, [esi + 0x94]
// 0044a1c9  ff15143f8000         call dword ptr [0x803f14]
// 0044a1cf  8bce                 mov ecx, esi
// 0044a1d1  e85c702500           call 0x6a1232
// 0044a1d6  f644240801           test byte ptr [esp + 8], 1
// 0044a1db  7409                 je 0x44a1e6
// 0044a1dd  56                   push esi
// 0044a1de  e897642500           call 0x6a067a
// 0044a1e3  83c404               add esp, 4
// 0044a1e6  8bc6                 mov eax, esi
// 0044a1e8  5e                   pop esi
// 0044a1e9  c20400               ret 4

typedef void (__thiscall *CleanupFunction)(void *);
extern CleanupFunction cleanup;

void __cdecl operator delete(void *);

struct S {
    void destroy();
    S *f(unsigned int flags);
};

S *S::f(unsigned int flags)
{
    cleanup(reinterpret_cast<char *>(this) + 0x94);
    destroy();
    if (flags & 1)
        operator delete(this);
    return this;
}
