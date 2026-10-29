// roc 2010-06 0066cd00  unit: RBX::Humanoid  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0066cd00
//
// 0066cd00  56                   push esi
// 0066cd01  8b742408             mov esi, dword ptr [esp + 8]
// 0066cd05  85f6                 test esi, esi
// 0066cd07  742c                 je 0x66cd35
// 0066cd09  8b0e                 mov ecx, dword ptr [esi]
// 0066cd0b  85c9                 test ecx, ecx
// 0066cd0d  7409                 je 0x66cd18
// 0066cd0f  8b01                 mov eax, dword ptr [ecx]
// 0066cd11  8b5004               mov edx, dword ptr [eax + 4]
// 0066cd14  ffd2                 call edx
// 0066cd16  eb05                 jmp 0x66cd1d
// 0066cd18  b80c93b700           mov eax, 0xb7930c
// 0066cd1d  68e812ba00           push 0xba12e8
// 0066cd22  8bc8                 mov ecx, eax
// 0066cd24  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 0066cd2a  84c0                 test al, al
// 0066cd2c  7407                 je 0x66cd35
// 0066cd2e  8b06                 mov eax, dword ptr [esi]
// 0066cd30  83c004               add eax, 4
// 0066cd33  5e                   pop esi
// 0066cd34  c3                   ret 
// 0066cd35  33c0                 xor eax, eax
// 0066cd37  5e                   pop esi
// 0066cd38  c3                   ret 
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