// from server: 100% by king_originala
// roc 2008-06 005e80d0  unit: RBX::Primitive  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e80d0
//
// 005e80d0  8bc1                 mov eax, ecx
// 005e80d2  8a90a8000000         mov dl, byte ptr [eax + 0xa8]
// 005e80d8  53                   push ebx
// 005e80d9  84d2                 test dl, dl
// 005e80db  7514                 jne 0x5e80f1
// 005e80dd  3890a9000000         cmp byte ptr [eax + 0xa9], dl
// 005e80e3  750c                 jne 0x5e80f1
// 005e80e5  3890aa000000         cmp byte ptr [eax + 0xaa], dl
// 005e80eb  7504                 jne 0x5e80f1
// 005e80ed  32db                 xor bl, bl
// 005e80ef  eb02                 jmp 0x5e80f3
// 005e80f1  b301                 mov bl, 1
// 005e80f3  8a4c2408             mov cl, byte ptr [esp + 8]
// 005e80f7  3888a9000000         cmp byte ptr [eax + 0xa9], cl
// 005e80fd  743a                 je 0x5e8139
// 005e80ff  8888a9000000         mov byte ptr [eax + 0xa9], cl
// 005e8105  84d2                 test dl, dl
// 005e8107  750c                 jne 0x5e8115
// 005e8109  84c9                 test cl, cl
// 005e810b  7508                 jne 0x5e8115
// 005e810d  3890aa000000         cmp byte ptr [eax + 0xaa], dl
// 005e8113  7402                 je 0x5e8117
// 005e8115  b201                 mov dl, 1
// 005e8117  3ad3                 cmp dl, bl
// 005e8119  741e                 je 0x5e8139
// 005e811b  8b4858               mov ecx, dword ptr [eax + 0x58]
// 005e811e  85c9                 test ecx, ecx
// 005e8120  7417                 je 0x5e8139
// 005e8122  5b                   pop ebx
// 005e8123  84d2                 test dl, dl
// 005e8125  7409                 je 0x5e8130
// 005e8127  89442404             mov dword ptr [esp + 4], eax
// 005e812b  e970130000           jmp 0x5e94a0
// 005e8130  89442404             mov dword ptr [esp + 4], eax
// 005e8134  e9a7130000           jmp 0x5e94e0
// 005e8139  5b                   pop ebx
// 005e813a  c20400               ret 4

struct Primitive;

struct Owner
{
    void activate(Primitive*);
    void deactivate(Primitive*);
};

struct Primitive
{
    char padding0[0x58];
    Owner* owner;
    char padding1[0x4c];
    bool flag0;
    bool flag1;
    bool flag2;

    void setFlag1(bool value);
};

void Primitive::setFlag1(bool value)
{
    bool wasActive = flag0 || flag1 || flag2;

    if (flag1 != value)
    {
        flag1 = value;
        bool isActive = flag0 || flag1 || flag2;

        if (isActive != wasActive && owner)
        {
            if (isActive)
                owner->activate(this);
            else
                owner->deactivate(this);
        }
    }
}
