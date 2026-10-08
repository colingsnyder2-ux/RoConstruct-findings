// from server: 73% by colin
// roc 2007-08 00662be0  unit: CXTPReportRecordItemPreview  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00662be0
//
// 00662be0  8b442404             mov eax, dword ptr [esp + 4]
// 00662be4  8b4804               mov ecx, dword ptr [eax + 4]
// 00662be7  8b81b0000000         mov eax, dword ptr [ecx + 0xb0]
// 00662bed  8b882c020000         mov ecx, dword ptr [eax + 0x22c]
// 00662bf3  8b9028020000         mov edx, dword ptr [eax + 0x228]
// 00662bf9  0520020000           add eax, 0x220
// 00662bfe  56                   push esi
// 00662bff  8b30                 mov esi, dword ptr [eax]
// 00662c01  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00662c05  834004ff             add dword ptr [eax + 4], -1
// 00662c09  295008               sub dword ptr [eax + 8], edx
// 00662c0c  83ee02               sub esi, 2
// 00662c0f  0130                 add dword ptr [eax], esi
// 00662c11  f7d9                 neg ecx
// 00662c13  29480c               sub dword ptr [eax + 0xc], ecx
// 00662c16  5e                   pop esi
// 00662c17  c20800               ret 8

struct CXTPReportRecordItemPreview {
    char pad[0xb0];
    void* field_b0;
    void GetPreviewRect(int* out, int* arg2);
};

void CXTPReportRecordItemPreview::GetPreviewRect(int* out, int* arg2)
{
    int* p = (int*)field_b0;
    int a = *(int*)((char*)p + 0x22c);
    int b = *(int*)((char*)p + 0x228);
    int c = *(int*)((char*)p + 0x220);
    out[1] -= 1;
    out[2] -= b;
    out[0] += c - 2;
    out[3] -= -a;
}
