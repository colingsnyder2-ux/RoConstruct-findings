// roc 2010-06 004a3560  unit: RBX::Network::Player  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004a3560
//
// 004a3560  56                   push esi
// 004a3561  8b742408             mov esi, dword ptr [esp + 8]
// 004a3565  85f6                 test esi, esi
// 004a3567  742c                 je 0x4a3595
// 004a3569  8b0e                 mov ecx, dword ptr [esi]
// 004a356b  85c9                 test ecx, ecx
// 004a356d  7409                 je 0x4a3578
// 004a356f  8b01                 mov eax, dword ptr [ecx]
// 004a3571  8b5004               mov edx, dword ptr [eax + 4]
// 004a3574  ffd2                 call edx
// 004a3576  eb05                 jmp 0x4a357d
// 004a3578  b80c93b700           mov eax, 0xb7930c
// 004a357d  685874b800           push 0xb87458
// 004a3582  8bc8                 mov ecx, eax
// 004a3584  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 004a358a  84c0                 test al, al
// 004a358c  7407                 je 0x4a3595
// 004a358e  8b06                 mov eax, dword ptr [esi]
// 004a3590  83c004               add eax, 4
// 004a3593  5e                   pop esi
// 004a3594  c3                   ret 
// 004a3595  33c0                 xor eax, eax
// 004a3597  5e                   pop esi
// 004a3598  c3                   ret 
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