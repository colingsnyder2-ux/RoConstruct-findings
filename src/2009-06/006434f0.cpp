// roc 2009-06 006434f0  unit: RBX::WoodTool  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006434f0
//
// 006434f0  56                   push esi
// 006434f1  8b742408             mov esi, dword ptr [esp + 8]
// 006434f5  85f6                 test esi, esi
// 006434f7  742c                 je 0x643525
// 006434f9  8b0e                 mov ecx, dword ptr [esi]
// 006434fb  85c9                 test ecx, ecx
// 006434fd  7409                 je 0x643508
// 006434ff  8b01                 mov eax, dword ptr [ecx]
// 00643501  8b5004               mov edx, dword ptr [eax + 4]
// 00643504  ffd2                 call edx
// 00643506  eb05                 jmp 0x64350d
// 00643508  b8d4c29d00           mov eax, 0x9dc2d4
// 0064350d  6880daa000           push 0xa0da80
// 00643512  8bc8                 mov ecx, eax
// 00643514  ff15a4e98900         call dword ptr [0x89e9a4]
// 0064351a  84c0                 test al, al
// 0064351c  7407                 je 0x643525
// 0064351e  8b06                 mov eax, dword ptr [esi]
// 00643520  83c004               add eax, 4
// 00643523  5e                   pop esi
// 00643524  c3                   ret 
// 00643525  33c0                 xor eax, eax
// 00643527  5e                   pop esi
// 00643528  c3                   ret 
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