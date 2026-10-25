// from server: 100% by king_originala
// roc 2008-06 005cb2f0  unit: RBX::AIController  size: 230 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005cb2f0
//
// 005cb2f0  6aff                 push -1
// 005cb2f2  680e537d00           push 0x7d530e
// 005cb2f7  64a100000000         mov eax, dword ptr fs:[0]
// 005cb2fd  50                   push eax
// 005cb2fe  64892500000000       mov dword ptr fs:[0], esp
// 005cb305  83ec0c               sub esp, 0xc
// 005cb308  53                   push ebx
// 005cb309  55                   push ebp
// 005cb30a  56                   push esi
// 005cb30b  8bf1                 mov esi, ecx
// 005cb30d  33c0                 xor eax, eax
// 005cb30f  c706e0e18100         mov dword ptr [esi], 0x81e1e0
// 005cb315  894604               mov dword ptr [esi + 4], eax
// 005cb318  57                   push edi
// 005cb319  89742410             mov dword ptr [esp + 0x10], esi
// 005cb31d  894608               mov dword ptr [esi + 8], eax
// 005cb320  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 005cb324  8d6e0c               lea ebp, [esi + 0xc]
// 005cb327  57                   push edi
// 005cb328  89442428             mov dword ptr [esp + 0x28], eax
// 005cb32c  c706c8a08300         mov dword ptr [esi], 0x83a0c8
// 005cb332  c74500bca08300       mov dword ptr [ebp], 0x83a0bc
// 005cb339  8d5e10               lea ebx, [esi + 0x10]
// 005cb33c  e8bf7aecff           call 0x492e00
// 005cb341  50                   push eax
// 005cb342  53                   push ebx
// 005cb343  e8f8d60400           call 0x618a40
// 005cb348  8d442420             lea eax, [esp + 0x20]
// 005cb34c  57                   push edi
// 005cb34d  50                   push eax
// 005cb34e  c644243801           mov byte ptr [esp + 0x38], 1
// 005cb353  e8e8d60400           call 0x618a40
// 005cb358  8b08                 mov ecx, dword ptr [eax]
// 005cb35a  894e18               mov dword ptr [esi + 0x18], ecx
// 005cb35d  8b4004               mov eax, dword ptr [eax + 4]
// 005cb360  83c414               add esp, 0x14
// 005cb363  89461c               mov dword ptr [esi + 0x1c], eax
// 005cb366  85c0                 test eax, eax
// 005cb368  740c                 je 0x5cb376
// 005cb36a  83c008               add eax, 8
// 005cb36d  ba01000000           mov edx, 1
// 005cb372  f00fc110             lock xadd dword ptr [eax], edx
// 005cb376  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 005cb37a  c644242402           mov byte ptr [esp + 0x24], 2
// 005cb37f  85ff                 test edi, edi
// 005cb381  742a                 je 0x5cb3ad
// 005cb383  8d4704               lea eax, [edi + 4]
// 005cb386  83c9ff               or ecx, 0xffffffff
// 005cb389  f00fc108             lock xadd dword ptr [eax], ecx
// 005cb38d  751e                 jne 0x5cb3ad
// 005cb38f  8b17                 mov edx, dword ptr [edi]
// 005cb391  8b4204               mov eax, dword ptr [edx + 4]
// 005cb394  8bcf                 mov ecx, edi
// 005cb396  ffd0                 call eax
// 005cb398  8d4f08               lea ecx, [edi + 8]
// 005cb39b  83caff               or edx, 0xffffffff
// 005cb39e  f00fc111             lock xadd dword ptr [ecx], edx
// 005cb3a2  7509                 jne 0x5cb3ad
// 005cb3a4  8b07                 mov eax, dword ptr [edi]
// 005cb3a6  8b5008               mov edx, dword ptr [eax + 8]
// 005cb3a9  8bcf                 mov ecx, edi
// 005cb3ab  ffd2                 call edx
// 005cb3ad  8b1b                 mov ebx, dword ptr [ebx]
// 005cb3af  85db                 test ebx, ebx
// 005cb3b1  740c                 je 0x5cb3bf
// 005cb3b3  55                   push ebp
// 005cb3b4  8d8b30010000         lea ecx, [ebx + 0x130]
// 005cb3ba  e8e164e5ff           call 0x4218a0
// 005cb3bf  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005cb3c3  5f                   pop edi
// 005cb3c4  8bc6                 mov eax, esi
// 005cb3c6  5e                   pop esi
// 005cb3c7  5d                   pop ebp
// 005cb3c8  5b                   pop ebx
// 005cb3c9  64890d00000000       mov dword ptr fs:[0], ecx
// 005cb3d0  83c418               add esp, 0x18
// 005cb3d3  c20400               ret 4

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

namespace RBX {
    class Instance;
    class ServiceProvider;
}

RBX::ServiceProvider* __cdecl func_00492e00(RBX::Instance*);

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct __declspec(novtable) Listener {
    virtual void notify() = 0;
};

struct Event {
    void connect(Listener*);
};

struct Product {
    char padding[0x130];
    Event event;
};

struct Shared {
    Product* pointer;
    Control* control;
    ~Shared();
};

Shared __cdecl func_00618a40(RBX::Instance*);

struct Weak {
    Product* pointer;
    Control* control;
    Weak(const Shared&);
    ~Weak();
};

struct Base {
    virtual ~Base();
    volatile unsigned first;
    volatile unsigned second;
    Base();
};

struct S : Base, Listener {
    Shared product;
    Weak instance;
    S(RBX::Instance*);
    virtual ~S();
    virtual void notify();
};

inline Base::Base() : first(0), second(0) {}

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

inline Weak::Weak(const Shared& p)
    : pointer(p.pointer), control(p.control)
{
    if (control) {
        volatile long* count = &control->weak;
        _InterlockedExchangeAdd(count, 1);
    }
}

S::S(RBX::Instance* p)
    : product(func_00618a40(
          reinterpret_cast<RBX::Instance*>(func_00492e00(p)))),
      instance(func_00618a40(p))
{
    if (product.pointer)
        product.pointer->event.connect(static_cast<Listener*>(this));
}
