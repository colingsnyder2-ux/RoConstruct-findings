// from server: 100% by king_originala
// roc 2008-06 0048c4d0  unit: RBX::VBrickColor::?$TypedPropertyDescriptor  size: 260 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048c4d0
//
// 0048c4d0  6aff                 push -1
// 0048c4d2  6801627c00           push 0x7c6201
// 0048c4d7  64a100000000         mov eax, dword ptr fs:[0]
// 0048c4dd  50                   push eax
// 0048c4de  64892500000000       mov dword ptr fs:[0], esp
// 0048c4e5  83ec0c               sub esp, 0xc
// 0048c4e8  56                   push esi
// 0048c4e9  57                   push edi
// 0048c4ea  c744240800000000     mov dword ptr [esp + 8], 0
// 0048c4f2  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0048c4f6  83ec08               sub esp, 8
// 0048c4f9  8bc4                 mov eax, esp
// 0048c4fb  89642414             mov dword ptr [esp + 0x14], esp
// 0048c4ff  8908                 mov dword ptr [eax], ecx
// 0048c501  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0048c505  895004               mov dword ptr [eax + 4], edx
// 0048c508  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0048c50c  be01000000           mov esi, 1
// 0048c511  89742424             mov dword ptr [esp + 0x24], esi
// 0048c515  85c0                 test eax, eax
// 0048c517  7409                 je 0x48c522
// 0048c519  83c004               add eax, 4
// 0048c51c  8bce                 mov ecx, esi
// 0048c51e  f00fc108             lock xadd dword ptr [eax], ecx
// 0048c522  8d4c2414             lea ecx, [esp + 0x14]
// 0048c526  e805c31800           call 0x618830
// 0048c52b  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0048c52f  8b542428             mov edx, dword ptr [esp + 0x28]
// 0048c533  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0048c537  8917                 mov dword ptr [edi], edx
// 0048c539  894f04               mov dword ptr [edi + 4], ecx
// 0048c53c  8b10                 mov edx, dword ptr [eax]
// 0048c53e  895708               mov dword ptr [edi + 8], edx
// 0048c541  8b4004               mov eax, dword ptr [eax + 4]
// 0048c544  89470c               mov dword ptr [edi + 0xc], eax
// 0048c547  85c0                 test eax, eax
// 0048c549  7409                 je 0x48c554
// 0048c54b  83c004               add eax, 4
// 0048c54e  8bce                 mov ecx, esi
// 0048c550  f00fc108             lock xadd dword ptr [eax], ecx
// 0048c554  89742408             mov dword ptr [esp + 8], esi
// 0048c558  8b742410             mov esi, dword ptr [esp + 0x10]
// 0048c55c  85f6                 test esi, esi
// 0048c55e  742a                 je 0x48c58a
// 0048c560  8d5604               lea edx, [esi + 4]
// 0048c563  83c8ff               or eax, 0xffffffff
// 0048c566  f00fc102             lock xadd dword ptr [edx], eax
// 0048c56a  751e                 jne 0x48c58a
// 0048c56c  8b16                 mov edx, dword ptr [esi]
// 0048c56e  8b4204               mov eax, dword ptr [edx + 4]
// 0048c571  8bce                 mov ecx, esi
// 0048c573  ffd0                 call eax
// 0048c575  8d4e08               lea ecx, [esi + 8]
// 0048c578  83caff               or edx, 0xffffffff
// 0048c57b  f00fc111             lock xadd dword ptr [ecx], edx
// 0048c57f  7509                 jne 0x48c58a
// 0048c581  8b06                 mov eax, dword ptr [esi]
// 0048c583  8b5008               mov edx, dword ptr [eax + 8]
// 0048c586  8bce                 mov ecx, esi
// 0048c588  ffd2                 call edx
// 0048c58a  8b742434             mov esi, dword ptr [esp + 0x34]
// 0048c58e  c644241c00           mov byte ptr [esp + 0x1c], 0
// 0048c593  85f6                 test esi, esi
// 0048c595  742a                 je 0x48c5c1
// 0048c597  8d4604               lea eax, [esi + 4]
// 0048c59a  83c9ff               or ecx, 0xffffffff
// 0048c59d  f00fc108             lock xadd dword ptr [eax], ecx
// 0048c5a1  751e                 jne 0x48c5c1
// 0048c5a3  8b16                 mov edx, dword ptr [esi]
// 0048c5a5  8b4204               mov eax, dword ptr [edx + 4]
// 0048c5a8  8bce                 mov ecx, esi
// 0048c5aa  ffd0                 call eax
// 0048c5ac  8d4e08               lea ecx, [esi + 8]
// 0048c5af  83caff               or edx, 0xffffffff
// 0048c5b2  f00fc111             lock xadd dword ptr [ecx], edx
// 0048c5b6  7509                 jne 0x48c5c1
// 0048c5b8  8b06                 mov eax, dword ptr [esi]
// 0048c5ba  8b5008               mov edx, dword ptr [eax + 8]
// 0048c5bd  8bce                 mov ecx, esi
// 0048c5bf  ffd2                 call edx
// 0048c5c1  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0048c5c5  8bc7                 mov eax, edi
// 0048c5c7  5f                   pop edi
// 0048c5c8  64890d00000000       mov dword ptr fs:[0], ecx
// 0048c5cf  5e                   pop esi
// 0048c5d0  83c418               add esp, 0x18
// 0048c5d3  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control
{
    virtual void unused() = 0;
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

struct A;
struct B;

template<class T>
struct Shared
{
    T* object;
    Control* control;

    Shared(const Shared& other);
    template<class U> Shared(Shared<U> other);
    ~Shared();
};

template<class T>
__forceinline Shared<T>::Shared(const Shared<T>& other)
    : object(other.object), control(other.control)
{
    if (control)
        _InterlockedIncrement(&control->strong);
}

template<class T>
__forceinline Shared<T>::~Shared()
{
    if (control)
        control->release();
}

struct Result
{
    int first;
    int second;
    Shared<B> value;

    Result(int a, int b, const Shared<B>& p);
};

__forceinline Result::Result(int a, int b, const Shared<B>& p)
    : first(a), second(b), value(p)
{
}

Result __cdecl reconstruct(int a, int b, Shared<A> p)
{
    return Result(a, b, Shared<B>(p));
}
