// roc 2011-06 005b9c90  unit: RBX::VBrickColor::?$TypedPropertyDescriptor  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005b9c90
//
// 005b9c90  56                   push esi
// 005b9c91  8b742408             mov esi, dword ptr [esp + 8]
// 005b9c95  85f6                 test esi, esi
// 005b9c97  742c                 je 0x5b9cc5
// 005b9c99  8b0e                 mov ecx, dword ptr [esi]
// 005b9c9b  85c9                 test ecx, ecx
// 005b9c9d  7409                 je 0x5b9ca8
// 005b9c9f  8b01                 mov eax, dword ptr [ecx]
// 005b9ca1  8b5004               mov edx, dword ptr [eax + 4]
// 005b9ca4  ffd2                 call edx
// 005b9ca6  eb05                 jmp 0x5b9cad
// 005b9ca8  b8447ac000           mov eax, 0xc07a44
// 005b9cad  6868afc200           push 0xc2af68
// 005b9cb2  8bc8                 mov ecx, eax
// 005b9cb4  ff15500aa400         call dword ptr [0xa40a50]
// 005b9cba  84c0                 test al, al
// 005b9cbc  7407                 je 0x5b9cc5
// 005b9cbe  8b06                 mov eax, dword ptr [esi]
// 005b9cc0  83c004               add eax, 4
// 005b9cc3  5e                   pop esi
// 005b9cc4  c3                   ret 
// 005b9cc5  33c0                 xor eax, eax
// 005b9cc7  5e                   pop esi
// 005b9cc8  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000000_00642c10@@YAPAXPAUAny@@@Z)

// roc-cl: 30729
// roc-flags: /O2 /GS- /EHsc /MD
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