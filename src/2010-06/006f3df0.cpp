// roc 2010-06 006f3df0  unit: RBX::VStudioTool::?$EventDesc  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006f3df0
//
// 006f3df0  56                   push esi
// 006f3df1  8b742408             mov esi, dword ptr [esp + 8]
// 006f3df5  85f6                 test esi, esi
// 006f3df7  742c                 je 0x6f3e25
// 006f3df9  8b0e                 mov ecx, dword ptr [esi]
// 006f3dfb  85c9                 test ecx, ecx
// 006f3dfd  7409                 je 0x6f3e08
// 006f3dff  8b01                 mov eax, dword ptr [ecx]
// 006f3e01  8b5004               mov edx, dword ptr [eax + 4]
// 006f3e04  ffd2                 call edx
// 006f3e06  eb05                 jmp 0x6f3e0d
// 006f3e08  b80c93b700           mov eax, 0xb7930c
// 006f3e0d  68981cba00           push 0xba1c98
// 006f3e12  8bc8                 mov ecx, eax
// 006f3e14  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 006f3e1a  84c0                 test al, al
// 006f3e1c  7407                 je 0x6f3e25
// 006f3e1e  8b06                 mov eax, dword ptr [esi]
// 006f3e20  83c004               add eax, 4
// 006f3e23  5e                   pop esi
// 006f3e24  c3                   ret 
// 006f3e25  33c0                 xor eax, eax
// 006f3e27  5e                   pop esi
// 006f3e28  c3                   ret 
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