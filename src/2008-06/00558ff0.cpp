// from server: 74% by colin
// from server: 72% by king_originala
// roc 2008-06 00558ff0  unit: RBX::VInstance::?$NonFactoryProduct  size: 383 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00558ff0
//
// 00558ff0  64a100000000         mov eax, dword ptr fs:[0]
// 00558ff6  6aff                 push -1
// 00558ff8  68e0e27c00           push 0x7ce2e0
// 00558ffd  50                   push eax
// 00558ffe  64892500000000       mov dword ptr fs:[0], esp
// 00559005  83ec20               sub esp, 0x20
// 00559008  53                   push ebx
// 00559009  55                   push ebp
// 0055900a  81c108010000         add ecx, 0x108
// 00559010  833900               cmp dword ptr [ecx], 0
// 00559013  56                   push esi
// 00559014  57                   push edi
// 00559015  0f843f010000         je 0x55915a
// 0055901b  8d442420             lea eax, [esp + 0x20]
// 0055901f  50                   push eax
// 00559020  e88b85f3ff           call 0x4915b0
// 00559025  8b742420             mov esi, dword ptr [esp + 0x20]
// 00559029  8b5e10               mov ebx, dword ptr [esi + 0x10]
// 0055902c  8b2d90288000         mov ebp, dword ptr [0x802890]
// 00559032  c744243800000000     mov dword ptr [esp + 0x38], 0
// 0055903a  895c2410             mov dword ptr [esp + 0x10], ebx
// 0055903e  395e0c               cmp dword ptr [esi + 0xc], ebx
// 00559041  7602                 jbe 0x559045
// 00559043  ffd5                 call ebp
// 00559045  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 00559048  8b0e                 mov ecx, dword ptr [esi]
// 0055904a  894c2428             mov dword ptr [esp + 0x28], ecx
// 0055904e  3b7e10               cmp edi, dword ptr [esi + 0x10]
// 00559051  7602                 jbe 0x559055
// 00559053  ffd5                 call ebp
// 00559055  8b36                 mov esi, dword ptr [esi]
// 00559057  89742418             mov dword ptr [esp + 0x18], esi
// 0055905b  897c241c             mov dword ptr [esp + 0x1c], edi
// 0055905f  90                   nop 
// 00559060  85f6                 test esi, esi
// 00559062  7406                 je 0x55906a
// 00559064  3b742428             cmp esi, dword ptr [esp + 0x28]
// 00559068  7402                 je 0x55906c
// 0055906a  ffd5                 call ebp
// 0055906c  3bfb                 cmp edi, ebx
// 0055906e  0f84ac000000         je 0x559120
// 00559074  85f6                 test esi, esi
// 00559076  0f8599000000         jne 0x559115
// 0055907c  ffd5                 call ebp
// 0055907e  3b7e10               cmp edi, dword ptr [esi + 0x10]
// 00559081  7202                 jb 0x559085
// 00559083  ffd5                 call ebp
// 00559085  8b542444             mov edx, dword ptr [esp + 0x44]
// 00559089  8b37                 mov esi, dword ptr [edi]
// 0055908b  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 0055908f  8b9e04010000         mov ebx, dword ptr [esi + 0x104]
// 00559095  52                   push edx
// 00559096  83ec10               sub esp, 0x10
// 00559099  89642428             mov dword ptr [esp + 0x28], esp
// 0055909d  8bfc                 mov edi, esp
// 0055909f  56                   push esi
// 005590a0  57                   push edi
// 005590a1  897c2430             mov dword ptr [esp + 0x30], edi
// 005590a5  e896f90b00           call 0x618a40
// 005590aa  53                   push ebx
// 005590ab  83c708               add edi, 8
// 005590ae  57                   push edi
// 005590af  c644245c01           mov byte ptr [esp + 0x5c], 1
// 005590b4  e887f90b00           call 0x618a40
// 005590b9  83c410               add esp, 0x10
// 005590bc  8d4d64               lea ecx, [ebp + 0x64]
// 005590bf  c644244c00           mov byte ptr [esp + 0x4c], 0
// 005590c4  e8b7e6ffff           call 0x557780
// 005590c9  8b442444             mov eax, dword ptr [esp + 0x44]
// 005590cd  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 005590d1  50                   push eax
// 005590d2  51                   push ecx
// 005590d3  8bce                 mov ecx, esi
// 005590d5  e816ffffff           call 0x558ff0
// 005590da  8b442418             mov eax, dword ptr [esp + 0x18]
// 005590de  85c0                 test eax, eax
// 005590e0  753a                 jne 0x55911c
// 005590e2  ff1590288000         call dword ptr [0x802890]
// 005590e8  33c0                 xor eax, eax
// 005590ea  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005590ee  3b5010               cmp edx, dword ptr [eax + 0x10]
// 005590f1  7206                 jb 0x5590f9
// 005590f3  ff1590288000         call dword ptr [0x802890]
// 005590f9  8344241c08           add dword ptr [esp + 0x1c], 8
// 005590fe  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00559102  8b742418             mov esi, dword ptr [esp + 0x18]
// 00559106  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0055910a  8b2d90288000         mov ebp, dword ptr [0x802890]
// 00559110  e94bffffff           jmp 0x559060
// 00559115  8b36                 mov esi, dword ptr [esi]
// 00559117  e962ffffff           jmp 0x55907e
// 0055911c  8b00                 mov eax, dword ptr [eax]
// 0055911e  ebca                 jmp 0x5590ea
// 00559120  8b742424             mov esi, dword ptr [esp + 0x24]
// 00559124  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 0055912c  85f6                 test esi, esi
// 0055912e  742a                 je 0x55915a
// 00559130  8d4604               lea eax, [esi + 4]
// 00559133  83c9ff               or ecx, 0xffffffff
// 00559136  f00fc108             lock xadd dword ptr [eax], ecx
// 0055913a  751e                 jne 0x55915a
// 0055913c  8b16                 mov edx, dword ptr [esi]
// 0055913e  8b4204               mov eax, dword ptr [edx + 4]
// 00559141  8bce                 mov ecx, esi
// 00559143  ffd0                 call eax
// 00559145  8d4e08               lea ecx, [esi + 8]
// 00559148  83caff               or edx, 0xffffffff
// 0055914b  f00fc111             lock xadd dword ptr [ecx], edx
// 0055914f  7509                 jne 0x55915a
// 00559151  8b06                 mov eax, dword ptr [esi]
// 00559153  8b5008               mov edx, dword ptr [eax + 8]
// 00559156  8bce                 mov ecx, esi
// 00559158  ffd2                 call edx
// 0055915a  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0055915e  5f                   pop edi
// 0055915f  5e                   pop esi
// 00559160  5d                   pop ebp
// 00559161  64890d00000000       mov dword ptr fs:[0], ecx
// 00559168  5b                   pop ebx
// 00559169  83c42c               add esp, 0x2c
// 0055916c  c20800               ret 8

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern "C" void (__cdecl* const invalid_parameter)();

