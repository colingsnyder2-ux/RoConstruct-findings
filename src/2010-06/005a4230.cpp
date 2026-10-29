// roc 2010-06 005a4230  unit: RBX::VBrickColor::?$TypedPropertyDescriptor  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005a4230
//
// 005a4230  56                   push esi
// 005a4231  8b742408             mov esi, dword ptr [esp + 8]
// 005a4235  85f6                 test esi, esi
// 005a4237  742c                 je 0x5a4265
// 005a4239  8b0e                 mov ecx, dword ptr [esi]
// 005a423b  85c9                 test ecx, ecx
// 005a423d  7409                 je 0x5a4248
// 005a423f  8b01                 mov eax, dword ptr [ecx]
// 005a4241  8b5004               mov edx, dword ptr [eax + 4]
// 005a4244  ffd2                 call edx
// 005a4246  eb05                 jmp 0x5a424d
// 005a4248  b80c93b700           mov eax, 0xb7930c
// 005a424d  68c8e7b800           push 0xb8e7c8
// 005a4252  8bc8                 mov ecx, eax
// 005a4254  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 005a425a  84c0                 test al, al
// 005a425c  7407                 je 0x5a4265
// 005a425e  8b06                 mov eax, dword ptr [esi]
// 005a4260  83c004               add eax, 4
// 005a4263  5e                   pop esi
// 005a4264  c3                   ret 
// 005a4265  33c0                 xor eax, eax
// 005a4267  5e                   pop esi
// 005a4268  c3                   ret 
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