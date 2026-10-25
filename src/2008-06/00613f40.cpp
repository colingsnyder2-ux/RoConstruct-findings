// from server: 100% by king_originala
// roc 2008-06 00613f40  unit: RBX::RevoluteLink  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00613f40
//
// 00613f40  a198a89500           mov eax, dword ptr [0x95a898]
// 00613f45  40                   inc eax
// 00613f46  a398a89500           mov dword ptr [0x95a898], eax
// 00613f4b  3dffffff7f           cmp eax, 0x7fffffff
// 00613f50  750a                 jne 0x613f5c
// 00613f52  b801000000           mov eax, 1
// 00613f57  a398a89500           mov dword ptr [0x95a898], eax
// 00613f5c  898190000000         mov dword ptr [ecx + 0x90], eax
// 00613f62  c3                   ret 

extern int counter;

struct S {
    char padding[0x90];
    int id;
    void assignId();
};

void S::assignId()
{
    int value = ++counter;
    if (value == 0x7fffffff)
        counter = value = 1;
    id = value;
}
