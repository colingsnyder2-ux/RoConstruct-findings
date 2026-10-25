// from server: 100% by king_originala
// roc 2008-06 004ace50  unit: RBX::Network::Replicator::ChangePropertyItem  size: 167 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ace50
//
// 004ace50  6aff                 push -1
// 004ace52  6818047c00           push 0x7c0418
// 004ace57  64a100000000         mov eax, dword ptr fs:[0]
// 004ace5d  50                   push eax
// 004ace5e  64892500000000       mov dword ptr fs:[0], esp
// 004ace65  51                   push ecx
// 004ace66  56                   push esi
// 004ace67  57                   push edi
// 004ace68  8bf9                 mov edi, ecx
// 004ace6a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004ace6e  83ec08               sub esp, 8
// 004ace71  8bc4                 mov eax, esp
// 004ace73  8908                 mov dword ptr [eax], ecx
// 004ace75  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 004ace79  895004               mov dword ptr [eax + 4], edx
// 004ace7c  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 004ace80  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 004ace88  89642410             mov dword ptr [esp + 0x10], esp
// 004ace8c  85c0                 test eax, eax
// 004ace8e  740c                 je 0x4ace9c
// 004ace90  83c004               add eax, 4
// 004ace93  b901000000           mov ecx, 1
// 004ace98  f00fc108             lock xadd dword ptr [eax], ecx
// 004ace9c  8b542424             mov edx, dword ptr [esp + 0x24]
// 004acea0  52                   push edx
// 004acea1  8bcf                 mov ecx, edi
// 004acea3  e828f1ffff           call 0x4abfd0
// 004acea8  8b742424             mov esi, dword ptr [esp + 0x24]
// 004aceac  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 004aceb4  85f6                 test esi, esi
// 004aceb6  742a                 je 0x4acee2
// 004aceb8  8d4604               lea eax, [esi + 4]
// 004acebb  83c9ff               or ecx, 0xffffffff
// 004acebe  f00fc108             lock xadd dword ptr [eax], ecx
// 004acec2  751e                 jne 0x4acee2
// 004acec4  8b16                 mov edx, dword ptr [esi]
// 004acec6  8b4204               mov eax, dword ptr [edx + 4]
// 004acec9  8bce                 mov ecx, esi
// 004acecb  ffd0                 call eax
// 004acecd  8d4e08               lea ecx, [esi + 8]
// 004aced0  83caff               or edx, 0xffffffff
// 004aced3  f00fc111             lock xadd dword ptr [ecx], edx
// 004aced7  7509                 jne 0x4acee2
// 004aced9  8b06                 mov eax, dword ptr [esi]
// 004acedb  8b5008               mov edx, dword ptr [eax + 8]
// 004acede  8bce                 mov ecx, esi
// 004acee0  ffd2                 call edx
// 004acee2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004acee6  8bc7                 mov eax, edi
// 004acee8  5f                   pop edi
// 004acee9  64890d00000000       mov dword ptr fs:[0], ecx
// 004acef0  5e                   pop esi
// 004acef1  83c410               add esp, 0x10
// 004acef4  c21000               ret 0x10

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

    void weak_release();
};

__forceinline void Control::weak_release()
{
    if (_InterlockedDecrement(&weak) == 0)
        destroy();
}

struct Shared {
    void* pointer;
    Control* control;

    Shared(const Shared&);
    ~Shared();
};

inline Shared::Shared(const Shared& other)
    : pointer(other.pointer), control(other.control)
{
    Control* p = control;
    if (p) {
        volatile long* count = &p->strong;
        _InterlockedExchangeAdd(count, 1);
    }
}

inline Shared::~Shared()
{
    Control* p = control;
    if (p) {
        volatile long* count = &p->strong;
        if (_InterlockedDecrement(count) == 0) {
            p->dispose();
            p->weak_release();
        }
    }
}

struct Base {
    Base(void*, Shared);
};

struct S : Base {
    S(void*, Shared, int);
};

S::S(void* owner, Shared object, int)
    : Base(owner, object)
{
}
