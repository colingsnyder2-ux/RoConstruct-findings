// from server: 100% by colin
// roc 2008-06 0063d1b0  unit: RBX::Seat  size: 353 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063d1b0
//
// 0063d1b0  6aff                 push -1
// 0063d1b2  6838a77d00           push 0x7da738
// 0063d1b7  64a100000000         mov eax, dword ptr fs:[0]
// 0063d1bd  50                   push eax
// 0063d1be  64892500000000       mov dword ptr fs:[0], esp
// 0063d1c5  83ec08               sub esp, 8
// 0063d1c8  837c241800           cmp dword ptr [esp + 0x18], 0
// 0063d1cd  56                   push esi
// 0063d1ce  8bf1                 mov esi, ecx
// 0063d1d0  89742404             mov dword ptr [esp + 4], esi
// 0063d1d4  c744240800000000     mov dword ptr [esp + 8], 0
// 0063d1dc  7414                 je 0x63d1f2
// 0063d1de  c786340100006c9e8400 mov dword ptr [esi + 0x134], 0x849e6c
// 0063d1e8  c7860004000044618400 mov dword ptr [esi + 0x400], 0x846144
// 0063d1f2  6a00                 push 0
// 0063d1f4  e857f4ffff           call 0x63c650
// 0063d1f9  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0063d201  e83a68f8ff           call 0x5c3a40
// 0063d206  89461c               mov dword ptr [esi + 0x1c], eax
// 0063d209  8b8634010000         mov eax, dword ptr [esi + 0x134]
// 0063d20f  c706049e8400         mov dword ptr [esi], 0x849e04
// 0063d215  c74610f49d8400       mov dword ptr [esi + 0x10], 0x849df4
// 0063d21c  c74614ec9d8400       mov dword ptr [esi + 0x14], 0x849dec
// 0063d223  c74620e49d8400       mov dword ptr [esi + 0x20], 0x849de4
// 0063d22a  c74624d49d8400       mov dword ptr [esi + 0x24], 0x849dd4
// 0063d231  c74644c49d8400       mov dword ptr [esi + 0x44], 0x849dc4
// 0063d238  c74664b49d8400       mov dword ptr [esi + 0x64], 0x849db4
// 0063d23f  c78684000000a49d8400 mov dword ptr [esi + 0x84], 0x849da4
// 0063d249  c786a4000000949d8400 mov dword ptr [esi + 0xa4], 0x849d94
// 0063d253  c786c4000000849d8400 mov dword ptr [esi + 0xc4], 0x849d84
// 0063d25d  c78630010000789d8400 mov dword ptr [esi + 0x130], 0x849d78
// 0063d267  c786a0010000689d8400 mov dword ptr [esi + 0x1a0], 0x849d68
// 0063d271  c786c00100005c9d8400 mov dword ptr [esi + 0x1c0], 0x849d5c
// 0063d27b  c786cc010000449d8400 mov dword ptr [esi + 0x1cc], 0x849d44
// 0063d285  8b4804               mov ecx, dword ptr [eax + 4]
// 0063d288  c7843134010000389d8400 mov dword ptr [ecx + esi + 0x134], 0x849d38
// 0063d293  8b9634010000         mov edx, dword ptr [esi + 0x134]
// 0063d299  8b4208               mov eax, dword ptr [edx + 8]
// 0063d29c  c7843034010000309d8400 mov dword ptr [eax + esi + 0x134], 0x849d30
// 0063d2a7  8b8e34010000         mov ecx, dword ptr [esi + 0x134]
// 0063d2ad  8b510c               mov edx, dword ptr [ecx + 0xc]
// 0063d2b0  c7843234010000149d8400 mov dword ptr [edx + esi + 0x134], 0x849d14
// 0063d2bb  8b8634010000         mov eax, dword ptr [esi + 0x134]
// 0063d2c1  8b4004               mov eax, dword ptr [eax + 4]
// 0063d2c4  8d8848fdffff         lea ecx, [eax - 0x2b8]
// 0063d2ca  898c3030010000       mov dword ptr [eax + esi + 0x130], ecx
// 0063d2d1  8b9634010000         mov edx, dword ptr [esi + 0x134]
// 0063d2d7  8b4208               mov eax, dword ptr [edx + 8]
// 0063d2da  8d8840fdffff         lea ecx, [eax - 0x2c0]
// 0063d2e0  898c3030010000       mov dword ptr [eax + esi + 0x130], ecx
// 0063d2e7  8b9634010000         mov edx, dword ptr [esi + 0x134]
// 0063d2ed  8b420c               mov eax, dword ptr [edx + 0xc]
// 0063d2f0  8d8838fdffff         lea ecx, [eax - 0x2c8]
// 0063d2f6  898c3030010000       mov dword ptr [eax + esi + 0x130], ecx
// 0063d2fd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0063d301  8bc6                 mov eax, esi
// 0063d303  5e                   pop esi
// 0063d304  64890d00000000       mov dword ptr fs:[0], ecx
// 0063d30b  83c414               add esp, 0x14
// 0063d30e  c20400               ret 4

int __cdecl getName();

struct Flag {
    volatile int value;
    Flag() : value(0) {}
    ~Flag() {}
};

struct Base {
    int data[257];
    Base(int);
    ~Base();
};

struct S : Base {
    S(int);
};

S::S(int complete)
    : Base((Flag(), complete
        ? (data[0x134 / 4] = 0x849e6c,
           data[0x400 / 4] = 0x846144, 0)
        : 0))
{
    data[0x1c / 4] = getName();

    data[0x000 / 4] = 0x83bf7c;
    data[0x010 / 4] = 0x83bf70;
    data[0x014 / 4] = 0x83bf68;
    data[0x020 / 4] = 0x83bf60;
    data[0x024 / 4] = 0x83bf50;
    data[0x044 / 4] = 0x83bf40;
    data[0x064 / 4] = 0x83bf30;
    data[0x084 / 4] = 0x83bf20;
    data[0x0a4 / 4] = 0x83bf10;
    data[0x0c4 / 4] = 0x83bf00;
    data[0x130 / 4] = 0x83bef4;
    data[0x1a0 / 4] = 0x83bee4;
    data[0x1c0 / 4] = 0x83bed8;
    data[0x1cc / 4] = 0x83bec0;

    *(int *)((char *)this + 0x134 +
        ((int *)data[0x134 / 4])[1]) = 0x83beb4;
    *(int *)((char *)this + 0x134 +
        ((int *)data[0x134 / 4])[2]) = 0x83beac;
    *(int *)((char *)this + 0x134 +
        ((int *)data[0x134 / 4])[3]) = 0x83be90;

    int offset = ((int *)data[0x134 / 4])[1];
    *(int *)((char *)this + 0x130 + offset) = offset - 0x2b8;

    offset = ((int *)data[0x134 / 4])[2];
    *(int *)((char *)this + 0x130 + offset) = offset - 0x2c0;

    offset = ((int *)data[0x134 / 4])[3];
    *(int *)((char *)this + 0x130 + offset) = offset - 0x2c8;
}
