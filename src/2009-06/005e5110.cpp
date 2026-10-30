// roc 2009-06 005e5110  unit: RBX::ThreadPool::UPoolData::?$sp_counted_impl_p  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005e5110
//
// 005e5110  56                   push esi
// 005e5111  8b742408             mov esi, dword ptr [esp + 8]
// 005e5115  85f6                 test esi, esi
// 005e5117  742c                 je 0x5e5145
// 005e5119  8b0e                 mov ecx, dword ptr [esi]
// 005e511b  85c9                 test ecx, ecx
// 005e511d  7409                 je 0x5e5128
// 005e511f  8b01                 mov eax, dword ptr [ecx]
// 005e5121  8b5004               mov edx, dword ptr [eax + 4]
// 005e5124  ffd2                 call edx
// 005e5126  eb05                 jmp 0x5e512d
// 005e5128  b8d4c29d00           mov eax, 0x9dc2d4
// 005e512d  680c3b9e00           push 0x9e3b0c
// 005e5132  8bc8                 mov ecx, eax
// 005e5134  ff15a4e98900         call dword ptr [0x89e9a4]
// 005e513a  84c0                 test al, al
// 005e513c  7407                 je 0x5e5145
// 005e513e  8b06                 mov eax, dword ptr [esi]
// 005e5140  83c004               add eax, 4
// 005e5143  5e                   pop esi
// 005e5144  c3                   ret 
// 005e5145  33c0                 xor eax, eax
// 005e5147  5e                   pop esi
// 005e5148  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000000@@YAPAXPAUAny@@@Z)

#include <typeinfo>

// boost::any_cast<T>(any *) shape: 0xb0030c = typeid(void), 0xb1316c = typeid(T)
extern const type_info type_descriptor_b0030c;
extern const type_info type_descriptor_b1316c;

struct Placeholder
{
    virtual ~Placeholder();
    virtual const type_info &type() const;
};

struct Any
{
    Placeholder *content;
    const type_info &type() const { return content ? content->type() : type_descriptor_b0030c; }
};

struct Holder : Placeholder { int held; };

void *func_00642c10(Any *operand)
{
    if (operand && operand->type() == type_descriptor_b1316c)
        return &static_cast<Holder *>(operand->content)->held;
    return 0;
}