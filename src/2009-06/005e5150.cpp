// roc 2009-06 005e5150  unit: RBX::ThreadPool::UPoolData::?$sp_counted_impl_p  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005e5150
//
// 005e5150  56                   push esi
// 005e5151  8b742408             mov esi, dword ptr [esp + 8]
// 005e5155  85f6                 test esi, esi
// 005e5157  742c                 je 0x5e5185
// 005e5159  8b0e                 mov ecx, dword ptr [esi]
// 005e515b  85c9                 test ecx, ecx
// 005e515d  7409                 je 0x5e5168
// 005e515f  8b01                 mov eax, dword ptr [ecx]
// 005e5161  8b5004               mov edx, dword ptr [eax + 4]
// 005e5164  ffd2                 call edx
// 005e5166  eb05                 jmp 0x5e516d
// 005e5168  b8d4c29d00           mov eax, 0x9dc2d4
// 005e516d  68c410a000           push 0xa010c4
// 005e5172  8bc8                 mov ecx, eax
// 005e5174  ff15a4e98900         call dword ptr [0x89e9a4]
// 005e517a  84c0                 test al, al
// 005e517c  7407                 je 0x5e5185
// 005e517e  8b06                 mov eax, dword ptr [esi]
// 005e5180  83c004               add eax, 4
// 005e5183  5e                   pop esi
// 005e5184  c3                   ret 
// 005e5185  33c0                 xor eax, eax
// 005e5187  5e                   pop esi
// 005e5188  c3                   ret 
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