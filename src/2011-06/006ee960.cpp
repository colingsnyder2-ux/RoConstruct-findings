// roc 2011-06 006ee960  unit: RBX::VTextureId::?$TypedPropertyDescriptor  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006ee960
//
// 006ee960  56                   push esi
// 006ee961  8b742408             mov esi, dword ptr [esp + 8]
// 006ee965  85f6                 test esi, esi
// 006ee967  742c                 je 0x6ee995
// 006ee969  8b0e                 mov ecx, dword ptr [esi]
// 006ee96b  85c9                 test ecx, ecx
// 006ee96d  7409                 je 0x6ee978
// 006ee96f  8b01                 mov eax, dword ptr [ecx]
// 006ee971  8b5004               mov edx, dword ptr [eax + 4]
// 006ee974  ffd2                 call edx
// 006ee976  eb05                 jmp 0x6ee97d
// 006ee978  b8447ac000           mov eax, 0xc07a44
// 006ee97d  68bca6c500           push 0xc5a6bc
// 006ee982  8bc8                 mov ecx, eax
// 006ee984  ff15500aa400         call dword ptr [0xa40a50]
// 006ee98a  84c0                 test al, al
// 006ee98c  7407                 je 0x6ee995
// 006ee98e  8b06                 mov eax, dword ptr [esi]
// 006ee990  83c004               add eax, 4
// 006ee993  5e                   pop esi
// 006ee994  c3                   ret 
// 006ee995  33c0                 xor eax, eax
// 006ee997  5e                   pop esi
// 006ee998  c3                   ret 
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