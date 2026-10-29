// roc 2011-06 005b9cd0  unit: RBX::VBrickColor::?$TypedPropertyDescriptor  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005b9cd0
//
// 005b9cd0  56                   push esi
// 005b9cd1  8b742408             mov esi, dword ptr [esp + 8]
// 005b9cd5  85f6                 test esi, esi
// 005b9cd7  742c                 je 0x5b9d05
// 005b9cd9  8b0e                 mov ecx, dword ptr [esi]
// 005b9cdb  85c9                 test ecx, ecx
// 005b9cdd  7409                 je 0x5b9ce8
// 005b9cdf  8b01                 mov eax, dword ptr [ecx]
// 005b9ce1  8b5004               mov edx, dword ptr [eax + 4]
// 005b9ce4  ffd2                 call edx
// 005b9ce6  eb05                 jmp 0x5b9ced
// 005b9ce8  b8447ac000           mov eax, 0xc07a44
// 005b9ced  68b0afc200           push 0xc2afb0
// 005b9cf2  8bc8                 mov ecx, eax
// 005b9cf4  ff15500aa400         call dword ptr [0xa40a50]
// 005b9cfa  84c0                 test al, al
// 005b9cfc  7407                 je 0x5b9d05
// 005b9cfe  8b06                 mov eax, dword ptr [esi]
// 005b9d00  83c004               add eax, 4
// 005b9d03  5e                   pop esi
// 005b9d04  c3                   ret 
// 005b9d05  33c0                 xor eax, eax
// 005b9d07  5e                   pop esi
// 005b9d08  c3                   ret 
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