// from server: 100% by tester
// roc 2008-06 006154a0  unit: RBX::RevoluteLink  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006154a0
//
// 006154a0  56                   push esi
// 006154a1  8b742408             mov esi, dword ptr [esp + 8]
// 006154a5  85f6                 test esi, esi
// 006154a7  742c                 je 0x6154d5
// 006154a9  8b0e                 mov ecx, dword ptr [esi]
// 006154ab  85c9                 test ecx, ecx
// 006154ad  7409                 je 0x6154b8
// 006154af  8b01                 mov eax, dword ptr [ecx]
// 006154b1  8b5004               mov edx, dword ptr [eax + 4]
// 006154b4  ffd2                 call edx
// 006154b6  eb05                 jmp 0x6154bd
// 006154b8  b814969200           mov eax, 0x929614
// 006154bd  6868b39400           push 0x94b368
// 006154c2  8bc8                 mov ecx, eax
// 006154c4  ff1578288000         call dword ptr [0x802878]
// 006154ca  84c0                 test al, al
// 006154cc  7407                 je 0x6154d5
// 006154ce  8b06                 mov eax, dword ptr [esi]
// 006154d0  83c004               add eax, 4
// 006154d3  5e                   pop esi
// 006154d4  c3                   ret 
// 006154d5  33c0                 xor eax, eax
// 006154d7  5e                   pop esi
// 006154d8  c3                   ret 

#include <typeinfo>

namespace RBX { class MeshId { public: int value; }; }

namespace boost {
class any {
public:
    class placeholder {
    public:
        virtual ~placeholder() {}
        virtual const std::type_info& type() const = 0;
    };

    template<typename ValueType>
    class holder : public placeholder {
    public:
        virtual const std::type_info& type() const { return typeid(ValueType); }
        ValueType held;
    };

    const std::type_info& type() const
    {
        return content ? content->type() : typeid(void);
    }

    placeholder* content;
};

template<typename ValueType>
ValueType* any_cast(any* operand)
{
    return operand && operand->type() == typeid(ValueType)
        ? &static_cast<any::holder<ValueType>*>(operand->content)->held
        : 0;
}
}

template RBX::MeshId* boost::any_cast<RBX::MeshId>(boost::any*);
