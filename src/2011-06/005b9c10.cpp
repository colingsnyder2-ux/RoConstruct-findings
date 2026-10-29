// roc 2011-06 005b9c10  unit: RBX::VBrickColor::?$TypedPropertyDescriptor  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005b9c10
//
// 005b9c10  56                   push esi
// 005b9c11  8b742408             mov esi, dword ptr [esp + 8]
// 005b9c15  85f6                 test esi, esi
// 005b9c17  742c                 je 0x5b9c45
// 005b9c19  8b0e                 mov ecx, dword ptr [esi]
// 005b9c1b  85c9                 test ecx, ecx
// 005b9c1d  7409                 je 0x5b9c28
// 005b9c1f  8b01                 mov eax, dword ptr [ecx]
// 005b9c21  8b5004               mov edx, dword ptr [eax + 4]
// 005b9c24  ffd2                 call edx
// 005b9c26  eb05                 jmp 0x5b9c2d
// 005b9c28  b8447ac000           mov eax, 0xc07a44
// 005b9c2d  6898b0c200           push 0xc2b098
// 005b9c32  8bc8                 mov ecx, eax
// 005b9c34  ff15500aa400         call dword ptr [0xa40a50]
// 005b9c3a  84c0                 test al, al
// 005b9c3c  7407                 je 0x5b9c45
// 005b9c3e  8b06                 mov eax, dword ptr [esi]
// 005b9c40  83c004               add eax, 4
// 005b9c43  5e                   pop esi
// 005b9c44  c3                   ret 
// 005b9c45  33c0                 xor eax, eax
// 005b9c47  5e                   pop esi
// 005b9c48  c3                   ret 
// copied from an identical function in another client (function ??$any_cast@VVector2int16@G3D@@@boost@@YAPAVVector2int16@G3D@@PAVany@0@@Z)

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