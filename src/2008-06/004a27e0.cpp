// from server: 81% by colin
// from server: 76% by king_originala
// roc 2008-06 004a27e0  unit: RBX::Network::VServer::?$FactoryProduct  size: 358 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a27e0
//
// 004a27e0  64a100000000         mov eax, dword ptr fs:[0]
// 004a27e6  6aff                 push -1
// 004a27e8  6858847c00           push 0x7c8458
// 004a27ed  50                   push eax
// 004a27ee  64892500000000       mov dword ptr fs:[0], esp
// 004a27f5  83ec14               sub esp, 0x14
// 004a27f8  53                   push ebx
// 004a27f9  55                   push ebp
// 004a27fa  81c108010000         add ecx, 0x108
// 004a2800  833900               cmp dword ptr [ecx], 0
// 004a2803  56                   push esi
// 004a2804  57                   push edi
// 004a2805  0f8426010000         je 0x4a2931
// 004a280b  8d442414             lea eax, [esp + 0x14]
// 004a280f  50                   push eax
// 004a2810  e89bedfeff           call 0x4915b0
// 004a2815  8b742414             mov esi, dword ptr [esp + 0x14]
// 004a2819  8b6e10               mov ebp, dword ptr [esi + 0x10]
// 004a281c  8b1d90288000         mov ebx, dword ptr [0x802890]
// 004a2822  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 004a282a  396e0c               cmp dword ptr [esi + 0xc], ebp
// 004a282d  7602                 jbe 0x4a2831
// 004a282f  ffd3                 call ebx
// 004a2831  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 004a2834  8b0e                 mov ecx, dword ptr [esi]
// 004a2836  894c241c             mov dword ptr [esp + 0x1c], ecx
// 004a283a  3b7e10               cmp edi, dword ptr [esi + 0x10]
// 004a283d  7602                 jbe 0x4a2841
// 004a283f  ffd3                 call ebx
// 004a2841  8b36                 mov esi, dword ptr [esi]
// 004a2843  85f6                 test esi, esi
// 004a2845  7406                 je 0x4a284d
// 004a2847  3b74241c             cmp esi, dword ptr [esp + 0x1c]
// 004a284b  7402                 je 0x4a284f
// 004a284d  ffd3                 call ebx
// 004a284f  3bfd                 cmp edi, ebp
// 004a2851  0f84a0000000         je 0x4a28f7
// 004a2857  85f6                 test esi, esi
// 004a2859  0f8589000000         jne 0x4a28e8
// 004a285f  ffd3                 call ebx
// 004a2861  33c0                 xor eax, eax
// 004a2863  3b7810               cmp edi, dword ptr [eax + 0x10]
// 004a2866  7202                 jb 0x4a286a
// 004a2868  ffd3                 call ebx
// 004a286a  8b17                 mov edx, dword ptr [edi]
// 004a286c  83ec08               sub esp, 8
// 004a286f  8bcc                 mov ecx, esp
// 004a2871  8911                 mov dword ptr [ecx], edx
// 004a2873  8b4704               mov eax, dword ptr [edi + 4]
// 004a2876  89642418             mov dword ptr [esp + 0x18], esp
// 004a287a  894104               mov dword ptr [ecx + 4], eax
// 004a287d  85c0                 test eax, eax
// 004a287f  740c                 je 0x4a288d
// 004a2881  83c004               add eax, 4
// 004a2884  b901000000           mov ecx, 1
// 004a2889  f00fc108             lock xadd dword ptr [eax], ecx
// 004a288d  8b542444             mov edx, dword ptr [esp + 0x44]
// 004a2891  52                   push edx
// 004a2892  8d4c2440             lea ecx, [esp + 0x40]
// 004a2896  e8854b0e00           call 0x587420
// 004a289b  85f6                 test esi, esi
// 004a289d  7550                 jne 0x4a28ef
// 004a289f  ffd3                 call ebx
// 004a28a1  33c0                 xor eax, eax
// 004a28a3  3b7810               cmp edi, dword ptr [eax + 0x10]
// 004a28a6  7202                 jb 0x4a28aa
// 004a28a8  ffd3                 call ebx
// 004a28aa  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 004a28ae  8b542438             mov edx, dword ptr [esp + 0x38]
// 004a28b2  83ec10               sub esp, 0x10
// 004a28b5  8bc4                 mov eax, esp
// 004a28b7  8908                 mov dword ptr [eax], ecx
// 004a28b9  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 004a28bd  895004               mov dword ptr [eax + 4], edx
// 004a28c0  8b542450             mov edx, dword ptr [esp + 0x50]
// 004a28c4  894808               mov dword ptr [eax + 8], ecx
// 004a28c7  8b0f                 mov ecx, dword ptr [edi]
// 004a28c9  89500c               mov dword ptr [eax + 0xc], edx
// 004a28cc  e80fffffff           call 0x4a27e0
// 004a28d1  85f6                 test esi, esi
// 004a28d3  751e                 jne 0x4a28f3
// 004a28d5  ffd3                 call ebx
// 004a28d7  33c0                 xor eax, eax
// 004a28d9  3b7810               cmp edi, dword ptr [eax + 0x10]
// 004a28dc  7202                 jb 0x4a28e0
// 004a28de  ffd3                 call ebx
// 004a28e0  83c708               add edi, 8
// 004a28e3  e95bffffff           jmp 0x4a2843
// 004a28e8  8b06                 mov eax, dword ptr [esi]
// 004a28ea  e974ffffff           jmp 0x4a2863
// 004a28ef  8b06                 mov eax, dword ptr [esi]
// 004a28f1  ebb0                 jmp 0x4a28a3
// 004a28f3  8b06                 mov eax, dword ptr [esi]
// 004a28f5  ebe2                 jmp 0x4a28d9
// 004a28f7  8b742418             mov esi, dword ptr [esp + 0x18]
// 004a28fb  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 004a2903  85f6                 test esi, esi
// 004a2905  742a                 je 0x4a2931
// 004a2907  8d4604               lea eax, [esi + 4]
// 004a290a  83c9ff               or ecx, 0xffffffff
// 004a290d  f00fc108             lock xadd dword ptr [eax], ecx
// 004a2911  751e                 jne 0x4a2931
// 004a2913  8b16                 mov edx, dword ptr [esi]
// 004a2915  8b4204               mov eax, dword ptr [edx + 4]
// 004a2918  8bce                 mov ecx, esi
// 004a291a  ffd0                 call eax
// 004a291c  8d4e08               lea ecx, [esi + 8]
// 004a291f  83caff               or edx, 0xffffffff
// 004a2922  f00fc111             lock xadd dword ptr [ecx], edx
// 004a2926  7509                 jne 0x4a2931
// 004a2928  8b06                 mov eax, dword ptr [esi]
// 004a292a  8b5008               mov edx, dword ptr [eax + 8]
// 004a292d  8bce                 mov ecx, esi
// 004a292f  ffd2                 call edx
// 004a2931  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004a2935  5f                   pop edi
// 004a2936  5e                   pop esi
// 004a2937  5d                   pop ebp
// 004a2938  64890d00000000       mov dword ptr fs:[0], ecx
// 004a293f  5b                   pop ebx
// 004a2940  83c420               add esp, 0x20
// 004a2943  c21000               ret 0x10

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern "C" void (__cdecl *invalid_parameter)();

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Node;
struct Vector;

