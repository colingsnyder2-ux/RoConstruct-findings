// from server: 100% by king_originala
// roc 2008-06 0048af10  unit: RBX::Network::P8Player::?$GetSetImpl  size: 283 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048af10
//
// 0048af10  55                   push ebp
// 0048af11  8bec                 mov ebp, esp
// 0048af13  6aff                 push -1
// 0048af15  6819617c00           push 0x7c6119
// 0048af1a  64a100000000         mov eax, dword ptr fs:[0]
// 0048af20  50                   push eax
// 0048af21  64892500000000       mov dword ptr fs:[0], esp
// 0048af28  83ec2c               sub esp, 0x2c
// 0048af2b  53                   push ebx
// 0048af2c  56                   push esi
// 0048af2d  57                   push edi
// 0048af2e  8965f0               mov dword ptr [ebp - 0x10], esp
// 0048af31  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0048af38  c645fc01             mov byte ptr [ebp - 4], 1
// 0048af3c  85c9                 test ecx, ecx
// 0048af3e  7408                 je 0x48af48
// 0048af40  8d91d0feffff         lea edx, [ecx - 0x130]
// 0048af46  eb02                 jmp 0x48af4a
// 0048af48  33d2                 xor edx, edx
// 0048af4a  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0048af4d  83ec08               sub esp, 8
// 0048af50  8bc4                 mov eax, esp
// 0048af52  8908                 mov dword ptr [eax], ecx
// 0048af54  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0048af57  894804               mov dword ptr [eax + 4], ecx
// 0048af5a  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0048af5d  8965ec               mov dword ptr [ebp - 0x14], esp
// 0048af60  85c0                 test eax, eax
// 0048af62  740c                 je 0x48af70
// 0048af64  83c004               add eax, 4
// 0048af67  b901000000           mov ecx, 1
// 0048af6c  f00fc108             lock xadd dword ptr [eax], ecx
// 0048af70  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 0048af73  8b01                 mov eax, dword ptr [ecx]
// 0048af75  52                   push edx
// 0048af76  8b10                 mov edx, dword ptr [eax]
// 0048af78  ffd2                 call edx
// 0048af7a  8b750c               mov esi, dword ptr [ebp + 0xc]
// 0048af7d  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 0048af84  85f6                 test esi, esi
// 0048af86  742a                 je 0x48afb2
// 0048af88  8d4e04               lea ecx, [esi + 4]
// 0048af8b  83caff               or edx, 0xffffffff
// 0048af8e  f00fc111             lock xadd dword ptr [ecx], edx
// 0048af92  751e                 jne 0x48afb2
// 0048af94  8b06                 mov eax, dword ptr [esi]
// 0048af96  8b5004               mov edx, dword ptr [eax + 4]
// 0048af99  8bce                 mov ecx, esi
// 0048af9b  ffd2                 call edx
// 0048af9d  8d4608               lea eax, [esi + 8]
// 0048afa0  83c9ff               or ecx, 0xffffffff
// 0048afa3  f00fc108             lock xadd dword ptr [eax], ecx
// 0048afa7  7509                 jne 0x48afb2
// 0048afa9  8b16                 mov edx, dword ptr [esi]
// 0048afab  8b4208               mov eax, dword ptr [edx + 8]
// 0048afae  8bce                 mov ecx, esi
// 0048afb0  ffd0                 call eax
// 0048afb2  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0048afb5  5f                   pop edi
// 0048afb6  5e                   pop esi
// 0048afb7  64890d00000000       mov dword ptr fs:[0], ecx
// 0048afbe  5b                   pop ebx
// 0048afbf  8be5                 mov esp, ebp
// 0048afc1  5d                   pop ebp
// 0048afc2  c20c00               ret 0xc
// 0048afc5  8b4de4               mov ecx, dword ptr [ebp - 0x1c]
// 0048afc8  8b01                 mov eax, dword ptr [ecx]
// 0048afca  8b5004               mov edx, dword ptr [eax + 4]
// 0048afcd  ffd2                 call edx
// 0048afcf  50                   push eax
// 0048afd0  8d4dc8               lea ecx, [ebp - 0x38]
// 0048afd3  ff1558248000         call dword ptr [0x802458]
// 0048afd9  8d45e8               lea eax, [ebp - 0x18]
// 0048afdc  b303                 mov bl, 3
// 0048afde  50                   push eax
// 0048afdf  885dfc               mov byte ptr [ebp - 4], bl
// 0048afe2  e839e60d00           call 0x569620
// 0048afe7  83c404               add esp, 4
// 0048afea  837de010             cmp dword ptr [ebp - 0x20], 0x10
// 0048afee  8b4dcc               mov ecx, dword ptr [ebp - 0x34]
// 0048aff1  c645fc04             mov byte ptr [ebp - 4], 4
// 0048aff5  7303                 jae 0x48affa
// 0048aff7  8d4dcc               lea ecx, [ebp - 0x34]
// 0048affa  8b00                 mov eax, dword ptr [eax]
// 0048affc  51                   push ecx
// 0048affd  68c4b98000           push 0x80b9c4
// 0048b002  6a02                 push 2
// 0048b004  50                   push eax
// 0048b005  e896e30d00           call 0x5693a0
// 0048b00a  83c410               add esp, 0x10
// 0048b00d  8d4de8               lea ecx, [ebp - 0x18]
// 0048b010  885dfc               mov byte ptr [ebp - 4], bl
// 0048b013  e848561700           call 0x600660
// 0048b018  8d4dc8               lea ecx, [ebp - 0x38]
// 0048b01b  c645fc02             mov byte ptr [ebp - 4], 2
// 0048b01f  ff1568248000         call dword ptr [0x802468]
// 0048b025  b87aaf4800           mov eax, 0x48af7a
// 0048b02a  c3                   ret 

