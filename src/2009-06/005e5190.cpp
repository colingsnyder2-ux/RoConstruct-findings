// roc 2009-06 005e5190  unit: RBX::ThreadPool::UPoolData::?$sp_counted_impl_p  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005e5190
//
// 005e5190  56                   push esi
// 005e5191  8b742408             mov esi, dword ptr [esp + 8]
// 005e5195  85f6                 test esi, esi
// 005e5197  742c                 je 0x5e51c5
// 005e5199  8b0e                 mov ecx, dword ptr [esi]
// 005e519b  85c9                 test ecx, ecx
// 005e519d  7409                 je 0x5e51a8
// 005e519f  8b01                 mov eax, dword ptr [ecx]
// 005e51a1  8b5004               mov edx, dword ptr [eax + 4]
// 005e51a4  ffd2                 call edx
// 005e51a6  eb05                 jmp 0x5e51ad
// 005e51a8  b8d4c29d00           mov eax, 0x9dc2d4
// 005e51ad  6810ca9e00           push 0x9eca10
// 005e51b2  8bc8                 mov ecx, eax
// 005e51b4  ff15a4e98900         call dword ptr [0x89e9a4]
// 005e51ba  84c0                 test al, al
// 005e51bc  7407                 je 0x5e51c5
// 005e51be  8b06                 mov eax, dword ptr [esi]
// 005e51c0  83c004               add eax, 4
// 005e51c3  5e                   pop esi
// 005e51c4  c3                   ret 
// 005e51c5  33c0                 xor eax, eax
// 005e51c7  5e                   pop esi
// 005e51c8  c3                   ret 
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