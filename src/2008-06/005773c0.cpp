// from server: 100% by king_originala
// roc 2008-06 005773c0  unit: RBX::DataModel  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005773c0
//
// 005773c0  6aff                 push -1
// 005773c2  6838077d00           push 0x7d0738
// 005773c7  64a100000000         mov eax, dword ptr fs:[0]
// 005773cd  50                   push eax
// 005773ce  64892500000000       mov dword ptr fs:[0], esp
// 005773d5  51                   push ecx
// 005773d6  56                   push esi
// 005773d7  57                   push edi
// 005773d8  8bf9                 mov edi, ecx
// 005773da  897c2408             mov dword ptr [esp + 8], edi
// 005773de  8b7708               mov esi, dword ptr [edi + 8]
// 005773e1  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005773e9  85f6                 test esi, esi
// 005773eb  741a                 je 0x577407
// 005773ed  807e0400             cmp byte ptr [esi + 4], 0
// 005773f1  740b                 je 0x5773fe
// 005773f3  8b0e                 mov ecx, dword ptr [esi]
// 005773f5  e8e6bcfeff           call 0x5630e0
// 005773fa  c6460400             mov byte ptr [esi + 4], 0
// 005773fe  56                   push esi
// 005773ff  e876921200           call 0x6a067a
// 00577404  83c404               add esp, 4
// 00577407  8b7704               mov esi, dword ptr [edi + 4]
// 0057740a  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00577412  85f6                 test esi, esi
// 00577414  742a                 je 0x577440
// 00577416  8d4604               lea eax, [esi + 4]
// 00577419  83c9ff               or ecx, 0xffffffff
// 0057741c  f00fc108             lock xadd dword ptr [eax], ecx
// 00577420  751e                 jne 0x577440
// 00577422  8b16                 mov edx, dword ptr [esi]
// 00577424  8b4204               mov eax, dword ptr [edx + 4]
// 00577427  8bce                 mov ecx, esi
// 00577429  ffd0                 call eax
// 0057742b  8d4e08               lea ecx, [esi + 8]
// 0057742e  83caff               or edx, 0xffffffff
// 00577431  f00fc111             lock xadd dword ptr [ecx], edx
// 00577435  7509                 jne 0x577440
// 00577437  8b06                 mov eax, dword ptr [esi]
// 00577439  8b5008               mov edx, dword ptr [eax + 8]
// 0057743c  8bce                 mov ecx, esi
// 0057743e  ffd2                 call edx
// 00577440  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00577444  5f                   pop edi
// 00577445  5e                   pop esi
// 00577446  64890d00000000       mov dword ptr fs:[0], ecx
// 0057744d  83c410               add esp, 0x10
// 00577450  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

void __cdecl operator delete(void*);

struct ContentProvider {
    int value;
    unsigned char flag;
    int count;
    void f();
};

struct Control {
    virtual void reserved();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Shared {
    void* object;
    Control* control;
    ~Shared();
};

struct Guard {
    ContentProvider* provider;
    unsigned char active;
    ~Guard();
};

struct DataModel {
    Shared shared;
    Guard* guard;
    ~DataModel();
};

inline Shared::~Shared()
{
    Control* p = control;
    if (p && _InterlockedDecrement(&p->strong) == 0) {
        p->dispose();
        if (_InterlockedDecrement(&p->weak) == 0)
            p->destroy();
    }
}

inline Guard::~Guard()
{
    if (active) {
        provider->f();
        active = 0;
    }
}

DataModel::~DataModel()
{
    delete guard;
}
