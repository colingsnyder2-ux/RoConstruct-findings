// roc 2009-06 005e51d0  unit: RBX::ThreadPool::UPoolData::?$sp_counted_impl_p  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005e51d0
//
// 005e51d0  56                   push esi
// 005e51d1  8b742408             mov esi, dword ptr [esp + 8]
// 005e51d5  85f6                 test esi, esi
// 005e51d7  742c                 je 0x5e5205
// 005e51d9  8b0e                 mov ecx, dword ptr [esi]
// 005e51db  85c9                 test ecx, ecx
// 005e51dd  7409                 je 0x5e51e8
// 005e51df  8b01                 mov eax, dword ptr [ecx]
// 005e51e1  8b5004               mov edx, dword ptr [eax + 4]
// 005e51e4  ffd2                 call edx
// 005e51e6  eb05                 jmp 0x5e51ed
// 005e51e8  b8d4c29d00           mov eax, 0x9dc2d4
// 005e51ed  684cf39d00           push 0x9df34c
// 005e51f2  8bc8                 mov ecx, eax
// 005e51f4  ff15a4e98900         call dword ptr [0x89e9a4]
// 005e51fa  84c0                 test al, al
// 005e51fc  7407                 je 0x5e5205
// 005e51fe  8b06                 mov eax, dword ptr [esi]
// 005e5200  83c004               add eax, 4
// 005e5203  5e                   pop esi
// 005e5204  c3                   ret 
// 005e5205  33c0                 xor eax, eax
// 005e5207  5e                   pop esi
// 005e5208  c3                   ret 
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