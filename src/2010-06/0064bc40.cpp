// roc 2010-06 0064bc40  unit: RBX::ButtonBindingWidget  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0064bc40
//
// 0064bc40  56                   push esi
// 0064bc41  8b742408             mov esi, dword ptr [esp + 8]
// 0064bc45  85f6                 test esi, esi
// 0064bc47  742c                 je 0x64bc75
// 0064bc49  8b0e                 mov ecx, dword ptr [esi]
// 0064bc4b  85c9                 test ecx, ecx
// 0064bc4d  7409                 je 0x64bc58
// 0064bc4f  8b01                 mov eax, dword ptr [ecx]
// 0064bc51  8b5004               mov edx, dword ptr [eax + 4]
// 0064bc54  ffd2                 call edx
// 0064bc56  eb05                 jmp 0x64bc5d
// 0064bc58  b80c93b700           mov eax, 0xb7930c
// 0064bc5d  68c408ba00           push 0xba08c4
// 0064bc62  8bc8                 mov ecx, eax
// 0064bc64  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 0064bc6a  84c0                 test al, al
// 0064bc6c  7407                 je 0x64bc75
// 0064bc6e  8b06                 mov eax, dword ptr [esi]
// 0064bc70  83c004               add eax, 4
// 0064bc73  5e                   pop esi
// 0064bc74  c3                   ret 
// 0064bc75  33c0                 xor eax, eax
// 0064bc77  5e                   pop esi
// 0064bc78  c3                   ret 
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