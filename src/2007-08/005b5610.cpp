// from server: 89% by colin
// roc 2007-08 005b5610  unit: RBX::Primitive  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b5610
//
// 005b5610  56                   push esi
// 005b5611  8bf1                 mov esi, ecx
// 005b5613  8a4670               mov al, byte ptr [esi + 0x70]
// 005b5616  8a4c2408             mov cl, byte ptr [esp + 8]
// 005b561a  3ac1                 cmp al, cl
// 005b561c  7443                 je 0x5b5661
// 005b561e  84c0                 test al, al
// 005b5620  53                   push ebx
// 005b5621  7509                 jne 0x5b562c
// 005b5623  384672               cmp byte ptr [esi + 0x72], al
// 005b5626  7404                 je 0x5b562c
// 005b5628  b301                 mov bl, 1
// 005b562a  eb02                 jmp 0x5b562e
// 005b562c  32db                 xor bl, bl
// 005b562e  0fb64671             movzx eax, byte ptr [esi + 0x71]
// 005b5632  884e70               mov byte ptr [esi + 0x70], cl
// 005b5635  50                   push eax
// 005b5636  8bce                 mov ecx, esi
// 005b5638  e873faffff           call 0x5b50b0
// 005b563d  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 005b5640  85c9                 test ecx, ecx
// 005b5642  741c                 je 0x5b5660
// 005b5644  807e7000             cmp byte ptr [esi + 0x70], 0
// 005b5648  750a                 jne 0x5b5654
// 005b564a  807e7200             cmp byte ptr [esi + 0x72], 0
// 005b564e  7404                 je 0x5b5654
// 005b5650  b001                 mov al, 1
// 005b5652  eb02                 jmp 0x5b5656
// 005b5654  32c0                 xor al, al
// 005b5656  3ac3                 cmp al, bl
// 005b5658  7406                 je 0x5b5660
// 005b565a  56                   push esi
// 005b565b  e8703cffff           call 0x5a92d0
// 005b5660  5b                   pop ebx
// 005b5661  5e                   pop esi
// 005b5662  c20400               ret 4

struct Primitive {
    char pad[0x1c];
    int field1c;
    char pad2[0x70 - 0x20];
    unsigned char field70;
    unsigned char field71;
    unsigned char field72;
    void sub_5b50b0(unsigned char);

    void setSomething(unsigned char value);
};

extern void __cdecl sub_5a92d0(Primitive*);

void Primitive::setSomething(unsigned char value)
{
    unsigned char old = field70;
    if (old == value)
        return;

    bool bl;
    if (old == 0 && field72 != 0)
        bl = true;
    else
        bl = false;

    unsigned char f71 = field71;
    field70 = value;
    sub_5b50b0(f71);

    if (field1c != 0) {
        bool al;
        if (field70 == 0 && field72 != 0)
            al = true;
        else
            al = false;
        if (al != bl)
            sub_5a92d0(this);
    }
}
