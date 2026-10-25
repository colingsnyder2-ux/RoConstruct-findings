// from server: 100% by king_originala
// roc 2008-06 0059f280  unit: RBX::VMeshId::?$TypedPropertyDescriptor  size: 144 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059f280
//
// 0059f280  6aff                 push -1
// 0059f282  68e88e7d00           push 0x7d8ee8
// 0059f287  64a100000000         mov eax, dword ptr fs:[0]
// 0059f28d  50                   push eax
// 0059f28e  64892500000000       mov dword ptr fs:[0], esp
// 0059f295  83ec20               sub esp, 0x20
// 0059f298  8b542430             mov edx, dword ptr [esp + 0x30]
// 0059f29c  8b4918               mov ecx, dword ptr [ecx + 0x18]
// 0059f29f  8b01                 mov eax, dword ptr [ecx]
// 0059f2a1  8b4008               mov eax, dword ptr [eax + 8]
// 0059f2a4  56                   push esi
// 0059f2a5  57                   push edi
// 0059f2a6  52                   push edx
// 0059f2a7  8d54240c             lea edx, [esp + 0xc]
// 0059f2ab  52                   push edx
// 0059f2ac  ffd0                 call eax
// 0059f2ae  8bf8                 mov edi, eax
// 0059f2b0  c744243000000000     mov dword ptr [esp + 0x30], 0
// 0059f2b8  e8d3610700           call 0x615490
// 0059f2bd  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0059f2c1  8901                 mov dword ptr [ecx], eax
// 0059f2c3  8d7104               lea esi, [ecx + 4]
// 0059f2c6  57                   push edi
// 0059f2c7  8d4c243c             lea ecx, [esp + 0x3c]
// 0059f2cb  e8c0fcffff           call 0x59ef90
// 0059f2d0  3bc6                 cmp eax, esi
// 0059f2d2  7408                 je 0x59f2dc
// 0059f2d4  8b16                 mov edx, dword ptr [esi]
// 0059f2d6  8b08                 mov ecx, dword ptr [eax]
// 0059f2d8  8910                 mov dword ptr [eax], edx
// 0059f2da  890e                 mov dword ptr [esi], ecx
// 0059f2dc  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0059f2e0  5f                   pop edi
// 0059f2e1  5e                   pop esi
// 0059f2e2  85c9                 test ecx, ecx
// 0059f2e4  7408                 je 0x59f2ee
// 0059f2e6  8b01                 mov eax, dword ptr [ecx]
// 0059f2e8  8b10                 mov edx, dword ptr [eax]
// 0059f2ea  6a01                 push 1
// 0059f2ec  ffd2                 call edx
// 0059f2ee  8d0c24               lea ecx, [esp]
// 0059f2f1  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 0059f2f9  ff1568248000         call dword ptr [0x802468]
// 0059f2ff  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0059f303  64890d00000000       mov dword ptr fs:[0], ecx
// 0059f30a  83c42c               add esp, 0x2c
// 0059f30d  c20800               ret 8

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
