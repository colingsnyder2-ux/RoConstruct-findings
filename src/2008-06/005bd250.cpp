// from server: 100% by colin
// roc 2008-06 005bd250  unit: VStockSound::?$FactoryProduct  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005bd250
//
// 005bd250  6aff                 push -1
// 005bd252  68083e7d00           push 0x7d3e08
// 005bd257  64a100000000         mov eax, dword ptr fs:[0]
// 005bd25d  50                   push eax
// 005bd25e  64892500000000       mov dword ptr fs:[0], esp
// 005bd265  83ec08               sub esp, 8
// 005bd268  56                   push esi
// 005bd269  8bf1                 mov esi, ecx
// 005bd26b  57                   push edi
// 005bd26c  8974240c             mov dword ptr [esp + 0xc], esi
// 005bd270  e87bfeffff           call 0x5bd0f0
// 005bd275  33c9                 xor ecx, ecx
// 005bd277  8d4614               lea eax, [esi + 0x14]
// 005bd27a  c70048828300         mov dword ptr [eax], 0x838248
// 005bd280  c70604828300         mov dword ptr [esi], 0x838204
// 005bd286  c74610f4818300       mov dword ptr [esi + 0x10], 0x8381f4
// 005bd28d  c74620ec818300       mov dword ptr [esi + 0x20], 0x8381ec
// 005bd294  c74624dc818300       mov dword ptr [esi + 0x24], 0x8381dc
// 005bd29b  c74644cc818300       mov dword ptr [esi + 0x44], 0x8381cc
// 005bd2a2  c74664bc818300       mov dword ptr [esi + 0x64], 0x8381bc
// 005bd2a9  c78684000000ac818300 mov dword ptr [esi + 0x84], 0x8381ac
// 005bd2b3  c786a40000009c818300 mov dword ptr [esi + 0xa4], 0x83819c
// 005bd2bd  c786c40000008c818300 mov dword ptr [esi + 0xc4], 0x83818c
// 005bd2c7  c7863001000080818300 mov dword ptr [esi + 0x130], 0x838180
// 005bd2d1  884c240b             mov byte ptr [esp + 0xb], cl
// 005bd2d5  894c2418             mov dword ptr [esp + 0x18], ecx
// 005bd2d9  8b0d8c3e9700         mov ecx, dword ptr [0x973e8c]
// 005bd2df  8b11                 mov edx, dword ptr [ecx]
// 005bd2e1  8d7c240b             lea edi, [esp + 0xb]
// 005bd2e5  57                   push edi
// 005bd2e6  50                   push eax
// 005bd2e7  8b420c               mov eax, dword ptr [edx + 0xc]
// 005bd2ea  ffd0                 call eax
// 005bd2ec  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005bd2f0  5f                   pop edi
// 005bd2f1  8bc6                 mov eax, esi
// 005bd2f3  5e                   pop esi
// 005bd2f4  64890d00000000       mov dword ptr fs:[0], ecx
// 005bd2fb  83c414               add esp, 0x14
// 005bd2fe  c3                   ret 

struct Base {
    unsigned char storage[0x134];
    Base();
    ~Base();
};

struct Observer {
    virtual void slot0() = 0;
    virtual void slot1() = 0;
    virtual void slot2() = 0;
    virtual void connect(void *, bool *) = 0;
};

extern Observer *observer;

struct Sound : Base {
    Sound();
};

Sound::Sound() : Base()
{
    unsigned long *endpoint =
        reinterpret_cast<unsigned long *>(storage + 0x14);

    *reinterpret_cast<unsigned long *>(storage + 0x14) = 0x838248;
    *reinterpret_cast<unsigned long *>(storage) = 0x838204;
    *reinterpret_cast<unsigned long *>(storage + 0x10) = 0x8381f4;
    *reinterpret_cast<unsigned long *>(storage + 0x20) = 0x8381ec;
    *reinterpret_cast<unsigned long *>(storage + 0x24) = 0x8381dc;
    *reinterpret_cast<unsigned long *>(storage + 0x44) = 0x8381cc;
    *reinterpret_cast<unsigned long *>(storage + 0x64) = 0x8381bc;
    *reinterpret_cast<unsigned long *>(storage + 0x84) = 0x8381ac;
    *reinterpret_cast<unsigned long *>(storage + 0xa4) = 0x83819c;
    *reinterpret_cast<unsigned long *>(storage + 0xc4) = 0x83818c;
    *reinterpret_cast<unsigned long *>(storage + 0x130) = 0x838180;

    bool flag = false;
    observer->connect(endpoint, &flag);
}
