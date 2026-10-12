// from server: 96% by king_originala
// roc 2008-06 0046f820  unit: RBX::LDraw2Lua::LDrawParser  size: 217 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0046f820
//
// 0046f820  6aff                 push -1
// 0046f822  6847407c00           push 0x7c4047
// 0046f827  64a100000000         mov eax, dword ptr fs:[0]
// 0046f82d  50                   push eax
// 0046f82e  64892500000000       mov dword ptr fs:[0], esp
// 0046f835  83ec0c               sub esp, 0xc
// 0046f838  53                   push ebx
// 0046f839  55                   push ebp
// 0046f83a  56                   push esi
// 0046f83b  57                   push edi
// 0046f83c  894c2410             mov dword ptr [esp + 0x10], ecx
// 0046f840  c701d4cb8100         mov dword ptr [ecx], 0x81cbd4
// 0046f846  8b7930               mov edi, dword ptr [ecx + 0x30]
// 0046f849  2b792c               sub edi, dword ptr [ecx + 0x2c]
// 0046f84c  8d7120               lea esi, [ecx + 0x20]
// 0046f84f  c1ff02               sar edi, 2
// 0046f852  33db                 xor ebx, ebx
// 0046f854  c744242401000000     mov dword ptr [esp + 0x24], 1
// 0046f85c  85ff                 test edi, edi
// 0046f85e  761b                 jbe 0x46f87b
// 0046f860  53                   push ebx
// 0046f861  8bce                 mov ecx, esi
// 0046f863  e838fdffff           call 0x46f5a0
// 0046f868  8b08                 mov ecx, dword ptr [eax]
// 0046f86a  85c9                 test ecx, ecx
// 0046f86c  7408                 je 0x46f876
// 0046f86e  8b01                 mov eax, dword ptr [ecx]
// 0046f870  8b10                 mov edx, dword ptr [eax]
// 0046f872  6a01                 push 1
// 0046f874  ffd2                 call edx
// 0046f876  43                   inc ebx
// 0046f877  3bdf                 cmp ebx, edi
// 0046f879  72e5                 jb 0x46f860
// 0046f87b  8b5e10               mov ebx, dword ptr [esi + 0x10]
// 0046f87e  395e0c               cmp dword ptr [esi + 0xc], ebx
// 0046f881  7606                 jbe 0x46f889
// 0046f883  ff1590288000         call dword ptr [0x802890]
// 0046f889  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 0046f88c  8b2e                 mov ebp, dword ptr [esi]
// 0046f88e  3b7e10               cmp edi, dword ptr [esi + 0x10]
// 0046f891  7606                 jbe 0x46f899
// 0046f893  ff1590288000         call dword ptr [0x802890]
// 0046f899  8b06                 mov eax, dword ptr [esi]
// 0046f89b  53                   push ebx
// 0046f89c  55                   push ebp
// 0046f89d  57                   push edi
// 0046f89e  50                   push eax
// 0046f89f  8d442424             lea eax, [esp + 0x24]
// 0046f8a3  50                   push eax
// 0046f8a4  8bce                 mov ecx, esi
// 0046f8a6  e81565fdff           call 0x445dc0
// 0046f8ab  8b460c               mov eax, dword ptr [esi + 0xc]
// 0046f8ae  33ff                 xor edi, edi
// 0046f8b0  3bc7                 cmp eax, edi
// 0046f8b2  7409                 je 0x46f8bd
// 0046f8b4  50                   push eax
// 0046f8b5  e8c00d2300           call 0x6a067a
// 0046f8ba  83c404               add esp, 4
// 0046f8bd  897e0c               mov dword ptr [esi + 0xc], edi
// 0046f8c0  897e10               mov dword ptr [esi + 0x10], edi
// 0046f8c3  897e14               mov dword ptr [esi + 0x14], edi
// 0046f8c6  8b36                 mov esi, dword ptr [esi]
// 0046f8c8  56                   push esi
// 0046f8c9  e8ac0d2300           call 0x6a067a
// 0046f8ce  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0046f8d2  83c404               add esp, 4
// 0046f8d5  83c104               add ecx, 4
// 0046f8d8  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 0046f8e0  ff1568248000         call dword ptr [0x802468]
// 0046f8e6  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0046f8ea  5f                   pop edi
// 0046f8eb  5e                   pop esi
// 0046f8ec  5d                   pop ebp
// 0046f8ed  5b                   pop ebx
// 0046f8ee  64890d00000000       mov dword ptr fs:[0], ecx
// 0046f8f5  83c418               add esp, 0x18
// 0046f8f8  c3                   ret 

extern "C" {
    extern void (__cdecl *_invalid_parameter_noinfo)();
}
void __cdecl operator delete(void *) throw();

namespace std {
    template<class T> struct char_traits;
    template<class T> class allocator;

    template<class T, class Traits, class Alloc>
    class basic_string {
        unsigned char storage[28];
    public:
        ~basic_string();
    };
}

struct Object {
    virtual ~Object();
};

struct Iterator {
    void *proxy;
    Object **position;
};

struct Vector {
    void *proxy;
    unsigned char padding[8];
    Object **first;
    Object **last;
    Object **limit;

    Object *&at(unsigned int);
    void erase(Iterator *, Iterator, Iterator);
    void clear();
    ~Vector();
};

struct S {
    std::basic_string<char, std::char_traits<char>, std::allocator<char> > name;
    Vector objects;

    virtual ~S();
};

inline void Vector::clear()
{
    Object **endPosition = last;
    if (first > endPosition)
        _invalid_parameter_noinfo();

    Object **beginPosition = first;
    void *endProxy = proxy;
    if (beginPosition > last)
        _invalid_parameter_noinfo();

    Iterator begin;
    begin.proxy = proxy;
    begin.position = beginPosition;

    Iterator end;
    end.proxy = endProxy;
    end.position = endPosition;

    Iterator result;
    erase(&result, begin, end);

    if (first)
        operator delete(first);

    first = 0;
    last = 0;
    limit = 0;
}

inline Vector::~Vector()
{
    operator delete(proxy);
}

S::~S()
{
    Vector &v = objects;
    unsigned int count = v.last - v.first;
    for (unsigned int i = 0; i < count; ++i) {
        Object *p = v.at(i);
        if (p)
            delete p;
    }
    v.clear();
}
