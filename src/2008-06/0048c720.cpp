// from server: 100% by king_originala
// roc 2008-06 0048c720  unit: RBX::VBrickColor::?$TypedPropertyDescriptor  size: 264 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048c720
//
// 0048c720  6aff                 push -1
// 0048c722  6800ef7b00           push 0x7bef00
// 0048c727  64a100000000         mov eax, dword ptr fs:[0]
// 0048c72d  50                   push eax
// 0048c72e  64892500000000       mov dword ptr fs:[0], esp
// 0048c735  51                   push ecx
// 0048c736  56                   push esi
// 0048c737  57                   push edi
// 0048c738  8bf9                 mov edi, ecx
// 0048c73a  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0048c73e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0048c742  50                   push eax
// 0048c743  83ec08               sub esp, 8
// 0048c746  8bc4                 mov eax, esp
// 0048c748  8908                 mov dword ptr [eax], ecx
// 0048c74a  8b542434             mov edx, dword ptr [esp + 0x34]
// 0048c74e  895004               mov dword ptr [eax + 4], edx
// 0048c751  8b442434             mov eax, dword ptr [esp + 0x34]
// 0048c755  c744242001000000     mov dword ptr [esp + 0x20], 1
// 0048c75d  89642414             mov dword ptr [esp + 0x14], esp
// 0048c761  85c0                 test eax, eax
// 0048c763  740c                 je 0x48c771
// 0048c765  83c004               add eax, 4
// 0048c768  b901000000           mov ecx, 1
// 0048c76d  f00fc108             lock xadd dword ptr [eax], ecx
// 0048c771  8b542428             mov edx, dword ptr [esp + 0x28]
// 0048c775  83ec08               sub esp, 8
// 0048c778  8bc4                 mov eax, esp
// 0048c77a  8910                 mov dword ptr [eax], edx
// 0048c77c  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0048c780  894804               mov dword ptr [eax + 4], ecx
// 0048c783  8b442434             mov eax, dword ptr [esp + 0x34]
// 0048c787  8964241c             mov dword ptr [esp + 0x1c], esp
// 0048c78b  85c0                 test eax, eax
// 0048c78d  740c                 je 0x48c79b
// 0048c78f  83c004               add eax, 4
// 0048c792  ba01000000           mov edx, 1
// 0048c797  f00fc110             lock xadd dword ptr [eax], edx
// 0048c79b  8bcf                 mov ecx, edi
// 0048c79d  e83ef8ffff           call 0x48bfe0
// 0048c7a2  8b742420             mov esi, dword ptr [esp + 0x20]
// 0048c7a6  c644241400           mov byte ptr [esp + 0x14], 0
// 0048c7ab  85f6                 test esi, esi
// 0048c7ad  742a                 je 0x48c7d9
// 0048c7af  8d4604               lea eax, [esi + 4]
// 0048c7b2  83c9ff               or ecx, 0xffffffff
// 0048c7b5  f00fc108             lock xadd dword ptr [eax], ecx
// 0048c7b9  751e                 jne 0x48c7d9
// 0048c7bb  8b16                 mov edx, dword ptr [esi]
// 0048c7bd  8b4204               mov eax, dword ptr [edx + 4]
// 0048c7c0  8bce                 mov ecx, esi
// 0048c7c2  ffd0                 call eax
// 0048c7c4  8d4e08               lea ecx, [esi + 8]
// 0048c7c7  83caff               or edx, 0xffffffff
// 0048c7ca  f00fc111             lock xadd dword ptr [ecx], edx
// 0048c7ce  7509                 jne 0x48c7d9
// 0048c7d0  8b06                 mov eax, dword ptr [esi]
// 0048c7d2  8b5008               mov edx, dword ptr [eax + 8]
// 0048c7d5  8bce                 mov ecx, esi
// 0048c7d7  ffd2                 call edx
// 0048c7d9  8b742428             mov esi, dword ptr [esp + 0x28]
// 0048c7dd  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0048c7e5  85f6                 test esi, esi
// 0048c7e7  742a                 je 0x48c813
// 0048c7e9  8d4604               lea eax, [esi + 4]
// 0048c7ec  83c9ff               or ecx, 0xffffffff
// 0048c7ef  f00fc108             lock xadd dword ptr [eax], ecx
// 0048c7f3  751e                 jne 0x48c813
// 0048c7f5  8b16                 mov edx, dword ptr [esi]
// 0048c7f7  8b4204               mov eax, dword ptr [edx + 4]
// 0048c7fa  8bce                 mov ecx, esi
// 0048c7fc  ffd0                 call eax
// 0048c7fe  8d4e08               lea ecx, [esi + 8]
// 0048c801  83caff               or edx, 0xffffffff
// 0048c804  f00fc111             lock xadd dword ptr [ecx], edx
// 0048c808  7509                 jne 0x48c813
// 0048c80a  8b06                 mov eax, dword ptr [esi]
// 0048c80c  8b5008               mov edx, dword ptr [eax + 8]
// 0048c80f  8bce                 mov ecx, esi
// 0048c811  ffd2                 call edx
// 0048c813  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0048c817  8bc7                 mov eax, edi
// 0048c819  5f                   pop edi
// 0048c81a  64890d00000000       mov dword ptr fs:[0], ecx
// 0048c821  5e                   pop esi
// 0048c822  83c410               add esp, 0x10
// 0048c825  c21800               ret 0x18

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

__forceinline void add_reference(volatile long* count)
{
    _InterlockedExchangeAdd(count, 1);
}

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
    void* object;
    Control* control;

    Shared(const Shared&);
    ~Shared();
};

__forceinline Shared::Shared(const Shared& other)
    : object(other.object), control(other.control)
{
    if (control)
        add_reference(&control->strong);
}

__forceinline Shared::~Shared()
{
    if (control)
    {
        Control* p = control;
        if (_InterlockedDecrement(&p->strong) == 0)
        {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
}

struct Value
{
    void* object;
    int unused;
};

struct S
{
    void initialize(Shared first, Shared second, void* value);
    S* f(Shared first, Shared second, Value value);
};

S* S::f(Shared first, Shared second, Value value)
{
    initialize(first, second, value.object);
    return this;
}
