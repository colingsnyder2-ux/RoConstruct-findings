// roc 2010-06 004bffe0  unit: RBX::Network::VPlayer::?$EventDesc  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004bffe0
//
// 004bffe0  56                   push esi
// 004bffe1  8b742408             mov esi, dword ptr [esp + 8]
// 004bffe5  85f6                 test esi, esi
// 004bffe7  742c                 je 0x4c0015
// 004bffe9  8b0e                 mov ecx, dword ptr [esi]
// 004bffeb  85c9                 test ecx, ecx
// 004bffed  7409                 je 0x4bfff8
// 004bffef  8b01                 mov eax, dword ptr [ecx]
// 004bfff1  8b5004               mov edx, dword ptr [eax + 4]
// 004bfff4  ffd2                 call edx
// 004bfff6  eb05                 jmp 0x4bfffd
// 004bfff8  b80c93b700           mov eax, 0xb7930c
// 004bfffd  6854cdb800           push 0xb8cd54
// 004c0002  8bc8                 mov ecx, eax
// 004c0004  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 004c000a  84c0                 test al, al
// 004c000c  7407                 je 0x4c0015
// 004c000e  8b06                 mov eax, dword ptr [esi]
// 004c0010  83c004               add eax, 4
// 004c0013  5e                   pop esi
// 004c0014  c3                   ret 
// 004c0015  33c0                 xor eax, eax
// 004c0017  5e                   pop esi
// 004c0018  c3                   ret 
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