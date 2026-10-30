// roc 2010-06 00628e70  unit: RBX::Soundscape::SoundChannel  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00628e70
//
// 00628e70  56                   push esi
// 00628e71  8b742408             mov esi, dword ptr [esp + 8]
// 00628e75  85f6                 test esi, esi
// 00628e77  742c                 je 0x628ea5
// 00628e79  8b0e                 mov ecx, dword ptr [esi]
// 00628e7b  85c9                 test ecx, ecx
// 00628e7d  7409                 je 0x628e88
// 00628e7f  8b01                 mov eax, dword ptr [ecx]
// 00628e81  8b5004               mov edx, dword ptr [eax + 4]
// 00628e84  ffd2                 call edx
// 00628e86  eb05                 jmp 0x628e8d
// 00628e88  b80c93b700           mov eax, 0xb7930c
// 00628e8d  68b4c5ba00           push 0xbac5b4
// 00628e92  8bc8                 mov ecx, eax
// 00628e94  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 00628e9a  84c0                 test al, al
// 00628e9c  7407                 je 0x628ea5
// 00628e9e  8b06                 mov eax, dword ptr [esi]
// 00628ea0  83c004               add eax, 4
// 00628ea3  5e                   pop esi
// 00628ea4  c3                   ret 
// 00628ea5  33c0                 xor eax, eax
// 00628ea7  5e                   pop esi
// 00628ea8  c3                   ret 
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