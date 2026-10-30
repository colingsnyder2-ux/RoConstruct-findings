// roc 2010-06 005a4f00  unit: RBX::VBrickColor::?$TypedPropertyDescriptor  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005a4f00
//
// 005a4f00  56                   push esi
// 005a4f01  8b742408             mov esi, dword ptr [esp + 8]
// 005a4f05  85f6                 test esi, esi
// 005a4f07  742c                 je 0x5a4f35
// 005a4f09  8b0e                 mov ecx, dword ptr [esi]
// 005a4f0b  85c9                 test ecx, ecx
// 005a4f0d  7409                 je 0x5a4f18
// 005a4f0f  8b01                 mov eax, dword ptr [ecx]
// 005a4f11  8b5004               mov edx, dword ptr [eax + 4]
// 005a4f14  ffd2                 call edx
// 005a4f16  eb05                 jmp 0x5a4f1d
// 005a4f18  b80c93b700           mov eax, 0xb7930c
// 005a4f1d  68f4feb900           push 0xb9fef4
// 005a4f22  8bc8                 mov ecx, eax
// 005a4f24  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 005a4f2a  84c0                 test al, al
// 005a4f2c  7407                 je 0x5a4f35
// 005a4f2e  8b06                 mov eax, dword ptr [esi]
// 005a4f30  83c004               add eax, 4
// 005a4f33  5e                   pop esi
// 005a4f34  c3                   ret 
// 005a4f35  33c0                 xor eax, eax
// 005a4f37  5e                   pop esi
// 005a4f38  c3                   ret 
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