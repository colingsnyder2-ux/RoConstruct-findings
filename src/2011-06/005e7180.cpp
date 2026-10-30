// roc 2011-06 005e7180  unit: std::D::DU?$char_traits::?$basic_altstringbuf  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005e7180
//
// 005e7180  56                   push esi
// 005e7181  8b742408             mov esi, dword ptr [esp + 8]
// 005e7185  85f6                 test esi, esi
// 005e7187  742c                 je 0x5e71b5
// 005e7189  8b0e                 mov ecx, dword ptr [esi]
// 005e718b  85c9                 test ecx, ecx
// 005e718d  7409                 je 0x5e7198
// 005e718f  8b01                 mov eax, dword ptr [ecx]
// 005e7191  8b5004               mov edx, dword ptr [eax + 4]
// 005e7194  ffd2                 call edx
// 005e7196  eb05                 jmp 0x5e719d
// 005e7198  b8447ac000           mov eax, 0xc07a44
// 005e719d  6830e0c300           push 0xc3e030
// 005e71a2  8bc8                 mov ecx, eax
// 005e71a4  ff15500aa400         call dword ptr [0xa40a50]
// 005e71aa  84c0                 test al, al
// 005e71ac  7407                 je 0x5e71b5
// 005e71ae  8b06                 mov eax, dword ptr [esi]
// 005e71b0  83c004               add eax, 4
// 005e71b3  5e                   pop esi
// 005e71b4  c3                   ret 
// 005e71b5  33c0                 xor eax, eax
// 005e71b7  5e                   pop esi
// 005e71b8  c3                   ret 
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