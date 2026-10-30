// roc 2011-06 006d7d10  unit: RBX::JointsService  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006d7d10
//
// 006d7d10  56                   push esi
// 006d7d11  8b742408             mov esi, dword ptr [esp + 8]
// 006d7d15  85f6                 test esi, esi
// 006d7d17  742c                 je 0x6d7d45
// 006d7d19  8b0e                 mov ecx, dword ptr [esi]
// 006d7d1b  85c9                 test ecx, ecx
// 006d7d1d  7409                 je 0x6d7d28
// 006d7d1f  8b01                 mov eax, dword ptr [ecx]
// 006d7d21  8b5004               mov edx, dword ptr [eax + 4]
// 006d7d24  ffd2                 call edx
// 006d7d26  eb05                 jmp 0x6d7d2d
// 006d7d28  b8447ac000           mov eax, 0xc07a44
// 006d7d2d  6820ecc300           push 0xc3ec20
// 006d7d32  8bc8                 mov ecx, eax
// 006d7d34  ff15500aa400         call dword ptr [0xa40a50]
// 006d7d3a  84c0                 test al, al
// 006d7d3c  7407                 je 0x6d7d45
// 006d7d3e  8b06                 mov eax, dword ptr [esi]
// 006d7d40  83c004               add eax, 4
// 006d7d43  5e                   pop esi
// 006d7d44  c3                   ret 
// 006d7d45  33c0                 xor eax, eax
// 006d7d47  5e                   pop esi
// 006d7d48  c3                   ret 
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