// from server: 76% by colin
// from server: 71% by king_originala
// roc 2008-06 0063deb0  unit: RBX::LockTool  size: 298 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063deb0
//
// 0063deb0  64a100000000         mov eax, dword ptr fs:[0]
// 0063deb6  6aff                 push -1
// 0063deb8  6858847c00           push 0x7c8458
// 0063debd  50                   push eax
// 0063debe  64892500000000       mov dword ptr fs:[0], esp
// 0063dec5  81c108010000         add ecx, 0x108
// 0063decb  83ec14               sub esp, 0x14
// 0063dece  833900               cmp dword ptr [ecx], 0
// 0063ded1  0f84f2000000         je 0x63dfc9
// 0063ded7  53                   push ebx
// 0063ded8  55                   push ebp
// 0063ded9  56                   push esi
// 0063deda  57                   push edi
// 0063dedb  8d442414             lea eax, [esp + 0x14]
// 0063dedf  50                   push eax
// 0063dee0  e8cb36e5ff           call 0x4915b0
// 0063dee5  8b742414             mov esi, dword ptr [esp + 0x14]
// 0063dee9  8b4610               mov eax, dword ptr [esi + 0x10]
// 0063deec  8b2d90288000         mov ebp, dword ptr [0x802890]
// 0063def2  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 0063defa  89442410             mov dword ptr [esp + 0x10], eax
// 0063defe  39460c               cmp dword ptr [esi + 0xc], eax
// 0063df01  7602                 jbe 0x63df05
// 0063df03  ffd5                 call ebp
// 0063df05  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 0063df08  8b0e                 mov ecx, dword ptr [esi]
// 0063df0a  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0063df0e  3b7e10               cmp edi, dword ptr [esi + 0x10]
// 0063df11  7602                 jbe 0x63df15
// 0063df13  ffd5                 call ebp
// 0063df15  8b1e                 mov ebx, dword ptr [esi]
// 0063df17  85db                 test ebx, ebx
// 0063df19  7406                 je 0x63df21
// 0063df1b  3b5c241c             cmp ebx, dword ptr [esp + 0x1c]
// 0063df1f  7402                 je 0x63df23
// 0063df21  ffd5                 call ebp
// 0063df23  3b7c2410             cmp edi, dword ptr [esp + 0x10]
// 0063df27  7462                 je 0x63df8b
// 0063df29  85db                 test ebx, ebx
// 0063df2b  7536                 jne 0x63df63
// 0063df2d  ffd5                 call ebp
// 0063df2f  33c0                 xor eax, eax
// 0063df31  3b7810               cmp edi, dword ptr [eax + 0x10]
// 0063df34  7202                 jb 0x63df38
// 0063df36  ffd5                 call ebp
// 0063df38  8b37                 mov esi, dword ptr [edi]
// 0063df3a  6a00                 push 0
// 0063df3c  6850dd9200           push 0x92dd50
// 0063df41  687c909200           push 0x92907c
// 0063df46  6a00                 push 0
// 0063df48  56                   push esi
// 0063df49  e878380600           call 0x6a17c6
// 0063df4e  83c414               add esp, 0x14
// 0063df51  85c0                 test eax, eax
// 0063df53  7412                 je 0x63df67
// 0063df55  8b542434             mov edx, dword ptr [esp + 0x34]
// 0063df59  52                   push edx
// 0063df5a  8bc8                 mov ecx, eax
// 0063df5c  e85ffef5ff           call 0x59ddc0
// 0063df61  eb10                 jmp 0x63df73
// 0063df63  8b03                 mov eax, dword ptr [ebx]
// 0063df65  ebca                 jmp 0x63df31
// 0063df67  8b442434             mov eax, dword ptr [esp + 0x34]
// 0063df6b  50                   push eax
// 0063df6c  8bce                 mov ecx, esi
// 0063df6e  e83dffffff           call 0x63deb0
// 0063df73  85db                 test ebx, ebx
// 0063df75  7510                 jne 0x63df87
// 0063df77  ffd5                 call ebp
// 0063df79  33c0                 xor eax, eax
// 0063df7b  3b7810               cmp edi, dword ptr [eax + 0x10]
// 0063df7e  7202                 jb 0x63df82
// 0063df80  ffd5                 call ebp
// 0063df82  83c708               add edi, 8
// 0063df85  eb90                 jmp 0x63df17
// 0063df87  8b03                 mov eax, dword ptr [ebx]
// 0063df89  ebf0                 jmp 0x63df7b
// 0063df8b  8b742418             mov esi, dword ptr [esp + 0x18]
// 0063df8f  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 0063df97  85f6                 test esi, esi
// 0063df99  742a                 je 0x63dfc5
// 0063df9b  8d4e04               lea ecx, [esi + 4]
// 0063df9e  83caff               or edx, 0xffffffff
// 0063dfa1  f00fc111             lock xadd dword ptr [ecx], edx
// 0063dfa5  751e                 jne 0x63dfc5
// 0063dfa7  8b06                 mov eax, dword ptr [esi]
// 0063dfa9  8b5004               mov edx, dword ptr [eax + 4]
// 0063dfac  8bce                 mov ecx, esi
// 0063dfae  ffd2                 call edx
// 0063dfb0  8d4608               lea eax, [esi + 8]
// 0063dfb3  83c9ff               or ecx, 0xffffffff
// 0063dfb6  f00fc108             lock xadd dword ptr [eax], ecx
// 0063dfba  7509                 jne 0x63dfc5
// 0063dfbc  8b16                 mov edx, dword ptr [esi]
// 0063dfbe  8b4208               mov eax, dword ptr [edx + 8]
// 0063dfc1  8bce                 mov ecx, esi
// 0063dfc3  ffd0                 call eax
// 0063dfc5  5f                   pop edi
// 0063dfc6  5e                   pop esi
// 0063dfc7  5d                   pop ebp
// 0063dfc8  5b                   pop ebx
// 0063dfc9  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0063dfcd  64890d00000000       mov dword ptr fs:[0], ecx
// 0063dfd4  83c420               add esp, 0x20
// 0063dfd7  c20400               ret 4

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern void (__cdecl *invalidParameter)();
extern "C" void* __cdecl __RTDynamicCast(void*, long, void*, void*, int);
extern char instanceType;
extern char partType;

