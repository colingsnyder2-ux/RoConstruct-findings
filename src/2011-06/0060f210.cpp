// roc 2011-06 0060f210  unit: RBX::VChangeHistoryService::?$FactoryProduct  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0060f210
//
// 0060f210  8b442404             mov eax, dword ptr [esp + 4]
// 0060f214  8b00                 mov eax, dword ptr [eax]
// 0060f216  3d74bbcb00           cmp eax, 0xcbbb74
// 0060f21b  7409                 je 0x60f226
// 0060f21d  89442404             mov dword ptr [esp + 4], eax
// 0060f221  e93affffff           jmp 0x60f160
// 0060f226  c20400               ret 4
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