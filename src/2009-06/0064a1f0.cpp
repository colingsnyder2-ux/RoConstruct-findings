// roc 2009-06 0064a1f0  unit: RBX::Soundscape::SoundChannel  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0064a1f0
//
// 0064a1f0  56                   push esi
// 0064a1f1  8b742408             mov esi, dword ptr [esp + 8]
// 0064a1f5  85f6                 test esi, esi
// 0064a1f7  742c                 je 0x64a225
// 0064a1f9  8b0e                 mov ecx, dword ptr [esi]
// 0064a1fb  85c9                 test ecx, ecx
// 0064a1fd  7409                 je 0x64a208
// 0064a1ff  8b01                 mov eax, dword ptr [ecx]
// 0064a201  8b5004               mov edx, dword ptr [eax + 4]
// 0064a204  ffd2                 call edx
// 0064a206  eb05                 jmp 0x64a20d
// 0064a208  b8d4c29d00           mov eax, 0x9dc2d4
// 0064a20d  6898a6a000           push 0xa0a698
// 0064a212  8bc8                 mov ecx, eax
// 0064a214  ff15a4e98900         call dword ptr [0x89e9a4]
// 0064a21a  84c0                 test al, al
// 0064a21c  7407                 je 0x64a225
// 0064a21e  8b06                 mov eax, dword ptr [esi]
// 0064a220  83c004               add eax, 4
// 0064a223  5e                   pop esi
// 0064a224  c3                   ret 
// 0064a225  33c0                 xor eax, eax
// 0064a227  5e                   pop esi
// 0064a228  c3                   ret 
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