// roc 2010-06 00709e60  unit: RBX::Joint  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00709e60
//
// 00709e60  56                   push esi
// 00709e61  8b742408             mov esi, dword ptr [esp + 8]
// 00709e65  85f6                 test esi, esi
// 00709e67  742c                 je 0x709e95
// 00709e69  8b0e                 mov ecx, dword ptr [esi]
// 00709e6b  85c9                 test ecx, ecx
// 00709e6d  7409                 je 0x709e78
// 00709e6f  8b01                 mov eax, dword ptr [ecx]
// 00709e71  8b5004               mov edx, dword ptr [eax + 4]
// 00709e74  ffd2                 call edx
// 00709e76  eb05                 jmp 0x709e7d
// 00709e78  b80c93b700           mov eax, 0xb7930c
// 00709e7d  681419ba00           push 0xba1914
// 00709e82  8bc8                 mov ecx, eax
// 00709e84  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 00709e8a  84c0                 test al, al
// 00709e8c  7407                 je 0x709e95
// 00709e8e  8b06                 mov eax, dword ptr [esi]
// 00709e90  83c004               add eax, 4
// 00709e93  5e                   pop esi
// 00709e94  c3                   ret 
// 00709e95  33c0                 xor eax, eax
// 00709e97  5e                   pop esi
// 00709e98  c3                   ret 
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