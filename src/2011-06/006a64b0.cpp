// roc 2011-06 006a64b0  unit: RBX::VGuiTextButton::?$FactoryProduct  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006a64b0
//
// 006a64b0  56                   push esi
// 006a64b1  8b742408             mov esi, dword ptr [esp + 8]
// 006a64b5  85f6                 test esi, esi
// 006a64b7  742c                 je 0x6a64e5
// 006a64b9  8b0e                 mov ecx, dword ptr [esi]
// 006a64bb  85c9                 test ecx, ecx
// 006a64bd  7409                 je 0x6a64c8
// 006a64bf  8b01                 mov eax, dword ptr [ecx]
// 006a64c1  8b5004               mov edx, dword ptr [eax + 4]
// 006a64c4  ffd2                 call edx
// 006a64c6  eb05                 jmp 0x6a64cd
// 006a64c8  b8447ac000           mov eax, 0xc07a44
// 006a64cd  681cd3c300           push 0xc3d31c
// 006a64d2  8bc8                 mov ecx, eax
// 006a64d4  ff15500aa400         call dword ptr [0xa40a50]
// 006a64da  84c0                 test al, al
// 006a64dc  7407                 je 0x6a64e5
// 006a64de  8b06                 mov eax, dword ptr [esi]
// 006a64e0  83c004               add eax, 4
// 006a64e3  5e                   pop esi
// 006a64e4  c3                   ret 
// 006a64e5  33c0                 xor eax, eax
// 006a64e7  5e                   pop esi
// 006a64e8  c3                   ret 
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