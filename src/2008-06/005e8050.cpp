// from server: 100% by king_originala
// roc 2008-06 005e8050  unit: RBX::Primitive  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e8050
//
// 005e8050  8bc1                 mov eax, ecx
// 005e8052  8a90a8000000         mov dl, byte ptr [eax + 0xa8]
// 005e8058  53                   push ebx
// 005e8059  84d2                 test dl, dl
// 005e805b  7514                 jne 0x5e8071
// 005e805d  3890a9000000         cmp byte ptr [eax + 0xa9], dl
// 005e8063  750c                 jne 0x5e8071
// 005e8065  3890aa000000         cmp byte ptr [eax + 0xaa], dl
// 005e806b  7504                 jne 0x5e8071
// 005e806d  32db                 xor bl, bl
// 005e806f  eb02                 jmp 0x5e8073
// 005e8071  b301                 mov bl, 1
// 005e8073  8a4c2408             mov cl, byte ptr [esp + 8]
// 005e8077  3ad1                 cmp dl, cl
// 005e8079  7442                 je 0x5e80bd
// 005e807b  8888a8000000         mov byte ptr [eax + 0xa8], cl
// 005e8081  84c9                 test cl, cl
// 005e8083  7514                 jne 0x5e8099
// 005e8085  3888a9000000         cmp byte ptr [eax + 0xa9], cl
// 005e808b  750c                 jne 0x5e8099
// 005e808d  3888aa000000         cmp byte ptr [eax + 0xaa], cl
// 005e8093  7504                 jne 0x5e8099
// 005e8095  32d2                 xor dl, dl
// 005e8097  eb02                 jmp 0x5e809b
// 005e8099  b201                 mov dl, 1
// 005e809b  3ad3                 cmp dl, bl
// 005e809d  741e                 je 0x5e80bd
// 005e809f  8b4858               mov ecx, dword ptr [eax + 0x58]
// 005e80a2  85c9                 test ecx, ecx
// 005e80a4  7417                 je 0x5e80bd
// 005e80a6  5b                   pop ebx
// 005e80a7  84d2                 test dl, dl
// 005e80a9  7409                 je 0x5e80b4
// 005e80ab  89442404             mov dword ptr [esp + 4], eax
// 005e80af  e9ec130000           jmp 0x5e94a0
// 005e80b4  89442404             mov dword ptr [esp + 4], eax
// 005e80b8  e923140000           jmp 0x5e94e0
// 005e80bd  5b                   pop ebx
// 005e80be  c20400               ret 4

struct Primitive;

struct Owner {
    void enable(Primitive*);
    void disable(Primitive*);
};

struct Primitive {
    char reserved0[0x58];
    Owner* owner;
    char reserved1[0x4C];
    bool flag0;
    bool flag1;
    bool flag2;

    void func_005e8050(bool value);
};

void Primitive::func_005e8050(bool value)
{
    bool wasEnabled = flag0 || flag1 || flag2;
    if (flag0 != value) {
        flag0 = value;
        bool isEnabled = flag0 || flag1 || flag2;
        if (isEnabled != wasEnabled && owner) {
            if (isEnabled)
                owner->enable(this);
            else
                owner->disable(this);
        }
    }
}
