// from server: 88% by colin
// from server: 87% by king_originala
// roc 2008-06 004ca450  unit: RBX::Network::RoundRobinPhysicsSender  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ca450
//
// 004ca450  6aff                 push -1
// 004ca452  68a9677c00           push 0x7c67a9
// 004ca457  64a100000000         mov eax, dword ptr fs:[0]
// 004ca45d  50                   push eax
// 004ca45e  64892500000000       mov dword ptr fs:[0], esp
// 004ca465  83ec0c               sub esp, 0xc
// 004ca468  8b442428             mov eax, dword ptr [esp + 0x28]
// 004ca46c  c7042400000000       mov dword ptr [esp], 0
// 004ca473  8b00                 mov eax, dword ptr [eax]
// 004ca475  8b08                 mov ecx, dword ptr [eax]
// 004ca477  8b442424             mov eax, dword ptr [esp + 0x24]
// 004ca47b  56                   push esi
// 004ca47c  57                   push edi
// 004ca47d  51                   push ecx
// 004ca47e  8b08                 mov ecx, dword ptr [eax]
// 004ca480  8d542410             lea edx, [esp + 0x10]
// 004ca484  52                   push edx
// 004ca485  ffd1                 call ecx
// 004ca487  8b10                 mov edx, dword ptr [eax]
// 004ca489  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 004ca48d  8917                 mov dword ptr [edi], edx
// 004ca48f  8b4004               mov eax, dword ptr [eax + 4]
// 004ca492  83c408               add esp, 8
// 004ca495  894704               mov dword ptr [edi + 4], eax
// 004ca498  85c0                 test eax, eax
// 004ca49a  740c                 je 0x4ca4a8
// 004ca49c  83c004               add eax, 4
// 004ca49f  b901000000           mov ecx, 1
// 004ca4a4  f00fc108             lock xadd dword ptr [eax], ecx
// 004ca4a8  8b742410             mov esi, dword ptr [esp + 0x10]
// 004ca4ac  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 004ca4b4  c744240801000000     mov dword ptr [esp + 8], 1
// 004ca4bc  85f6                 test esi, esi
// 004ca4be  742a                 je 0x4ca4ea
// 004ca4c0  8d5604               lea edx, [esi + 4]
// 004ca4c3  83c8ff               or eax, 0xffffffff
// 004ca4c6  f00fc102             lock xadd dword ptr [edx], eax
// 004ca4ca  751e                 jne 0x4ca4ea
// 004ca4cc  8b16                 mov edx, dword ptr [esi]
// 004ca4ce  8b4204               mov eax, dword ptr [edx + 4]
// 004ca4d1  8bce                 mov ecx, esi
// 004ca4d3  ffd0                 call eax
// 004ca4d5  8d4e08               lea ecx, [esi + 8]
// 004ca4d8  83caff               or edx, 0xffffffff
// 004ca4db  f00fc111             lock xadd dword ptr [ecx], edx
// 004ca4df  7509                 jne 0x4ca4ea
// 004ca4e1  8b06                 mov eax, dword ptr [esi]
// 004ca4e3  8b5008               mov edx, dword ptr [eax + 8]
// 004ca4e6  8bce                 mov ecx, esi
// 004ca4e8  ffd2                 call edx
// 004ca4ea  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004ca4ee  8bc7                 mov eax, edi
// 004ca4f0  5f                   pop edi
// 004ca4f1  5e                   pop esi
// 004ca4f2  64890d00000000       mov dword ptr fs:[0], ecx
// 004ca4f9  83c418               add esp, 0x18
// 004ca4fc  c21400               ret 0x14

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Shared {
    void* object;
    Control* control;

    Shared(const Shared& other);
    ~Shared();
};

inline Shared::Shared(const Shared& other)
    : object(other.object), control(other.control)
{
    if (control)
        _InterlockedIncrement(&control->strong);
}

inline Shared::~Shared()
{
    Control* p = control;
    if (p && _InterlockedExchangeAdd(&p->strong, -1) == 0) {
        p->dispose();
        if (_InterlockedExchangeAdd(&p->weak, -1) == 0)
            p->destroy();
    }
}

typedef Shared (__cdecl *Callback)(void*);

Shared __stdcall invoke(void*, Callback* callback, void*** argument, void*)
{
    void* value = **argument;
    return static_cast<const Shared&>((*callback)(value));
}
