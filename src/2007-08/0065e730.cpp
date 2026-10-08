// from server: 100% by colin
// roc 2007-08 0065e730  unit: CXTPReportColumn  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0065e730
//
// 0065e730  56                   push esi
// 0065e731  8bf1                 mov esi, ecx
// 0065e733  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 0065e736  e8254d0700           call 0x6d3460
// 0065e73b  8bc8                 mov ecx, eax
// 0065e73d  e8ee050000           call 0x65ed30
// 0065e742  33c9                 xor ecx, ecx
// 0065e744  3bc6                 cmp eax, esi
// 0065e746  0f94c1               sete cl
// 0065e749  5e                   pop esi
// 0065e74a  8bc1                 mov eax, ecx
// 0065e74c  c3                   ret 

struct CXTPReportColumn;

struct CXTPReportColumn
{
    char pad[0x54];
    void* field_54;
    int func_0065e730();
};

extern "C" void* __fastcall sub_006d3460(void*);
extern "C" int __fastcall sub_0065ed30(void*);

int CXTPReportColumn::func_0065e730()
{
    void* p = sub_006d3460(field_54);
    int r = sub_0065ed30(p);
    return r == (int)this;
}
