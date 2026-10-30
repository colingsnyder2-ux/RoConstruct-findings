// roc 2009-06 00694ec0  unit: RBX::Rocket  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00694ec0
//
// 00694ec0  56                   push esi
// 00694ec1  8b742408             mov esi, dword ptr [esp + 8]
// 00694ec5  85f6                 test esi, esi
// 00694ec7  742c                 je 0x694ef5
// 00694ec9  8b0e                 mov ecx, dword ptr [esi]
// 00694ecb  85c9                 test ecx, ecx
// 00694ecd  7409                 je 0x694ed8
// 00694ecf  8b01                 mov eax, dword ptr [ecx]
// 00694ed1  8b5004               mov edx, dword ptr [eax + 4]
// 00694ed4  ffd2                 call edx
// 00694ed6  eb05                 jmp 0x694edd
// 00694ed8  b8d4c29d00           mov eax, 0x9dc2d4
// 00694edd  688064a100           push 0xa16480
// 00694ee2  8bc8                 mov ecx, eax
// 00694ee4  ff15a4e98900         call dword ptr [0x89e9a4]
// 00694eea  84c0                 test al, al
// 00694eec  7407                 je 0x694ef5
// 00694eee  8b06                 mov eax, dword ptr [esi]
// 00694ef0  83c004               add eax, 4
// 00694ef3  5e                   pop esi
// 00694ef4  c3                   ret 
// 00694ef5  33c0                 xor eax, eax
// 00694ef7  5e                   pop esi
// 00694ef8  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000000@@YAPAXPAUAny@@@Z)

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