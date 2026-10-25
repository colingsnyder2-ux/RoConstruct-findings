// from server: 100% by king_originala
// roc 2008-06 0041f390  unit: InsertDecal  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041f390
//
// 0041f390  8bc1                 mov eax, ecx
// 0041f392  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0041f396  85c9                 test ecx, ecx
// 0041f398  740f                 je 0x41f3a9
// 0041f39a  50                   push eax
// 0041f39b  e8a0ffffff           call 0x41f340
// 0041f3a0  84c0                 test al, al
// 0041f3a2  7505                 jne 0x41f3a9
// 0041f3a4  33c0                 xor eax, eax
// 0041f3a6  c20400               ret 4
// 0041f3a9  b801000000           mov eax, 1
// 0041f3ae  c20400               ret 4

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
