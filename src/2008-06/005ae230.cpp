// from server: 100% by king_originala
// roc 2008-06 005ae230  unit: RBX::VScriptContext::?$BoundFuncDesc  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ae230
//
// 005ae230  a1786b9700           mov eax, dword ptr [0x976b78]
// 005ae235  85c0                 test eax, eax
// 005ae237  7e3d                 jle 0x5ae276
// 005ae239  56                   push esi
// 005ae23a  8b742408             mov esi, dword ptr [esp + 8]
// 005ae23e  57                   push edi
// 005ae23f  6a43                 push 0x43
// 005ae241  56                   push esi
// 005ae242  e8c9410600           call 0x612410
// 005ae247  68eed8ffff           push 0xffffd8ee
// 005ae24c  56                   push esi
// 005ae24d  e80e420600           call 0x612460
// 005ae252  6aff                 push -1
// 005ae254  56                   push esi
// 005ae255  e8c63e0600           call 0x612120
// 005ae25a  6afe                 push -2
// 005ae25c  56                   push esi
// 005ae25d  8bf8                 mov edi, eax
// 005ae25f  e8bc390600           call 0x611c20
// 005ae264  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005ae268  83c420               add esp, 0x20
// 005ae26b  51                   push ecx
// 005ae26c  56                   push esi
// 005ae26d  8bcf                 mov ecx, edi
// 005ae26f  e87cf9ffff           call 0x5adbf0
// 005ae274  5f                   pop edi
// 005ae275  5e                   pop esi
// 005ae276  c3                   ret 

extern volatile int global_976b78;

struct S
{
    void sub_5adbf0(void *, void *);
};

extern "C" void __cdecl sub_612410(void *, void *);
extern "C" void __cdecl sub_612460(void *, int);
extern "C" S * __cdecl sub_612120(void *, int);
extern "C" void __cdecl sub_611c20(void *, int);

void __cdecl sub_5ae230(void *state, void *arg)
{
    if (global_976b78 > 0)
    {
        sub_612410(state, (void *)67);
        sub_612460(state, -10002);
        S *object = sub_612120(state, -1);
        sub_611c20(state, -2);
        object->sub_5adbf0(state, arg);
    }
}
