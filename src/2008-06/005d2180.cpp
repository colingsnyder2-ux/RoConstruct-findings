// from server: 100% by king_originala
// roc 2008-06 005d2180  unit: RBX::P8PartInstance::?$GetSetImpl  size: 181 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d2180
//
// 005d2180  6aff                 push -1
// 005d2182  6818047c00           push 0x7c0418
// 005d2187  64a100000000         mov eax, dword ptr fs:[0]
// 005d218d  50                   push eax
// 005d218e  64892500000000       mov dword ptr fs:[0], esp
// 005d2195  51                   push ecx
// 005d2196  56                   push esi
// 005d2197  8bc1                 mov eax, ecx
// 005d2199  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005d219d  83ec08               sub esp, 8
// 005d21a0  8bcc                 mov ecx, esp
// 005d21a2  8911                 mov dword ptr [ecx], edx
// 005d21a4  8b542428             mov edx, dword ptr [esp + 0x28]
// 005d21a8  895104               mov dword ptr [ecx + 4], edx
// 005d21ab  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005d21af  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005d21b7  8964240c             mov dword ptr [esp + 0xc], esp
// 005d21bb  85c9                 test ecx, ecx
// 005d21bd  740c                 je 0x5d21cb
// 005d21bf  83c104               add ecx, 4
// 005d21c2  ba01000000           mov edx, 1
// 005d21c7  f00fc111             lock xadd dword ptr [ecx], edx
// 005d21cb  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005d21cf  8b9134010000         mov edx, dword ptr [ecx + 0x134]
// 005d21d5  8b7008               mov esi, dword ptr [eax + 8]
// 005d21d8  8b1432               mov edx, dword ptr [edx + esi]
// 005d21db  035004               add edx, dword ptr [eax + 4]
// 005d21de  8b00                 mov eax, dword ptr [eax]
// 005d21e0  8d8c0a34010000       lea ecx, [edx + ecx + 0x134]
// 005d21e7  ffd0                 call eax
// 005d21e9  8b742420             mov esi, dword ptr [esp + 0x20]
// 005d21ed  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005d21f5  85f6                 test esi, esi
// 005d21f7  742a                 je 0x5d2223
// 005d21f9  8d4e04               lea ecx, [esi + 4]
// 005d21fc  83caff               or edx, 0xffffffff
// 005d21ff  f00fc111             lock xadd dword ptr [ecx], edx
// 005d2203  751e                 jne 0x5d2223
// 005d2205  8b06                 mov eax, dword ptr [esi]
// 005d2207  8b5004               mov edx, dword ptr [eax + 4]
// 005d220a  8bce                 mov ecx, esi
// 005d220c  ffd2                 call edx
// 005d220e  8d4608               lea eax, [esi + 8]
// 005d2211  83c9ff               or ecx, 0xffffffff
// 005d2214  f00fc108             lock xadd dword ptr [eax], ecx
// 005d2218  7509                 jne 0x5d2223
// 005d221a  8b16                 mov edx, dword ptr [esi]
// 005d221c  8b4208               mov eax, dword ptr [edx + 8]
// 005d221f  8bce                 mov ecx, esi
// 005d2221  ffd0                 call eax
// 005d2223  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005d2227  64890d00000000       mov dword ptr fs:[0], ecx
// 005d222e  5e                   pop esi
// 005d222f  83c410               add esp, 0x10
// 005d2232  c20c00               ret 0xc

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control
{
    virtual ~Control();
    virtual void dispose() = 0;
    virtual void destroy() = 0;

    volatile long strong;
    volatile long weak;

    void release();
};

__forceinline void Control::release()
{
    if (_InterlockedDecrement(&strong) == 0)
    {
        dispose();
        if (_InterlockedDecrement(&weak) == 0)
            destroy();
    }
}

struct Shared
{
    void* pointer;
    Control* control;

    Shared(const Shared&);
    ~Shared();
};

__forceinline Shared::Shared(const Shared& other)
    : pointer(other.pointer), control(other.control)
{
    if (control)
    {
        volatile long* count = &control->strong;
        _InterlockedExchangeAdd(count, 1);
    }
}

__forceinline Shared::~Shared()
{
    if (control)
        control->release();
}

struct Padding
{
    char bytes[0x134];
};

struct VirtualBase
{
};

struct Object : Padding, virtual VirtualBase
{
};

struct S
{
    typedef void (Object::*Method)(Shared);
    Method method;

    void f(Object*, Shared);
};

void S::f(Object* object, Shared value)
{
    (object->*method)(value);
}
