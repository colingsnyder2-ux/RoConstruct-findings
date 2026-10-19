// from server: 88% by colin
// from server: 87% by king_originala
// roc 2008-06 0044ae00  unit: CRobloxApp  size: 176 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0044ae00
//
// 0044ae00  6aff                 push -1
// 0044ae02  6868617c00           push 0x7c6168
// 0044ae07  64a100000000         mov eax, dword ptr fs:[0]
// 0044ae0d  50                   push eax
// 0044ae0e  64892500000000       mov dword ptr fs:[0], esp
// 0044ae15  51                   push ecx
// 0044ae16  56                   push esi
// 0044ae17  8b4958               mov ecx, dword ptr [ecx + 0x58]
// 0044ae1a  8b4928               mov ecx, dword ptr [ecx + 0x28]
// 0044ae1d  8b01                 mov eax, dword ptr [ecx]
// 0044ae1f  8b9088000000         mov edx, dword ptr [eax + 0x88]
// 0044ae25  6a01                 push 1
// 0044ae27  6a00                 push 0
// 0044ae29  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0044ae31  ffd2                 call edx
// 0044ae33  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0044ae37  83ec08               sub esp, 8
// 0044ae3a  8bd4                 mov edx, esp
// 0044ae3c  890a                 mov dword ptr [edx], ecx
// 0044ae3e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0044ae42  894a04               mov dword ptr [edx + 4], ecx
// 0044ae45  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0044ae49  8964240c             mov dword ptr [esp + 0xc], esp
// 0044ae4d  85c9                 test ecx, ecx
// 0044ae4f  740c                 je 0x44ae5d
// 0044ae51  83c104               add ecx, 4
// 0044ae54  ba01000000           mov edx, 1
// 0044ae59  f00fc111             lock xadd dword ptr [ecx], edx
// 0044ae5d  8bc8                 mov ecx, eax
// 0044ae5f  e85cfbffff           call 0x44a9c0
// 0044ae64  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0044ae68  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0044ae70  85f6                 test esi, esi
// 0044ae72  742a                 je 0x44ae9e
// 0044ae74  8d4604               lea eax, [esi + 4]
// 0044ae77  83c9ff               or ecx, 0xffffffff
// 0044ae7a  f00fc108             lock xadd dword ptr [eax], ecx
// 0044ae7e  751e                 jne 0x44ae9e
// 0044ae80  8b16                 mov edx, dword ptr [esi]
// 0044ae82  8b4204               mov eax, dword ptr [edx + 4]
// 0044ae85  8bce                 mov ecx, esi
// 0044ae87  ffd0                 call eax
// 0044ae89  8d4e08               lea ecx, [esi + 8]
// 0044ae8c  83caff               or edx, 0xffffffff
// 0044ae8f  f00fc111             lock xadd dword ptr [ecx], edx
// 0044ae93  7509                 jne 0x44ae9e
// 0044ae95  8b06                 mov eax, dword ptr [esi]
// 0044ae97  8b5008               mov edx, dword ptr [eax + 8]
// 0044ae9a  8bce                 mov ecx, esi
// 0044ae9c  ffd2                 call edx
// 0044ae9e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0044aea2  64890d00000000       mov dword ptr fs:[0], ecx
// 0044aea9  5e                   pop esi
// 0044aeaa  83c410               add esp, 0x10
// 0044aead  c20800               ret 8

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control {
    virtual void reserved();
    virtual void dispose();
    virtual void destroy();
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
    : object(other.object), control(other.control) {
    if (control)
        _InterlockedIncrement(&control->strong);
}

inline Shared::~Shared() {
    Control* p = control;
    if (p && _InterlockedExchangeAdd(&p->strong, -1) == 0) {
        p->dispose();
        if (_InterlockedExchangeAdd(&p->weak, -1) == 0)
            p->destroy();
    }
}

struct Target {
    void apply(Shared value);
};

struct Interface;
typedef Target* (__thiscall *GetTarget)(Interface*, int, int);

struct Interface {
    GetTarget* table;
};

struct Holder {
    char padding[0x28];
    Interface* interfaceObject;
};

struct CRobloxApp {
    char padding[0x58];
    Holder* holder;
    void apply(Shared value);
};

void CRobloxApp::apply(Shared value) {
    Interface* p = holder->interfaceObject;
    Target* target = p->table[34](p, 0, 1);
    target->apply(value);
}
