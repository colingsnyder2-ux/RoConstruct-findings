// roc 2010-06 006b98e0  unit: RBX::Rocket  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006b98e0
//
// 006b98e0  56                   push esi
// 006b98e1  8b742408             mov esi, dword ptr [esp + 8]
// 006b98e5  85f6                 test esi, esi
// 006b98e7  742c                 je 0x6b9915
// 006b98e9  8b0e                 mov ecx, dword ptr [esi]
// 006b98eb  85c9                 test ecx, ecx
// 006b98ed  7409                 je 0x6b98f8
// 006b98ef  8b01                 mov eax, dword ptr [ecx]
// 006b98f1  8b5004               mov edx, dword ptr [eax + 4]
// 006b98f4  ffd2                 call edx
// 006b98f6  eb05                 jmp 0x6b98fd
// 006b98f8  b80c93b700           mov eax, 0xb7930c
// 006b98fd  686861bb00           push 0xbb6168
// 006b9902  8bc8                 mov ecx, eax
// 006b9904  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 006b990a  84c0                 test al, al
// 006b990c  7407                 je 0x6b9915
// 006b990e  8b06                 mov eax, dword ptr [esi]
// 006b9910  83c004               add eax, 4
// 006b9913  5e                   pop esi
// 006b9914  c3                   ret 
// 006b9915  33c0                 xor eax, eax
// 006b9917  5e                   pop esi
// 006b9918  c3                   ret 
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