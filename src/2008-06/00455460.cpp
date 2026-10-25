// from server: 100% by king_originala
// roc 2008-06 00455460  unit: CRobloxDoc  size: 281 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00455460
//
// 00455460  6aff                 push -1
// 00455462  68f8217c00           push 0x7c21f8
// 00455467  64a100000000         mov eax, dword ptr fs:[0]
// 0045546d  50                   push eax
// 0045546e  64892500000000       mov dword ptr fs:[0], esp
// 00455475  83ec1c               sub esp, 0x1c
// 00455478  56                   push esi
// 00455479  57                   push edi
// 0045547a  8bf9                 mov edi, ecx
// 0045547c  8b8f94000000         mov ecx, dword ptr [edi + 0x94]
// 00455482  8d442410             lea eax, [esp + 0x10]
// 00455486  50                   push eax
// 00455487  e8b4540100           call 0x46a940
// 0045548c  8b10                 mov edx, dword ptr [eax]
// 0045548e  83ec08               sub esp, 8
// 00455491  8bcc                 mov ecx, esp
// 00455493  8911                 mov dword ptr [ecx], edx
// 00455495  8b4004               mov eax, dword ptr [eax + 4]
// 00455498  c744243400000000     mov dword ptr [esp + 0x34], 0
// 004554a0  89642410             mov dword ptr [esp + 0x10], esp
// 004554a4  894104               mov dword ptr [ecx + 4], eax
// 004554a7  85c0                 test eax, eax
// 004554a9  740c                 je 0x4554b7
// 004554ab  83c004               add eax, 4
// 004554ae  b901000000           mov ecx, 1
// 004554b3  f00fc108             lock xadd dword ptr [eax], ecx
// 004554b7  8d4c2420             lea ecx, [esp + 0x20]
// 004554bb  e880c6fbff           call 0x411b40
// 004554c0  8b742414             mov esi, dword ptr [esp + 0x14]
// 004554c4  c644242c02           mov byte ptr [esp + 0x2c], 2
// 004554c9  85f6                 test esi, esi
// 004554cb  742a                 je 0x4554f7
// 004554cd  8d5604               lea edx, [esi + 4]
// 004554d0  83c8ff               or eax, 0xffffffff
// 004554d3  f00fc102             lock xadd dword ptr [edx], eax
// 004554d7  751e                 jne 0x4554f7
// 004554d9  8b16                 mov edx, dword ptr [esi]
// 004554db  8b4204               mov eax, dword ptr [edx + 4]
// 004554de  8bce                 mov ecx, esi
// 004554e0  ffd0                 call eax
// 004554e2  8d4e08               lea ecx, [esi + 8]
// 004554e5  83caff               or edx, 0xffffffff
// 004554e8  f00fc111             lock xadd dword ptr [ecx], edx
// 004554ec  7509                 jne 0x4554f7
// 004554ee  8b06                 mov eax, dword ptr [esi]
// 004554f0  8b5008               mov edx, dword ptr [eax + 8]
// 004554f3  8bce                 mov ecx, esi
// 004554f5  ffd2                 call edx
// 004554f7  8d442408             lea eax, [esp + 8]
// 004554fb  50                   push eax
// 004554fc  8bcf                 mov ecx, edi
// 004554fe  e83ddbfaff           call 0x403040
// 00455503  8b08                 mov ecx, dword ptr [eax]
// 00455505  c644242c03           mov byte ptr [esp + 0x2c], 3
// 0045550a  85c9                 test ecx, ecx
// 0045550c  7407                 je 0x455515
// 0045550e  e8dddbffff           call 0x4530f0
// 00455513  eb02                 jmp 0x455517
// 00455515  33c0                 xor eax, eax
// 00455517  6a02                 push 2
// 00455519  8bc8                 mov ecx, eax
// 0045551b  e880f80f00           call 0x554da0
// 00455520  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00455524  c644242c02           mov byte ptr [esp + 0x2c], 2
// 00455529  85f6                 test esi, esi
// 0045552b  742a                 je 0x455557
// 0045552d  8d4e04               lea ecx, [esi + 4]
// 00455530  83caff               or edx, 0xffffffff
// 00455533  f00fc111             lock xadd dword ptr [ecx], edx
// 00455537  751e                 jne 0x455557
// 00455539  8b06                 mov eax, dword ptr [esi]
// 0045553b  8b5004               mov edx, dword ptr [eax + 4]
// 0045553e  8bce                 mov ecx, esi
// 00455540  ffd2                 call edx
// 00455542  8d4608               lea eax, [esi + 8]
// 00455545  83c9ff               or ecx, 0xffffffff
// 00455548  f00fc108             lock xadd dword ptr [eax], ecx
// 0045554c  7509                 jne 0x455557
// 0045554e  8b16                 mov edx, dword ptr [esi]
// 00455550  8b4208               mov eax, dword ptr [edx + 8]
// 00455553  8bce                 mov ecx, esi
// 00455555  ffd0                 call eax
// 00455557  8d4c2418             lea ecx, [esp + 0x18]
// 0045555b  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 00455563  e8581e1200           call 0x5773c0
// 00455568  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0045556c  5f                   pop edi
// 0045556d  64890d00000000       mov dword ptr fs:[0], ecx
// 00455574  5e                   pop esi
// 00455575  83c428               add esp, 0x28
// 00455578  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control
{
    virtual ~Control();
    virtual void dispose();
    virtual void destroy();

    long use_count;
    long weak_count;

    void add_ref();
    void release();
};

inline void Control::add_ref()
{
    _InterlockedIncrement(&use_count);
}

inline void Control::release()
{
    if (_InterlockedDecrement(&use_count) == 0)
    {
        dispose();
        if (_InterlockedDecrement(&weak_count) == 0)
            destroy();
    }
}

template<class T> struct Shared
{
    T* pointer;
    Control* control;

    Shared(const Shared&);
    template<class U> Shared(const Shared<U>&);
    ~Shared();
};

template<class T>
inline Shared<T>::Shared(const Shared<T>& other)
    : pointer(other.pointer), control(other.control)
{
    if (control)
        control->add_ref();
}

template<class T>
template<class U>
inline Shared<T>::Shared(const Shared<U>& other)
    : pointer(other.pointer), control(other.control)
{
    if (control)
        control->add_ref();
}

template<class T>
inline Shared<T>::~Shared()
{
    if (control)
        control->release();
}

struct Model;

struct Source
{
    Shared<Model> get();
};

struct Guard
{
    unsigned char storage[12];

    Guard(Shared<void>);
    ~Guard();
};

struct Signal
{
    void fire(int);
};

struct Object
{
    Signal* getSignal();
};

struct CRobloxDoc
{
    unsigned char padding[0x94];
    Source* source;

    Shared<Object> getObject();
    void func_00455460();
};

inline Signal* signalFrom(const Shared<Object>& value)
{
    return value.pointer ? value.pointer->getSignal() : 0;
}

void CRobloxDoc::func_00455460()
{
    Guard guard(source->get());
    signalFrom(getObject())->fire(2);
}
