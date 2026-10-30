// roc 2011-06 0059e570  unit: RBX::VRunService::?$EventDesc  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0059e570
//
// 0059e570  56                   push esi
// 0059e571  8b742408             mov esi, dword ptr [esp + 8]
// 0059e575  85f6                 test esi, esi
// 0059e577  742c                 je 0x59e5a5
// 0059e579  8b0e                 mov ecx, dword ptr [esi]
// 0059e57b  85c9                 test ecx, ecx
// 0059e57d  7409                 je 0x59e588
// 0059e57f  8b01                 mov eax, dword ptr [ecx]
// 0059e581  8b5004               mov edx, dword ptr [eax + 4]
// 0059e584  ffd2                 call edx
// 0059e586  eb05                 jmp 0x59e58d
// 0059e588  b8447ac000           mov eax, 0xc07a44
// 0059e58d  68e07bc300           push 0xc37be0
// 0059e592  8bc8                 mov ecx, eax
// 0059e594  ff15500aa400         call dword ptr [0xa40a50]
// 0059e59a  84c0                 test al, al
// 0059e59c  7407                 je 0x59e5a5
// 0059e59e  8b06                 mov eax, dword ptr [esi]
// 0059e5a0  83c004               add eax, 4
// 0059e5a3  5e                   pop esi
// 0059e5a4  c3                   ret 
// 0059e5a5  33c0                 xor eax, eax
// 0059e5a7  5e                   pop esi
// 0059e5a8  c3                   ret 
// copied from an identical function in another client (function ??$any_cast@VSoundId@Soundscape@RBX@@@boost@@YAPAVSoundId@Soundscape@RBX@@PAVany@0@@Z)

#include <typeinfo>

namespace RBX { namespace Soundscape { class SoundId { public: int value; }; } }

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

template RBX::Soundscape::SoundId* boost::any_cast<RBX::Soundscape::SoundId>(boost::any*);