// from server: 69% by colin
// from server: 64% by king_originala
// roc 2008-06 00581090  unit: RBX::DeleteSelectionVerb  size: 540 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00581090
//
// 00581090  6aff                 push -1
// 00581092  68a0937d00           push 0x7d93a0
// 00581097  64a100000000         mov eax, dword ptr fs:[0]
// 0058109d  50                   push eax
// 0058109e  64892500000000       mov dword ptr fs:[0], esp
// 005810a5  83ec14               sub esp, 0x14
// 005810a8  53                   push ebx
// 005810a9  8bd9                 mov ebx, ecx
// 005810ab  56                   push esi
// 005810ac  8b7320               mov esi, dword ptr [ebx + 0x20]
// 005810af  895c2408             mov dword ptr [esp + 8], ebx
// 005810b3  e898c1ffff           call 0x57d250
// 005810b8  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 005810bb  85c9                 test ecx, ecx
// 005810bd  7407                 je 0x5810c6
// 005810bf  e8ec42e9ff           call 0x4153b0
// 005810c4  eb02                 jmp 0x5810c8
// 005810c6  33c0                 xor eax, eax
// 005810c8  8d8854010000         lea ecx, [eax + 0x154]
// 005810ce  8b01                 mov eax, dword ptr [ecx]
// 005810d0  8b5010               mov edx, dword ptr [eax + 0x10]
// 005810d3  2b500c               sub edx, dword ptr [eax + 0xc]
// 005810d6  c1fa03               sar edx, 3
// 005810d9  85d2                 test edx, edx
// 005810db  0f86b8010000         jbe 0x581299
// 005810e1  57                   push edi
// 005810e2  8d442410             lea eax, [esp + 0x10]
// 005810e6  50                   push eax
// 005810e7  e8c404f1ff           call 0x4915b0
// 005810ec  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005810f0  c744242800000000     mov dword ptr [esp + 0x28], 0
// 005810f8  85ff                 test edi, edi
// 005810fa  0f841b010000         je 0x58121b
// 00581100  8b770c               mov esi, dword ptr [edi + 0xc]
// 00581103  3b7710               cmp esi, dword ptr [edi + 0x10]
// 00581106  7606                 jbe 0x58110e
// 00581108  ff1590288000         call dword ptr [0x802890]
// 0058110e  8b1f                 mov ebx, dword ptr [edi]
// 00581110  55                   push ebp
// 00581111  8bee                 mov ebp, esi
// 00581113  8b7710               mov esi, dword ptr [edi + 0x10]
// 00581116  39770c               cmp dword ptr [edi + 0xc], esi
// 00581119  7606                 jbe 0x581121
// 0058111b  ff1590288000         call dword ptr [0x802890]
// 00581121  8b07                 mov eax, dword ptr [edi]
// 00581123  85db                 test ebx, ebx
// 00581125  7404                 je 0x58112b
// 00581127  3bd8                 cmp ebx, eax
// 00581129  740a                 je 0x581135
// 0058112b  8b3d90288000         mov edi, dword ptr [0x802890]
// 00581131  ffd7                 call edi
// 00581133  eb06                 jmp 0x58113b
// 00581135  8b3d90288000         mov edi, dword ptr [0x802890]
// 0058113b  3bee                 cmp ebp, esi
// 0058113d  0f84d3000000         je 0x581216
// 00581143  85db                 test ebx, ebx
// 00581145  0f85c0000000         jne 0x58120b
// 0058114b  ffd7                 call edi
// 0058114d  33c0                 xor eax, eax
// 0058114f  3b6810               cmp ebp, dword ptr [eax + 0x10]
// 00581152  7202                 jb 0x581156
// 00581154  ffd7                 call edi
// 00581156  8b7504               mov esi, dword ptr [ebp + 4]
// 00581159  8b7d00               mov edi, dword ptr [ebp]
// 0058115c  897c241c             mov dword ptr [esp + 0x1c], edi
// 00581160  89742420             mov dword ptr [esp + 0x20], esi
// 00581164  85f6                 test esi, esi
// 00581166  740c                 je 0x581174
// 00581168  8d4e04               lea ecx, [esi + 4]
// 0058116b  ba01000000           mov edx, 1
// 00581170  f00fc111             lock xadd dword ptr [ecx], edx
// 00581174  6a00                 push 0
// 00581176  68b8819400           push 0x9481b8
// 0058117b  687c909200           push 0x92907c
// 00581180  6a00                 push 0
// 00581182  57                   push edi
// 00581183  c644244001           mov byte ptr [esp + 0x40], 1
// 00581188  e839061200           call 0x6a17c6
// 0058118d  83c414               add esp, 0x14
// 00581190  85c0                 test eax, eax
// 00581192  7521                 jne 0x5811b5
// 00581194  50                   push eax
// 00581195  68187c9300           push 0x937c18
// 0058119a  687c909200           push 0x92907c
// 0058119f  50                   push eax
// 005811a0  57                   push edi
// 005811a1  e820061200           call 0x6a17c6
// 005811a6  83c414               add esp, 0x14
// 005811a9  85c0                 test eax, eax
// 005811ab  7508                 jne 0x5811b5
// 005811ad  50                   push eax
// 005811ae  8bcf                 mov ecx, edi
// 005811b0  e83b97fdff           call 0x55a8f0
// 005811b5  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005811ba  85f6                 test esi, esi
// 005811bc  742a                 je 0x5811e8
// 005811be  8d4604               lea eax, [esi + 4]
// 005811c1  83c9ff               or ecx, 0xffffffff
// 005811c4  f00fc108             lock xadd dword ptr [eax], ecx
// 005811c8  751e                 jne 0x5811e8
// 005811ca  8b16                 mov edx, dword ptr [esi]
// 005811cc  8b4204               mov eax, dword ptr [edx + 4]
// 005811cf  8bce                 mov ecx, esi
// 005811d1  ffd0                 call eax
// 005811d3  8d4e08               lea ecx, [esi + 8]
// 005811d6  83caff               or edx, 0xffffffff
// 005811d9  f00fc111             lock xadd dword ptr [ecx], edx
// 005811dd  7509                 jne 0x5811e8
// 005811df  8b06                 mov eax, dword ptr [esi]
// 005811e1  8b5008               mov edx, dword ptr [eax + 8]
// 005811e4  8bce                 mov ecx, esi
// 005811e6  ffd2                 call edx
// 005811e8  85db                 test ebx, ebx
// 005811ea  7526                 jne 0x581212
// 005811ec  ff1590288000         call dword ptr [0x802890]
// 005811f2  33c0                 xor eax, eax
// 005811f4  3b6810               cmp ebp, dword ptr [eax + 0x10]
// 005811f7  7206                 jb 0x5811ff
// 005811f9  ff1590288000         call dword ptr [0x802890]
// 005811ff  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00581203  83c508               add ebp, 8
// 00581206  e908ffffff           jmp 0x581113
// 0058120b  8b03                 mov eax, dword ptr [ebx]
// 0058120d  e93dffffff           jmp 0x58114f
// 00581212  8b03                 mov eax, dword ptr [ebx]
// 00581214  ebde                 jmp 0x5811f4
// 00581216  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0058121a  5d                   pop ebp
// 0058121b  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 0058121e  5f                   pop edi
// 0058121f  85c9                 test ecx, ecx
// 00581221  7407                 je 0x58122a
// 00581223  e8b81fedff           call 0x4531e0
// 00581228  eb02                 jmp 0x58122c
// 0058122a  33c0                 xor eax, eax
// 0058122c  6a07                 push 7
// 0058122e  8bc8                 mov ecx, eax
// 00581230  e8ebc50300           call 0x5bd820
// 00581235  8b4304               mov eax, dword ptr [ebx + 4]
// 00581238  83781c10             cmp dword ptr [eax + 0x1c], 0x10
// 0058123c  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 0058123f  7205                 jb 0x581246
// 00581241  8b4008               mov eax, dword ptr [eax + 8]
// 00581244  eb03                 jmp 0x581249
// 00581246  83c008               add eax, 8
// 00581249  51                   push ecx
// 0058124a  50                   push eax
// 0058124b  e870b30000           call 0x58c5c0
// 00581250  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00581254  8b01                 mov eax, dword ptr [ecx]
// 00581256  8b10                 mov edx, dword ptr [eax]
// 00581258  83c408               add esp, 8
// 0058125b  6a01                 push 1
// 0058125d  ffd2                 call edx
// 0058125f  8b742410             mov esi, dword ptr [esp + 0x10]
// 00581263  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 0058126b  85f6                 test esi, esi
// 0058126d  742a                 je 0x581299
// 0058126f  8d4604               lea eax, [esi + 4]
// 00581272  83c9ff               or ecx, 0xffffffff
// 00581275  f00fc108             lock xadd dword ptr [eax], ecx
// 00581279  751e                 jne 0x581299
// 0058127b  8b16                 mov edx, dword ptr [esi]
// 0058127d  8b4204               mov eax, dword ptr [edx + 4]
// 00581280  8bce                 mov ecx, esi
// 00581282  ffd0                 call eax
// 00581284  8d4e08               lea ecx, [esi + 8]
// 00581287  83caff               or edx, 0xffffffff
// 0058128a  f00fc111             lock xadd dword ptr [ecx], edx
// 0058128e  7509                 jne 0x581299
// 00581290  8b06                 mov eax, dword ptr [esi]
// 00581292  8b5008               mov edx, dword ptr [eax + 8]
// 00581295  8bce                 mov ecx, esi
// 00581297  ffd2                 call edx
// 00581299  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0058129d  5e                   pop esi
// 0058129e  5b                   pop ebx
// 0058129f  64890d00000000       mov dword ptr fs:[0], ecx
// 005812a6  83c420               add esp, 0x20
// 005812a9  c20400               ret 4

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern "C" void __cdecl _invalid_parameter_noinfo();
extern "C" void* __cdecl __RTDynamicCast(void*, long, void*, void*, int);

