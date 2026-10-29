// roc 2010-06 005a5240  unit: RBX::VBrickColor::?$TypedPropertyDescriptor  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005a5240
//
// 005a5240  56                   push esi
// 005a5241  8b742408             mov esi, dword ptr [esp + 8]
// 005a5245  85f6                 test esi, esi
// 005a5247  742c                 je 0x5a5275
// 005a5249  8b0e                 mov ecx, dword ptr [esi]
// 005a524b  85c9                 test ecx, ecx
// 005a524d  7409                 je 0x5a5258
// 005a524f  8b01                 mov eax, dword ptr [ecx]
// 005a5251  8b5004               mov edx, dword ptr [eax + 4]
// 005a5254  ffd2                 call edx
// 005a5256  eb05                 jmp 0x5a525d
// 005a5258  b80c93b700           mov eax, 0xb7930c
// 005a525d  689c24b900           push 0xb9249c
// 005a5262  8bc8                 mov ecx, eax
// 005a5264  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 005a526a  84c0                 test al, al
// 005a526c  7407                 je 0x5a5275
// 005a526e  8b06                 mov eax, dword ptr [esi]
// 005a5270  83c004               add eax, 4
// 005a5273  5e                   pop esi
// 005a5274  c3                   ret 
// 005a5275  33c0                 xor eax, eax
// 005a5277  5e                   pop esi
// 005a5278  c3                   ret 
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