// from server: 88% by colin
// from server: 86% by king_originala
// roc 2008-06 004b8490  unit: RBX::Network::VReplicator::?$SignalDesc  size: 280 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b8490
//
// 004b8490  64a100000000         mov eax, dword ptr fs:[0]
// 004b8496  6aff                 push -1
// 004b8498  6868917d00           push 0x7d9168
// 004b849d  50                   push eax
// 004b849e  64892500000000       mov dword ptr fs:[0], esp
// 004b84a5  83ec0c               sub esp, 0xc
// 004b84a8  56                   push esi
// 004b84a9  57                   push edi
// 004b84aa  8d442408             lea eax, [esp + 8]
// 004b84ae  8bf9                 mov edi, ecx
// 004b84b0  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004b84b4  50                   push eax
// 004b84b5  51                   push ecx
// 004b84b6  e815ddfeff           call 0x4a61d0
// 004b84bb  83c408               add esp, 8
// 004b84be  e8cd63feff           call 0x49e890
// 004b84c3  80b83101000000       cmp byte ptr [eax + 0x131], 0
// 004b84ca  7476                 je 0x4b8542
// 004b84cc  8d54240c             lea edx, [esp + 0xc]
// 004b84d0  52                   push edx
// 004b84d1  e84a110b00           call 0x569620
// 004b84d6  83c404               add esp, 4
// 004b84d9  8b30                 mov esi, dword ptr [eax]
// 004b84db  6a01                 push 1
// 004b84dd  8d8f542d0000         lea ecx, [edi + 0x2d54]
// 004b84e3  c744242000000000     mov dword ptr [esp + 0x20], 0
// 004b84eb  e8c013ffff           call 0x4a98b0
// 004b84f0  50                   push eax
// 004b84f1  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004b84f5  50                   push eax
// 004b84f6  68c8518200           push 0x8251c8
// 004b84fb  6a01                 push 1
// 004b84fd  56                   push esi
// 004b84fe  e89d0e0b00           call 0x5693a0
// 004b8503  8b442424             mov eax, dword ptr [esp + 0x24]
// 004b8507  83c414               add esp, 0x14
// 004b850a  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 004b8512  85c0                 test eax, eax
// 004b8514  742c                 je 0x4b8542
// 004b8516  8bf0                 mov esi, eax
// 004b8518  83c004               add eax, 4
// 004b851b  83c9ff               or ecx, 0xffffffff
// 004b851e  f00fc108             lock xadd dword ptr [eax], ecx
// 004b8522  751e                 jne 0x4b8542
// 004b8524  8b16                 mov edx, dword ptr [esi]
// 004b8526  8b4204               mov eax, dword ptr [edx + 4]
// 004b8529  8bce                 mov ecx, esi
// 004b852b  ffd0                 call eax
// 004b852d  8d4e08               lea ecx, [esi + 8]
// 004b8530  83caff               or edx, 0xffffffff
// 004b8533  f00fc111             lock xadd dword ptr [ecx], edx
// 004b8537  7509                 jne 0x4b8542
// 004b8539  8b06                 mov eax, dword ptr [esi]
// 004b853b  8b5008               mov edx, dword ptr [eax + 8]
// 004b853e  8bce                 mov ecx, esi
// 004b8540  ffd2                 call edx
// 004b8542  8b87f82c0000         mov eax, dword ptr [edi + 0x2cf8]
// 004b8548  8db7dc2c0000         lea esi, [edi + 0x2cdc]
// 004b854e  8b7e18               mov edi, dword ptr [esi + 0x18]
// 004b8551  03c7                 add eax, edi
// 004b8553  3bf8                 cmp edi, eax
// 004b8555  7606                 jbe 0x4b855d
// 004b8557  ff1590288000         call dword ptr [0x802890]
// 004b855d  8b0e                 mov ecx, dword ptr [esi]
// 004b855f  894c240c             mov dword ptr [esp + 0xc], ecx
// 004b8563  8d4c240c             lea ecx, [esp + 0xc]
// 004b8567  897c2410             mov dword ptr [esp + 0x10], edi
// 004b856b  e8902e1800           call 0x63b400
// 004b8570  8b00                 mov eax, dword ptr [eax]
// 004b8572  50                   push eax
// 004b8573  b990169700           mov ecx, 0x971690
// 004b8578  e8a3300b00           call 0x56b620
// 004b857d  85c0                 test eax, eax
// 004b857f  740d                 je 0x4b858e
// 004b8581  8d542424             lea edx, [esp + 0x24]
// 004b8585  52                   push edx
// 004b8586  8d4810               lea ecx, [eax + 0x10]
// 004b8589  e8c2d3ffff           call 0x4b5950
// 004b858e  8bce                 mov ecx, esi
// 004b8590  e85b5dffff           call 0x4ae2f0
// 004b8595  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004b8599  5f                   pop edi
// 004b859a  5e                   pop esi
// 004b859b  64890d00000000       mov dword ptr fs:[0], ecx
// 004b85a2  83c418               add esp, 0x18
// 004b85a5  c20400               ret 4
#include <intrin.h>

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __stdcall _invalid_parameter_noinfo();

struct RefCount {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Log {
    void __cdecl report(int, const char*, ...);
};

struct Shared {
    Log* pointer;
    RefCount* count;
    Log* operator->() const;
    ~Shared();
};

inline Log* Shared::operator->() const
{
    return pointer;
}

inline Shared::~Shared()
{
    if (count) {
        RefCount* p = count;
        if (_InterlockedExchangeAdd(&p->strong, -1) == 0) {
            p->dispose();
            if (_InterlockedExchangeAdd(&p->weak, -1) == 0)
                p->destroy();
        }
    }
}

struct Settings {
    char padding[0x131];
    unsigned char logging;
};

extern void __cdecl readMarker(void*, int*);
extern Settings* __cdecl settings();
extern Shared __cdecl logger();
extern const char markerFormat[];

struct Address {
    const char* text(int);
};

struct Iterator {
    void* owner;
    unsigned int position;
    void** value();
};

struct Queue {
    void* owner;
    char padding[0x14];
    unsigned int position;
    unsigned int size;
    void advance();
};

struct Signal {
    void notify(void**);
};

struct Entry {
    char padding[0x10];
    Signal signal;
};

struct Registry {
    Entry* find(void*);
};

extern Registry registry;

struct S {
    char padding[0x2cdc];
    Queue queue;
    char gap[0x58];
    Address address;
    void f(void*);
};

void S::f(void* argument)
{
    int marker;
    readMarker(argument, &marker);

    if (settings()->logging)
        logger()->report(1, markerFormat, marker, address.text(1));

    Queue* q = &queue;
    _ReadWriteBarrier();
    unsigned int position = q->position;
    if (position > position + q->size)
        _invalid_parameter_noinfo();

    Iterator iterator;
    iterator.owner = q->owner;
    iterator.position = position;

    Entry* entry = registry.find(*iterator.value());
    if (entry)
        entry->signal.notify(&argument);

    q->advance();
}
