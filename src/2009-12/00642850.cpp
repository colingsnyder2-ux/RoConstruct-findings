// roc 2009-12 00642850  unit: RBX::VBrickColor::?$TypedPropertyDescriptor  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00642850
//
// 00642850  56                   push esi
// 00642851  8b742408             mov esi, dword ptr [esp + 8]
// 00642855  85f6                 test esi, esi
// 00642857  742c                 je 0x642885
// 00642859  8b0e                 mov ecx, dword ptr [esi]
// 0064285b  85c9                 test ecx, ecx
// 0064285d  7409                 je 0x642868
// 0064285f  8b01                 mov eax, dword ptr [ecx]
// 00642861  8b5004               mov edx, dword ptr [eax + 4]
// 00642864  ffd2                 call edx
// 00642866  eb05                 jmp 0x64286d
// 00642868  b80c03b000           mov eax, 0xb0030c
// 0064286d  685cb8b200           push 0xb2b85c
// 00642872  8bc8                 mov ecx, eax
// 00642874  ff1568b79800         call dword ptr [0x98b768]
// 0064287a  84c0                 test al, al
// 0064287c  7407                 je 0x642885
// 0064287e  8b06                 mov eax, dword ptr [esi]
// 00642880  83c004               add eax, 4
// 00642883  5e                   pop esi
// 00642884  c3                   ret 
// 00642885  33c0                 xor eax, eax
// 00642887  5e                   pop esi
// 00642888  c3                   ret 
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