// roc 2010-06 005eb710  unit: RBX::VChangeHistoryService::?$FactoryProduct  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005eb710
//
// 005eb710  8b442404             mov eax, dword ptr [esp + 4]
// 005eb714  8b00                 mov eax, dword ptr [eax]
// 005eb716  3d18b4c000           cmp eax, 0xc0b418
// 005eb71b  7409                 je 0x5eb726
// 005eb71d  89442404             mov dword ptr [esp + 4], eax
// 005eb721  e93affffff           jmp 0x5eb660
// 005eb726  c20400               ret 4
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