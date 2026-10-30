// roc 2011-06 0067e760  unit: RBX::Humanoid  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0067e760
//
// 0067e760  56                   push esi
// 0067e761  8b742408             mov esi, dword ptr [esp + 8]
// 0067e765  85f6                 test esi, esi
// 0067e767  742c                 je 0x67e795
// 0067e769  8b0e                 mov ecx, dword ptr [esi]
// 0067e76b  85c9                 test ecx, ecx
// 0067e76d  7409                 je 0x67e778
// 0067e76f  8b01                 mov eax, dword ptr [ecx]
// 0067e771  8b5004               mov edx, dword ptr [eax + 4]
// 0067e774  ffd2                 call edx
// 0067e776  eb05                 jmp 0x67e77d
// 0067e778  b8447ac000           mov eax, 0xc07a44
// 0067e77d  68d8dec300           push 0xc3ded8
// 0067e782  8bc8                 mov ecx, eax
// 0067e784  ff15500aa400         call dword ptr [0xa40a50]
// 0067e78a  84c0                 test al, al
// 0067e78c  7407                 je 0x67e795
// 0067e78e  8b06                 mov eax, dword ptr [esi]
// 0067e790  83c004               add eax, 4
// 0067e793  5e                   pop esi
// 0067e794  c3                   ret 
// 0067e795  33c0                 xor eax, eax
// 0067e797  5e                   pop esi
// 0067e798  c3                   ret 
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