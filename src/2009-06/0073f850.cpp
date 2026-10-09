// roc 2009-06 0073f850  unit: XTP_REPORTRECORDITEM_DRAWARGS  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0073f850
//
// 0073f850  53                   push ebx
// 0073f851  56                   push esi
// 0073f852  57                   push edi
// 0073f853  8bf9                 mov edi, ecx
// 0073f855  8b4f28               mov ecx, dword ptr [edi + 0x28]
// 0073f858  33f6                 xor esi, esi
// 0073f85a  e8c1890800           call 0x7c8220
// 0073f85f  85c0                 test eax, eax
// 0073f861  7e1c                 jle 0x73f87f
// 0073f863  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0073f867  56                   push esi
// 0073f868  e8f3880800           call 0x7c8160
// 0073f86d  395824               cmp dword ptr [eax + 0x24], ebx
// 0073f870  740f                 je 0x73f881
// 0073f872  8b4f28               mov ecx, dword ptr [edi + 0x28]
// 0073f875  46                   inc esi
// 0073f876  e8a5890800           call 0x7c8220
// 0073f87b  3bf0                 cmp esi, eax
// 0073f87d  7ce8                 jl 0x73f867
// 0073f87f  33c0                 xor eax, eax
// 0073f881  5f                   pop edi
// 0073f882  5e                   pop esi
// 0073f883  5b                   pop ebx
// 0073f884  c20400               ret 4
// copied from an identical function in another client (function ?find@XTP_REPORTRECORDITEM_METRICS@ns_ROCX000002@ns_ROCX000015@@QAEPAXH@Z)

namespace ns_ROCX000002 {
namespace ns_ROCX000002 {
struct Inner
{
    char pad_0[0x18];
    int value;
};

struct CXTPCommandBar
{
    char pad_0[0x178];
    Inner* pInner;
    void SetInnerValue(int value);
};

void CXTPCommandBar::SetInnerValue(int value)
{
    pInner->value = value;
}
}
}
