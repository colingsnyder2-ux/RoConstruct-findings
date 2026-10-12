// from server: 100% by king_originala
// roc 2008-06 005fc230  unit: RBX::LocalBackpack  size: 244 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005fc230
//
// 005fc230  64a100000000         mov eax, dword ptr fs:[0]
// 005fc236  6aff                 push -1
// 005fc238  6818047c00           push 0x7c0418
// 005fc23d  50                   push eax
// 005fc23e  64892500000000       mov dword ptr fs:[0], esp
// 005fc245  56                   push esi
// 005fc246  8bf1                 mov esi, ecx
// 005fc248  8b442418             mov eax, dword ptr [esp + 0x18]
// 005fc24c  6a00                 push 0
// 005fc24e  6860749300           push 0x937460
// 005fc253  687c909200           push 0x92907c
// 005fc258  6a00                 push 0
// 005fc25a  50                   push eax
// 005fc25b  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005fc263  e85e550a00           call 0x6a17c6
// 005fc268  83c414               add esp, 0x14
// 005fc26b  85c0                 test eax, eax
// 005fc26d  7412                 je 0x5fc281
// 005fc26f  3b461c               cmp eax, dword ptr [esi + 0x1c]
// 005fc272  7564                 jne 0x5fc2d8
// 005fc274  8d8e94feffff         lea ecx, [esi - 0x16c]
// 005fc27a  e8d1feffff           call 0x5fc150
// 005fc27f  eb57                 jmp 0x5fc2d8
// 005fc281  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005fc285  6a00                 push 0
// 005fc287  68ec539300           push 0x9353ec
// 005fc28c  687c909200           push 0x92907c
// 005fc291  6a00                 push 0
// 005fc293  51                   push ecx
// 005fc294  e82d550a00           call 0x6a17c6
// 005fc299  83c414               add esp, 0x14
// 005fc29c  85c0                 test eax, eax
// 005fc29e  740d                 je 0x5fc2ad
// 005fc2a0  8d8e94feffff         lea ecx, [esi - 0x16c]
// 005fc2a6  e825ffffff           call 0x5fc1d0
// 005fc2ab  eb2b                 jmp 0x5fc2d8
// 005fc2ad  8b542418             mov edx, dword ptr [esp + 0x18]
// 005fc2b1  6a00                 push 0
// 005fc2b3  6850199500           push 0x951950
// 005fc2b8  687c909200           push 0x92907c
// 005fc2bd  6a00                 push 0
// 005fc2bf  52                   push edx
// 005fc2c0  e801550a00           call 0x6a17c6
// 005fc2c5  83c414               add esp, 0x14
// 005fc2c8  85c0                 test eax, eax
// 005fc2ca  740c                 je 0x5fc2d8
// 005fc2cc  50                   push eax
// 005fc2cd  8d8e94feffff         lea ecx, [esi - 0x16c]
// 005fc2d3  e8a8f9ffff           call 0x5fbc80
// 005fc2d8  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005fc2dc  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 005fc2e4  85f6                 test esi, esi
// 005fc2e6  742a                 je 0x5fc312
// 005fc2e8  8d4604               lea eax, [esi + 4]
// 005fc2eb  83c9ff               or ecx, 0xffffffff
// 005fc2ee  f00fc108             lock xadd dword ptr [eax], ecx
// 005fc2f2  751e                 jne 0x5fc312
// 005fc2f4  8b16                 mov edx, dword ptr [esi]
// 005fc2f6  8b4204               mov eax, dword ptr [edx + 4]
// 005fc2f9  8bce                 mov ecx, esi
// 005fc2fb  ffd0                 call eax
// 005fc2fd  8d4e08               lea ecx, [esi + 8]
// 005fc300  83caff               or edx, 0xffffffff
// 005fc303  f00fc111             lock xadd dword ptr [ecx], edx
// 005fc307  7509                 jne 0x5fc312
// 005fc309  8b06                 mov eax, dword ptr [esi]
// 005fc30b  8b5008               mov edx, dword ptr [eax + 8]
// 005fc30e  8bce                 mov ecx, esi
// 005fc310  ffd2                 call edx
// 005fc312  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005fc316  64890d00000000       mov dword ptr fs:[0], ecx
// 005fc31d  5e                   pop esi
// 005fc31e  83c40c               add esp, 0xc
// 005fc321  c20c00               ret 0xc

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern "C" void* __cdecl G_006a17c6(void*, long, void*, void*, int);

extern char G_0092907c[];
extern char G_00937460[];
extern char G_009353ec[];
extern char G_00951950[];

struct Control
{
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Shared
{
    void* object;
    Control* control;
    ~Shared();
};

Shared::~Shared()
{
    Control* p = control;
    if (p)
    {
        if (_InterlockedDecrement(&p->strong) == 0)
        {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
}

struct Owner
{
    void G_005fc150();
    void G_005fc1d0();
    void G_005fbc80(void*);
};

struct S
{
    char padding[0x1c];
    void* backpack;
    void f(void*, Shared);
};

void S::f(void*, Shared value)
{
    void* result = G_006a17c6(value.object, 0,
                            G_0092907c, G_00937460, 0);
    if (result)
    {
        if (result == backpack)
            ((Owner*)((char*)this - 0x16c))->G_005fc150();
    }
    else
    {
        result = G_006a17c6(value.object, 0,
                          G_0092907c, G_009353ec, 0);
        if (result)
            ((Owner*)((char*)this - 0x16c))->G_005fc1d0();
        else
        {
            result = G_006a17c6(value.object, 0,
                              G_0092907c, G_00951950, 0);
            if (result)
                ((Owner*)((char*)this - 0x16c))->G_005fbc80(result);
        }
    }
}
