// from server: 100% by atomic.potato
// roc 2008-06 005ae210  unit: RBX::VScriptContext::?$BoundFuncDesc  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ae210
//
// 005ae210  56                   push esi
// 005ae211  8b31                 mov esi, dword ptr [ecx]
// 005ae213  85f6                 test esi, esi
// 005ae215  7411                 je 0x5ae228
// 005ae217  8d4e04               lea ecx, [esi + 4]
// 005ae21a  e871efffff           call 0x5ad190
// 005ae21f  56                   push esi
// 005ae220  e855240f00           call 0x6a067a
// 005ae225  83c404               add esp, 4
// 005ae228  5e                   pop esi
// 005ae229  c3                   ret 

extern "C" void __fastcall sub_5ad190(void *);
extern "C" void __cdecl sub_6a067a(void *);

struct S
{
    void f();
};

void S::f()
{
    void *p = *(void **)this;
    if (p)
    {
        sub_5ad190((char *)p + 4);
        sub_6a067a(p);
    }
}
