// from server: 100% by tester
// roc 2008-06 00597370  unit: RBX::worker_thread::Udata::?$sp_counted_impl_p  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00597370
//
// 00597370  56                   push esi
// 00597371  8b742408             mov esi, dword ptr [esp + 8]
// 00597375  85f6                 test esi, esi
// 00597377  742c                 je 0x5973a5
// 00597379  8b0e                 mov ecx, dword ptr [esi]
// 0059737b  85c9                 test ecx, ecx
// 0059737d  7409                 je 0x597388
// 0059737f  8b01                 mov eax, dword ptr [ecx]
// 00597381  8b5004               mov edx, dword ptr [eax + 4]
// 00597384  ffd2                 call edx
// 00597386  eb05                 jmp 0x59738d
// 00597388  b814969200           mov eax, 0x929614
// 0059738d  68789c9400           push 0x949c78
// 00597392  8bc8                 mov ecx, eax
// 00597394  ff1578288000         call dword ptr [0x802878]
// 0059739a  84c0                 test al, al
// 0059739c  7407                 je 0x5973a5
// 0059739e  8b06                 mov eax, dword ptr [esi]
// 005973a0  83c004               add eax, 4
// 005973a3  5e                   pop esi
// 005973a4  c3                   ret 
// 005973a5  33c0                 xor eax, eax
// 005973a7  5e                   pop esi
// 005973a8  c3                   ret 

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
