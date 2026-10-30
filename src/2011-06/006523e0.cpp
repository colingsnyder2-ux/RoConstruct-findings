// roc 2011-06 006523e0  unit: std::D::DU?$char_traits::DV?$basic_streambuf::?$lexical_stream_limited_src  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006523e0
//
// 006523e0  56                   push esi
// 006523e1  8b742408             mov esi, dword ptr [esp + 8]
// 006523e5  85f6                 test esi, esi
// 006523e7  742c                 je 0x652415
// 006523e9  8b0e                 mov ecx, dword ptr [esi]
// 006523eb  85c9                 test ecx, ecx
// 006523ed  7409                 je 0x6523f8
// 006523ef  8b01                 mov eax, dword ptr [ecx]
// 006523f1  8b5004               mov edx, dword ptr [eax + 4]
// 006523f4  ffd2                 call edx
// 006523f6  eb05                 jmp 0x6523fd
// 006523f8  b8447ac000           mov eax, 0xc07a44
// 006523fd  683cdec300           push 0xc3de3c
// 00652402  8bc8                 mov ecx, eax
// 00652404  ff15500aa400         call dword ptr [0xa40a50]
// 0065240a  84c0                 test al, al
// 0065240c  7407                 je 0x652415
// 0065240e  8b06                 mov eax, dword ptr [esi]
// 00652410  83c004               add eax, 4
// 00652413  5e                   pop esi
// 00652414  c3                   ret 
// 00652415  33c0                 xor eax, eax
// 00652417  5e                   pop esi
// 00652418  c3                   ret 
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