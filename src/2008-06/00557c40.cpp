// from server: 100% by colin
// roc 2008-06 00557c40  unit: RBX::VInstance::?$AbstractFactoryProduct  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00557c40
//
// 00557c40  55                   push ebp
// 00557c41  8bec                 mov ebp, esp
// 00557c43  6aff                 push -1
// 00557c45  6809e27c00           push 0x7ce209
// 00557c4a  64a100000000         mov eax, dword ptr fs:[0]
// 00557c50  50                   push eax
// 00557c51  64892500000000       mov dword ptr fs:[0], esp
// 00557c58  83ec2c               sub esp, 0x2c
// 00557c5b  53                   push ebx
// 00557c5c  56                   push esi
// 00557c5d  57                   push edi
// 00557c5e  8965f0               mov dword ptr [ebp - 0x10], esp
// 00557c61  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00557c68  c645fc01             mov byte ptr [ebp - 4], 1
// 00557c6c  85c9                 test ecx, ecx
// 00557c6e  7408                 je 0x557c78
// 00557c70  8d917cffffff         lea edx, [ecx - 0x84]
// 00557c76  eb02                 jmp 0x557c7a
// 00557c78  33d2                 xor edx, edx
// 00557c7a  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00557c7d  83ec10               sub esp, 0x10
// 00557c80  8bc4                 mov eax, esp
// 00557c82  8908                 mov dword ptr [eax], ecx
// 00557c84  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00557c87  894804               mov dword ptr [eax + 4], ecx
// 00557c8a  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00557c8d  8965ec               mov dword ptr [ebp - 0x14], esp
// 00557c90  85c9                 test ecx, ecx
// 00557c92  740c                 je 0x557ca0
// 00557c94  83c104               add ecx, 4
// 00557c97  be01000000           mov esi, 1
// 00557c9c  f00fc131             lock xadd dword ptr [ecx], esi
// 00557ca0  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 00557ca3  894808               mov dword ptr [eax + 8], ecx
// 00557ca6  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 00557ca9  89480c               mov dword ptr [eax + 0xc], ecx
// 00557cac  8b4514               mov eax, dword ptr [ebp + 0x14]
// 00557caf  85c0                 test eax, eax
// 00557cb1  740c                 je 0x557cbf
// 00557cb3  83c004               add eax, 4
// 00557cb6  b901000000           mov ecx, 1
// 00557cbb  f00fc108             lock xadd dword ptr [eax], ecx
// 00557cbf  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 00557cc2  8b01                 mov eax, dword ptr [ecx]
// 00557cc4  52                   push edx
// 00557cc5  8b10                 mov edx, dword ptr [eax]
// 00557cc7  ffd2                 call edx
// 00557cc9  8d4d08               lea ecx, [ebp + 8]
// 00557ccc  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 00557cd3  e888afecff           call 0x422c60
// 00557cd8  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00557cdb  5f                   pop edi
// 00557cdc  5e                   pop esi
// 00557cdd  64890d00000000       mov dword ptr fs:[0], ecx
// 00557ce4  5b                   pop ebx
// 00557ce5  8be5                 mov esp, ebp
// 00557ce7  5d                   pop ebp
// 00557ce8  c21400               ret 0x14

// from server: 88% by EspClaude
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
#include <string>
#include <exception>

extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)

struct Control
{
    long reserved;
    volatile long references;
};

struct Shared
{
    void* object;
    Control* control;

    Shared(const Shared& other);
};

inline Shared::Shared(const Shared& other)
    : object(other.object), control(other.control)
{
    if (control)
        _InterlockedIncrement(&control->references);
}

struct Arguments
{
    Shared first;
    Shared second;
    ~Arguments();
};

struct Callback
{
    virtual void invoke(void* owner, Arguments arguments) = 0;
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

struct S
{
    void f(Arguments arguments, Callback* callback);
};

void S::f(Arguments arguments, Callback* callback)
{
    try
    {
        void* owner = this ? reinterpret_cast<char*>(this) - 0x84 : 0;
        callback->invoke(owner, arguments);
    }
    catch (std::exception &e)
    {
        std::string message(e.what());
        singleton()->print(2, "%s", message.c_str());
    }
}
