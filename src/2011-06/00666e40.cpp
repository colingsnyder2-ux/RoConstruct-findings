// roc 2011-06 00666e40  unit: RBX::ButtonBindingWidget  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00666e40
//
// 00666e40  56                   push esi
// 00666e41  8b742408             mov esi, dword ptr [esp + 8]
// 00666e45  85f6                 test esi, esi
// 00666e47  742c                 je 0x666e75
// 00666e49  8b0e                 mov ecx, dword ptr [esi]
// 00666e4b  85c9                 test ecx, ecx
// 00666e4d  7409                 je 0x666e58
// 00666e4f  8b01                 mov eax, dword ptr [ecx]
// 00666e51  8b5004               mov edx, dword ptr [eax + 4]
// 00666e54  ffd2                 call edx
// 00666e56  eb05                 jmp 0x666e5d
// 00666e58  b8447ac000           mov eax, 0xc07a44
// 00666e5d  6804d1c300           push 0xc3d104
// 00666e62  8bc8                 mov ecx, eax
// 00666e64  ff15500aa400         call dword ptr [0xa40a50]
// 00666e6a  84c0                 test al, al
// 00666e6c  7407                 je 0x666e75
// 00666e6e  8b06                 mov eax, dword ptr [esi]
// 00666e70  83c004               add eax, 4
// 00666e73  5e                   pop esi
// 00666e74  c3                   ret 
// 00666e75  33c0                 xor eax, eax
// 00666e77  5e                   pop esi
// 00666e78  c3                   ret 
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