// from server: 100% by king_originala
// roc 2008-06 004c7dd0  unit: RBX::VInstance::?$Association::Item  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004c7dd0
//
// 004c7dd0  6aff                 push -1
// 004c7dd2  6838077d00           push 0x7d0738
// 004c7dd7  64a100000000         mov eax, dword ptr fs:[0]
// 004c7ddd  50                   push eax
// 004c7dde  64892500000000       mov dword ptr fs:[0], esp
// 004c7de5  51                   push ecx
// 004c7de6  8b442414             mov eax, dword ptr [esp + 0x14]
// 004c7dea  56                   push esi
// 004c7deb  8bf1                 mov esi, ecx
// 004c7ded  8b08                 mov ecx, dword ptr [eax]
// 004c7def  890e                 mov dword ptr [esi], ecx
// 004c7df1  8b4804               mov ecx, dword ptr [eax + 4]
// 004c7df4  89742404             mov dword ptr [esp + 4], esi
// 004c7df8  894e04               mov dword ptr [esi + 4], ecx
// 004c7dfb  85c9                 test ecx, ecx
// 004c7dfd  740c                 je 0x4c7e0b
// 004c7dff  83c104               add ecx, 4
// 004c7e02  ba01000000           mov edx, 1
// 004c7e07  f00fc111             lock xadd dword ptr [ecx], edx
// 004c7e0b  8b4808               mov ecx, dword ptr [eax + 8]
// 004c7e0e  894e08               mov dword ptr [esi + 8], ecx
// 004c7e11  dd4010               fld qword ptr [eax + 0x10]
// 004c7e14  6810e94a00           push 0x4ae910
// 004c7e19  dd5e10               fstp qword ptr [esi + 0x10]
// 004c7e1c  8b5018               mov edx, dword ptr [eax + 0x18]
// 004c7e1f  68107c4c00           push 0x4c7c10
// 004c7e24  6a08                 push 8
// 004c7e26  895618               mov dword ptr [esi + 0x18], edx
// 004c7e29  8b481c               mov ecx, dword ptr [eax + 0x1c]
// 004c7e2c  6a4c                 push 0x4c
// 004c7e2e  83c020               add eax, 0x20
// 004c7e31  50                   push eax
// 004c7e32  8d5620               lea edx, [esi + 0x20]
// 004c7e35  52                   push edx
// 004c7e36  c744242800000000     mov dword ptr [esp + 0x28], 0
// 004c7e3e  894e1c               mov dword ptr [esi + 0x1c], ecx
// 004c7e41  e8709d1d00           call 0x6a1bb6
// 004c7e46  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004c7e4a  8bc6                 mov eax, esi
// 004c7e4c  5e                   pop esi
// 004c7e4d  64890d00000000       mov dword ptr fs:[0], ecx
// 004c7e54  83c410               add esp, 0x10
// 004c7e57  c20400               ret 4

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control
{
    long reserved;
    volatile long references;

    void addReference();
};

inline void Control::addReference()
{
    volatile long *counter = &references;
    _InterlockedExchangeAdd(counter, 1);
}

struct Shared
{
    void *pointer;
    Control *control;

    Shared(const Shared &);
    ~Shared();
};

inline Shared::Shared(const Shared &other)
    : pointer(other.pointer), control(other.control)
{
    if (control)
        control->addReference();
}

struct Element
{
    char data[0x4c];

    Element(const Element &);
    ~Element();
};

struct Elements
{
    Element values[8];
};

struct S
{
    Shared shared;
    int value;
    double number;
    int first;
    int second;
    Elements elements;

    S(const S &);
};

S::S(const S &other)
    : shared(other.shared),
      value(other.value),
      number(other.number),
      first(other.first),
      second(other.second),
      elements(other.elements)
{
}
