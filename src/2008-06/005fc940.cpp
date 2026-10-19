// from server: 89% by colin
// from server: 86% by king_originala
// roc 2008-06 005fc940  unit: RBX::LocalBackpack  size: 220 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005fc940
//
// 005fc940  6aff                 push -1
// 005fc942  6868917d00           push 0x7d9168
// 005fc947  64a100000000         mov eax, dword ptr fs:[0]
// 005fc94d  50                   push eax
// 005fc94e  64892500000000       mov dword ptr fs:[0], esp
// 005fc955  83ec08               sub esp, 8
// 005fc958  8b442418             mov eax, dword ptr [esp + 0x18]
// 005fc95c  56                   push esi
// 005fc95d  57                   push edi
// 005fc95e  8bf1                 mov esi, ecx
// 005fc960  50                   push eax
// 005fc961  8d4c240c             lea ecx, [esp + 0xc]
// 005fc965  51                   push ecx
// 005fc966  e8d5c00100           call 0x618a40
// 005fc96b  83c408               add esp, 8
// 005fc96e  8b10                 mov edx, dword ptr [eax]
// 005fc970  83c004               add eax, 4
// 005fc973  50                   push eax
// 005fc974  8d8e94010000         lea ecx, [esi + 0x194]
// 005fc97a  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 005fc982  899690010000         mov dword ptr [esi + 0x190], edx
// 005fc988  e8235ce0ff           call 0x4025b0
// 005fc98d  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005fc991  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 005fc999  85ff                 test edi, edi
// 005fc99b  742a                 je 0x5fc9c7
// 005fc99d  8d4704               lea eax, [edi + 4]
// 005fc9a0  83c9ff               or ecx, 0xffffffff
// 005fc9a3  f00fc108             lock xadd dword ptr [eax], ecx
// 005fc9a7  751e                 jne 0x5fc9c7
// 005fc9a9  8b17                 mov edx, dword ptr [edi]
// 005fc9ab  8b4204               mov eax, dword ptr [edx + 4]
// 005fc9ae  8bcf                 mov ecx, edi
// 005fc9b0  ffd0                 call eax
// 005fc9b2  8d4f08               lea ecx, [edi + 8]
// 005fc9b5  83caff               or edx, 0xffffffff
// 005fc9b8  f00fc111             lock xadd dword ptr [ecx], edx
// 005fc9bc  7509                 jne 0x5fc9c7
// 005fc9be  8b07                 mov eax, dword ptr [edi]
// 005fc9c0  8b5008               mov edx, dword ptr [eax + 8]
// 005fc9c3  8bcf                 mov ecx, edi
// 005fc9c5  ffd2                 call edx
// 005fc9c7  85f6                 test esi, esi
// 005fc9c9  7408                 je 0x5fc9d3
// 005fc9cb  8d8e68010000         lea ecx, [esi + 0x168]
// 005fc9d1  eb02                 jmp 0x5fc9d5
// 005fc9d3  33c9                 xor ecx, ecx
// 005fc9d5  8b8690010000         mov eax, dword ptr [esi + 0x190]
// 005fc9db  85c0                 test eax, eax
// 005fc9dd  7409                 je 0x5fc9e8
// 005fc9df  51                   push ecx
// 005fc9e0  8d4824               lea ecx, [eax + 0x24]
// 005fc9e3  e8b84ee2ff           call 0x4218a0
// 005fc9e8  85f6                 test esi, esi
// 005fc9ea  7408                 je 0x5fc9f4
// 005fc9ec  8d866c010000         lea eax, [esi + 0x16c]
// 005fc9f2  eb02                 jmp 0x5fc9f6
// 005fc9f4  33c0                 xor eax, eax
// 005fc9f6  8bb690010000         mov esi, dword ptr [esi + 0x190]
// 005fc9fc  85f6                 test esi, esi
// 005fc9fe  7409                 je 0x5fca09
// 005fca00  50                   push eax
// 005fca01  8d4e44               lea ecx, [esi + 0x44]
// 005fca04  e8974ee2ff           call 0x4218a0
// 005fca09  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005fca0d  5f                   pop edi
// 005fca0e  5e                   pop esi
// 005fca0f  64890d00000000       mov dword ptr fs:[0], ecx
// 005fca16  83c414               add esp, 0x14
// 005fca19  c20400               ret 4
#include <intrin.h>

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;

    void release();
};

__forceinline void Control::release()
{
    if (_InterlockedDecrement(&strong) == 0) {
        dispose();
        if (_InterlockedDecrement(&weak) == 0)
            destroy();
    }
}

struct ControlRef {
    Control* pointer;
    void assign(const ControlRef&);
};

struct Hook {
    virtual void slot();
};

struct FirstHook : Hook {};
struct SecondHook : Hook {};

struct Listener {
    char storage[32];
    void attach(Hook*);
};

struct Object {
    char padding[0x24];
    Listener first;
    Listener second;
};

struct Shared {
    Object* object;
    ControlRef control;
    ~Shared();
};

__forceinline Shared::~Shared()
{
    if (control.pointer)
        control.pointer->release();
}

Shared __cdecl makeShared(void*);

struct Padding {
    virtual void slot();
    char storage[0x164];
};

struct LocalBackpack : Padding, FirstHook, SecondHook {
    char reserved[0x20];
    Object* object;
    ControlRef control;

    void assign(const Shared&);
    void set(void*);
};

__forceinline void LocalBackpack::assign(const Shared& value)
{
    object = value.object;
    control.assign(value.control);
}

void LocalBackpack::set(void* argument)
{
    assign(makeShared(argument));

    Hook* first = this ? static_cast<FirstHook*>(this) : 0;
    _ReadWriteBarrier();
    if (object)
        object->first.attach(first);

    Hook* second = this ? static_cast<SecondHook*>(this) : 0;
    if (object)
        object->second.attach(second);
}
