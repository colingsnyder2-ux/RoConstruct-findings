// roc 2011-06 006ee570  unit: InsertService  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006ee570
//
// 006ee570  56                   push esi
// 006ee571  8b742408             mov esi, dword ptr [esp + 8]
// 006ee575  85f6                 test esi, esi
// 006ee577  742c                 je 0x6ee5a5
// 006ee579  8b0e                 mov ecx, dword ptr [esi]
// 006ee57b  85c9                 test ecx, ecx
// 006ee57d  7409                 je 0x6ee588
// 006ee57f  8b01                 mov eax, dword ptr [ecx]
// 006ee581  8b5004               mov edx, dword ptr [eax + 4]
// 006ee584  ffd2                 call edx
// 006ee586  eb05                 jmp 0x6ee58d
// 006ee588  b8447ac000           mov eax, 0xc07a44
// 006ee58d  6810aac500           push 0xc5aa10
// 006ee592  8bc8                 mov ecx, eax
// 006ee594  ff15500aa400         call dword ptr [0xa40a50]
// 006ee59a  84c0                 test al, al
// 006ee59c  7407                 je 0x6ee5a5
// 006ee59e  8b06                 mov eax, dword ptr [esi]
// 006ee5a0  83c004               add eax, 4
// 006ee5a3  5e                   pop esi
// 006ee5a4  c3                   ret 
// 006ee5a5  33c0                 xor eax, eax
// 006ee5a7  5e                   pop esi
// 006ee5a8  c3                   ret 
// copied from an identical function in another client (function ??$any_cast@VMeshId@RBX@@@boost@@YAPAVMeshId@RBX@@PAVany@0@@Z)

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