template<class T> struct Shared {
    T* object;
    Control* control;

    Shared(const Shared& other);
    ~Shared();
    Shared copy() const;
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
    Control* p = control;
    if (p && _InterlockedDecrement(&p->strong) == 0) {
        p->dispose();
        if (_InterlockedDecrement(&p->weak) == 0)
            p->destroy();
    }
}

struct Vector {
    Vector* owner;
    unsigned long reserved[2];
    Shared<Node>* first;
    Shared<Node>* last;

    Vector* container(void (__cdecl *fail)()) const;
};

__forceinline Vector* Vector::container(void (__cdecl *fail)()) const
{
    if (!this) {
        fail();
        return 0;
    }
    return owner;
}

struct Action {
    unsigned long first;
    unsigned long second;
    void* context;
    unsigned long fourth;

    void invoke(void* context, Shared<Node> item);
};

struct Node {
    unsigned char reserved[0x108];
    Shared<Vector> children;

    void visit(Action action);
};

void Node::visit(Action action)
{
    if (children.object) {
        Shared<Vector> collection = children.copy();
        Vector* vector = collection.object;
        Shared<Node>* finish = vector->last;
        void (__cdecl *fail)() = invalid_parameter;

        if (vector->first > finish)
            fail();

        Shared<Node>* current = vector->first;
        Vector* expected = vector->owner;

        if (current > vector->last)
            fail();

        for (;;) {
            vector = vector->owner;
            if (!vector || vector != expected)
                fail();

            if (current == finish)
                break;

            if (current >= vector->container(fail)->last)
                fail();

            action.invoke(action.context, *current);

            if (current >= vector->container(fail)->last)
                fail();

            current->object->visit(action);

            if (current >= vector->container(fail)->last)
                fail();

            ++current;
        }
    }
}
