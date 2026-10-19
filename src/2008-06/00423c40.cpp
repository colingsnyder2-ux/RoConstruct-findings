// from server: 89% by colin
// from server: 88% by king_originala
// roc 2008-06 00423c40  unit: CSelectionTreeCtrl  size: 269 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00423c40
//
// 00423c40  64a100000000         mov eax, dword ptr fs:[0]
// 00423c46  6aff                 push -1
// 00423c48  6838ea7b00           push 0x7bea38
// 00423c4d  50                   push eax
// 00423c4e  64892500000000       mov dword ptr fs:[0], esp
// 00423c55  83ec18               sub esp, 0x18
// 00423c58  55                   push ebp
// 00423c59  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 00423c5d  56                   push esi
// 00423c5e  8bf1                 mov esi, ecx
// 00423c60  85ed                 test ebp, ebp
// 00423c62  7515                 jne 0x423c79
// 00423c64  5e                   pop esi
// 00423c65  33c0                 xor eax, eax
// 00423c67  5d                   pop ebp
// 00423c68  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00423c6c  64890d00000000       mov dword ptr fs:[0], ecx
// 00423c73  83c424               add esp, 0x24
// 00423c76  c20400               ret 4
// 00423c79  53                   push ebx
// 00423c7a  55                   push ebp
// 00423c7b  e8d6d22700           call 0x6a0f56
// 00423c80  85c0                 test eax, eax
// 00423c82  0f84af000000         je 0x423d37
// 00423c88  8b580c               mov ebx, dword ptr [eax + 0xc]
// 00423c8b  8b4010               mov eax, dword ptr [eax + 0x10]
// 00423c8e  895c240c             mov dword ptr [esp + 0xc], ebx
// 00423c92  89442410             mov dword ptr [esp + 0x10], eax
// 00423c96  85c0                 test eax, eax
// 00423c98  740c                 je 0x423ca6
// 00423c9a  83c004               add eax, 4
// 00423c9d  b901000000           mov ecx, 1
// 00423ca2  f00fc108             lock xadd dword ptr [eax], ecx
// 00423ca6  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 00423cae  85db                 test ebx, ebx
// 00423cb0  7474                 je 0x423d26
// 00423cb2  8b06                 mov eax, dword ptr [esi]
// 00423cb4  57                   push edi
// 00423cb5  8d542418             lea edx, [esp + 0x18]
// 00423cb9  52                   push edx
// 00423cba  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 00423cc0  8bce                 mov ecx, esi
// 00423cc2  ffd2                 call edx
// 00423cc4  8bc8                 mov ecx, eax
// 00423cc6  e87500ffff           call 0x413d40
// 00423ccb  8b16                 mov edx, dword ptr [esi]
// 00423ccd  8bf8                 mov edi, eax
// 00423ccf  8d442420             lea eax, [esp + 0x20]
// 00423cd3  50                   push eax
// 00423cd4  8b8250010000         mov eax, dword ptr [edx + 0x150]
// 00423cda  8bce                 mov ecx, esi
// 00423cdc  ffd0                 call eax
// 00423cde  8bc8                 mov ecx, eax
// 00423ce0  e82b00ffff           call 0x413d10
// 00423ce5  8b4f04               mov ecx, dword ptr [edi + 4]
// 00423ce8  8b17                 mov edx, dword ptr [edi]
// 00423cea  51                   push ecx
// 00423ceb  8b4804               mov ecx, dword ptr [eax + 4]
// 00423cee  52                   push edx
// 00423cef  8b10                 mov edx, dword ptr [eax]
// 00423cf1  51                   push ecx
// 00423cf2  52                   push edx
// 00423cf3  8bcb                 mov ecx, ebx
// 00423cf5  e806faffff           call 0x423700
// 00423cfa  5f                   pop edi
// 00423cfb  84c0                 test al, al
// 00423cfd  7427                 je 0x423d26
// 00423cff  8d4c240c             lea ecx, [esp + 0xc]
// 00423d03  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 00423d0b  e850c91d00           call 0x600660
// 00423d10  5b                   pop ebx
// 00423d11  5e                   pop esi
// 00423d12  8bc5                 mov eax, ebp
// 00423d14  5d                   pop ebp
// 00423d15  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00423d19  64890d00000000       mov dword ptr fs:[0], ecx
// 00423d20  83c424               add esp, 0x24
// 00423d23  c20400               ret 4
// 00423d26  8d4c240c             lea ecx, [esp + 0xc]
// 00423d2a  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 00423d32  e829c91d00           call 0x600660
// 00423d37  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00423d3b  5b                   pop ebx
// 00423d3c  5e                   pop esi
// 00423d3d  33c0                 xor eax, eax
// 00423d3f  5d                   pop ebp
// 00423d40  64890d00000000       mov dword ptr fs:[0], ecx
// 00423d47  83c424               add esp, 0x24
// 00423d4a  c20400               ret 4

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Result {
    void* data;
    unsigned int position;
};

struct CopyVerb {
    void* data;
    unsigned int position;
    Result* get();
    Result* f();
};

struct Object {
    bool contains(Result first, Result last);
};

struct Control {
    void* table;
    volatile long references;
};

struct Entry {
    unsigned int reserved[3];
    Object* object;
    Control* control;
};

struct Shared {
    Object* object;
    Control* control;
    Shared(Object* value, Control* owner);
    ~Shared();
};

inline Shared::Shared(Object* value, Control* owner)
    : object(value), control(owner)
{
    if (owner)
        _InterlockedIncrement(&owner->references);
}

#define SLOT(n) virtual void slot##n();
#define FOUR(n) SLOT(n##0) SLOT(n##1) SLOT(n##2) SLOT(n##3)
#define TEN(n) FOUR(n) SLOT(n##4) SLOT(n##5) SLOT(n##6) SLOT(n##7) SLOT(n##8) SLOT(n##9)

struct CSelectionTreeCtrl {
    TEN(0)
    TEN(1)
    TEN(2)
    TEN(3)
    TEN(4)
    TEN(5)
    TEN(6)
    TEN(7)
    FOUR(8)
    virtual CopyVerb range();
    Entry* lookup(void* item);
    void* find(void* item);
};

#undef TEN
#undef FOUR
#undef SLOT

void* CSelectionTreeCtrl::find(void* item)
{
    if (!item)
        return 0;

    Entry* entry = lookup(item);
    if (entry) {
        Object* object = entry->object;
        Shared held(object, entry->control);
        if (object) {
            Result* last = range().f();
            Result* first = range().get();
            if (object->contains(*first, *last))
                return item;
        }
    }
    return 0;
}
