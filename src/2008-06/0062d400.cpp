// from server: 78% by colin
// from server: 77% by king_originala
// roc 2008-06 0062d400  unit: RBX::VForceField::?$FactoryProduct  size: 354 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0062d400
//
// 0062d400  64a100000000         mov eax, dword ptr fs:[0]
// 0062d406  6aff                 push -1
// 0062d408  6858847c00           push 0x7c8458
// 0062d40d  50                   push eax
// 0062d40e  64892500000000       mov dword ptr fs:[0], esp
// 0062d415  83ec14               sub esp, 0x14
// 0062d418  53                   push ebx
// 0062d419  55                   push ebp
// 0062d41a  81c108010000         add ecx, 0x108
// 0062d420  833900               cmp dword ptr [ecx], 0
// 0062d423  56                   push esi
// 0062d424  57                   push edi
// 0062d425  0f8422010000         je 0x62d54d
// 0062d42b  8d442414             lea eax, [esp + 0x14]
// 0062d42f  50                   push eax
// 0062d430  e87b41e6ff           call 0x4915b0
// 0062d435  8b742414             mov esi, dword ptr [esp + 0x14]
// 0062d439  8b6e10               mov ebp, dword ptr [esi + 0x10]
// 0062d43c  8b1d90288000         mov ebx, dword ptr [0x802890]
// 0062d442  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 0062d44a  396e0c               cmp dword ptr [esi + 0xc], ebp
// 0062d44d  7602                 jbe 0x62d451
// 0062d44f  ffd3                 call ebx
// 0062d451  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 0062d454  8b0e                 mov ecx, dword ptr [esi]
// 0062d456  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0062d45a  3b7e10               cmp edi, dword ptr [esi + 0x10]
// 0062d45d  7602                 jbe 0x62d461
// 0062d45f  ffd3                 call ebx
// 0062d461  8b36                 mov esi, dword ptr [esi]
// 0062d463  85f6                 test esi, esi
// 0062d465  7406                 je 0x62d46d
// 0062d467  3b74241c             cmp esi, dword ptr [esp + 0x1c]
// 0062d46b  7402                 je 0x62d46f
// 0062d46d  ffd3                 call ebx
// 0062d46f  3bfd                 cmp edi, ebp
// 0062d471  0f849c000000         je 0x62d513
// 0062d477  85f6                 test esi, esi
// 0062d479  0f8585000000         jne 0x62d504
// 0062d47f  ffd3                 call ebx
// 0062d481  33c0                 xor eax, eax
// 0062d483  3b7810               cmp edi, dword ptr [eax + 0x10]
// 0062d486  7202                 jb 0x62d48a
// 0062d488  ffd3                 call ebx
// 0062d48a  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0062d48e  8b442438             mov eax, dword ptr [esp + 0x38]
// 0062d492  52                   push edx
// 0062d493  8b17                 mov edx, dword ptr [edi]
// 0062d495  50                   push eax
// 0062d496  83ec08               sub esp, 8
// 0062d499  8bcc                 mov ecx, esp
// 0062d49b  8911                 mov dword ptr [ecx], edx
// 0062d49d  8b4704               mov eax, dword ptr [edi + 4]
// 0062d4a0  89642420             mov dword ptr [esp + 0x20], esp
// 0062d4a4  894104               mov dword ptr [ecx + 4], eax
// 0062d4a7  85c0                 test eax, eax
// 0062d4a9  740c                 je 0x62d4b7
// 0062d4ab  83c004               add eax, 4
// 0062d4ae  b901000000           mov ecx, 1
// 0062d4b3  f00fc108             lock xadd dword ptr [eax], ecx
// 0062d4b7  ff542444             call dword ptr [esp + 0x44]
// 0062d4bb  83c410               add esp, 0x10
// 0062d4be  85f6                 test esi, esi
// 0062d4c0  7549                 jne 0x62d50b
// 0062d4c2  ffd3                 call ebx
// 0062d4c4  33c0                 xor eax, eax
// 0062d4c6  3b7810               cmp edi, dword ptr [eax + 0x10]
// 0062d4c9  7202                 jb 0x62d4cd
// 0062d4cb  ffd3                 call ebx
// 0062d4cd  8b542434             mov edx, dword ptr [esp + 0x34]
// 0062d4d1  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0062d4d5  83ec0c               sub esp, 0xc
// 0062d4d8  8bc4                 mov eax, esp
// 0062d4da  8910                 mov dword ptr [eax], edx
// 0062d4dc  8b542448             mov edx, dword ptr [esp + 0x48]
// 0062d4e0  894804               mov dword ptr [eax + 4], ecx
// 0062d4e3  8b0f                 mov ecx, dword ptr [edi]
// 0062d4e5  895008               mov dword ptr [eax + 8], edx
// 0062d4e8  e813ffffff           call 0x62d400
// 0062d4ed  85f6                 test esi, esi
// 0062d4ef  751e                 jne 0x62d50f
// 0062d4f1  ffd3                 call ebx
// 0062d4f3  33c0                 xor eax, eax
// 0062d4f5  3b7810               cmp edi, dword ptr [eax + 0x10]
// 0062d4f8  7202                 jb 0x62d4fc
// 0062d4fa  ffd3                 call ebx
// 0062d4fc  83c708               add edi, 8
// 0062d4ff  e95fffffff           jmp 0x62d463
// 0062d504  8b06                 mov eax, dword ptr [esi]
// 0062d506  e978ffffff           jmp 0x62d483
// 0062d50b  8b06                 mov eax, dword ptr [esi]
// 0062d50d  ebb7                 jmp 0x62d4c6
// 0062d50f  8b06                 mov eax, dword ptr [esi]
// 0062d511  ebe2                 jmp 0x62d4f5
// 0062d513  8b742418             mov esi, dword ptr [esp + 0x18]
// 0062d517  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 0062d51f  85f6                 test esi, esi
// 0062d521  742a                 je 0x62d54d
// 0062d523  8d4604               lea eax, [esi + 4]
// 0062d526  83c9ff               or ecx, 0xffffffff
// 0062d529  f00fc108             lock xadd dword ptr [eax], ecx
// 0062d52d  751e                 jne 0x62d54d
// 0062d52f  8b16                 mov edx, dword ptr [esi]
// 0062d531  8b4204               mov eax, dword ptr [edx + 4]
// 0062d534  8bce                 mov ecx, esi
// 0062d536  ffd0                 call eax
// 0062d538  8d4e08               lea ecx, [esi + 8]
// 0062d53b  83caff               or edx, 0xffffffff
// 0062d53e  f00fc111             lock xadd dword ptr [ecx], edx
// 0062d542  7509                 jne 0x62d54d
// 0062d544  8b06                 mov eax, dword ptr [esi]
// 0062d546  8b5008               mov edx, dword ptr [eax + 8]
// 0062d549  8bce                 mov ecx, esi
// 0062d54b  ffd2                 call edx
// 0062d54d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0062d551  5f                   pop edi
// 0062d552  5e                   pop esi
// 0062d553  5d                   pop ebp
// 0062d554  64890d00000000       mov dword ptr fs:[0], ecx
// 0062d55b  5b                   pop ebx
// 0062d55c  83c420               add esp, 0x20
// 0062d55f  c20c00               ret 0xc

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern "C" void (__cdecl* invalid_parameter)();

