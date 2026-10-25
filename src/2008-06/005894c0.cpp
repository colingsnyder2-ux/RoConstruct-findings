// from server: 100% by king_originala
// roc 2008-06 005894c0  unit: RBX::VChangeHistoryService::?$FactoryProduct  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005894c0
//
// 005894c0  8b442404             mov eax, dword ptr [esp + 4]
// 005894c4  8b00                 mov eax, dword ptr [eax]
// 005894c6  3d343d9700           cmp eax, 0x973d34
// 005894cb  7409                 je 0x5894d6
// 005894cd  89442404             mov dword ptr [esp + 4], eax
// 005894d1  e93affffff           jmp 0x589410
// 005894d6  c20400               ret 4

extern char sentinel;
extern void __stdcall forward(void *);

void __stdcall check(void **value)
{
    void *p = *value;
    if (p != &sentinel)
        forward(p);
}