typedef void (__cdecl *Check)();

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Node;
struct Vector;

struct Entry {
    Node* object;
    Control* control;
};

struct Proxy {
    Vector* container;
};

struct Iterator {
    Proxy* owner;
    Entry* position;
    bool different(const Iterator& other, Check check) const;
    Node* dereference(Check check) const;
    void advance(Check check);
};

struct Vector {
    Proxy* proxy;
    unsigned long reserved[2];
    Entry* first;
    Entry* last;
    Iterator begin(Check check);
    Iterator end(Check check);
};

struct Shared {
    Vector* object;
    Control* control;
    Shared get();
    ~Shared();
};

struct Part {
    void setValue(bool value);
};

struct Node {
    char padding[0x108];
    Shared children;
    void apply(bool value);
};

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

inline Iterator Vector::end(Check check)
{
    Iterator result;
    result.position = last;
    if (first > result.position)
        check();
    result.owner = proxy;
    return result;
}

inline Iterator Vector::begin(Check check)
{
    Iterator result;
    result.position = first;
    if (result.position > last)
        check();
    result.owner = proxy;
    return result;
}

inline bool Iterator::different(const Iterator& other, Check check) const
{
    if (!owner || owner != other.owner)
        check();
    return position != other.position;
}

inline Node* Iterator::dereference(Check check) const
{
    Vector* container;
    if (!owner) {
        check();
        container = 0;
    } else {
        container = owner->container;
    }
    if (position >= container->last)
        check();
    return position->object;
}

inline void Iterator::advance(Check check)
{
    Vector* container;
    if (!owner) {
        check();
        container = 0;
    } else {
        container = owner->container;
    }
    if (position >= container->last)
        check();
    ++position;
}

void Node::apply(bool value)
{
    if (children.object) {
        Shared hold = children.get();
        Check check = invalidParameter;
        Iterator finish = hold.object->end(check);
        Iterator current = hold.object->begin(check);
        for (; current.different(finish, check); current.advance(check)) {
            Node* child = current.dereference(check);
            Part* part = static_cast<Part*>(
                __RTDynamicCast(child, 0, &instanceType, &partType, 0));
            if (part)
                part->setValue(value);
            else
                child->apply(value);
        }
    }
}
