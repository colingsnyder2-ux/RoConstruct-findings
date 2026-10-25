// from server: 100% by king_originala
// roc 2008-06 005fc330  unit: RBX::LocalBackpack  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005fc330
//
// 005fc330  64a100000000         mov eax, dword ptr fs:[0]
// 005fc336  6aff                 push -1
// 005fc338  6818047c00           push 0x7c0418
// 005fc33d  50                   push eax
// 005fc33e  64892500000000       mov dword ptr fs:[0], esp
// 005fc345  56                   push esi
// 005fc346  83791c00             cmp dword ptr [ecx + 0x1c], 0
// 005fc34a  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005fc352  740b                 je 0x5fc35f
// 005fc354  81c184feffff         add ecx, 0xfffffe84
// 005fc35a  e8a1fdffff           call 0x5fc100
// 005fc35f  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005fc363  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 005fc36b  85f6                 test esi, esi
// 005fc36d  742a                 je 0x5fc399
// 005fc36f  8d4604               lea eax, [esi + 4]
// 005fc372  83c9ff               or ecx, 0xffffffff
// 005fc375  f00fc108             lock xadd dword ptr [eax], ecx
// 005fc379  751e                 jne 0x5fc399
// 005fc37b  8b16                 mov edx, dword ptr [esi]
// 005fc37d  8b4204               mov eax, dword ptr [edx + 4]
// 005fc380  8bce                 mov ecx, esi
// 005fc382  ffd0                 call eax
// 005fc384  8d4e08               lea ecx, [esi + 8]
// 005fc387  83caff               or edx, 0xffffffff
// 005fc38a  f00fc111             lock xadd dword ptr [ecx], edx
// 005fc38e  7509                 jne 0x5fc399
// 005fc390  8b06                 mov eax, dword ptr [esi]
// 005fc392  8b5008               mov edx, dword ptr [eax + 8]
// 005fc395  8bce                 mov ecx, esi
// 005fc397  ffd2                 call edx
// 005fc399  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005fc39d  64890d00000000       mov dword ptr fs:[0], ecx
// 005fc3a4  5e                   pop esi
// 005fc3a5  83c40c               add esp, 0xc
// 005fc3a8  c20c00               ret 0xc

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
};

struct Shared {
    void* object;
    Control* control;
    ~Shared();
};

__forceinline Shared::~Shared()
{
    Control* p = control;
    if (p && _InterlockedDecrement(&p->strong) == 0) {
        p->dispose();
        if (_InterlockedDecrement(&p->weak) == 0)
            p->destroy();
    }
}

struct Owner {
    void cleanup();
};

struct LocalBackpack {
    char padding[28];
    int active;
    void invoke(int, Shared);
};

void LocalBackpack::invoke(int, Shared)
{
    if (active)
        reinterpret_cast<Owner*>(reinterpret_cast<char*>(this) - 380)->cleanup();
}
