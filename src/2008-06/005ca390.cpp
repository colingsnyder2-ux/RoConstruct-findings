// from server: 100% by king_originala
// roc 2008-06 005ca390  unit: RBX::Stats::Item  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ca390
//
// 005ca390  56                   push esi
// 005ca391  8bf1                 mov esi, ecx
// 005ca393  8b06                 mov eax, dword ptr [esi]
// 005ca395  8b5014               mov edx, dword ptr [eax + 0x14]
// 005ca398  6833010000           push 0x133
// 005ca39d  ffd2                 call edx
// 005ca39f  84c0                 test al, al
// 005ca3a1  7516                 jne 0x5ca3b9
// 005ca3a3  8b06                 mov eax, dword ptr [esi]
// 005ca3a5  8b5014               mov edx, dword ptr [eax + 0x14]
// 005ca3a8  6834010000           push 0x134
// 005ca3ad  8bce                 mov ecx, esi
// 005ca3af  ffd2                 call edx
// 005ca3b1  84c0                 test al, al
// 005ca3b3  7504                 jne 0x5ca3b9
// 005ca3b5  33c0                 xor eax, eax
// 005ca3b7  5e                   pop esi
// 005ca3b8  c3                   ret 
// 005ca3b9  b801000000           mov eax, 1
// 005ca3be  5e                   pop esi
// 005ca3bf  c3                   ret 

struct S
{
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual bool check(int value);
    int f();
};

int S::f()
{
    if (check(0x133) || check(0x134))
        return 1;
    return 0;
}