struct Object;
struct Vector;
typedef void (__cdecl* ErrorHandler)();

struct Counter
{
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

template<class T> struct Shared
{
    T* pointer;
    Counter* counter;
    Shared(const Shared& other);
    ~Shared();
};

template<class T>
inline Shared<T>::Shared(const Shared& other)
    : pointer(other.pointer), counter(other.counter)
{
    if (counter)
        _InterlockedIncrement(&counter->strong);
}

template<class T>
inline Shared<T>::~Shared()
{
    Counter* p = counter;
    if (p && _InterlockedDecrement(&p->strong) == 0)
    {
        p->dispose();
        if (_InterlockedDecrement(&p->weak) == 0)
            p->destroy();
    }
}

struct Holder
{
    Vector* pointer;
    Counter* counter;
    Shared<Vector> get();
};

struct Vector
{
    Vector** proxy;
    unsigned long reserved[2];
    Shared<Object>* first;
    Shared<Object>* last;
};

struct Iterator
{
    Vector** proxy;
    Shared<Object>* position;
    Vector* container(ErrorHandler error) const;
    Shared<Object>& dereference(ErrorHandler error) const;
    void increment(ErrorHandler error);
};

inline Vector* Iterator::container(ErrorHandler error) const
{
    if (!proxy)
    {
        error();
        return 0;
    }
    return *proxy;
}

inline Shared<Object>& Iterator::dereference(ErrorHandler error) const
{
    if (position >= container(error)->last)
        error();
    return *position;
}

inline void Iterator::increment(ErrorHandler error)
{
    if (position >= container(error)->last)
        error();
    ++position;
}

struct Visitor
{
    void (__cdecl* function)(Shared<Object>, unsigned long, unsigned long);
    unsigned long first;
    unsigned long second;
};

struct Object
{
    unsigned char reserved[0x108];
    Holder children;
    void visit(Visitor visitor);
};

void Object::visit(Visitor visitor)
{
    if (children.pointer)
    {
        Shared<Vector> collection = children.get();
        Vector* vector = collection.pointer;
        Shared<Object>* finish = vector->last;
        ErrorHandler error = invalid_parameter;

        if (vector->first > finish)
            error();

        Iterator current;
        current.position = vector->first;
        Vector** expected = vector->proxy;

        if (current.position > vector->last)
            error();

        current.proxy = vector->proxy;
        for (;;)
        {
            if (!current.proxy || current.proxy != expected)
                error();

            if (current.position == finish)
                break;

            Shared<Object>& child = current.dereference(error);
            visitor.function(child, visitor.first, visitor.second);
            current.dereference(error).pointer->visit(visitor);
            current.increment(error);
        }
    }
}
