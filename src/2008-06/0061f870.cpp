// from server: 100% by king_originala
// roc 2008-06 0061f870  unit: boost::signals::Vconnection::?$sp_counted_impl_p  size: 136 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0061f870
//
// 0061f870  64a100000000         mov eax, dword ptr fs:[0]
// 0061f876  6aff                 push -1
// 0061f878  6888617c00           push 0x7c6188
// 0061f87d  50                   push eax
// 0061f87e  64892500000000       mov dword ptr fs:[0], esp
// 0061f885  83ec0c               sub esp, 0xc
// 0061f888  56                   push esi
// 0061f889  8b742420             mov esi, dword ptr [esp + 0x20]
// 0061f88d  85f6                 test esi, esi
// 0061f88f  742c                 je 0x61f8bd
// 0061f891  8b0e                 mov ecx, dword ptr [esi]
// 0061f893  85c9                 test ecx, ecx
// 0061f895  7409                 je 0x61f8a0
// 0061f897  8b01                 mov eax, dword ptr [ecx]
// 0061f899  8b5004               mov edx, dword ptr [eax + 4]
// 0061f89c  ffd2                 call edx
// 0061f89e  eb05                 jmp 0x61f8a5
// 0061f8a0  b814969200           mov eax, 0x929614
// 0061f8a5  68b8b29500           push 0x95b2b8
// 0061f8aa  8bc8                 mov ecx, eax
// 0061f8ac  ff1578288000         call dword ptr [0x802878]
// 0061f8b2  84c0                 test al, al
// 0061f8b4  7407                 je 0x61f8bd
// 0061f8b6  8b06                 mov eax, dword ptr [esi]
// 0061f8b8  83c004               add eax, 4
// 0061f8bb  7529                 jne 0x61f8e6
// 0061f8bd  6834ba8000           push 0x80ba34
// 0061f8c2  8d4c2408             lea ecx, [esp + 8]
// 0061f8c6  ff1564288000         call dword ptr [0x802864]
// 0061f8cc  c74424042cba8000     mov dword ptr [esp + 4], 0x80ba2c
// 0061f8d4  8d442404             lea eax, [esp + 4]
// 0061f8d8  50                   push eax
// 0061f8d9  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0061f8e1  e80aabdeff           call 0x40a3f0
// 0061f8e6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0061f8ea  8b00                 mov eax, dword ptr [eax]
// 0061f8ec  5e                   pop esi
// 0061f8ed  64890d00000000       mov dword ptr fs:[0], ecx
// 0061f8f4  83c418               add esp, 0x18
// 0061f8f7  c3                   ret 

class type_info {
public:
    virtual ~type_info();
    bool __thiscall operator==(const type_info&) const;
};

extern bool (__thiscall *type_info_equal)(
    const type_info*, const type_info&);

inline bool type_info::operator==(const type_info& other) const
{
    return type_info_equal(this, other);
}

namespace std {
    typedef ::type_info type_info;

    class exception {
    public:
        virtual ~exception() throw();
        virtual const char* what() const throw();

    private:
        const char* message;
        bool owned;
    };

    class bad_cast : public exception {
    public:
        explicit bad_cast(const char* = "bad cast") throw();
        virtual ~bad_cast() throw();
    };
}

namespace boost {
    struct placeholder {
        virtual ~placeholder();
        virtual const std::type_info& type() const = 0;
    };

    struct any {
        placeholder* content;
    };

    struct descriptor_holder : placeholder {
        const char* held;
    };

    class bad_any_cast : public std::bad_cast {
    public:
        virtual const char* what() const throw();
    };

    __declspec(noreturn)
    void __cdecl throw_exception(const bad_any_cast&);

    const char* __cdecl any_cast(const any*);
}

extern void* bad_any_cast_vtable[];
extern void (__thiscall *bad_cast_construct)(void*, const char*);

struct cast_exception {
    void* vtable;
    const char* message;
    int owned;

    cast_exception();
    ~cast_exception();
};

inline cast_exception::cast_exception()
{
    bad_cast_construct(this, "bad cast");
    vtable = bad_any_cast_vtable;
}

inline cast_exception::~cast_exception()
{
    reinterpret_cast<boost::bad_any_cast*>(this)->boost::bad_any_cast::~bad_any_cast();
}

const char* __cdecl boost::any_cast(const boost::any* operand)
{
    const char* const* value =
        operand &&
        (operand->content ? operand->content->type() : typeid(void)) ==
            typeid(const char*)
        ? &static_cast<const boost::descriptor_holder*>(operand->content)->held
        : 0;

    if (!value)
        boost::throw_exception(
            reinterpret_cast<const boost::bad_any_cast&>(cast_exception()));

    return *value;
}
