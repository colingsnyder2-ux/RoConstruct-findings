// from server: 63% by colin
// roc 2007-08 00655af0  unit: CXTPReportControl  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00655af0
//
// 00655af0  8b81b0000000         mov eax, dword ptr [ecx + 0xb0]
// 00655af6  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00655afa  8b8030020000         mov eax, dword ptr [eax + 0x230]
// 00655b00  83c1ff               add ecx, -1
// 00655b03  0fafc1               imul eax, ecx
// 00655b06  33d2                 xor edx, edx
// 00655b08  85c0                 test eax, eax
// 00655b0a  0f9cc2               setl dl
// 00655b0d  83ea01               sub edx, 1
// 00655b10  23c2                 and eax, edx
// 00655b12  c20400               ret 4

struct CXTPReportControl {
    char pad[0xb0];
    void* field_b0;
    int GetRowHeight(int index);
};

int CXTPReportControl::GetRowHeight(int index) {
    int v = *(int*)((char*)field_b0 + 0x230);
    int n = index - 1;
    int r = v * n;
    int mask = (r >= 0) ? -1 : 0;
    return r & mask;
}
