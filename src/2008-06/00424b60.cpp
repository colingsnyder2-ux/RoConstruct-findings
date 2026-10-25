// from server: 100% by king_originala
// roc 2008-06 00424b60  unit: CRobloxTreeCtrlNode  size: 157 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00424b60
//
// 00424b60  6aff                 push -1
// 00424b62  6868917d00           push 0x7d9168
// 00424b67  64a100000000         mov eax, dword ptr fs:[0]
// 00424b6d  50                   push eax
// 00424b6e  64892500000000       mov dword ptr fs:[0], esp
// 00424b75  83ec08               sub esp, 8
// 00424b78  56                   push esi
// 00424b79  8d442404             lea eax, [esp + 4]
// 00424b7d  57                   push edi
// 00424b7e  50                   push eax
// 00424b7f  e89c040200           call 0x445020
// 00424b84  83c404               add esp, 4
// 00424b87  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00424b8b  6a01                 push 1
// 00424b8d  51                   push ecx
// 00424b8e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00424b92  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00424b9a  e871e60100           call 0x443210
// 00424b9f  85c0                 test eax, eax
// 00424ba1  740b                 je 0x424bae
// 00424ba3  8bc8                 mov ecx, eax
// 00424ba5  e886afffff           call 0x41fb30
// 00424baa  8bf8                 mov edi, eax
// 00424bac  eb02                 jmp 0x424bb0
// 00424bae  33ff                 xor edi, edi
// 00424bb0  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00424bb4  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 00424bbc  85f6                 test esi, esi
// 00424bbe  742a                 je 0x424bea
// 00424bc0  8d5604               lea edx, [esi + 4]
// 00424bc3  83c8ff               or eax, 0xffffffff
// 00424bc6  f00fc102             lock xadd dword ptr [edx], eax
// 00424bca  751e                 jne 0x424bea
// 00424bcc  8b16                 mov edx, dword ptr [esi]
// 00424bce  8b4204               mov eax, dword ptr [edx + 4]
// 00424bd1  8bce                 mov ecx, esi
// 00424bd3  ffd0                 call eax
// 00424bd5  8d4e08               lea ecx, [esi + 8]
// 00424bd8  83caff               or edx, 0xffffffff
// 00424bdb  f00fc111             lock xadd dword ptr [ecx], edx
// 00424bdf  7509                 jne 0x424bea
// 00424be1  8b06                 mov eax, dword ptr [esi]
// 00424be3  8b5008               mov edx, dword ptr [eax + 8]
// 00424be6  8bce                 mov ecx, esi
// 00424be8  ffd2                 call edx
// 00424bea  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00424bee  8bc7                 mov eax, edi
// 00424bf0  5f                   pop edi
// 00424bf1  5e                   pop esi
// 00424bf2  64890d00000000       mov dword ptr fs:[0], ecx
// 00424bf9  83c414               add esp, 0x14
// 00424bfc  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Target {
    int invoke(int a, int b);
};

struct S {
    char padding[0x130];
    Target* target;
    int invoke(int a, int b);
};

struct Node {
    int get();
};

struct RefCount {
    virtual void reserved();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Handle {
    S* pointer;
    RefCount* count;
    ~Handle();
};

Handle __cdecl acquire();

__forceinline Handle::~Handle()
{
    RefCount* p = count;
    if (p) {
        if (_InterlockedDecrement(&p->strong) == 0) {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
}

int __cdecl lookup(int value)
{
    Handle handle = acquire();
    int node = handle.pointer->invoke(value, 1);
    return node ? ((Node*)node)->get() : 0;
}
