// from server: 78% by colin
// from server: 74% by king_originala
// roc 2008-06 004ae690  unit: RBX::Network::VClient::?$FactoryProduct  size: 286 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ae690
//
// 004ae690  64a100000000         mov eax, dword ptr fs:[0]
// 004ae696  6aff                 push -1
// 004ae698  6858847c00           push 0x7c8458
// 004ae69d  50                   push eax
// 004ae69e  64892500000000       mov dword ptr fs:[0], esp
// 004ae6a5  83ec14               sub esp, 0x14
// 004ae6a8  53                   push ebx
// 004ae6a9  55                   push ebp
// 004ae6aa  81c108010000         add ecx, 0x108
// 004ae6b0  833900               cmp dword ptr [ecx], 0
// 004ae6b3  56                   push esi
// 004ae6b4  57                   push edi
// 004ae6b5  0f84de000000         je 0x4ae799
// 004ae6bb  8d442414             lea eax, [esp + 0x14]
// 004ae6bf  50                   push eax
// 004ae6c0  e8eb2efeff           call 0x4915b0
// 004ae6c5  8b742414             mov esi, dword ptr [esp + 0x14]
// 004ae6c9  8b6e10               mov ebp, dword ptr [esi + 0x10]
// 004ae6cc  8b1d90288000         mov ebx, dword ptr [0x802890]
// 004ae6d2  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 004ae6da  396e0c               cmp dword ptr [esi + 0xc], ebp
// 004ae6dd  7602                 jbe 0x4ae6e1
// 004ae6df  ffd3                 call ebx
// 004ae6e1  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 004ae6e4  8b0e                 mov ecx, dword ptr [esi]
// 004ae6e6  894c241c             mov dword ptr [esp + 0x1c], ecx
// 004ae6ea  3b7e10               cmp edi, dword ptr [esi + 0x10]
// 004ae6ed  7602                 jbe 0x4ae6f1
// 004ae6ef  ffd3                 call ebx
// 004ae6f1  8b36                 mov esi, dword ptr [esi]
// 004ae6f3  85f6                 test esi, esi
// 004ae6f5  7406                 je 0x4ae6fd
// 004ae6f7  3b74241c             cmp esi, dword ptr [esp + 0x1c]
// 004ae6fb  7402                 je 0x4ae6ff
// 004ae6fd  ffd3                 call ebx
// 004ae6ff  3bfd                 cmp edi, ebp
// 004ae701  745c                 je 0x4ae75f
// 004ae703  85f6                 test esi, esi
// 004ae705  7550                 jne 0x4ae757
// 004ae707  ffd3                 call ebx
// 004ae709  33c0                 xor eax, eax
// 004ae70b  3b7810               cmp edi, dword ptr [eax + 0x10]
// 004ae70e  7202                 jb 0x4ae712
// 004ae710  ffd3                 call ebx
// 004ae712  8b17                 mov edx, dword ptr [edi]
// 004ae714  83ec08               sub esp, 8
// 004ae717  8bcc                 mov ecx, esp
// 004ae719  8911                 mov dword ptr [ecx], edx
// 004ae71b  8b4704               mov eax, dword ptr [edi + 4]
// 004ae71e  89642418             mov dword ptr [esp + 0x18], esp
// 004ae722  894104               mov dword ptr [ecx + 4], eax
// 004ae725  85c0                 test eax, eax
// 004ae727  740c                 je 0x4ae735
// 004ae729  83c004               add eax, 4
// 004ae72c  b901000000           mov ecx, 1
// 004ae731  f00fc108             lock xadd dword ptr [eax], ecx
// 004ae735  8b542444             mov edx, dword ptr [esp + 0x44]
// 004ae739  52                   push edx
// 004ae73a  8d4c2440             lea ecx, [esp + 0x40]
// 004ae73e  e80ddeffff           call 0x4ac550
// 004ae743  85f6                 test esi, esi
// 004ae745  7514                 jne 0x4ae75b
// 004ae747  ffd3                 call ebx
// 004ae749  33c0                 xor eax, eax
// 004ae74b  3b7810               cmp edi, dword ptr [eax + 0x10]
// 004ae74e  7202                 jb 0x4ae752
// 004ae750  ffd3                 call ebx
// 004ae752  83c708               add edi, 8
// 004ae755  eb9c                 jmp 0x4ae6f3
// 004ae757  8b06                 mov eax, dword ptr [esi]
// 004ae759  ebb0                 jmp 0x4ae70b
// 004ae75b  8b06                 mov eax, dword ptr [esi]
// 004ae75d  ebec                 jmp 0x4ae74b
// 004ae75f  8b742418             mov esi, dword ptr [esp + 0x18]
// 004ae763  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 004ae76b  85f6                 test esi, esi
// 004ae76d  742a                 je 0x4ae799
// 004ae76f  8d4604               lea eax, [esi + 4]
// 004ae772  83c9ff               or ecx, 0xffffffff
// 004ae775  f00fc108             lock xadd dword ptr [eax], ecx
// 004ae779  751e                 jne 0x4ae799
// 004ae77b  8b16                 mov edx, dword ptr [esi]
// 004ae77d  8b4204               mov eax, dword ptr [edx + 4]
// 004ae780  8bce                 mov ecx, esi
// 004ae782  ffd0                 call eax
// 004ae784  8d4e08               lea ecx, [esi + 8]
// 004ae787  83caff               or edx, 0xffffffff
// 004ae78a  f00fc111             lock xadd dword ptr [ecx], edx
// 004ae78e  7509                 jne 0x4ae799
// 004ae790  8b06                 mov eax, dword ptr [esi]
// 004ae792  8b5008               mov edx, dword ptr [eax + 8]
// 004ae795  8bce                 mov ecx, esi
// 004ae797  ffd2                 call edx
// 004ae799  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004ae79d  5f                   pop edi
// 004ae79e  5e                   pop esi
// 004ae79f  5d                   pop ebp
// 004ae7a0  64890d00000000       mov dword ptr fs:[0], ecx
// 004ae7a7  5b                   pop ebx
// 004ae7a8  83c420               add esp, 0x20
// 004ae7ab  c21000               ret 0x10

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern "C" void (__cdecl *invalid_parameter)();
typedef void (__cdecl *Failure)();

