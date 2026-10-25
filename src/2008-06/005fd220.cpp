// from server: 100% by king_originala
// roc 2008-06 005fd220  unit: RBX::LocalBackpack  size: 260 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005fd220
//
// 005fd220  64a100000000         mov eax, dword ptr fs:[0]
// 005fd226  6aff                 push -1
// 005fd228  6818047c00           push 0x7c0418
// 005fd22d  50                   push eax
// 005fd22e  64892500000000       mov dword ptr fs:[0], esp
// 005fd235  56                   push esi
// 005fd236  57                   push edi
// 005fd237  8bf9                 mov edi, ecx
// 005fd239  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005fd23d  6a00                 push 0
// 005fd23f  6860749300           push 0x937460
// 005fd244  687c909200           push 0x92907c
// 005fd249  6a00                 push 0
// 005fd24b  50                   push eax
// 005fd24c  c744242400000000     mov dword ptr [esp + 0x24], 0
// 005fd254  e86d450a00           call 0x6a17c6
// 005fd259  8bf0                 mov esi, eax
// 005fd25b  83c414               add esp, 0x14
// 005fd25e  85f6                 test esi, esi
// 005fd260  741d                 je 0x5fd27f
// 005fd262  81c798feffff         add edi, 0xfffffe98
// 005fd268  57                   push edi
// 005fd269  e812dae9ff           call 0x49ac80
// 005fd26e  83c404               add esp, 4
// 005fd271  3bf0                 cmp esi, eax
// 005fd273  7562                 jne 0x5fd2d7
// 005fd275  56                   push esi
// 005fd276  8bcf                 mov ecx, edi
// 005fd278  e893f5ffff           call 0x5fc810
// 005fd27d  eb58                 jmp 0x5fd2d7
// 005fd27f  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005fd283  6a00                 push 0
// 005fd285  68ec539300           push 0x9353ec
// 005fd28a  687c909200           push 0x92907c
// 005fd28f  6a00                 push 0
// 005fd291  51                   push ecx
// 005fd292  e82f450a00           call 0x6a17c6
// 005fd297  83c414               add esp, 0x14
// 005fd29a  85c0                 test eax, eax
// 005fd29c  740e                 je 0x5fd2ac
// 005fd29e  50                   push eax
// 005fd29f  8d8f98feffff         lea ecx, [edi - 0x168]
// 005fd2a5  e896f6ffff           call 0x5fc940
// 005fd2aa  eb2b                 jmp 0x5fd2d7
// 005fd2ac  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005fd2b0  6a00                 push 0
// 005fd2b2  6850199500           push 0x951950
// 005fd2b7  687c909200           push 0x92907c
// 005fd2bc  6a00                 push 0
// 005fd2be  52                   push edx
// 005fd2bf  e802450a00           call 0x6a17c6
// 005fd2c4  83c414               add esp, 0x14
// 005fd2c7  85c0                 test eax, eax
// 005fd2c9  740c                 je 0x5fd2d7
// 005fd2cb  50                   push eax
// 005fd2cc  8d8f98feffff         lea ecx, [edi - 0x168]
// 005fd2d2  e8d9fdffff           call 0x5fd0b0
// 005fd2d7  8b742420             mov esi, dword ptr [esp + 0x20]
// 005fd2db  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005fd2e3  85f6                 test esi, esi
// 005fd2e5  742a                 je 0x5fd311
// 005fd2e7  8d4604               lea eax, [esi + 4]
// 005fd2ea  83c9ff               or ecx, 0xffffffff
// 005fd2ed  f00fc108             lock xadd dword ptr [eax], ecx
// 005fd2f1  751e                 jne 0x5fd311
// 005fd2f3  8b16                 mov edx, dword ptr [esi]
// 005fd2f5  8b4204               mov eax, dword ptr [edx + 4]
// 005fd2f8  8bce                 mov ecx, esi
// 005fd2fa  ffd0                 call eax
// 005fd2fc  8d4e08               lea ecx, [esi + 8]
// 005fd2ff  83caff               or edx, 0xffffffff
// 005fd302  f00fc111             lock xadd dword ptr [ecx], edx
// 005fd306  7509                 jne 0x5fd311
// 005fd308  8b06                 mov eax, dword ptr [esi]
// 005fd30a  8b5008               mov edx, dword ptr [eax + 8]
// 005fd30d  8bce                 mov ecx, esi
// 005fd30f  ffd2                 call edx
// 005fd311  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005fd315  5f                   pop edi
// 005fd316  64890d00000000       mov dword ptr fs:[0], ecx
// 005fd31d  5e                   pop esi
// 005fd31e  83c40c               add esp, 0xc
// 005fd321  c20c00               ret 0xc

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern "C" void* __cdecl G_006a17c6(void*, long, void*, void*, int);
extern "C" void* __cdecl G_0049ac80(void*);

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
    void G_005fc810(void*);
    void G_005fc940(void*);
    void G_005fd0b0(void*);
};

struct S
{
    void f(void*, Shared);
};

void S::f(void*, Shared value)
{
    void* result = G_006a17c6(value.object, 0,
                            G_0092907c, G_00937460, 0);
    if (result)
    {
        Owner* owner = (Owner*)((char*)this - 0x168);
        if (result == G_0049ac80(owner))
            owner->G_005fc810(result);
    }
    else
    {
        result = G_006a17c6(value.object, 0,
                           G_0092907c, G_009353ec, 0);
        if (result)
            ((Owner*)((char*)this - 0x168))->G_005fc940(result);
        else
        {
            result = G_006a17c6(value.object, 0,
                               G_0092907c, G_00951950, 0);
            if (result)
                ((Owner*)((char*)this - 0x168))->G_005fd0b0(result);
        }
    }
}
