// from server: 97% by colin
// from server: 92% by king_originala
// roc 2008-06 0057e530  unit: RBX::ClearBackpack  size: 291 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0057e530
//
// 0057e530  6aff                 push -1
// 0057e532  6868617c00           push 0x7c6168
// 0057e537  64a100000000         mov eax, dword ptr fs:[0]
// 0057e53d  50                   push eax
// 0057e53e  64892500000000       mov dword ptr fs:[0], esp
// 0057e545  83ec08               sub esp, 8
// 0057e548  56                   push esi
// 0057e549  57                   push edi
// 0057e54a  8b442420             mov eax, dword ptr [esp + 0x20]
// 0057e54e  6a00                 push 0
// 0057e550  6850dd9200           push 0x92dd50
// 0057e555  687c909200           push 0x92907c
// 0057e55a  6a00                 push 0
// 0057e55c  50                   push eax
// 0057e55d  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 0057e565  e85c321200           call 0x6a17c6
// 0057e56a  83c414               add esp, 0x14
// 0057e56d  85c0                 test eax, eax
// 0057e56f  743a                 je 0x57e5ab
// 0057e571  8bc8                 mov ecx, eax
// 0057e573  e868a80100           call 0x598de0
// 0057e578  8bf8                 mov edi, eax
// 0057e57a  33f6                 xor esi, esi
// 0057e57c  8d642400             lea esp, [esp]
// 0057e580  56                   push esi
// 0057e581  8bcf                 mov ecx, edi
// 0057e583  e878e60600           call 0x5ecc00
// 0057e588  8bc8                 mov ecx, eax
// 0057e58a  e8012d0700           call 0x5f1290
// 0057e58f  83f802               cmp eax, 2
// 0057e592  7511                 jne 0x57e5a5
// 0057e594  6a03                 push 3
// 0057e596  56                   push esi
// 0057e597  8bcf                 mov ecx, edi
// 0057e599  e862e60600           call 0x5ecc00
// 0057e59e  8bc8                 mov ecx, eax
// 0057e5a0  e83b2e0700           call 0x5f13e0
// 0057e5a5  46                   inc esi
// 0057e5a6  83fe06               cmp esi, 6
// 0057e5a9  7cd5                 jl 0x57e580
// 0057e5ab  8b442420             mov eax, dword ptr [esp + 0x20]
// 0057e5af  83b80801000000       cmp dword ptr [eax + 0x108], 0
// 0057e5b6  7450                 je 0x57e608
// 0057e5b8  8bb008010000         mov esi, dword ptr [eax + 0x108]
// 0057e5be  53                   push ebx
// 0057e5bf  8b5e10               mov ebx, dword ptr [esi + 0x10]
// 0057e5c2  55                   push ebp
// 0057e5c3  395e0c               cmp dword ptr [esi + 0xc], ebx
// 0057e5c6  760a                 jbe 0x57e5d2
// 0057e5c8  ff1590288000         call dword ptr [0x802890]
// 0057e5ce  8b442428             mov eax, dword ptr [esp + 0x28]
// 0057e5d2  8b2e                 mov ebp, dword ptr [esi]
// 0057e5d4  8bb008010000         mov esi, dword ptr [eax + 0x108]
// 0057e5da  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 0057e5dd  3b7e10               cmp edi, dword ptr [esi + 0x10]
// 0057e5e0  7606                 jbe 0x57e5e8
// 0057e5e2  ff1590288000         call dword ptr [0x802890]
// 0057e5e8  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0057e5ec  8b36                 mov esi, dword ptr [esi]
// 0057e5ee  51                   push ecx
// 0057e5ef  b830e55700           mov eax, 0x57e530
// 0057e5f4  50                   push eax
// 0057e5f5  53                   push ebx
// 0057e5f6  55                   push ebp
// 0057e5f7  57                   push edi
// 0057e5f8  8d542424             lea edx, [esp + 0x24]
// 0057e5fc  56                   push esi
// 0057e5fd  52                   push edx
// 0057e5fe  e8cdfeffff           call 0x57e4d0
// 0057e603  83c41c               add esp, 0x1c
// 0057e606  5d                   pop ebp
// 0057e607  5b                   pop ebx
// 0057e608  8b742424             mov esi, dword ptr [esp + 0x24]
// 0057e60c  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 0057e614  85f6                 test esi, esi
// 0057e616  742a                 je 0x57e642
// 0057e618  8d4604               lea eax, [esi + 4]
// 0057e61b  83c9ff               or ecx, 0xffffffff
// 0057e61e  f00fc108             lock xadd dword ptr [eax], ecx
// 0057e622  751e                 jne 0x57e642
// 0057e624  8b16                 mov edx, dword ptr [esi]
// 0057e626  8b4204               mov eax, dword ptr [edx + 4]
// 0057e629  8bce                 mov ecx, esi
// 0057e62b  ffd0                 call eax
// 0057e62d  8d4e08               lea ecx, [esi + 8]
// 0057e630  83caff               or edx, 0xffffffff
// 0057e633  f00fc111             lock xadd dword ptr [ecx], edx
// 0057e637  7509                 jne 0x57e642
// 0057e639  8b06                 mov eax, dword ptr [esi]
// 0057e63b  8b5008               mov edx, dword ptr [eax + 8]
// 0057e63e  8bce                 mov ecx, esi
// 0057e640  ffd2                 call edx
// 0057e642  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0057e646  5f                   pop edi
// 0057e647  5e                   pop esi
// 0057e648  64890d00000000       mov dword ptr fs:[0], ecx
// 0057e64f  83c414               add esp, 0x14
// 0057e652  c3                   ret 

extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern "C" void (__cdecl *invalid_parameter_noinfo)();

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Children {
    void* owner;
    char padding[8];
    unsigned first;
    unsigned last;
};

struct Instance {
    virtual void unused() = 0;
    char padding[0x104];
    Children* children;
};

struct Face {
    int getSurfaceType() const;
    void set(int);
};

struct Surfaces {
    Face* face(int);
};

struct PartInstance : Instance {
    Surfaces* surfaces();
};

struct Shared {
    Instance* object;
    Control* control;
    ~Shared();
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

struct Iterator {
    void* owner;
    unsigned position;
};

void __cdecl clearBackpack(Shared);

struct Visitor {
    void (__cdecl *function)(Shared);
};

extern void __cdecl visitChildren(
    Iterator*, void*, unsigned, void*, unsigned, Visitor, Control*);

void __cdecl clearBackpack(Shared value)
{
    PartInstance* part = dynamic_cast<PartInstance*>(value.object);
    if (part) {
        Surfaces* surfaces = part->surfaces();
        for (int i = 0; i < 6; ++i) {
            if (surfaces->face(i)->getSurfaceType() == 2)
                surfaces->face(i)->set(3);
        }
    }

    if (value.object->children) {
        Children* endContainer = value.object->children;
        unsigned endPosition = endContainer->last;
        if (endContainer->first > endPosition)
            invalid_parameter_noinfo();
        void* endOwner = endContainer->owner;

        Children* beginContainer = value.object->children;
        unsigned beginPosition = beginContainer->first;
        if (beginPosition > beginContainer->last)
            invalid_parameter_noinfo();
        void* beginOwner = beginContainer->owner;

        Iterator result;
        Visitor visitor;
        visitor.function = clearBackpack;
        visitChildren(&result, beginOwner, beginPosition,
                      endOwner, endPosition, visitor, value.control);
    }
}
