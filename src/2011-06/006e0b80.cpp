// roc 2011-06 006e0b80  unit: RBX::PAVPrimitive::$$A6AXU?$pair::?$signal::Vslot::?$callable  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006e0b80
//
// 006e0b80  56                   push esi
// 006e0b81  8b742408             mov esi, dword ptr [esp + 8]
// 006e0b85  85f6                 test esi, esi
// 006e0b87  742c                 je 0x6e0bb5
// 006e0b89  8b0e                 mov ecx, dword ptr [esi]
// 006e0b8b  85c9                 test ecx, ecx
// 006e0b8d  7409                 je 0x6e0b98
// 006e0b8f  8b01                 mov eax, dword ptr [ecx]
// 006e0b91  8b5004               mov edx, dword ptr [eax + 4]
// 006e0b94  ffd2                 call edx
// 006e0b96  eb05                 jmp 0x6e0b9d
// 006e0b98  b8447ac000           mov eax, 0xc07a44
// 006e0b9d  685084c300           push 0xc38450
// 006e0ba2  8bc8                 mov ecx, eax
// 006e0ba4  ff15500aa400         call dword ptr [0xa40a50]
// 006e0baa  84c0                 test al, al
// 006e0bac  7407                 je 0x6e0bb5
// 006e0bae  8b06                 mov eax, dword ptr [esi]
// 006e0bb0  83c004               add eax, 4
// 006e0bb3  5e                   pop esi
// 006e0bb4  c3                   ret 
// 006e0bb5  33c0                 xor eax, eax
// 006e0bb7  5e                   pop esi
// 006e0bb8  c3                   ret 
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