#include <string>
#include <exception>
// from server: 100% by king_originala
// roc 2008-06 0048af10  unit: RBX::Network::P8Player::?$GetSetImpl  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048af10
//
// 0048af10  55                   push ebp
// 0048af11  8bec                 mov ebp, esp
// 0048af13  6aff                 push -1
// 0048af15  6819617c00           push 0x7c6119
// 0048af1a  64a100000000         mov eax, dword ptr fs:[0]
// 0048af20  50                   push eax
// 0048af21  64892500000000       mov dword ptr fs:[0], esp
// 0048af28  83ec2c               sub esp, 0x2c
// 0048af2b  53                   push ebx
// 0048af2c  56                   push esi
// 0048af2d  57                   push edi
// 0048af2e  8965f0               mov dword ptr [ebp - 0x10], esp
// 0048af31  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0048af38  c645fc01             mov byte ptr [ebp - 4], 1
// 0048af3c  85c9                 test ecx, ecx
// 0048af3e  7408                 je 0x48af48
// 0048af40  8d91d0feffff         lea edx, [ecx - 0x130]
// 0048af46  eb02                 jmp 0x48af4a
// 0048af48  33d2                 xor edx, edx
// 0048af4a  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0048af4d  83ec08               sub esp, 8
// 0048af50  8bc4                 mov eax, esp
// 0048af52  8908                 mov dword ptr [eax], ecx
// 0048af54  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0048af57  894804               mov dword ptr [eax + 4], ecx
// 0048af5a  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0048af5d  8965ec               mov dword ptr [ebp - 0x14], esp
// 0048af60  85c0                 test eax, eax
// 0048af62  740c                 je 0x48af70
// 0048af64  83c004               add eax, 4
// 0048af67  b901000000           mov ecx, 1
// 0048af6c  f00fc108             lock xadd dword ptr [eax], ecx
// 0048af70  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 0048af73  8b01                 mov eax, dword ptr [ecx]
// 0048af75  52                   push edx
// 0048af76  8b10                 mov edx, dword ptr [eax]
// 0048af78  ffd2                 call edx

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)
#pragma intrinsic(_InterlockedExchangeAdd)

struct Count {
    volatile long value;
    void increment();
};

__forceinline void Count::increment()
{
    _InterlockedExchangeAdd(&value, 1);
}

struct Control {
    virtual ~Control();
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    Count strong;
    Count weak;
    void release() {
        if (_InterlockedDecrement(&strong.value) == 0) {
            dispose();
            weak_release();
        }
    }
    void weak_release() {
        if (_InterlockedDecrement(&weak.value) == 0)
            destroy();
    }
};

struct Shared {
    void* pointer;
    Control* control;
    Shared(const Shared& other);
    ~Shared();
};

inline Shared::Shared(const Shared& other)
    : pointer(other.pointer), control(other.control)
{
    if (control)
        control->strong.increment();
}

inline Shared::~Shared()
{
    if (control)
        control->release();
}

struct Object;

struct Callback {
    virtual void invoke(Object*, Shared) = 0;
};

struct S {
    void f(Shared value, Callback* callback);
};

struct Prefix {
    char padding[0x130];
};

struct Object : Prefix, S {
};

struct StandardOut {
    void print(int, const char *, ...);
};

struct OutHandle {
    StandardOut *pointer;
    void *count;
    ~OutHandle();
    StandardOut *operator->() const { return pointer; }
};

OutHandle __cdecl singleton();


void S::f(Shared value, Callback* callback)
{
    try {
        callback->invoke(static_cast<Object*>(this), value);
    }
    catch (std::exception& error) {
        std::string what(error.what());
        singleton()->print(2, "Exception caught in onEvent. %s", what.c_str());
    }
}