struct RefCount {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Node;
struct Vector;

struct NodePtr {
    Node* ptr;
    RefCount* count;
    NodePtr(const NodePtr&);
    ~NodePtr();
};

extern NodePtr __cdecl initialize(Node*);

struct Pair {
    NodePtr first;
    NodePtr second;
    Pair(Node*, Node*);
};

struct Action {
    void invoke(Pair, int);
};

struct Context {
    char padding[0x64];
    Action action;
};

struct VectorPtr {
    Vector* ptr;
    RefCount* count;
    VectorPtr copy() const;
    ~VectorPtr();
};

struct Iterator {
    Vector** owner;
    NodePtr* position;
    NodePtr& operator*() const;
    Iterator& operator++();
    bool operator!=(const Iterator&) const;
};

struct Vector {
    Vector** proxy;
    char padding[8];
    NodePtr* first;
    NodePtr* last;
    Iterator begin();
    Iterator end();
};

struct Node {
    char padding[0x104];
    Node* parent;
    VectorPtr children;
    void visit(Context*, int);
};

inline NodePtr::~NodePtr() {
    RefCount* control = count;
    if (control && _InterlockedDecrement(&control->strong) == 0) {
        control->dispose();
        if (_InterlockedDecrement(&control->weak) == 0)
            control->destroy();
    }
}

inline VectorPtr::~VectorPtr() {
    RefCount* control = count;
    if (control && _InterlockedDecrement(&control->strong) == 0) {
        control->dispose();
        if (_InterlockedDecrement(&control->weak) == 0)
            control->destroy();
    }
}

inline Pair::Pair(Node* a, Node* b)
    : first(initialize(a)), second(initialize(b)) {}

inline Iterator Vector::end() {
    NodePtr* finish = last;
    if (first > finish)
        invalid_parameter();
    Iterator result;
    result.owner = proxy;
    result.position = finish;
    return result;
}

inline Iterator Vector::begin() {
    NodePtr* start = first;
    Vector** owner = proxy;
    if (start > last)
        invalid_parameter();
    Iterator result;
    result.owner = proxy;
    result.position = start;
    return result;
}

inline bool Iterator::operator!=(const Iterator& other) const {
    if (!owner || owner != other.owner)
        invalid_parameter();
    return position != other.position;
}

inline NodePtr& Iterator::operator*() const {
    Vector* vector = reinterpret_cast<Vector*>(owner);
    if (!owner)
        invalid_parameter();
    else
        vector = *owner;
    if (position >= vector->last)
        invalid_parameter();
    return *position;
}

inline Iterator& Iterator::operator++() {
    if (!owner)
        invalid_parameter();
    Vector* vector = owner ? *owner : 0;
    if (position >= vector->last)
        invalid_parameter();
    ++position;
    return *this;
}

void Node::visit(Context* context, int value) {
    if (children.ptr) {
        VectorPtr snapshot = children.copy();
        Vector* vector = snapshot.ptr;
        Iterator finish = vector->end();
        Iterator current = vector->begin();
        for (; current != finish; ++current) {
            Node* child = (*current).ptr;
            Node* parentNode = child->parent;
            context->action.invoke(Pair(child, parentNode), value);
            child->visit(context, value);
        }
    }
}
