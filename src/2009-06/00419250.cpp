// roc 2009-06 00419250  unit: CRBXHTMLControlSite  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00419250
//
// 00419250  8bc1                 mov eax, ecx
// 00419252  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00419256  85c9                 test ecx, ecx
// 00419258  740f                 je 0x419269
// 0041925a  50                   push eax
// 0041925b  e8a0ffffff           call 0x419200
// 00419260  84c0                 test al, al
// 00419262  7505                 jne 0x419269
// 00419264  33c0                 xor eax, eax
// 00419266  c20400               ret 4
// 00419269  b801000000           mov eax, 1
// 0041926e  c20400               ret 4
// copied from an identical function in another client (function ?g@S@@QAEHPAU1@@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct S {
    bool f(S*);
    int g(S*);
};

int S::g(S* other)
{
    if (other && !other->f(this))
        return 0;
    return 1;
}