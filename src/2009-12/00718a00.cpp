// roc 2009-12 00718a00  unit: RBX::JointsService  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00718a00
//
// 00718a00  56                   push esi
// 00718a01  8b742408             mov esi, dword ptr [esp + 8]
// 00718a05  85f6                 test esi, esi
// 00718a07  742c                 je 0x718a35
// 00718a09  8b0e                 mov ecx, dword ptr [esi]
// 00718a0b  85c9                 test ecx, ecx
// 00718a0d  7409                 je 0x718a18
// 00718a0f  8b01                 mov eax, dword ptr [ecx]
// 00718a11  8b5004               mov edx, dword ptr [eax + 4]
// 00718a14  ffd2                 call edx
// 00718a16  eb05                 jmp 0x718a1d
// 00718a18  b80c03b000           mov eax, 0xb0030c
// 00718a1d  68d85db300           push 0xb35dd8
// 00718a22  8bc8                 mov ecx, eax
// 00718a24  ff1568b79800         call dword ptr [0x98b768]
// 00718a2a  84c0                 test al, al
// 00718a2c  7407                 je 0x718a35
// 00718a2e  8b06                 mov eax, dword ptr [esi]
// 00718a30  83c004               add eax, 4
// 00718a33  5e                   pop esi
// 00718a34  c3                   ret 
// 00718a35  33c0                 xor eax, eax
// 00718a37  5e                   pop esi
// 00718a38  c3                   ret 
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