// roc 2010-06 00655540  unit: DxUserInput  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00655540
//
// 00655540  56                   push esi
// 00655541  8b742408             mov esi, dword ptr [esp + 8]
// 00655545  85f6                 test esi, esi
// 00655547  742c                 je 0x655575
// 00655549  8b0e                 mov ecx, dword ptr [esi]
// 0065554b  85c9                 test ecx, ecx
// 0065554d  7409                 je 0x655558
// 0065554f  8b01                 mov eax, dword ptr [ecx]
// 00655551  8b5004               mov edx, dword ptr [eax + 4]
// 00655554  ffd2                 call edx
// 00655556  eb05                 jmp 0x65555d
// 00655558  b80c93b700           mov eax, 0xb7930c
// 0065555d  6878dfba00           push 0xbadf78
// 00655562  8bc8                 mov ecx, eax
// 00655564  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 0065556a  84c0                 test al, al
// 0065556c  7407                 je 0x655575
// 0065556e  8b06                 mov eax, dword ptr [esi]
// 00655570  83c004               add eax, 4
// 00655573  5e                   pop esi
// 00655574  c3                   ret 
// 00655575  33c0                 xor eax, eax
// 00655577  5e                   pop esi
// 00655578  c3                   ret 
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