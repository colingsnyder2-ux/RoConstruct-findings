// roc 2011-06 004c7270  unit: RBX::MeshAdapter  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004c7270
//
// 004c7270  56                   push esi
// 004c7271  8b742408             mov esi, dword ptr [esp + 8]
// 004c7275  85f6                 test esi, esi
// 004c7277  742c                 je 0x4c72a5
// 004c7279  8b0e                 mov ecx, dword ptr [esi]
// 004c727b  85c9                 test ecx, ecx
// 004c727d  7409                 je 0x4c7288
// 004c727f  8b01                 mov eax, dword ptr [ecx]
// 004c7281  8b5004               mov edx, dword ptr [eax + 4]
// 004c7284  ffd2                 call edx
// 004c7286  eb05                 jmp 0x4c728d
// 004c7288  b8447ac000           mov eax, 0xc07a44
// 004c728d  684c25c200           push 0xc2254c
// 004c7292  8bc8                 mov ecx, eax
// 004c7294  ff15500aa400         call dword ptr [0xa40a50]
// 004c729a  84c0                 test al, al
// 004c729c  7407                 je 0x4c72a5
// 004c729e  8b06                 mov eax, dword ptr [esi]
// 004c72a0  83c004               add eax, 4
// 004c72a3  5e                   pop esi
// 004c72a4  c3                   ret 
// 004c72a5  33c0                 xor eax, eax
// 004c72a7  5e                   pop esi
// 004c72a8  c3                   ret 
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