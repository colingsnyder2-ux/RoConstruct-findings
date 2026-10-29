// roc 2010-06 006b9d00  unit: RBX::VTextureId::?$TypedPropertyDescriptor  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006b9d00
//
// 006b9d00  56                   push esi
// 006b9d01  8b742408             mov esi, dword ptr [esp + 8]
// 006b9d05  85f6                 test esi, esi
// 006b9d07  742c                 je 0x6b9d35
// 006b9d09  8b0e                 mov ecx, dword ptr [esi]
// 006b9d0b  85c9                 test ecx, ecx
// 006b9d0d  7409                 je 0x6b9d18
// 006b9d0f  8b01                 mov eax, dword ptr [ecx]
// 006b9d11  8b5004               mov edx, dword ptr [eax + 4]
// 006b9d14  ffd2                 call edx
// 006b9d16  eb05                 jmp 0x6b9d1d
// 006b9d18  b80c93b700           mov eax, 0xb7930c
// 006b9d1d  68f45dbb00           push 0xbb5df4
// 006b9d22  8bc8                 mov ecx, eax
// 006b9d24  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 006b9d2a  84c0                 test al, al
// 006b9d2c  7407                 je 0x6b9d35
// 006b9d2e  8b06                 mov eax, dword ptr [esi]
// 006b9d30  83c004               add eax, 4
// 006b9d33  5e                   pop esi
// 006b9d34  c3                   ret 
// 006b9d35  33c0                 xor eax, eax
// 006b9d37  5e                   pop esi
// 006b9d38  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000000_00642c10@@YAPAXPAUAny@@@Z)

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