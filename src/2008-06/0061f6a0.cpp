// from server: 100% by king_originala
// roc 2008-06 0061f6a0  unit: boost::signals::Vconnection::?$sp_counted_impl_p  size: 136 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0061f6a0
//
// 0061f6a0  64a100000000         mov eax, dword ptr fs:[0]
// 0061f6a6  6aff                 push -1
// 0061f6a8  6888617c00           push 0x7c6188
// 0061f6ad  50                   push eax
// 0061f6ae  64892500000000       mov dword ptr fs:[0], esp
// 0061f6b5  83ec0c               sub esp, 0xc
// 0061f6b8  56                   push esi
// 0061f6b9  8b742420             mov esi, dword ptr [esp + 0x20]
// 0061f6bd  85f6                 test esi, esi
// 0061f6bf  742c                 je 0x61f6ed
// 0061f6c1  8b0e                 mov ecx, dword ptr [esi]
// 0061f6c3  85c9                 test ecx, ecx
// 0061f6c5  7409                 je 0x61f6d0
// 0061f6c7  8b01                 mov eax, dword ptr [ecx]
// 0061f6c9  8b5004               mov edx, dword ptr [eax + 4]
// 0061f6cc  ffd2                 call edx
// 0061f6ce  eb05                 jmp 0x61f6d5
// 0061f6d0  b814969200           mov eax, 0x929614
// 0061f6d5  6878e39400           push 0x94e378
// 0061f6da  8bc8                 mov ecx, eax
// 0061f6dc  ff1578288000         call dword ptr [0x802878]
// 0061f6e2  84c0                 test al, al
// 0061f6e4  7407                 je 0x61f6ed
// 0061f6e6  8b06                 mov eax, dword ptr [esi]
// 0061f6e8  83c004               add eax, 4
// 0061f6eb  7529                 jne 0x61f716
// 0061f6ed  6834ba8000           push 0x80ba34
// 0061f6f2  8d4c2408             lea ecx, [esp + 8]
// 0061f6f6  ff1564288000         call dword ptr [0x802864]
// 0061f6fc  c74424042cba8000     mov dword ptr [esp + 4], 0x80ba2c
// 0061f704  8d442404             lea eax, [esp + 4]
// 0061f708  50                   push eax
// 0061f709  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0061f711  e8daacdeff           call 0x40a3f0
// 0061f716  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0061f71a  8b00                 mov eax, dword ptr [eax]
// 0061f71c  5e                   pop esi
// 0061f71d  64890d00000000       mov dword ptr fs:[0], ecx
// 0061f724  83c418               add esp, 0x18
// 0061f727  c3                   ret 

class type_info {
public:
    virtual ~type_info();
    bool __thiscall operator==(const type_info&) const;
};

extern bool (__thiscall *type_info_equal)(
    const type_info*, const type_info&);
extern const type_info held_type_info;

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

namespace RBX {
    namespace Reflection {
        class PropertyDescriptor;
    }
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
        const RBX::Reflection::PropertyDescriptor* held;
    };

    class bad_any_cast : public std::bad_cast {
    public:
        virtual const char* what() const throw();
    };

    __declspec(noreturn)
    void __cdecl throw_exception(const bad_any_cast&);

    const RBX::Reflection::PropertyDescriptor*
    __cdecl any_cast(const any*);
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

const RBX::Reflection::PropertyDescriptor*
__cdecl boost::any_cast(const boost::any* operand)
{
    const RBX::Reflection::PropertyDescriptor* const* value =
        operand &&
        (operand->content ? operand->content->type() : typeid(void)) ==
            held_type_info
        ? &static_cast<const boost::descriptor_holder*>(operand->content)->held
        : 0;

    if (!value)
        boost::throw_exception(
            reinterpret_cast<const boost::bad_any_cast&>(cast_exception()));

    return *value;
}
