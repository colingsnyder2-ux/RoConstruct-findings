// roc 2010-06 00621740  unit: RBX::DropperTool  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00621740
//
// 00621740  56                   push esi
// 00621741  8b742408             mov esi, dword ptr [esp + 8]
// 00621745  85f6                 test esi, esi
// 00621747  742c                 je 0x621775
// 00621749  8b0e                 mov ecx, dword ptr [esi]
// 0062174b  85c9                 test ecx, ecx
// 0062174d  7409                 je 0x621758
// 0062174f  8b01                 mov eax, dword ptr [ecx]
// 00621751  8b5004               mov edx, dword ptr [eax + 4]
// 00621754  ffd2                 call edx
// 00621756  eb05                 jmp 0x62175d
// 00621758  b80c93b700           mov eax, 0xb7930c
// 0062175d  68100abb00           push 0xbb0a10
// 00621762  8bc8                 mov ecx, eax
// 00621764  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 0062176a  84c0                 test al, al
// 0062176c  7407                 je 0x621775
// 0062176e  8b06                 mov eax, dword ptr [esi]
// 00621770  83c004               add eax, 4
// 00621773  5e                   pop esi
// 00621774  c3                   ret 
// 00621775  33c0                 xor eax, eax
// 00621777  5e                   pop esi
// 00621778  c3                   ret 
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