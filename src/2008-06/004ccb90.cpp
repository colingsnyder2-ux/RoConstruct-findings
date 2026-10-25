// from server: 100% by king_originala
// roc 2008-06 004ccb90  unit: RBX::VInstance::?$NonFactoryProduct  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ccb90
//
// 004ccb90  6aff                 push -1
// 004ccb92  6871997c00           push 0x7c9971
// 004ccb97  64a100000000         mov eax, dword ptr fs:[0]
// 004ccb9d  50                   push eax
// 004ccb9e  64892500000000       mov dword ptr fs:[0], esp
// 004ccba5  51                   push ecx
// 004ccba6  56                   push esi
// 004ccba7  8bf1                 mov esi, ecx
// 004ccba9  57                   push edi
// 004ccbaa  89742408             mov dword ptr [esp + 8], esi
// 004ccbae  c70628698200         mov dword ptr [esi], 0x826928
// 004ccbb4  8d4e60               lea ecx, [esi + 0x60]
// 004ccbb7  c744241402000000     mov dword ptr [esp + 0x14], 2
// 004ccbbf  e8ec880c00           call 0x5954b0
// 004ccbc4  8d4e4c               lea ecx, [esi + 0x4c]
// 004ccbc7  c644241401           mov byte ptr [esp + 0x14], 1
// 004ccbcc  e8df880c00           call 0x5954b0
// 004ccbd1  8b7e48               mov edi, dword ptr [esi + 0x48]
// 004ccbd4  c644241400           mov byte ptr [esp + 0x14], 0
// 004ccbd9  85ff                 test edi, edi
// 004ccbdb  742a                 je 0x4ccc07
// 004ccbdd  8d4704               lea eax, [edi + 4]
// 004ccbe0  83c9ff               or ecx, 0xffffffff
// 004ccbe3  f00fc108             lock xadd dword ptr [eax], ecx
// 004ccbe7  751e                 jne 0x4ccc07
// 004ccbe9  8b17                 mov edx, dword ptr [edi]
// 004ccbeb  8b4204               mov eax, dword ptr [edx + 4]
// 004ccbee  8bcf                 mov ecx, edi
// 004ccbf0  ffd0                 call eax
// 004ccbf2  8d4f08               lea ecx, [edi + 8]
// 004ccbf5  83caff               or edx, 0xffffffff
// 004ccbf8  f00fc111             lock xadd dword ptr [ecx], edx
// 004ccbfc  7509                 jne 0x4ccc07
// 004ccbfe  8b07                 mov eax, dword ptr [edi]
// 004ccc00  8b5008               mov edx, dword ptr [eax + 8]
// 004ccc03  8bcf                 mov ecx, edi
// 004ccc05  ffd2                 call edx
// 004ccc07  8d4e04               lea ecx, [esi + 4]
// 004ccc0a  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 004ccc12  e899feffff           call 0x4ccab0
// 004ccc17  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004ccc1b  5f                   pop edi
// 004ccc1c  5e                   pop esi
// 004ccc1d  64890d00000000       mov dword ptr fs:[0], ecx
// 004ccc24  83c410               add esp, 0x10
// 004ccc27  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control {
    virtual void unused();
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

struct Base {
    char storage[64];
    ~Base();
};

struct Member {
    char storage[20];
    ~Member();
};

struct S {
    virtual ~S();

    Base base;
    Shared shared;
    Member first;
    Member second;
};

inline Shared::~Shared()
{
    Control* p = control;
    if (p) {
        if (_InterlockedDecrement(&p->strong) == 0) {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
}

S::~S()
{
}
