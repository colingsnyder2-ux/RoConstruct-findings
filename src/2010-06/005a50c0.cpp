// roc 2010-06 005a50c0  unit: RBX::VBrickColor::?$TypedPropertyDescriptor  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005a50c0
//
// 005a50c0  56                   push esi
// 005a50c1  8b742408             mov esi, dword ptr [esp + 8]
// 005a50c5  85f6                 test esi, esi
// 005a50c7  742c                 je 0x5a50f5
// 005a50c9  8b0e                 mov ecx, dword ptr [esi]
// 005a50cb  85c9                 test ecx, ecx
// 005a50cd  7409                 je 0x5a50d8
// 005a50cf  8b01                 mov eax, dword ptr [ecx]
// 005a50d1  8b5004               mov edx, dword ptr [eax + 4]
// 005a50d4  ffd2                 call edx
// 005a50d6  eb05                 jmp 0x5a50dd
// 005a50d8  b80c93b700           mov eax, 0xb7930c
// 005a50dd  68f024b900           push 0xb924f0
// 005a50e2  8bc8                 mov ecx, eax
// 005a50e4  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 005a50ea  84c0                 test al, al
// 005a50ec  7407                 je 0x5a50f5
// 005a50ee  8b06                 mov eax, dword ptr [esi]
// 005a50f0  83c004               add eax, 4
// 005a50f3  5e                   pop esi
// 005a50f4  c3                   ret 
// 005a50f5  33c0                 xor eax, eax
// 005a50f7  5e                   pop esi
// 005a50f8  c3                   ret 
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