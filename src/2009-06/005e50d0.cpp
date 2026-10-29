// roc 2009-06 005e50d0  unit: RBX::ThreadPool::UPoolData::?$sp_counted_impl_p  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005e50d0
//
// 005e50d0  56                   push esi
// 005e50d1  8b742408             mov esi, dword ptr [esp + 8]
// 005e50d5  85f6                 test esi, esi
// 005e50d7  742c                 je 0x5e5105
// 005e50d9  8b0e                 mov ecx, dword ptr [esi]
// 005e50db  85c9                 test ecx, ecx
// 005e50dd  7409                 je 0x5e50e8
// 005e50df  8b01                 mov eax, dword ptr [ecx]
// 005e50e1  8b5004               mov edx, dword ptr [eax + 4]
// 005e50e4  ffd2                 call edx
// 005e50e6  eb05                 jmp 0x5e50ed
// 005e50e8  b8d4c29d00           mov eax, 0x9dc2d4
// 005e50ed  68e010a000           push 0xa010e0
// 005e50f2  8bc8                 mov ecx, eax
// 005e50f4  ff15a4e98900         call dword ptr [0x89e9a4]
// 005e50fa  84c0                 test al, al
// 005e50fc  7407                 je 0x5e5105
// 005e50fe  8b06                 mov eax, dword ptr [esi]
// 005e5100  83c004               add eax, 4
// 005e5103  5e                   pop esi
// 005e5104  c3                   ret 
// 005e5105  33c0                 xor eax, eax
// 005e5107  5e                   pop esi
// 005e5108  c3                   ret 
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