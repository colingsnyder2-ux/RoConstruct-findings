// from server: 88% by colin
// from server: 78% by king_originala
// roc 2008-06 00558d90  unit: RBX::VInstance::?$NonFactoryProduct  size: 285 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00558d90
//
// 00558d90  6aff                 push -1
// 00558d92  64a100000000         mov eax, dword ptr fs:[0]
// 00558d98  6858847c00           push 0x7c8458
// 00558d9d  50                   push eax
// 00558d9e  64892500000000       mov dword ptr fs:[0], esp
// 00558da5  83ec18               sub esp, 0x18
// 00558da8  53                   push ebx
// 00558da9  55                   push ebp
// 00558daa  8bd9                 mov ebx, ecx
// 00558dac  83bbe400000000       cmp dword ptr [ebx + 0xe4], 0
// 00558db3  8d8be4000000         lea ecx, [ebx + 0xe4]
// 00558db9  56                   push esi
// 00558dba  57                   push edi
// 00558dbb  0f84d7000000         je 0x558e98
// 00558dc1  8d442418             lea eax, [esp + 0x18]
// 00558dc5  50                   push eax
// 00558dc6  e8e587f3ff           call 0x4915b0
// 00558dcb  8b742418             mov esi, dword ptr [esp + 0x18]
// 00558dcf  8b4610               mov eax, dword ptr [esi + 0x10]
// 00558dd2  8b2d90288000         mov ebp, dword ptr [0x802890]
// 00558dd8  c744243000000000     mov dword ptr [esp + 0x30], 0
// 00558de0  89442410             mov dword ptr [esp + 0x10], eax
// 00558de4  39460c               cmp dword ptr [esi + 0xc], eax
// 00558de7  7602                 jbe 0x558deb
// 00558de9  ffd5                 call ebp
// 00558deb  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 00558dee  8b0e                 mov ecx, dword ptr [esi]
// 00558df0  894c2420             mov dword ptr [esp + 0x20], ecx
// 00558df4  3b7e10               cmp edi, dword ptr [esi + 0x10]
// 00558df7  7602                 jbe 0x558dfb
// 00558df9  ffd5                 call ebp
// 00558dfb  8b36                 mov esi, dword ptr [esi]
// 00558dfd  8d4900               lea ecx, [ecx]
// 00558e00  85f6                 test esi, esi
// 00558e02  7406                 je 0x558e0a
// 00558e04  3b742420             cmp esi, dword ptr [esp + 0x20]
// 00558e08  7402                 je 0x558e0c
// 00558e0a  ffd5                 call ebp
// 00558e0c  3b7c2410             cmp edi, dword ptr [esp + 0x10]
// 00558e10  744c                 je 0x558e5e
// 00558e12  8b542438             mov edx, dword ptr [esp + 0x38]
// 00558e16  52                   push edx
// 00558e17  85f6                 test esi, esi
// 00558e19  753b                 jne 0x558e56
// 00558e1b  ffd5                 call ebp
// 00558e1d  33c0                 xor eax, eax
// 00558e1f  3b7810               cmp edi, dword ptr [eax + 0x10]
// 00558e22  7202                 jb 0x558e26
// 00558e24  ffd5                 call ebp
// 00558e26  8b0f                 mov ecx, dword ptr [edi]
// 00558e28  83ec08               sub esp, 8
// 00558e2b  8bc4                 mov eax, esp
// 00558e2d  89642420             mov dword ptr [esp + 0x20], esp
// 00558e31  51                   push ecx
// 00558e32  50                   push eax
// 00558e33  e808fc0b00           call 0x618a40
// 00558e38  83c408               add esp, 8
// 00558e3b  8bcb                 mov ecx, ebx
// 00558e3d  e8beebffff           call 0x557a00
// 00558e42  85f6                 test esi, esi
// 00558e44  7514                 jne 0x558e5a
// 00558e46  ffd5                 call ebp
// 00558e48  33c0                 xor eax, eax
// 00558e4a  3b7810               cmp edi, dword ptr [eax + 0x10]
// 00558e4d  7202                 jb 0x558e51
// 00558e4f  ffd5                 call ebp
// 00558e51  83c708               add edi, 8
// 00558e54  ebaa                 jmp 0x558e00
// 00558e56  8b06                 mov eax, dword ptr [esi]
// 00558e58  ebc5                 jmp 0x558e1f
// 00558e5a  8b06                 mov eax, dword ptr [esi]
// 00558e5c  ebec                 jmp 0x558e4a
// 00558e5e  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00558e62  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 00558e6a  85f6                 test esi, esi
// 00558e6c  742a                 je 0x558e98
// 00558e6e  8d5604               lea edx, [esi + 4]
// 00558e71  83c8ff               or eax, 0xffffffff
// 00558e74  f00fc102             lock xadd dword ptr [edx], eax
// 00558e78  751e                 jne 0x558e98
// 00558e7a  8b16                 mov edx, dword ptr [esi]
// 00558e7c  8b4204               mov eax, dword ptr [edx + 4]
// 00558e7f  8bce                 mov ecx, esi
// 00558e81  ffd0                 call eax
// 00558e83  8d4e08               lea ecx, [esi + 8]
// 00558e86  83caff               or edx, 0xffffffff
// 00558e89  f00fc111             lock xadd dword ptr [ecx], edx
// 00558e8d  7509                 jne 0x558e98
// 00558e8f  8b06                 mov eax, dword ptr [esi]
// 00558e91  8b5008               mov edx, dword ptr [eax + 8]
// 00558e94  8bce                 mov ecx, esi
// 00558e96  ffd2                 call edx
// 00558e98  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00558e9c  5f                   pop edi
// 00558e9d  5e                   pop esi
// 00558e9e  5d                   pop ebp
// 00558e9f  64890d00000000       mov dword ptr fs:[0], ecx
// 00558ea6  5b                   pop ebx
// 00558ea7  83c424               add esp, 0x24
// 00558eaa  c20400               ret 4
#include <intrin.h>

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void (__cdecl *invalid_parameter)();
typedef void (__cdecl *Report)();

