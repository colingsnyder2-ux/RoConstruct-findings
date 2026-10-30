// roc 2010-06 00620ee0  unit: RBX::DropperTool  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00620ee0
//
// 00620ee0  56                   push esi
// 00620ee1  8b742408             mov esi, dword ptr [esp + 8]
// 00620ee5  85f6                 test esi, esi
// 00620ee7  742c                 je 0x620f15
// 00620ee9  8b0e                 mov ecx, dword ptr [esi]
// 00620eeb  85c9                 test ecx, ecx
// 00620eed  7409                 je 0x620ef8
// 00620eef  8b01                 mov eax, dword ptr [ecx]
// 00620ef1  8b5004               mov edx, dword ptr [eax + 4]
// 00620ef4  ffd2                 call edx
// 00620ef6  eb05                 jmp 0x620efd
// 00620ef8  b80c93b700           mov eax, 0xb7930c
// 00620efd  684c12ba00           push 0xba124c
// 00620f02  8bc8                 mov ecx, eax
// 00620f04  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 00620f0a  84c0                 test al, al
// 00620f0c  7407                 je 0x620f15
// 00620f0e  8b06                 mov eax, dword ptr [esi]
// 00620f10  83c004               add eax, 4
// 00620f13  5e                   pop esi
// 00620f14  c3                   ret 
// 00620f15  33c0                 xor eax, eax
// 00620f17  5e                   pop esi
// 00620f18  c3                   ret 
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