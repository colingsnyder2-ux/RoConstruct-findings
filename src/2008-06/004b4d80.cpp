// from server: 100% by colin
// roc 2008-06 004b4d80  unit: RBX::Network::Replicator::DeleteInstanceItem  size: 198 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b4d80
//
// 004b4d80  6aff                 push -1
// 004b4d82  68bea47d00           push 0x7da4be
// 004b4d87  64a100000000         mov eax, dword ptr fs:[0]
// 004b4d8d  50                   push eax
// 004b4d8e  64892500000000       mov dword ptr fs:[0], esp
// 004b4d95  83ec08               sub esp, 8
// 004b4d98  56                   push esi
// 004b4d99  8bf1                 mov esi, ecx
// 004b4d9b  c70600000000         mov dword ptr [esi], 0
// 004b4da1  89742404             mov dword ptr [esp + 4], esi
// 004b4da5  c7460400000000       mov dword ptr [esi + 4], 0
// 004b4dac  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004b4db0  8b11                 mov edx, dword ptr [ecx]
// 004b4db2  6a00                 push 0
// 004b4db4  83ec18               sub esp, 0x18
// 004b4db7  8bc4                 mov eax, esp
// 004b4db9  8910                 mov dword ptr [eax], edx
// 004b4dbb  8b5104               mov edx, dword ptr [ecx + 4]
// 004b4dbe  895004               mov dword ptr [eax + 4], edx
// 004b4dc1  8b5108               mov edx, dword ptr [ecx + 8]
// 004b4dc4  895008               mov dword ptr [eax + 8], edx
// 004b4dc7  8b510c               mov edx, dword ptr [ecx + 0xc]
// 004b4dca  89500c               mov dword ptr [eax + 0xc], edx
// 004b4dcd  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 004b4dd0  c744243000000000     mov dword ptr [esp + 0x30], 0
// 004b4dd8  89642424             mov dword ptr [esp + 0x24], esp
// 004b4ddc  894810               mov dword ptr [eax + 0x10], ecx
// 004b4ddf  85c9                 test ecx, ecx
// 004b4de1  740c                 je 0x4b4def
// 004b4de3  83c104               add ecx, 4
// 004b4de6  b801000000           mov eax, 1
// 004b4deb  f00fc101             lock xadd dword ptr [ecx], eax
// 004b4def  8d4e08               lea ecx, [esi + 8]
// 004b4df2  e8c9f6ffff           call 0x4b44c0
// 004b4df7  6a28                 push 0x28
// 004b4df9  c644241801           mov byte ptr [esp + 0x18], 1
// 004b4dfe  e81dbb1e00           call 0x6a0920
// 004b4e03  83c404               add esp, 4
// 004b4e06  8944241c             mov dword ptr [esp + 0x1c], eax
// 004b4e0a  c644241402           mov byte ptr [esp + 0x14], 2
// 004b4e0f  85c0                 test eax, eax
// 004b4e11  7409                 je 0x4b4e1c
// 004b4e13  8bc8                 mov ecx, eax
// 004b4e15  e8265ff6ff           call 0x41ad40
// 004b4e1a  eb02                 jmp 0x4b4e1e
// 004b4e1c  33c0                 xor eax, eax
// 004b4e1e  50                   push eax
// 004b4e1f  8bce                 mov ecx, esi
// 004b4e21  c644241801           mov byte ptr [esp + 0x18], 1
// 004b4e26  e8c562f6ff           call 0x41b0f0
// 004b4e2b  8bce                 mov ecx, esi
// 004b4e2d  e80e0a0e00           call 0x595840
// 004b4e32  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004b4e36  8bc6                 mov eax, esi
// 004b4e38  64890d00000000       mov dword ptr fs:[0], ecx
// 004b4e3f  5e                   pop esi
// 004b4e40  83c414               add esp, 0x14
// 004b4e43  c20400               ret 4

extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedExchangeAdd)

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct RefCount
{
    long reserved;
    volatile long count;

    void addRef();
};

inline void RefCount::addRef()
{
    _InterlockedIncrement(&count);
}

struct Argument
{
    long a;
    long b;
    long c;
    void* object;
    RefCount* control;
    long padding;

    Argument(const Argument&);
    ~Argument();
};

inline Argument::Argument(const Argument& other)
    : a(other.a), b(other.b), c(other.c),
      object(other.object), control(other.control)
{
    if (control)
        control->addRef();
}

struct Holder
{
    char storage[40];
    Holder();
};

struct Count
{
    RefCount* control;

    Count();
    ~Count();
};

inline Count::Count() : control(0)
{
}

struct Base
{
    void* object;
    Count control;

    Base();
    void reset(Holder*);
};

inline Base::Base() : object(0), control()
{
}

struct Member
{
    char storage[24];
    Member(Argument, int);
    ~Member();
};

struct S : Base
{
    Member member;

    S(const Argument&);
    void finish();
};

S::S(const Argument& argument)
    : member(argument, 0)
{
    reset(new Holder);
    finish();
}
