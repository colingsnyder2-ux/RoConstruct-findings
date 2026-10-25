// from server: 100% by king_originala
// roc 2008-06 005d1fa0  unit: RBX::VSpawnerService::?$FactoryProduct  size: 297 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d1fa0
//
// 005d1fa0  51                   push ecx
// 005d1fa1  837c240800           cmp dword ptr [esp + 8], 0
// 005d1fa6  56                   push esi
// 005d1fa7  8bf1                 mov esi, ecx
// 005d1fa9  c744240400000000     mov dword ptr [esp + 4], 0
// 005d1fb1  7414                 je 0x5d1fc7
// 005d1fb3  c786340100006c9e8400 mov dword ptr [esi + 0x134], 0x849e6c
// 005d1fbd  c7860004000044618400 mov dword ptr [esi + 0x400], 0x846144
// 005d1fc7  6a00                 push 0
// 005d1fc9  e802b5fcff           call 0x59d4d0
// 005d1fce  8b8634010000         mov eax, dword ptr [esi + 0x134]
// 005d1fd4  c7063cbb8300         mov dword ptr [esi], 0x83bb3c
// 005d1fda  c746102cbb8300       mov dword ptr [esi + 0x10], 0x83bb2c
// 005d1fe1  c7461424bb8300       mov dword ptr [esi + 0x14], 0x83bb24
// 005d1fe8  c746201cbb8300       mov dword ptr [esi + 0x20], 0x83bb1c
// 005d1fef  c746240cbb8300       mov dword ptr [esi + 0x24], 0x83bb0c
// 005d1ff6  c74644fcba8300       mov dword ptr [esi + 0x44], 0x83bafc
// 005d1ffd  c74664ecba8300       mov dword ptr [esi + 0x64], 0x83baec
// 005d2004  c78684000000dcba8300 mov dword ptr [esi + 0x84], 0x83badc
// 005d200e  c786a4000000ccba8300 mov dword ptr [esi + 0xa4], 0x83bacc
// 005d2018  c786c4000000bcba8300 mov dword ptr [esi + 0xc4], 0x83babc
// 005d2022  c78630010000b0ba8300 mov dword ptr [esi + 0x130], 0x83bab0
// 005d202c  c786a0010000a0ba8300 mov dword ptr [esi + 0x1a0], 0x83baa0
// 005d2036  c786c001000094ba8300 mov dword ptr [esi + 0x1c0], 0x83ba94
// 005d2040  c786cc0100007cba8300 mov dword ptr [esi + 0x1cc], 0x83ba7c
// 005d204a  8b4804               mov ecx, dword ptr [eax + 4]
// 005d204d  c784313401000070ba8300 mov dword ptr [ecx + esi + 0x134], 0x83ba70
// 005d2058  8b9634010000         mov edx, dword ptr [esi + 0x134]
// 005d205e  8b4208               mov eax, dword ptr [edx + 8]
// 005d2061  c784303401000068ba8300 mov dword ptr [eax + esi + 0x134], 0x83ba68
// 005d206c  8b8e34010000         mov ecx, dword ptr [esi + 0x134]
// 005d2072  8b510c               mov edx, dword ptr [ecx + 0xc]
// 005d2075  c78432340100004cba8300 mov dword ptr [edx + esi + 0x134], 0x83ba4c
// 005d2080  8b8634010000         mov eax, dword ptr [esi + 0x134]
// 005d2086  8b4004               mov eax, dword ptr [eax + 4]
// 005d2089  8d8848fdffff         lea ecx, [eax - 0x2b8]
// 005d208f  898c3030010000       mov dword ptr [eax + esi + 0x130], ecx
// 005d2096  8b9634010000         mov edx, dword ptr [esi + 0x134]
// 005d209c  8b4208               mov eax, dword ptr [edx + 8]
// 005d209f  8d8840fdffff         lea ecx, [eax - 0x2c0]
// 005d20a5  898c3030010000       mov dword ptr [eax + esi + 0x130], ecx
// 005d20ac  8b9634010000         mov edx, dword ptr [esi + 0x134]
// 005d20b2  8b420c               mov eax, dword ptr [edx + 0xc]
// 005d20b5  8d8838fdffff         lea ecx, [eax - 0x2c8]
// 005d20bb  898c3030010000       mov dword ptr [eax + esi + 0x130], ecx
// 005d20c2  8bc6                 mov eax, esi
// 005d20c4  5e                   pop esi
// 005d20c5  59                   pop ecx
// 005d20c6  c20400               ret 4

struct S {
    unsigned int data[257];
    void base(int);
    S* initialize(int);
};

S* S::initialize(int complete)
{
    volatile int state = 0;
    if (complete) {
        data[0x134 / 4] = 0x849e6c;
        data[0x400 / 4] = 0x846144;
    }

    base(0);

    int* table = (int*)data[0x134 / 4];
    data[0] = 0x83bb3c;
    data[0x10 / 4] = 0x83bb2c;
    data[0x14 / 4] = 0x83bb24;
    data[0x20 / 4] = 0x83bb1c;
    data[0x24 / 4] = 0x83bb0c;
    data[0x44 / 4] = 0x83bafc;
    data[0x64 / 4] = 0x83baec;
    data[0x84 / 4] = 0x83badc;
    data[0xa4 / 4] = 0x83bacc;
    data[0xc4 / 4] = 0x83babc;
    data[0x130 / 4] = 0x83bab0;
    data[0x1a0 / 4] = 0x83baa0;
    data[0x1c0 / 4] = 0x83ba94;
    data[0x1cc / 4] = 0x83ba7c;

    *(unsigned int*)((char*)this + 0x134 + table[1]) = 0x83ba70;
    *(unsigned int*)((char*)this + 0x134 +
        ((int*)data[0x134 / 4])[2]) = 0x83ba68;
    *(unsigned int*)((char*)this + 0x134 +
        ((int*)data[0x134 / 4])[3]) = 0x83ba4c;

    int offset = ((int*)data[0x134 / 4])[1];
    *(int*)((char*)this + 0x130 + offset) = offset - 0x2b8;
    offset = ((int*)data[0x134 / 4])[2];
    *(int*)((char*)this + 0x130 + offset) = offset - 0x2c0;
    offset = ((int*)data[0x134 / 4])[3];
    *(int*)((char*)this + 0x130 + offset) = offset - 0x2c8;

    return this;
}
