// roc 2009-06 0061a250  unit: RBX::VChangeHistoryService::?$FactoryProduct  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0061a250
//
// 0061a250  8b442404             mov eax, dword ptr [esp + 4]
// 0061a254  8b00                 mov eax, dword ptr [eax]
// 0061a256  3d3c3da400           cmp eax, 0xa43d3c
// 0061a25b  7409                 je 0x61a266
// 0061a25d  89442404             mov dword ptr [esp + 4], eax
// 0061a261  e93affffff           jmp 0x61a1a0
// 0061a266  c20400               ret 4
// copied from an identical function in another client (function ?check@@YGXPAPAX@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
extern char sentinel;
extern void __stdcall forward(void *);

void __stdcall check(void **value)
{
    void *p = *value;
    if (p != &sentinel)
        forward(p);
}