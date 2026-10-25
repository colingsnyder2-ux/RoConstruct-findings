// from server: 100% by king_originala
// roc 2008-06 004e73b0  unit: RBX::ViewNew::Texture  size: 148 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004e73b0
//
// 004e73b0  64a100000000         mov eax, dword ptr fs:[0]
// 004e73b6  6aff                 push -1
// 004e73b8  6868617c00           push 0x7c6168
// 004e73bd  50                   push eax
// 004e73be  64892500000000       mov dword ptr fs:[0], esp
// 004e73c5  56                   push esi
// 004e73c6  8bf1                 mov esi, ecx
// 004e73c8  8b442414             mov eax, dword ptr [esp + 0x14]
// 004e73cc  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004e73d4  3b86d4000000         cmp eax, dword ptr [esi + 0xd4]
// 004e73da  751c                 jne 0x4e73f8
// 004e73dc  8d8ea8000000         lea ecx, [esi + 0xa8]
// 004e73e2  e849de0a00           call 0x595230
// 004e73e7  8bce                 mov ecx, esi
// 004e73e9  c786d400000000000000 mov dword ptr [esi + 0xd4], 0
// 004e73f3  e848f3ffff           call 0x4e6740
// 004e73f8  8b742418             mov esi, dword ptr [esp + 0x18]
// 004e73fc  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 004e7404  85f6                 test esi, esi
// 004e7406  742a                 je 0x4e7432
// 004e7408  8d4e04               lea ecx, [esi + 4]
// 004e740b  83caff               or edx, 0xffffffff
// 004e740e  f00fc111             lock xadd dword ptr [ecx], edx
// 004e7412  751e                 jne 0x4e7432
// 004e7414  8b06                 mov eax, dword ptr [esi]
// 004e7416  8b5004               mov edx, dword ptr [eax + 4]
// 004e7419  8bce                 mov ecx, esi
// 004e741b  ffd2                 call edx
// 004e741d  8d4608               lea eax, [esi + 8]
// 004e7420  83c9ff               or ecx, 0xffffffff
// 004e7423  f00fc108             lock xadd dword ptr [eax], ecx
// 004e7427  7509                 jne 0x4e7432
// 004e7429  8b16                 mov edx, dword ptr [esi]
// 004e742b  8b4208               mov eax, dword ptr [edx + 8]
// 004e742e  8bce                 mov ecx, esi
// 004e7430  ffd0                 call eax
// 004e7432  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004e7436  64890d00000000       mov dword ptr fs:[0], ecx
// 004e743d  5e                   pop esi
// 004e743e  83c40c               add esp, 0xc
// 004e7441  c20800               ret 8

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control
{
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Shared
{
    void* pointer;
    Control* control;
    ~Shared();
};

inline Shared::~Shared()
{
    Control* p = control;
    if (p) {
        if (_InterlockedDecrement(&p->strong) == 0) {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
}

struct State
{
    char data[44];
    void reset();
};

struct Texture
{
    char padding[168];
    State state;
    void* selected;

    void refresh();
    void release(Shared value);
};

void Texture::release(Shared value)
{
    if (value.pointer == selected) {
        state.reset();
        selected = 0;
        refresh();
    }
}
