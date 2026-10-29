// roc 2010-06 005a5280  unit: RBX::VBrickColor::?$TypedPropertyDescriptor  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005a5280
//
// 005a5280  56                   push esi
// 005a5281  8b742408             mov esi, dword ptr [esp + 8]
// 005a5285  85f6                 test esi, esi
// 005a5287  742c                 je 0x5a52b5
// 005a5289  8b0e                 mov ecx, dword ptr [esi]
// 005a528b  85c9                 test ecx, ecx
// 005a528d  7409                 je 0x5a5298
// 005a528f  8b01                 mov eax, dword ptr [ecx]
// 005a5291  8b5004               mov edx, dword ptr [eax + 4]
// 005a5294  ffd2                 call edx
// 005a5296  eb05                 jmp 0x5a529d
// 005a5298  b80c93b700           mov eax, 0xb7930c
// 005a529d  687c1cb900           push 0xb91c7c
// 005a52a2  8bc8                 mov ecx, eax
// 005a52a4  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 005a52aa  84c0                 test al, al
// 005a52ac  7407                 je 0x5a52b5
// 005a52ae  8b06                 mov eax, dword ptr [esi]
// 005a52b0  83c004               add eax, 4
// 005a52b3  5e                   pop esi
// 005a52b4  c3                   ret 
// 005a52b5  33c0                 xor eax, eax
// 005a52b7  5e                   pop esi
// 005a52b8  c3                   ret 
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