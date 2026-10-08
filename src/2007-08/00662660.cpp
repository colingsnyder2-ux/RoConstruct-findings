// from server: 70% by colin
// roc 2007-08 00662660  unit: CXTPReportRecordItemPreview  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00662660
//
// 00662660  8b542404             mov edx, dword ptr [esp + 4]
// 00662664  8b4204               mov eax, dword ptr [edx + 4]
// 00662667  8b80b0000000         mov eax, dword ptr [eax + 0xb0]
// 0066266d  8b8838010000         mov ecx, dword ptr [eax + 0x138]
// 00662673  0530010000           add eax, 0x130
// 00662678  83f9ff               cmp ecx, -1
// 0066267b  7505                 jne 0x662682
// 0066267d  8b4004               mov eax, dword ptr [eax + 4]
// 00662680  eb02                 jmp 0x662684
// 00662682  8bc1                 mov eax, ecx
// 00662684  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00662688  894124               mov dword ptr [ecx + 0x24], eax
// 0066268b  8b5204               mov edx, dword ptr [edx + 4]
// 0066268e  8b82b0000000         mov eax, dword ptr [edx + 0xb0]
// 00662694  83c038               add eax, 0x38
// 00662697  894120               mov dword ptr [ecx + 0x20], eax
// 0066269a  c20800               ret 8

struct CXTPReportRecordItemPreview
{
    void getPreview(int arg1, int arg2);
};

void CXTPReportRecordItemPreview::getPreview(int arg1, int arg2)
{
    int* p = (int*)arg1;
    int* q = (int*)p[1];
    char* r = (char*)q[0xb0];
    int v = *(int*)(r + 0x138);
    if (v == -1)
        v = *(int*)(r + 0x134);
    *(int*)(arg2 + 0x24) = v;
    int* t = (int*)p[1];
    char* u = (char*)t[0xb0];
    *(int*)(arg2 + 0x20) = (int)(u + 0x38);
}