struct Control
{
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Handle
{
    void* object;
    Control* control;
    Handle(const Handle&);
    ~Handle();
};

extern Handle __cdecl makeHandle(void*);

struct Vector;

struct Proxy
{
    Vector* owner;
};

struct Iterator
{
    Proxy* proxy;
    Handle* position;

    bool different(const Iterator&, Report) const;
    void* get(Report) const;
    void advance(Report);
};

struct Vector
{
    Proxy* proxy;
    unsigned long reserved[2];
    Handle* first;
    Handle* last;
    Handle* limit;

    Iterator begin(Report);
    Iterator end(Report);
};

inline Iterator Vector::end(Report report)
{
    Iterator result;
    Handle* value = last;
    if (first > value)
        report();
    result.position = value;
    result.proxy = proxy;
    return result;
}

inline Iterator Vector::begin(Report report)
{
    Iterator result;
    Handle* value = first;
    if (value > last)
        report();
    result.position = value;
    result.proxy = proxy;
    return result;
}

inline bool Iterator::different(const Iterator& other, Report report) const
{
    if (!proxy || proxy != other.proxy)
        report();
    return position != other.position;
}

inline void* Iterator::get(Report report) const
{
    if (!proxy)
        report();
    Vector* owner = proxy ? proxy->owner : 0;
    if (position >= owner->last)
        report();
    return position->object;
}

inline void Iterator::advance(Report report)
{
    if (!proxy)
        report();
    Vector* owner = proxy ? proxy->owner : 0;
    if (position >= owner->last)
        report();
    ++position;
}

struct Holder
{
    Vector* object;
    Control* control;
    Holder get() const;
    ~Holder();
};

inline Holder::~Holder()
{
    Control* p = control;
    if (p && _InterlockedExchangeAdd(&p->strong, -1) == 0)
    {
        p->dispose();
        if (_InterlockedExchangeAdd(&p->weak, -1) == 0)
            p->destroy();
    }
}

struct S
{
    unsigned char reserved[0xe4];
    Holder children;

    void apply(Handle, int);
    void f(int);
};

void S::f(int argument)
{
    if (children.object)
    {
        Holder snapshot = children.get();
        Vector* vector = snapshot.object;
        Report report = invalid_parameter;
        _ReadWriteBarrier();
        Iterator finish = vector->end(report);
        Iterator current = vector->begin(report);
        for (; current.different(finish, report); current.advance(report))
            apply(makeHandle(current.get(report)), argument);
    }
}
