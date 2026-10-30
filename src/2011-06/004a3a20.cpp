// roc 2011-06 004a3a20  unit: RBX::Network::Player  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004a3a20
//
// 004a3a20  56                   push esi
// 004a3a21  8b742408             mov esi, dword ptr [esp + 8]
// 004a3a25  85f6                 test esi, esi
// 004a3a27  742c                 je 0x4a3a55
// 004a3a29  8b0e                 mov ecx, dword ptr [esi]
// 004a3a2b  85c9                 test ecx, ecx
// 004a3a2d  7409                 je 0x4a3a38
// 004a3a2f  8b01                 mov eax, dword ptr [ecx]
// 004a3a31  8b5004               mov edx, dword ptr [eax + 4]
// 004a3a34  ffd2                 call edx
// 004a3a36  eb05                 jmp 0x4a3a3d
// 004a3a38  b8447ac000           mov eax, 0xc07a44
// 004a3a3d  6808a2c100           push 0xc1a208
// 004a3a42  8bc8                 mov ecx, eax
// 004a3a44  ff15500aa400         call dword ptr [0xa40a50]
// 004a3a4a  84c0                 test al, al
// 004a3a4c  7407                 je 0x4a3a55
// 004a3a4e  8b06                 mov eax, dword ptr [esi]
// 004a3a50  83c004               add eax, 4
// 004a3a53  5e                   pop esi
// 004a3a54  c3                   ret 
// 004a3a55  33c0                 xor eax, eax
// 004a3a57  5e                   pop esi
// 004a3a58  c3                   ret 
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