// roc 2011-06 00652670  unit: std::D::DU?$char_traits::DV?$basic_streambuf::?$lexical_stream_limited_src  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00652670
//
// 00652670  56                   push esi
// 00652671  8b742408             mov esi, dword ptr [esp + 8]
// 00652675  85f6                 test esi, esi
// 00652677  742c                 je 0x6526a5
// 00652679  8b0e                 mov ecx, dword ptr [esi]
// 0065267b  85c9                 test ecx, ecx
// 0065267d  7409                 je 0x652688
// 0065267f  8b01                 mov eax, dword ptr [ecx]
// 00652681  8b5004               mov edx, dword ptr [eax + 4]
// 00652684  ffd2                 call edx
// 00652686  eb05                 jmp 0x65268d
// 00652688  b8447ac000           mov eax, 0xc07a44
// 0065268d  68c0dec400           push 0xc4dec0
// 00652692  8bc8                 mov ecx, eax
// 00652694  ff15500aa400         call dword ptr [0xa40a50]
// 0065269a  84c0                 test al, al
// 0065269c  7407                 je 0x6526a5
// 0065269e  8b06                 mov eax, dword ptr [esi]
// 006526a0  83c004               add eax, 4
// 006526a3  5e                   pop esi
// 006526a4  c3                   ret 
// 006526a5  33c0                 xor eax, eax
// 006526a7  5e                   pop esi
// 006526a8  c3                   ret 
// copied from an identical function in another client (function ??$any_cast@VTextureId@RBX@@@boost@@YAPAVTextureId@RBX@@PAVany@0@@Z)

#include <typeinfo>

namespace RBX { class TextureId { public: int value; }; }

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

template RBX::TextureId* boost::any_cast<RBX::TextureId>(boost::any*);