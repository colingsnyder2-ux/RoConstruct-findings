// roc 2011-06 007369d0  unit: RBX::VStudioTool::?$EventDesc  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007369d0
//
// 007369d0  56                   push esi
// 007369d1  8b742408             mov esi, dword ptr [esp + 8]
// 007369d5  85f6                 test esi, esi
// 007369d7  742c                 je 0x736a05
// 007369d9  8b0e                 mov ecx, dword ptr [esi]
// 007369db  85c9                 test ecx, ecx
// 007369dd  7409                 je 0x7369e8
// 007369df  8b01                 mov eax, dword ptr [ecx]
// 007369e1  8b5004               mov edx, dword ptr [eax + 4]
// 007369e4  ffd2                 call edx
// 007369e6  eb05                 jmp 0x7369ed
// 007369e8  b8447ac000           mov eax, 0xc07a44
// 007369ed  68a0eac300           push 0xc3eaa0
// 007369f2  8bc8                 mov ecx, eax
// 007369f4  ff15500aa400         call dword ptr [0xa40a50]
// 007369fa  84c0                 test al, al
// 007369fc  7407                 je 0x736a05
// 007369fe  8b06                 mov eax, dword ptr [esi]
// 00736a00  83c004               add eax, 4
// 00736a03  5e                   pop esi
// 00736a04  c3                   ret 
// 00736a05  33c0                 xor eax, eax
// 00736a07  5e                   pop esi
// 00736a08  c3                   ret 
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