// roc 2011-06 006a6470  unit: RBX::VGuiTextButton::?$FactoryProduct  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006a6470
//
// 006a6470  56                   push esi
// 006a6471  8b742408             mov esi, dword ptr [esp + 8]
// 006a6475  85f6                 test esi, esi
// 006a6477  742c                 je 0x6a64a5
// 006a6479  8b0e                 mov ecx, dword ptr [esi]
// 006a647b  85c9                 test ecx, ecx
// 006a647d  7409                 je 0x6a6488
// 006a647f  8b01                 mov eax, dword ptr [ecx]
// 006a6481  8b5004               mov edx, dword ptr [eax + 4]
// 006a6484  ffd2                 call edx
// 006a6486  eb05                 jmp 0x6a648d
// 006a6488  b8447ac000           mov eax, 0xc07a44
// 006a648d  68a0d4c300           push 0xc3d4a0
// 006a6492  8bc8                 mov ecx, eax
// 006a6494  ff15500aa400         call dword ptr [0xa40a50]
// 006a649a  84c0                 test al, al
// 006a649c  7407                 je 0x6a64a5
// 006a649e  8b06                 mov eax, dword ptr [esi]
// 006a64a0  83c004               add eax, 4
// 006a64a3  5e                   pop esi
// 006a64a4  c3                   ret 
// 006a64a5  33c0                 xor eax, eax
// 006a64a7  5e                   pop esi
// 006a64a8  c3                   ret 
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