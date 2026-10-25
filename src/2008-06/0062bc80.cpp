// from server: 100% by king_originala
// roc 2008-06 0062bc80  unit: RBX::VFlagStand::?$FactoryProduct  size: 297 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0062bc80
//
// 0062bc80  51                   push ecx
// 0062bc81  837c240800           cmp dword ptr [esp + 8], 0
// 0062bc86  56                   push esi
// 0062bc87  8bf1                 mov esi, ecx
// 0062bc89  c744240400000000     mov dword ptr [esp + 4], 0
// 0062bc91  7414                 je 0x62bca7
// 0062bc93  c786340100006c9e8400 mov dword ptr [esi + 0x134], 0x849e6c
// 0062bc9d  c7860004000044618400 mov dword ptr [esi + 0x400], 0x846144
// 0062bca7  6a00                 push 0
// 0062bca9  e82218f7ff           call 0x59d4d0
// 0062bcae  8b8634010000         mov eax, dword ptr [esi + 0x134]
// 0062bcb4  c7061c608400         mov dword ptr [esi], 0x84601c
// 0062bcba  c7461010608400       mov dword ptr [esi + 0x10], 0x846010
// 0062bcc1  c7461408608400       mov dword ptr [esi + 0x14], 0x846008
// 0062bcc8  c7462000608400       mov dword ptr [esi + 0x20], 0x846000
// 0062bccf  c74624f05f8400       mov dword ptr [esi + 0x24], 0x845ff0
// 0062bcd6  c74644e05f8400       mov dword ptr [esi + 0x44], 0x845fe0
// 0062bcdd  c74664d05f8400       mov dword ptr [esi + 0x64], 0x845fd0
// 0062bce4  c78684000000c05f8400 mov dword ptr [esi + 0x84], 0x845fc0
// 0062bcee  c786a4000000b05f8400 mov dword ptr [esi + 0xa4], 0x845fb0
// 0062bcf8  c786c4000000a05f8400 mov dword ptr [esi + 0xc4], 0x845fa0
// 0062bd02  c78630010000945f8400 mov dword ptr [esi + 0x130], 0x845f94
// 0062bd0c  c786a0010000845f8400 mov dword ptr [esi + 0x1a0], 0x845f84
// 0062bd16  c786c0010000785f8400 mov dword ptr [esi + 0x1c0], 0x845f78
// 0062bd20  c786cc010000605f8400 mov dword ptr [esi + 0x1cc], 0x845f60
// 0062bd2a  8b4804               mov ecx, dword ptr [eax + 4]
// 0062bd2d  c7843134010000545f8400 mov dword ptr [ecx + esi + 0x134], 0x845f54
// 0062bd38  8b9634010000         mov edx, dword ptr [esi + 0x134]
// 0062bd3e  8b4208               mov eax, dword ptr [edx + 8]
// 0062bd41  c78430340100004c5f8400 mov dword ptr [eax + esi + 0x134], 0x845f4c
// 0062bd4c  8b8e34010000         mov ecx, dword ptr [esi + 0x134]
// 0062bd52  8b510c               mov edx, dword ptr [ecx + 0xc]
// 0062bd55  c7843234010000305f8400 mov dword ptr [edx + esi + 0x134], 0x845f30
// 0062bd60  8b8634010000         mov eax, dword ptr [esi + 0x134]
// 0062bd66  8b4004               mov eax, dword ptr [eax + 4]
// 0062bd69  8d8848fdffff         lea ecx, [eax - 0x2b8]
// 0062bd6f  898c3030010000       mov dword ptr [eax + esi + 0x130], ecx
// 0062bd76  8b9634010000         mov edx, dword ptr [esi + 0x134]
// 0062bd7c  8b4208               mov eax, dword ptr [edx + 8]
// 0062bd7f  8d8840fdffff         lea ecx, [eax - 0x2c0]
// 0062bd85  898c3030010000       mov dword ptr [eax + esi + 0x130], ecx
// 0062bd8c  8b9634010000         mov edx, dword ptr [esi + 0x134]
// 0062bd92  8b420c               mov eax, dword ptr [edx + 0xc]
// 0062bd95  8d8838fdffff         lea ecx, [eax - 0x2c8]
// 0062bd9b  898c3030010000       mov dword ptr [eax + esi + 0x130], ecx
// 0062bda2  8bc6                 mov eax, esi
// 0062bda4  5e                   pop esi
// 0062bda5  59                   pop ecx
// 0062bda6  c20400               ret 4

struct S
{
    unsigned int data[257];
    void base(int);
    S* f(int);
};

S* S::f(int initialize)
{
    volatile int state = 0;

    if (initialize)
    {
        data[0x134 / 4] = 0x849e6c;
        data[0x400 / 4] = 0x846144;
    }

    base(0);

    unsigned int* table = (unsigned int*)data[0x134 / 4];

    data[0] = 0x84601c;
    data[0x10 / 4] = 0x846010;
    data[0x14 / 4] = 0x846008;
    data[0x20 / 4] = 0x846000;
    data[0x24 / 4] = 0x845ff0;
    data[0x44 / 4] = 0x845fe0;
    data[0x64 / 4] = 0x845fd0;
    data[0x84 / 4] = 0x845fc0;
    data[0xa4 / 4] = 0x845fb0;
    data[0xc4 / 4] = 0x845fa0;
    data[0x130 / 4] = 0x845f94;
    data[0x1a0 / 4] = 0x845f84;
    data[0x1c0 / 4] = 0x845f78;
    data[0x1cc / 4] = 0x845f60;

    *(unsigned int*)((char*)this + 0x134 + table[1]) = 0x845f54;
    *(unsigned int*)((char*)this + 0x134 +
        ((unsigned int*)data[0x134 / 4])[2]) = 0x845f4c;
    *(unsigned int*)((char*)this + 0x134 +
        ((unsigned int*)data[0x134 / 4])[3]) = 0x845f30;

    unsigned int offset = ((unsigned int*)data[0x134 / 4])[1];
    *(unsigned int*)((char*)this + 0x130 + offset) = offset - 0x2b8;

    offset = ((unsigned int*)data[0x134 / 4])[2];
    *(unsigned int*)((char*)this + 0x130 + offset) = offset - 0x2c0;

    offset = ((unsigned int*)data[0x134 / 4])[3];
    *(unsigned int*)((char*)this + 0x130 + offset) = offset - 0x2c8;

    return this;
}
