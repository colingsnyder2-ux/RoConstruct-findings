// roc 2010-06 005a5040  unit: RBX::VBrickColor::?$TypedPropertyDescriptor  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005a5040
//
// 005a5040  56                   push esi
// 005a5041  8b742408             mov esi, dword ptr [esp + 8]
// 005a5045  85f6                 test esi, esi
// 005a5047  742c                 je 0x5a5075
// 005a5049  8b0e                 mov ecx, dword ptr [esi]
// 005a504b  85c9                 test ecx, ecx
// 005a504d  7409                 je 0x5a5058
// 005a504f  8b01                 mov eax, dword ptr [ecx]
// 005a5051  8b5004               mov edx, dword ptr [eax + 4]
// 005a5054  ffd2                 call edx
// 005a5056  eb05                 jmp 0x5a505d
// 005a5058  b80c93b700           mov eax, 0xb7930c
// 005a505d  68c87bb800           push 0xb87bc8
// 005a5062  8bc8                 mov ecx, eax
// 005a5064  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 005a506a  84c0                 test al, al
// 005a506c  7407                 je 0x5a5075
// 005a506e  8b06                 mov eax, dword ptr [esi]
// 005a5070  83c004               add eax, 4
// 005a5073  5e                   pop esi
// 005a5074  c3                   ret 
// 005a5075  33c0                 xor eax, eax
// 005a5077  5e                   pop esi
// 005a5078  c3                   ret 
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