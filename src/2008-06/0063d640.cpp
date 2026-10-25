// from server: 100% by king_originala
// roc 2008-06 0063d640  unit: RBX::Seat  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063d640
//
// 0063d640  6aff                 push -1
// 0063d642  68c4a77d00           push 0x7da7c4
// 0063d647  64a100000000         mov eax, dword ptr fs:[0]
// 0063d64d  50                   push eax
// 0063d64e  64892500000000       mov dword ptr fs:[0], esp
// 0063d655  51                   push ecx
// 0063d656  56                   push esi
// 0063d657  57                   push edi
// 0063d658  8bf9                 mov edi, ecx
// 0063d65a  897c2408             mov dword ptr [esp + 8], edi
// 0063d65e  8bb71c040000         mov esi, dword ptr [edi + 0x41c]
// 0063d664  c744241402000000     mov dword ptr [esp + 0x14], 2
// 0063d66c  85f6                 test esi, esi
// 0063d66e  742a                 je 0x63d69a
// 0063d670  8d4604               lea eax, [esi + 4]
// 0063d673  83c9ff               or ecx, 0xffffffff
// 0063d676  f00fc108             lock xadd dword ptr [eax], ecx
// 0063d67a  751e                 jne 0x63d69a
// 0063d67c  8b16                 mov edx, dword ptr [esi]
// 0063d67e  8b4204               mov eax, dword ptr [edx + 4]
// 0063d681  8bce                 mov ecx, esi
// 0063d683  ffd0                 call eax
// 0063d685  8d4e08               lea ecx, [esi + 8]
// 0063d688  83caff               or edx, 0xffffffff
// 0063d68b  f00fc111             lock xadd dword ptr [ecx], edx
// 0063d68f  7509                 jne 0x63d69a
// 0063d691  8b06                 mov eax, dword ptr [esi]
// 0063d693  8b5008               mov edx, dword ptr [eax + 8]
// 0063d696  8bce                 mov ecx, esi
// 0063d698  ffd2                 call edx
// 0063d69a  8d8ffc030000         lea ecx, [edi + 0x3fc]
// 0063d6a0  c644241401           mov byte ptr [esp + 0x14], 1
// 0063d6a5  e8067ef5ff           call 0x5954b0
// 0063d6aa  8d8fe8030000         lea ecx, [edi + 0x3e8]
// 0063d6b0  c644241400           mov byte ptr [esp + 0x14], 0
// 0063d6b5  e8f67df5ff           call 0x5954b0
// 0063d6ba  8bcf                 mov ecx, edi
// 0063d6bc  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0063d6c4  e867edffff           call 0x63c430
// 0063d6c9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0063d6cd  5f                   pop edi
// 0063d6ce  5e                   pop esi
// 0063d6cf  64890d00000000       mov dword ptr fs:[0], ecx
// 0063d6d6  83c410               add esp, 0x10
// 0063d6d9  c3                   ret 

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

__forceinline Shared::~Shared()
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

struct ThreadRef {
    unsigned char storage[20];
    ~ThreadRef();
};

struct Base {
    unsigned char storage[0x3e8];
    ~Base();
};

struct Seat : Base {
    ThreadRef first;
    ThreadRef second;
    unsigned char padding[8];
    Shared shared;
    ~Seat();
};

Seat::~Seat()
{
}
