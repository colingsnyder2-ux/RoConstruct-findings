// from server: 100% by king_originala
// roc 2008-06 005d31b0  unit: RBX::VSpawnerService::?$FactoryProduct  size: 353 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d31b0
//
// 005d31b0  6aff                 push -1
// 005d31b2  6848597d00           push 0x7d5948
// 005d31b7  64a100000000         mov eax, dword ptr fs:[0]
// 005d31bd  50                   push eax
// 005d31be  64892500000000       mov dword ptr fs:[0], esp
// 005d31c5  83ec08               sub esp, 8
// 005d31c8  837c241800           cmp dword ptr [esp + 0x18], 0
// 005d31cd  56                   push esi
// 005d31ce  8bf1                 mov esi, ecx
// 005d31d0  89742404             mov dword ptr [esp + 4], esi
// 005d31d4  c744240800000000     mov dword ptr [esp + 8], 0
// 005d31dc  7414                 je 0x5d31f2
// 005d31de  c786340100006c9e8400 mov dword ptr [esi + 0x134], 0x849e6c
// 005d31e8  c7860004000044618400 mov dword ptr [esi + 0x400], 0x846144
// 005d31f2  6a00                 push 0
// 005d31f4  e8a7edffff           call 0x5d1fa0
// 005d31f9  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005d3201  e85af5ffff           call 0x5d2760
// 005d3206  89461c               mov dword ptr [esi + 0x1c], eax
// 005d3209  8b8634010000         mov eax, dword ptr [esi + 0x134]
// 005d320f  c7067cbf8300         mov dword ptr [esi], 0x83bf7c
// 005d3215  c7461070bf8300       mov dword ptr [esi + 0x10], 0x83bf70
// 005d321c  c7461468bf8300       mov dword ptr [esi + 0x14], 0x83bf68
// 005d3223  c7462060bf8300       mov dword ptr [esi + 0x20], 0x83bf60
// 005d322a  c7462450bf8300       mov dword ptr [esi + 0x24], 0x83bf50
// 005d3231  c7464440bf8300       mov dword ptr [esi + 0x44], 0x83bf40
// 005d3238  c7466430bf8300       mov dword ptr [esi + 0x64], 0x83bf30
// 005d323f  c7868400000020bf8300 mov dword ptr [esi + 0x84], 0x83bf20
// 005d3249  c786a400000010bf8300 mov dword ptr [esi + 0xa4], 0x83bf10
// 005d3253  c786c400000000bf8300 mov dword ptr [esi + 0xc4], 0x83bf00
// 005d325d  c78630010000f4be8300 mov dword ptr [esi + 0x130], 0x83bef4
// 005d3267  c786a0010000e4be8300 mov dword ptr [esi + 0x1a0], 0x83bee4
// 005d3271  c786c0010000d8be8300 mov dword ptr [esi + 0x1c0], 0x83bed8
// 005d327b  c786cc010000c0be8300 mov dword ptr [esi + 0x1cc], 0x83bec0
// 005d3285  8b4804               mov ecx, dword ptr [eax + 4]
// 005d3288  c7843134010000b4be8300 mov dword ptr [ecx + esi + 0x134], 0x83beb4
// 005d3293  8b9634010000         mov edx, dword ptr [esi + 0x134]
// 005d3299  8b4208               mov eax, dword ptr [edx + 8]
// 005d329c  c7843034010000acbe8300 mov dword ptr [eax + esi + 0x134], 0x83beac
// 005d32a7  8b8e34010000         mov ecx, dword ptr [esi + 0x134]
// 005d32ad  8b510c               mov edx, dword ptr [ecx + 0xc]
// 005d32b0  c784323401000090be8300 mov dword ptr [edx + esi + 0x134], 0x83be90
// 005d32bb  8b8634010000         mov eax, dword ptr [esi + 0x134]
// 005d32c1  8b4004               mov eax, dword ptr [eax + 4]
// 005d32c4  8d8848fdffff         lea ecx, [eax - 0x2b8]
// 005d32ca  898c3030010000       mov dword ptr [eax + esi + 0x130], ecx
// 005d32d1  8b9634010000         mov edx, dword ptr [esi + 0x134]
// 005d32d7  8b4208               mov eax, dword ptr [edx + 8]
// 005d32da  8d8840fdffff         lea ecx, [eax - 0x2c0]
// 005d32e0  898c3030010000       mov dword ptr [eax + esi + 0x130], ecx
// 005d32e7  8b9634010000         mov edx, dword ptr [esi + 0x134]
// 005d32ed  8b420c               mov eax, dword ptr [edx + 0xc]
// 005d32f0  8d8838fdffff         lea ecx, [eax - 0x2c8]
// 005d32f6  898c3030010000       mov dword ptr [eax + esi + 0x130], ecx
// 005d32fd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005d3301  8bc6                 mov eax, esi
// 005d3303  5e                   pop esi
// 005d3304  64890d00000000       mov dword ptr fs:[0], ecx
// 005d330b  83c414               add esp, 0x14
// 005d330e  c20400               ret 4

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
