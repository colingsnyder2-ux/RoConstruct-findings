// from server: 100% by king_originala
// roc 2008-06 0059d7f0  unit: VCRenderSettings::?$EnumPropDescriptor  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059d7f0
//
// 0059d7f0  6aff                 push -1
// 0059d7f2  6868617c00           push 0x7c6168
// 0059d7f7  64a100000000         mov eax, dword ptr fs:[0]
// 0059d7fd  50                   push eax
// 0059d7fe  64892500000000       mov dword ptr fs:[0], esp
// 0059d805  51                   push ecx
// 0059d806  56                   push esi
// 0059d807  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0059d80f  85c9                 test ecx, ecx
// 0059d811  7405                 je 0x59d818
// 0059d813  83c114               add ecx, 0x14
// 0059d816  eb02                 jmp 0x59d81a
// 0059d818  33c9                 xor ecx, ecx
// 0059d81a  8b542418             mov edx, dword ptr [esp + 0x18]
// 0059d81e  83ec08               sub esp, 8
// 0059d821  8bc4                 mov eax, esp
// 0059d823  8910                 mov dword ptr [eax], edx
// 0059d825  8b542424             mov edx, dword ptr [esp + 0x24]
// 0059d829  895004               mov dword ptr [eax + 4], edx
// 0059d82c  8b442424             mov eax, dword ptr [esp + 0x24]
// 0059d830  8964240c             mov dword ptr [esp + 0xc], esp
// 0059d834  85c0                 test eax, eax
// 0059d836  740c                 je 0x59d844
// 0059d838  83c004               add eax, 4
// 0059d83b  ba01000000           mov edx, 1
// 0059d840  f00fc110             lock xadd dword ptr [eax], edx
// 0059d844  51                   push ecx
// 0059d845  b964619700           mov ecx, 0x976164
// 0059d84a  e8b1f9efff           call 0x49d200
// 0059d84f  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0059d853  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0059d85b  85f6                 test esi, esi
// 0059d85d  742a                 je 0x59d889
// 0059d85f  8d4604               lea eax, [esi + 4]
// 0059d862  83c9ff               or ecx, 0xffffffff
// 0059d865  f00fc108             lock xadd dword ptr [eax], ecx
// 0059d869  751e                 jne 0x59d889
// 0059d86b  8b16                 mov edx, dword ptr [esi]
// 0059d86d  8b4204               mov eax, dword ptr [edx + 4]
// 0059d870  8bce                 mov ecx, esi
// 0059d872  ffd0                 call eax
// 0059d874  8d4e08               lea ecx, [esi + 8]
// 0059d877  83caff               or edx, 0xffffffff
// 0059d87a  f00fc111             lock xadd dword ptr [ecx], edx
// 0059d87e  7509                 jne 0x59d889
// 0059d880  8b06                 mov eax, dword ptr [esi]
// 0059d882  8b5008               mov edx, dword ptr [eax + 8]
// 0059d885  8bce                 mov ecx, esi
// 0059d887  ffd2                 call edx
// 0059d889  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0059d88d  64890d00000000       mov dword ptr fs:[0], ecx
// 0059d894  5e                   pop esi
// 0059d895  83c410               add esp, 0x10
// 0059d898  c20800               ret 8

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

inline void Control::release()
{
    if (_InterlockedDecrement(&strong) == 0) {
        dispose();
        if (_InterlockedDecrement(&weak) == 0)
            destroy();
    }
}

struct Shared {
    void* object;
    Control* control;

    Shared(const Shared& other);
    ~Shared();
};

inline Shared::Shared(const Shared& other)
    : object(other.object), control(other.control)
{
    if (control) {
        volatile long* count = &control->strong;
        _InterlockedExchangeAdd(count, 1);
    }
}

inline Shared::~Shared()
{
    if (control)
        control->release();
}

struct Padding {
    char bytes[20];
};

struct Base {
    char byte;
};

struct Descriptor {
    void invoke(Base* target, Shared value);
};

extern Descriptor descriptor;

struct S : Padding, Base {
    void f(Shared value);
};

void S::f(Shared value)
{
    descriptor.invoke(static_cast<Base*>(this), value);
}
