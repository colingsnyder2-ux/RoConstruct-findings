// from server: 69% by colin
// roc 2007-08 0065e580  unit: CXTPReportControl  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0065e580
//
// 0065e580  8bc1                 mov eax, ecx
// 0065e582  8b4854               mov ecx, dword ptr [eax + 0x54]
// 0065e585  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 0065e588  50                   push eax
// 0065e589  e8a2500700           call 0x6d3630
// 0065e58e  33d2                 xor edx, edx
// 0065e590  83f8ff               cmp eax, -1
// 0065e593  0f95c2               setne dl
// 0065e596  8bc2                 mov eax, edx
// 0065e598  c3                   ret 

struct CXTPReportControl {
    char pad[0x54];
    void* field_54;
    int sub_65E580_helper();
};

extern "C" int __stdcall sub_6D3630(void*, void*);

int CXTPReportControl::sub_65E580_helper()
{
    void* p = field_54;
    int r = sub_6D3630(this, *(void**)((char*)p + 0x24));
    return r != -1;
}
