// roc 2009-12 006429d0  unit: RBX::VBrickColor::?$TypedPropertyDescriptor  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006429d0
//
// 006429d0  56                   push esi
// 006429d1  8b742408             mov esi, dword ptr [esp + 8]
// 006429d5  85f6                 test esi, esi
// 006429d7  742c                 je 0x642a05
// 006429d9  8b0e                 mov ecx, dword ptr [esi]
// 006429db  85c9                 test ecx, ecx
// 006429dd  7409                 je 0x6429e8
// 006429df  8b01                 mov eax, dword ptr [ecx]
// 006429e1  8b5004               mov edx, dword ptr [eax + 4]
// 006429e4  ffd2                 call edx
// 006429e6  eb05                 jmp 0x6429ed
// 006429e8  b80c03b000           mov eax, 0xb0030c
// 006429ed  6840b8b200           push 0xb2b840
// 006429f2  8bc8                 mov ecx, eax
// 006429f4  ff1568b79800         call dword ptr [0x98b768]
// 006429fa  84c0                 test al, al
// 006429fc  7407                 je 0x642a05
// 006429fe  8b06                 mov eax, dword ptr [esi]
// 00642a00  83c004               add eax, 4
// 00642a03  5e                   pop esi
// 00642a04  c3                   ret 
// 00642a05  33c0                 xor eax, eax
// 00642a07  5e                   pop esi
// 00642a08  c3                   ret 
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