struct Control
{
    virtual ~Control();
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

template<class T> struct Shared
{
    T* object;
    Control* control;
    Shared(const Shared&);
    ~Shared();
    Shared get() const;
};

template<class T>
inline Shared<T>::Shared(const Shared<T>& other)
    : object(other.object), control(other.control)
{
    if (control)
        _InterlockedIncrement(&control->strong);
}

template<class T>
inline Shared<T>::~Shared()
{
    Control* p = control;
    if (p && _InterlockedDecrement(&p->strong) == 0)
    {
        p->dispose();
        if (_InterlockedDecrement(&p->weak) == 0)
            p->destroy();
    }
}

struct Item;
struct Vector;

struct Proxy
{
    Vector* owner;
};

struct Iterator
{
    Proxy* proxy;
    Shared<Item>* position;
    void check(const Iterator&, Failure) const;
    Shared<Item>& value(Failure) const;
    void advance(Failure);
};

struct Vector
{
    Proxy* proxy;
    unsigned long reserved[2];
    Shared<Item>* first;
    Shared<Item>* last;
    Iterator begin(Failure);
    Iterator end(Failure);
};

inline Iterator Vector::end(Failure fail)
{
    Shared<Item>* p = last;
    if (first > p)
        fail();
    Iterator result;
    result.proxy = proxy;
    result.position = p;
    return result;
}

inline Iterator Vector::begin(Failure fail)
{
    Shared<Item>* p = first;
    if (p > last)
        fail();
    Iterator result;
    result.proxy = proxy;
    result.position = p;
    return result;
}

inline void Iterator::check(const Iterator& other, Failure fail) const
{
    if (!proxy || proxy != other.proxy)
        fail();
}

inline Shared<Item>& Iterator::value(Failure fail) const
{
    Vector* owner;
    if (!proxy)
    {
        fail();
        owner = 0;
    }
    else
        owner = proxy->owner;
    if (position >= owner->last)
        fail();
    return *position;
}

inline void Iterator::advance(Failure fail)
{
    Vector* owner;
    if (!proxy)
    {
        fail();
        owner = 0;
    }
    else
        owner = proxy->owner;
    if (position >= owner->last)
        fail();
    ++position;
}

struct Callback
{
    unsigned long state[2];
    void invoke(int, Shared<Item>);
};

struct S
{
    unsigned char padding[0x108];
    Shared<Vector> entries;
    void f(Callback, int, int);
};

void S::f(Callback callback, int argument, int)
{
    if (entries.object)
    {
        Shared<Vector> snapshot = entries.get();
        Vector* vector = snapshot.object;
        Failure fail = invalid_parameter;
        Iterator finish = vector->end(fail);
        Iterator current = vector->begin(fail);
        for (;;)
        {
            current.check(finish, fail);
            if (current.position == finish.position)
                break;
            callback.invoke(argument, current.value(fail));
            current.advance(fail);
        }
    }
}
