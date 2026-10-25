// from server: 100% by king_originala
// roc 2008-06 005e8140  unit: RBX::Primitive  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e8140
//
// 005e8140  8bc1                 mov eax, ecx
// 005e8142  8a90a8000000         mov dl, byte ptr [eax + 0xa8]
// 005e8148  53                   push ebx
// 005e8149  84d2                 test dl, dl
// 005e814b  7514                 jne 0x5e8161
// 005e814d  3890a9000000         cmp byte ptr [eax + 0xa9], dl
// 005e8153  750c                 jne 0x5e8161
// 005e8155  3890aa000000         cmp byte ptr [eax + 0xaa], dl
// 005e815b  7504                 jne 0x5e8161
// 005e815d  32db                 xor bl, bl
// 005e815f  eb02                 jmp 0x5e8163
// 005e8161  b301                 mov bl, 1
// 005e8163  8a4c2408             mov cl, byte ptr [esp + 8]
// 005e8167  3888aa000000         cmp byte ptr [eax + 0xaa], cl
// 005e816d  743a                 je 0x5e81a9
// 005e816f  8888aa000000         mov byte ptr [eax + 0xaa], cl
// 005e8175  84d2                 test dl, dl
// 005e8177  750c                 jne 0x5e8185
// 005e8179  3890a9000000         cmp byte ptr [eax + 0xa9], dl
// 005e817f  7504                 jne 0x5e8185
// 005e8181  84c9                 test cl, cl
// 005e8183  7402                 je 0x5e8187
// 005e8185  b201                 mov dl, 1
// 005e8187  3ad3                 cmp dl, bl
// 005e8189  741e                 je 0x5e81a9
// 005e818b  8b4858               mov ecx, dword ptr [eax + 0x58]
// 005e818e  85c9                 test ecx, ecx
// 005e8190  7417                 je 0x5e81a9
// 005e8192  5b                   pop ebx
// 005e8193  84d2                 test dl, dl
// 005e8195  7409                 je 0x5e81a0
// 005e8197  89442404             mov dword ptr [esp + 4], eax
// 005e819b  e900130000           jmp 0x5e94a0
// 005e81a0  89442404             mov dword ptr [esp + 4], eax
// 005e81a4  e937130000           jmp 0x5e94e0
// 005e81a9  5b                   pop ebx
// 005e81aa  c20400               ret 4

struct Primitive;

struct Owner {
    void activate(Primitive* primitive);
    void deactivate(Primitive* primitive);
};

struct Primitive {
    char reserved0[0x58];
    Owner* owner;
    char reserved1[0x4c];
    bool flag0;
    bool flag1;
    bool flag2;

    void func_005e8140(bool value);
};

void Primitive::func_005e8140(bool value)
{
    bool previous = flag0 || flag1 || flag2;
    if (flag2 != value) {
        flag2 = value;
        bool current = flag0 || flag1 || flag2;
        if (current != previous && owner) {
            if (current)
                owner->activate(this);
            else
                owner->deactivate(this);
        }
    }
}