extern char instanceType;
extern char workspaceType;
extern char playersType;

struct Control
{
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

template<class T> struct Shared
{
    T* pointer;
    Control* control;
    Shared(const Shared&);
    ~Shared();
};

template<class T>
__forceinline Shared<T>::Shared(const Shared& other)
    : pointer(other.pointer), control(other.control)
{
    if (control)
        _InterlockedIncrement(&control->strong);
}

template<class T>
__forceinline Shared<T>::~Shared()
{
    if (control && _InterlockedDecrement(&control->strong) == 0)
    {
        control->dispose();
        if (_InterlockedDecrement(&control->weak) == 0)
            control->destroy();
    }
}

struct Instance
{
    void detach(int);
};

struct Vector;

struct Proxy
{
    Vector* container;
};

struct Iterator
{
    Proxy* owner;
    Shared<Instance>* position;
    Shared<Instance>& operator*() const;
    Iterator& operator++();
    bool operator!=(const Iterator&) const;
};

struct Vector
{
    Proxy* proxy;
    unsigned long reserved[2];
    Shared<Instance>* first;
    Shared<Instance>* last;
    Shared<Instance>* limit;

    Iterator begin();
    Iterator end();
};

__forceinline Iterator Vector::begin()
{
    Iterator result;
    result.position = first;
    if (first > last)
        _invalid_parameter_noinfo();
    result.owner = proxy;
    return result;
}

__forceinline Iterator Vector::end()
{
    Iterator result;
    result.position = last;
    if (first > last)
        _invalid_parameter_noinfo();
    result.owner = proxy;
    return result;
}

__forceinline bool Iterator::operator!=(const Iterator& other) const
{
    if (!owner || owner != other.owner)
        _invalid_parameter_noinfo();
    return position != other.position;
}

__forceinline Shared<Instance>& Iterator::operator*() const
{
    Vector* container;
    if (!owner)
    {
        _invalid_parameter_noinfo();
        container = 0;
    }
    else
        container = owner->container;
    if (position >= container->last)
        _invalid_parameter_noinfo();
    return *position;
}

__forceinline Iterator& Iterator::operator++()
{
    Vector* container;
    if (!owner)
    {
        _invalid_parameter_noinfo();
        container = 0;
    }
    else
        container = owner->container;
    if (position >= container->last)
        _invalid_parameter_noinfo();
    ++position;
    return *this;
}

struct Selection
{
    Vector* pointer;
    Control* control;
    Shared<Vector> snapshot();
};

struct Root
{
    char padding[0x154];
    Selection selection;
};

struct History
{
    void mark(int);
};

struct Context
{
    Root* root();
    History* history();
};

struct String
{
    unsigned long padding[2];
    union
    {
        char local[16];
        char* allocated;
    } data;
    unsigned long length;
    unsigned long capacity;
};

struct Argument
{
    virtual void finish(int);
};

extern void __cdecl notify(const char*, unsigned long);

struct S
{
    unsigned long padding0;
    String* name;
    unsigned long padding8;
    unsigned long value;
    unsigned long padding10[4];
    Context* context;

    void prepare();
    void f(Argument*);
};

void S::f(Argument* argument)
{
    prepare();

    Root* r = context ? context->root() : 0;
    Selection* selection = &r->selection;

    if (static_cast<unsigned long>(
            selection->pointer->last - selection->pointer->first) > 0)
    {
        Shared<Vector> snapshot = selection->snapshot();

        if (snapshot.pointer)
        {
            for (Iterator it = snapshot.pointer->begin();
                 it != snapshot.pointer->end(); ++it)
            {
                Shared<Instance> object(*it);
                if (!__RTDynamicCast(object.pointer, 0,
                                     &instanceType, &workspaceType, 0) &&
                    !__RTDynamicCast(object.pointer, 0,
                                     &instanceType, &playersType, 0))
                    object.pointer->detach(0);
            }
        }

        History* h = context ? context->history() : 0;
        h->mark(7);
        notify(name->capacity >= 16 ? name->data.allocated : name->data.local,
               value);
        argument->finish(1);
    }
}
