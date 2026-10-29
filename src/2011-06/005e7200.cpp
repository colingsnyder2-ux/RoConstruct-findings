// roc 2011-06 005e7200  unit: std::D::DU?$char_traits::?$basic_altstringbuf  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005e7200
//
// 005e7200  56                   push esi
// 005e7201  8b742408             mov esi, dword ptr [esp + 8]
// 005e7205  85f6                 test esi, esi
// 005e7207  742c                 je 0x5e7235
// 005e7209  8b0e                 mov ecx, dword ptr [esi]
// 005e720b  85c9                 test ecx, ecx
// 005e720d  7409                 je 0x5e7218
// 005e720f  8b01                 mov eax, dword ptr [ecx]
// 005e7211  8b5004               mov edx, dword ptr [eax + 4]
// 005e7214  ffd2                 call edx
// 005e7216  eb05                 jmp 0x5e721d
// 005e7218  b8447ac000           mov eax, 0xc07a44
// 005e721d  689ce1c300           push 0xc3e19c
// 005e7222  8bc8                 mov ecx, eax
// 005e7224  ff15500aa400         call dword ptr [0xa40a50]
// 005e722a  84c0                 test al, al
// 005e722c  7407                 je 0x5e7235
// 005e722e  8b06                 mov eax, dword ptr [esi]
// 005e7230  83c004               add eax, 4
// 005e7233  5e                   pop esi
// 005e7234  c3                   ret 
// 005e7235  33c0                 xor eax, eax
// 005e7237  5e                   pop esi
// 005e7238  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000000_00642c10@@YAPAXPAUAny@@@Z)

// roc-cl: 30729
// roc-flags: /O2 /GS- /EHsc /MD
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