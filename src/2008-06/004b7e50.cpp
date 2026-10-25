// from server: 100% by king_originala
// roc 2008-06 004b7e50  unit: RBX::Network::VReplicator::?$SignalDesc  size: 198 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b7e50
//
// 004b7e50  6aff                 push -1
// 004b7e52  68ec8b7c00           push 0x7c8bec
// 004b7e57  64a100000000         mov eax, dword ptr fs:[0]
// 004b7e5d  50                   push eax
// 004b7e5e  64892500000000       mov dword ptr fs:[0], esp
// 004b7e65  83ec0c               sub esp, 0xc
// 004b7e68  c744240400000000     mov dword ptr [esp + 4], 0
// 004b7e70  6880010000           push 0x180
// 004b7e75  c744241801000000     mov dword ptr [esp + 0x18], 1
// 004b7e7d  c644240400           mov byte ptr [esp + 4], 0
// 004b7e82  ff15b0288000         call dword ptr [0x8028b0]
// 004b7e88  83c404               add esp, 4
// 004b7e8b  89442408             mov dword ptr [esp + 8], eax
// 004b7e8f  c644241402           mov byte ptr [esp + 0x14], 2
// 004b7e94  85c0                 test eax, eax
// 004b7e96  7413                 je 0x4b7eab
// 004b7e98  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004b7e9c  51                   push ecx
// 004b7e9d  8d542424             lea edx, [esp + 0x24]
// 004b7ea1  52                   push edx
// 004b7ea2  8bc8                 mov ecx, eax
// 004b7ea4  e817e4ffff           call 0x4b62c0
// 004b7ea9  eb02                 jmp 0x4b7ead
// 004b7eab  33c0                 xor eax, eax
// 004b7ead  8b0c24               mov ecx, dword ptr [esp]
// 004b7eb0  56                   push esi
// 004b7eb1  57                   push edi
// 004b7eb2  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 004b7eb6  51                   push ecx
// 004b7eb7  50                   push eax
// 004b7eb8  8bcf                 mov ecx, edi
// 004b7eba  c644242401           mov byte ptr [esp + 0x24], 1
// 004b7ebf  e88c50ffff           call 0x4acf50
// 004b7ec4  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 004b7ec8  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 004b7ed0  c644241c00           mov byte ptr [esp + 0x1c], 0
// 004b7ed5  85f6                 test esi, esi
// 004b7ed7  742a                 je 0x4b7f03
// 004b7ed9  8d5604               lea edx, [esi + 4]
// 004b7edc  83c8ff               or eax, 0xffffffff
// 004b7edf  f00fc102             lock xadd dword ptr [edx], eax
// 004b7ee3  751e                 jne 0x4b7f03
// 004b7ee5  8b16                 mov edx, dword ptr [esi]
// 004b7ee7  8b4204               mov eax, dword ptr [edx + 4]
// 004b7eea  8bce                 mov ecx, esi
// 004b7eec  ffd0                 call eax
// 004b7eee  8d4e08               lea ecx, [esi + 8]
// 004b7ef1  83caff               or edx, 0xffffffff
// 004b7ef4  f00fc111             lock xadd dword ptr [ecx], edx
// 004b7ef8  7509                 jne 0x4b7f03
// 004b7efa  8b06                 mov eax, dword ptr [esi]
// 004b7efc  8b5008               mov edx, dword ptr [eax + 8]
// 004b7eff  8bce                 mov ecx, esi
// 004b7f01  ffd2                 call edx
// 004b7f03  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004b7f07  8bc7                 mov eax, edi
// 004b7f09  5f                   pop edi
// 004b7f0a  5e                   pop esi
// 004b7f0b  64890d00000000       mov dword ptr fs:[0], ecx
// 004b7f12  83c418               add esp, 0x18
// 004b7f15  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern "C" void* (__cdecl *allocate)(unsigned int);
void __cdecl operator delete(void*);

__forceinline void* __cdecl operator new(unsigned int size)
{
    return allocate(size);
}

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Tag {
    char value;
    Tag();
};

struct Shared {
    void* pointer;
    Control* control;
    ~Shared();
};

struct Item {
    char storage[0x180];
    Item(const Shared&, int);
};

struct Result {
    Item* pointer;
    Control* control;
    Result(Item*, Tag);
    ~Result();
};

__forceinline Tag::Tag() : value(0)
{
}

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

__forceinline Result::~Result()
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

Result __cdecl build(Shared source, int value)
{
    Tag tag;
    return Result(new Item(source, value), tag);
}
