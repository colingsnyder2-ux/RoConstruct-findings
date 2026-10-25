// from server: 100% by king_originala
// roc 2008-06 0062c660  unit: RBX::FlagStandService  size: 353 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0062c660
//
// 0062c660  6aff                 push -1
// 0062c662  68b8997d00           push 0x7d99b8
// 0062c667  64a100000000         mov eax, dword ptr fs:[0]
// 0062c66d  50                   push eax
// 0062c66e  64892500000000       mov dword ptr fs:[0], esp
// 0062c675  83ec08               sub esp, 8
// 0062c678  837c241800           cmp dword ptr [esp + 0x18], 0
// 0062c67d  56                   push esi
// 0062c67e  8bf1                 mov esi, ecx
// 0062c680  89742404             mov dword ptr [esp + 4], esi
// 0062c684  c744240800000000     mov dword ptr [esp + 8], 0
// 0062c68c  7414                 je 0x62c6a2
// 0062c68e  c786340100006c9e8400 mov dword ptr [esi + 0x134], 0x849e6c
// 0062c698  c7860004000044618400 mov dword ptr [esi + 0x400], 0x846144
// 0062c6a2  6a00                 push 0
// 0062c6a4  e8d7f5ffff           call 0x62bc80
// 0062c6a9  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0062c6b1  e83a72f9ff           call 0x5c38f0
// 0062c6b6  89461c               mov dword ptr [esi + 0x1c], eax
// 0062c6b9  8b8634010000         mov eax, dword ptr [esi + 0x134]
// 0062c6bf  c70654638400         mov dword ptr [esi], 0x846354
// 0062c6c5  c7461044638400       mov dword ptr [esi + 0x10], 0x846344
// 0062c6cc  c746143c638400       mov dword ptr [esi + 0x14], 0x84633c
// 0062c6d3  c7462034638400       mov dword ptr [esi + 0x20], 0x846334
// 0062c6da  c7462424638400       mov dword ptr [esi + 0x24], 0x846324
// 0062c6e1  c7464414638400       mov dword ptr [esi + 0x44], 0x846314
// 0062c6e8  c7466404638400       mov dword ptr [esi + 0x64], 0x846304
// 0062c6ef  c78684000000f4628400 mov dword ptr [esi + 0x84], 0x8462f4
// 0062c6f9  c786a4000000e4628400 mov dword ptr [esi + 0xa4], 0x8462e4
// 0062c703  c786c4000000d4628400 mov dword ptr [esi + 0xc4], 0x8462d4
// 0062c70d  c78630010000c8628400 mov dword ptr [esi + 0x130], 0x8462c8
// 0062c717  c786a0010000b8628400 mov dword ptr [esi + 0x1a0], 0x8462b8
// 0062c721  c786c0010000ac628400 mov dword ptr [esi + 0x1c0], 0x8462ac
// 0062c72b  c786cc01000094628400 mov dword ptr [esi + 0x1cc], 0x846294
// 0062c735  8b4804               mov ecx, dword ptr [eax + 4]
// 0062c738  c784313401000088628400 mov dword ptr [ecx + esi + 0x134], 0x846288
// 0062c743  8b9634010000         mov edx, dword ptr [esi + 0x134]
// 0062c749  8b4208               mov eax, dword ptr [edx + 8]
// 0062c74c  c784303401000080628400 mov dword ptr [eax + esi + 0x134], 0x846280
// 0062c757  8b8e34010000         mov ecx, dword ptr [esi + 0x134]
// 0062c75d  8b510c               mov edx, dword ptr [ecx + 0xc]
// 0062c760  c784323401000064628400 mov dword ptr [edx + esi + 0x134], 0x846264
// 0062c76b  8b8634010000         mov eax, dword ptr [esi + 0x134]
// 0062c771  8b4004               mov eax, dword ptr [eax + 4]
// 0062c774  8d8848fdffff         lea ecx, [eax - 0x2b8]
// 0062c77a  898c3030010000       mov dword ptr [eax + esi + 0x130], ecx
// 0062c781  8b9634010000         mov edx, dword ptr [esi + 0x134]
// 0062c787  8b4208               mov eax, dword ptr [edx + 8]
// 0062c78a  8d8840fdffff         lea ecx, [eax - 0x2c0]
// 0062c790  898c3030010000       mov dword ptr [eax + esi + 0x130], ecx
// 0062c797  8b9634010000         mov edx, dword ptr [esi + 0x134]
// 0062c79d  8b420c               mov eax, dword ptr [edx + 0xc]
// 0062c7a0  8d8838fdffff         lea ecx, [eax - 0x2c8]
// 0062c7a6  898c3030010000       mov dword ptr [eax + esi + 0x130], ecx
// 0062c7ad  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0062c7b1  8bc6                 mov eax, esi
// 0062c7b3  5e                   pop esi
// 0062c7b4  64890d00000000       mov dword ptr fs:[0], ecx
// 0062c7bb  83c414               add esp, 0x14
// 0062c7be  c20400               ret 4

extern unsigned int __cdecl getType();

struct S
{
    unsigned int data[257];
    void base(int);
    ~S();
    S* f(int);
};

struct Cleanup
{
    S* object;
    Cleanup(S*, int);
    ~Cleanup();
};

inline Cleanup::Cleanup(S* p, int initialize) : object(p)
{
    volatile int state = 0;
    if (initialize)
    {
        p->data[0x134 / 4] = 0x849e6c;
        p->data[0x400 / 4] = 0x846144;
    }
    p->base(0);
}

inline Cleanup::~Cleanup()
{
    if (object)
        object->~S();
}

S* S::f(int initialize)
{
    Cleanup cleanup(this, initialize);
    data[0x1c / 4] = getType();
    data[0] = 0x846354;
    data[0x10 / 4] = 0x846344;
    data[0x14 / 4] = 0x84633c;
    data[0x20 / 4] = 0x846334;
    data[0x24 / 4] = 0x846324;
    data[0x44 / 4] = 0x846314;
    data[0x64 / 4] = 0x846304;
    data[0x84 / 4] = 0x8462f4;
    data[0xa4 / 4] = 0x8462e4;
    data[0xc4 / 4] = 0x8462d4;
    data[0x130 / 4] = 0x8462c8;
    data[0x1a0 / 4] = 0x8462b8;
    data[0x1c0 / 4] = 0x8462ac;
    data[0x1cc / 4] = 0x846294;

    *(unsigned int*)((char*)this + 0x134 +
        ((int*)data[0x134 / 4])[1]) = 0x846288;
    *(unsigned int*)((char*)this + 0x134 +
        ((int*)data[0x134 / 4])[2]) = 0x846280;
    *(unsigned int*)((char*)this + 0x134 +
        ((int*)data[0x134 / 4])[3]) = 0x846264;

    int offset = ((int*)data[0x134 / 4])[1];
    *(int*)((char*)this + 0x130 + offset) = offset - 0x2b8;
    offset = ((int*)data[0x134 / 4])[2];
    *(int*)((char*)this + 0x130 + offset) = offset - 0x2c0;
    offset = ((int*)data[0x134 / 4])[3];
    *(int*)((char*)this + 0x130 + offset) = offset - 0x2c8;

    cleanup.object = 0;
    return this;
}
