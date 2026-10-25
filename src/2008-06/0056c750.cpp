// from server: 100% by tester
// roc 2008-06 0056c750  unit: RBX::Reflection::EnumDescriptor  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056c750
//
// 0056c750  56                   push esi
// 0056c751  8b742408             mov esi, dword ptr [esp + 8]
// 0056c755  85f6                 test esi, esi
// 0056c757  742c                 je 0x56c785
// 0056c759  8b0e                 mov ecx, dword ptr [esi]
// 0056c75b  85c9                 test ecx, ecx
// 0056c75d  7409                 je 0x56c768
// 0056c75f  8b01                 mov eax, dword ptr [ecx]
// 0056c761  8b5004               mov edx, dword ptr [eax + 4]
// 0056c764  ffd2                 call edx
// 0056c766  eb05                 jmp 0x56c76d
// 0056c768  b814969200           mov eax, 0x929614
// 0056c76d  6834109300           push 0x931034
// 0056c772  8bc8                 mov ecx, eax
// 0056c774  ff1578288000         call dword ptr [0x802878]
// 0056c77a  84c0                 test al, al
// 0056c77c  7407                 je 0x56c785
// 0056c77e  8b06                 mov eax, dword ptr [esi]
// 0056c780  83c004               add eax, 4
// 0056c783  5e                   pop esi
// 0056c784  c3                   ret 
// 0056c785  33c0                 xor eax, eax
// 0056c787  5e                   pop esi
// 0056c788  c3                   ret 

#include <typeinfo>

namespace G3D { class Vector2int16 { public: int value; }; }

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

template G3D::Vector2int16* boost::any_cast<G3D::Vector2int16>(boost::any*);
