// from server: 100% by king_originala
// roc 2008-06 00467a00  unit: DxUserInput  size: 137 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00467a00
//
// 00467a00  6aff                 push -1
// 00467a02  6828397c00           push 0x7c3928
// 00467a07  64a100000000         mov eax, dword ptr fs:[0]
// 00467a0d  50                   push eax
// 00467a0e  64892500000000       mov dword ptr fs:[0], esp
// 00467a15  83ec10               sub esp, 0x10
// 00467a18  56                   push esi
// 00467a19  8bf1                 mov esi, ecx
// 00467a1b  8b8680010000         mov eax, dword ptr [esi + 0x180]
// 00467a21  83ec08               sub esp, 8
// 00467a24  8bcc                 mov ecx, esp
// 00467a26  8901                 mov dword ptr [ecx], eax
// 00467a28  8b8684010000         mov eax, dword ptr [esi + 0x184]
// 00467a2e  8964240c             mov dword ptr [esp + 0xc], esp
// 00467a32  894104               mov dword ptr [ecx + 4], eax
// 00467a35  85c0                 test eax, eax
// 00467a37  740c                 je 0x467a45
// 00467a39  83c004               add eax, 4
// 00467a3c  b901000000           mov ecx, 1
// 00467a41  f00fc108             lock xadd dword ptr [eax], ecx
// 00467a45  8d4c2410             lea ecx, [esp + 0x10]
// 00467a49  e8f2a0faff           call 0x411b40
// 00467a4e  8b542424             mov edx, dword ptr [esp + 0x24]
// 00467a52  8b8e80010000         mov ecx, dword ptr [esi + 0x180]
// 00467a58  52                   push edx
// 00467a59  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00467a61  e8faf91000           call 0x577460
// 00467a66  8d4c2408             lea ecx, [esp + 8]
// 00467a6a  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00467a72  e849f91000           call 0x5773c0
// 00467a77  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00467a7b  64890d00000000       mov dword ptr fs:[0], ecx
// 00467a82  5e                   pop esi
// 00467a83  83c41c               add esp, 0x1c
// 00467a86  c20400               ret 4

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Object
{
    void invoke(int);
};

struct Control
{
    virtual void reserved();
    virtual void dispose();
    virtual void destroy();

    volatile long references;
    volatile long weak;

    void add_reference();
};

inline void Control::add_reference()
{
    volatile long* count = &references;
    _InterlockedExchangeAdd(count, 1);
}

struct Shared
{
    Object* object;
    Control* control;

    Shared(const Shared& other);
    ~Shared();
};

inline Shared::Shared(const Shared& other)
    : object(other.object), control(other.control)
{
    if (control)
        control->add_reference();
}

struct Guard
{
    char storage[12];

    Guard(Shared);
    ~Guard();
};

struct DxUserInput
{
    char padding[0x180];
    Shared input;

    void func_00467a00(int);
};

void DxUserInput::func_00467a00(int value)
{
    Guard guard(input);
    input.object->invoke(value);
}
