// roc 2011-06 005e71c0  unit: std::D::DU?$char_traits::?$basic_altstringbuf  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005e71c0
//
// 005e71c0  56                   push esi
// 005e71c1  8b742408             mov esi, dword ptr [esp + 8]
// 005e71c5  85f6                 test esi, esi
// 005e71c7  742c                 je 0x5e71f5
// 005e71c9  8b0e                 mov ecx, dword ptr [esi]
// 005e71cb  85c9                 test ecx, ecx
// 005e71cd  7409                 je 0x5e71d8
// 005e71cf  8b01                 mov eax, dword ptr [ecx]
// 005e71d1  8b5004               mov edx, dword ptr [eax + 4]
// 005e71d4  ffd2                 call edx
// 005e71d6  eb05                 jmp 0x5e71dd
// 005e71d8  b8447ac000           mov eax, 0xc07a44
// 005e71dd  68dce0c300           push 0xc3e0dc
// 005e71e2  8bc8                 mov ecx, eax
// 005e71e4  ff15500aa400         call dword ptr [0xa40a50]
// 005e71ea  84c0                 test al, al
// 005e71ec  7407                 je 0x5e71f5
// 005e71ee  8b06                 mov eax, dword ptr [esi]
// 005e71f0  83c004               add eax, 4
// 005e71f3  5e                   pop esi
// 005e71f4  c3                   ret 
// 005e71f5  33c0                 xor eax, eax
// 005e71f7  5e                   pop esi
// 005e71f8  c3                   ret 
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