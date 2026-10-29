// roc 2010-06 005a51c0  unit: RBX::VBrickColor::?$TypedPropertyDescriptor  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005a51c0
//
// 005a51c0  56                   push esi
// 005a51c1  8b742408             mov esi, dword ptr [esp + 8]
// 005a51c5  85f6                 test esi, esi
// 005a51c7  742c                 je 0x5a51f5
// 005a51c9  8b0e                 mov ecx, dword ptr [esi]
// 005a51cb  85c9                 test ecx, ecx
// 005a51cd  7409                 je 0x5a51d8
// 005a51cf  8b01                 mov eax, dword ptr [ecx]
// 005a51d1  8b5004               mov edx, dword ptr [eax + 4]
// 005a51d4  ffd2                 call edx
// 005a51d6  eb05                 jmp 0x5a51dd
// 005a51d8  b80c93b700           mov eax, 0xb7930c
// 005a51dd  680c24b900           push 0xb9240c
// 005a51e2  8bc8                 mov ecx, eax
// 005a51e4  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 005a51ea  84c0                 test al, al
// 005a51ec  7407                 je 0x5a51f5
// 005a51ee  8b06                 mov eax, dword ptr [esi]
// 005a51f0  83c004               add eax, 4
// 005a51f3  5e                   pop esi
// 005a51f4  c3                   ret 
// 005a51f5  33c0                 xor eax, eax
// 005a51f7  5e                   pop esi
// 005a51f8  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000000_00642c10@@YAPAXPAUAny@@@Z)

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