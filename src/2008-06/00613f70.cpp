// from server: 100% by colin
// roc 2008-06 00613f70  unit: RBX::RevoluteLink  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00613f70
//
// 00613f70  56                   push esi
// 00613f71  8bf1                 mov esi, ecx
// 00613f73  8b4628               mov eax, dword ptr [esi + 0x28]
// 00613f76  85c0                 test eax, eax
// 00613f78  7406                 je 0x613f80
// 00613f7a  80780400             cmp byte ptr [eax + 4], 0
// 00613f7e  7524                 jne 0x613fa4
// 00613f80  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 00613f83  85c9                 test ecx, ecx
// 00613f85  7407                 je 0x613f8e
// 00613f87  e8e4ffffff           call 0x613f70
// 00613f8c  eb0b                 jmp 0x613f99
// 00613f8e  8b462c               mov eax, dword ptr [esi + 0x2c]
// 00613f91  85c0                 test eax, eax
// 00613f93  7404                 je 0x613f99
// 00613f95  c6400801             mov byte ptr [eax + 8], 1
// 00613f99  8b7628               mov esi, dword ptr [esi + 0x28]
// 00613f9c  85f6                 test esi, esi
// 00613f9e  7404                 je 0x613fa4
// 00613fa0  c6460401             mov byte ptr [esi + 4], 1
// 00613fa4  5e                   pop esi
// 00613fa5  c3                   ret 

struct Link {
    char reserved0[0x14];
    Link* parent;
    char reserved1[0x10];
    char* flag28;
    char* flag2c;

    void reset();
};

void Link::reset()
{
    if (flag28 && flag28[4])
        return;

    if (parent) {
        parent->reset();
    } else if (flag2c) {
        flag2c[8] = 1;
    }

    if (flag28)
        flag28[4] = 1;
}
