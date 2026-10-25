// from server: 100% by king_originala
// roc 2008-06 0048b270  unit: boost::any::placeholder  size: 162 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048b270
//
// 0048b270  6aff                 push -1
// 0048b272  6868617c00           push 0x7c6168
// 0048b277  64a100000000         mov eax, dword ptr fs:[0]
// 0048b27d  50                   push eax
// 0048b27e  64892500000000       mov dword ptr fs:[0], esp
// 0048b285  51                   push ecx
// 0048b286  56                   push esi
// 0048b287  57                   push edi
// 0048b288  8bf9                 mov edi, ecx
// 0048b28a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0048b28e  83ec08               sub esp, 8
// 0048b291  8bc4                 mov eax, esp
// 0048b293  8908                 mov dword ptr [eax], ecx
// 0048b295  8b542428             mov edx, dword ptr [esp + 0x28]
// 0048b299  895004               mov dword ptr [eax + 4], edx
// 0048b29c  8b442428             mov eax, dword ptr [esp + 0x28]
// 0048b2a0  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0048b2a8  89642410             mov dword ptr [esp + 0x10], esp
// 0048b2ac  85c0                 test eax, eax
// 0048b2ae  740c                 je 0x48b2bc
// 0048b2b0  83c004               add eax, 4
// 0048b2b3  b901000000           mov ecx, 1
// 0048b2b8  f00fc108             lock xadd dword ptr [eax], ecx
// 0048b2bc  8bcf                 mov ecx, edi
// 0048b2be  e84d950c00           call 0x554810
// 0048b2c3  8b742420             mov esi, dword ptr [esp + 0x20]
// 0048b2c7  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0048b2cf  85f6                 test esi, esi
// 0048b2d1  742a                 je 0x48b2fd
// 0048b2d3  8d5604               lea edx, [esi + 4]
// 0048b2d6  83c8ff               or eax, 0xffffffff
// 0048b2d9  f00fc102             lock xadd dword ptr [edx], eax
// 0048b2dd  751e                 jne 0x48b2fd
// 0048b2df  8b16                 mov edx, dword ptr [esi]
// 0048b2e1  8b4204               mov eax, dword ptr [edx + 4]
// 0048b2e4  8bce                 mov ecx, esi
// 0048b2e6  ffd0                 call eax
// 0048b2e8  8d4e08               lea ecx, [esi + 8]
// 0048b2eb  83caff               or edx, 0xffffffff
// 0048b2ee  f00fc111             lock xadd dword ptr [ecx], edx
// 0048b2f2  7509                 jne 0x48b2fd
// 0048b2f4  8b06                 mov eax, dword ptr [esi]
// 0048b2f6  8b5008               mov edx, dword ptr [eax + 8]
// 0048b2f9  8bce                 mov ecx, esi
// 0048b2fb  ffd2                 call edx
// 0048b2fd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0048b301  8bc7                 mov eax, edi
// 0048b303  5f                   pop edi
// 0048b304  64890d00000000       mov dword ptr fs:[0], ecx
// 0048b30b  5e                   pop esi
// 0048b30c  83c410               add esp, 0x10
// 0048b30f  c20c00               ret 0xc

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();

    volatile long strong;
    volatile long weak;
};

struct Shared {
    void* object;
    Control* control;

    Shared(const Shared&);
    ~Shared();
};

inline Shared::Shared(const Shared& other)
    : object(other.object), control(other.control) {
    if (control) {
        volatile long* count = &control->strong;
        _InterlockedExchangeAdd(count, 1);
    }
}

inline Shared::~Shared() {
    Control* p = control;
    if (p && _InterlockedDecrement(&p->strong) == 0) {
        p->dispose();
        if (_InterlockedDecrement(&p->weak) == 0)
            p->destroy();
    }
}

struct S {
    void helper(Shared);
    S* f(Shared, int);
};

S* S::f(Shared value, int) {
    helper(value);
    return this;
}
