// roc 2007-03 0064aad0  unit: seg_00640000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0064aad0
//
// 0064aad0  56                   push esi
// 0064aad1  8bf1                 mov esi, ecx
// 0064aad3  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 0064aad6  e8a51b0700           call 0x6bc680
// 0064aadb  8bc8                 mov ecx, eax
// 0064aadd  e8ee050000           call 0x64b0d0
// 0064aae2  33c9                 xor ecx, ecx
// 0064aae4  3bc6                 cmp eax, esi
// 0064aae6  0f94c1               sete cl
// 0064aae9  5e                   pop esi
// 0064aaea  8bc1                 mov eax, ecx
// 0064aaec  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000009@CXTPReportColumn@ns_ROCX000009@@QAEHXZ)

namespace ns_ROCX000009 {
struct CXTPReportColumn;

struct CXTPReportColumn
{
    char pad[0x54];
    void* field_54;
    int fn_ROCX000009();
};

extern "C" void* __fastcall sub_006d3460(void*);
extern "C" int __fastcall sub_0065ed30(void*);

int CXTPReportColumn::fn_ROCX000009()
{
    void* p = sub_006d3460(field_54);
    int r = sub_0065ed30(p);
    return r == (int)this;
}
}
