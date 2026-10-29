// roc 2011-06 004a3aa0  unit: RBX::Network::Player  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004a3aa0
//
// 004a3aa0  56                   push esi
// 004a3aa1  8b742408             mov esi, dword ptr [esp + 8]
// 004a3aa5  85f6                 test esi, esi
// 004a3aa7  742c                 je 0x4a3ad5
// 004a3aa9  8b0e                 mov ecx, dword ptr [esi]
// 004a3aab  85c9                 test ecx, ecx
// 004a3aad  7409                 je 0x4a3ab8
// 004a3aaf  8b01                 mov eax, dword ptr [ecx]
// 004a3ab1  8b5004               mov edx, dword ptr [eax + 4]
// 004a3ab4  ffd2                 call edx
// 004a3ab6  eb05                 jmp 0x4a3abd
// 004a3ab8  b8447ac000           mov eax, 0xc07a44
// 004a3abd  683ca2c100           push 0xc1a23c
// 004a3ac2  8bc8                 mov ecx, eax
// 004a3ac4  ff15500aa400         call dword ptr [0xa40a50]
// 004a3aca  84c0                 test al, al
// 004a3acc  7407                 je 0x4a3ad5
// 004a3ace  8b06                 mov eax, dword ptr [esi]
// 004a3ad0  83c004               add eax, 4
// 004a3ad3  5e                   pop esi
// 004a3ad4  c3                   ret 
// 004a3ad5  33c0                 xor eax, eax
// 004a3ad7  5e                   pop esi
// 004a3ad8  c3                   ret 
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