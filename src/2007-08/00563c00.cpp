// from server: 100% by colin
// roc 2007-08 00563c00  unit: RBX::ResetCommand  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00563c00
//
// 00563c00  6a01                 push 1
// 00563c02  83c110               add ecx, 0x10
// 00563c05  e836e6ffff           call 0x562240
// 00563c0a  8b804c010000         mov eax, dword ptr [eax + 0x14c]
// 00563c10  83f801               cmp eax, 1
// 00563c13  7408                 je 0x563c1d
// 00563c15  83f802               cmp eax, 2
// 00563c18  7403                 je 0x563c1d
// 00563c1a  33c0                 xor eax, eax
// 00563c1c  c3                   ret 
// 00563c1d  b801000000           mov eax, 1
// 00563c22  c3                   ret 

struct Sub {
    char pad[0x14c];
    int state;
};

struct Inner {
    Sub* getSub(int);
};

struct S {
    char pad[0x10];
    Inner inner;
    int isEnabled() const;
};

int S::isEnabled() const
{
    Sub* s = ((S*)this)->inner.getSub(1);
    int v = s->state;
    if (v == 1 || v == 2)
        return 1;
    return 0;
}
