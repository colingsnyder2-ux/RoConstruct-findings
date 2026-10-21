// from server: 100% by colin
// roc 2008-06 00597c90  unit: RBX::VTextureId::?$TypedPropertyDescriptor  size: 144 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00597c90
//
// 00597c90  6aff                 push -1
// 00597c92  68e88e7d00           push 0x7d8ee8
// 00597c97  64a100000000         mov eax, dword ptr fs:[0]
// 00597c9d  50                   push eax
// 00597c9e  64892500000000       mov dword ptr fs:[0], esp
// 00597ca5  83ec20               sub esp, 0x20
// 00597ca8  8b542430             mov edx, dword ptr [esp + 0x30]
// 00597cac  8b4918               mov ecx, dword ptr [ecx + 0x18]
// 00597caf  8b01                 mov eax, dword ptr [ecx]
// 00597cb1  8b4008               mov eax, dword ptr [eax + 8]
// 00597cb4  56                   push esi
// 00597cb5  57                   push edi
// 00597cb6  52                   push edx
// 00597cb7  8d54240c             lea edx, [esp + 0xc]
// 00597cbb  52                   push edx
// 00597cbc  ffd0                 call eax
// 00597cbe  8bf8                 mov edi, eax
// 00597cc0  c744243000000000     mov dword ptr [esp + 0x30], 0
// 00597cc8  e8b350fdff           call 0x56cd80
// 00597ccd  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00597cd1  8901                 mov dword ptr [ecx], eax
// 00597cd3  8d7104               lea esi, [ecx + 4]
// 00597cd6  57                   push edi
// 00597cd7  8d4c243c             lea ecx, [esp + 0x3c]
// 00597cdb  e840f9ffff           call 0x597620
// 00597ce0  3bc6                 cmp eax, esi
// 00597ce2  7408                 je 0x597cec
// 00597ce4  8b16                 mov edx, dword ptr [esi]
// 00597ce6  8b08                 mov ecx, dword ptr [eax]
// 00597ce8  8910                 mov dword ptr [eax], edx
// 00597cea  890e                 mov dword ptr [esi], ecx
// 00597cec  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00597cf0  5f                   pop edi
// 00597cf1  5e                   pop esi
// 00597cf2  85c9                 test ecx, ecx
// 00597cf4  7408                 je 0x597cfe
// 00597cf6  8b01                 mov eax, dword ptr [ecx]
// 00597cf8  8b10                 mov edx, dword ptr [eax]
// 00597cfa  6a01                 push 1
// 00597cfc  ffd2                 call edx
// 00597cfe  8d0c24               lea ecx, [esp]
// 00597d01  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 00597d09  ff1568248000         call dword ptr [0x802468]
// 00597d0f  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00597d13  64890d00000000       mov dword ptr fs:[0], ecx
// 00597d1a  83c42c               add esp, 0x2c
// 00597d1d  c20800               ret 8

// from server: 98% by colin
//

extern void (__thiscall* string_destructor)(void*);

namespace std
{
    template<class T> struct char_traits {};
    template<class T> struct allocator {};

    template<class C, class T, class A>
    class basic_string
    {
        char data[32];
    public:
        ~basic_string();
    };

    template<class C, class T, class A>
    inline basic_string<C, T, A>::~basic_string()
    {
        string_destructor(this);
    }
}

typedef std::basic_string<char, std::char_traits<char>, std::allocator<char> > Value;

struct Managed
{
    virtual ~Managed();
};

struct Holder
{
    Managed* value;
    Holder(const Value&);
    ~Holder();
    void swap(Managed*&);
};

inline Holder::~Holder()
{
    if (value)
        delete value;
}

inline void Holder::swap(Managed*& other)
{
    if (&value != &other)
    {
        Managed* old = value;
        value = other;
        other = old;
    }
}

inline void assignValue(Managed*& destination, const Value& source)
{
    Holder(source).swap(destination);
}

struct Getter
{
    virtual void slot0();
    virtual void slot1();
    virtual Value get(void*);
};

extern void* __cdecl func_00615490();

struct Result
{
    void* type;
    Managed* value;
    void set(const Value&);
};

inline void Result::set(const Value& source)
{
    type = func_00615490();
    assignValue(value, source);
}

struct S
{
    char padding[24];
    Getter* getter;
    void func_0059f280(void*, Result*);
};

void S::func_0059f280(void* object, Result* result)
{
    result->set(getter->get(object));
}
