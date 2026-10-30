// roc 2009-12 004f5550  unit: RBX::GfxAttachement  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004f5550
//
// 004f5550  56                   push esi
// 004f5551  8b742408             mov esi, dword ptr [esp + 8]
// 004f5555  85f6                 test esi, esi
// 004f5557  742c                 je 0x4f5585
// 004f5559  8b0e                 mov ecx, dword ptr [esi]
// 004f555b  85c9                 test ecx, ecx
// 004f555d  7409                 je 0x4f5568
// 004f555f  8b01                 mov eax, dword ptr [ecx]
// 004f5561  8b5004               mov edx, dword ptr [eax + 4]
// 004f5564  ffd2                 call edx
// 004f5566  eb05                 jmp 0x4f556d
// 004f5568  b80c03b000           mov eax, 0xb0030c
// 004f556d  686029b100           push 0xb12960
// 004f5572  8bc8                 mov ecx, eax
// 004f5574  ff1568b79800         call dword ptr [0x98b768]
// 004f557a  84c0                 test al, al
// 004f557c  7407                 je 0x4f5585
// 004f557e  8b06                 mov eax, dword ptr [esi]
// 004f5580  83c004               add eax, 4
// 004f5583  5e                   pop esi
// 004f5584  c3                   ret 
// 004f5585  33c0                 xor eax, eax
// 004f5587  5e                   pop esi
// 004f5588  c3                   ret 
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