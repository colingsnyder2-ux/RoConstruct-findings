// from server: 68% by colin
// roc 2007-08 006d4360  unit: CXTPReportRow_Batch  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d4360
//
// 006d4360  56                   push esi
// 006d4361  8bf1                 mov esi, ecx
// 006d4363  8b4e50               mov ecx, dword ptr [esi + 0x50]
// 006d4366  85c9                 test ecx, ecx
// 006d4368  7504                 jne 0x6d436e
// 006d436a  33c0                 xor eax, eax
// 006d436c  5e                   pop esi
// 006d436d  c3                   ret 
// 006d436e  837e6cff             cmp dword ptr [esi + 0x6c], -1
// 006d4372  74f6                 je 0x6d436a
// 006d4374  57                   push edi
// 006d4375  8b7e6c               mov edi, dword ptr [esi + 0x6c]
// 006d4378  e8d3f8f8ff           call 0x663c50
// 006d437d  83e801               sub eax, 1
// 006d4380  3bf8                 cmp edi, eax
// 006d4382  7d11                 jge 0x6d4395
// 006d4384  8b4e50               mov ecx, dword ptr [esi + 0x50]
// 006d4387  8b01                 mov eax, dword ptr [ecx]
// 006d4389  8b505c               mov edx, dword ptr [eax + 0x5c]
// 006d438c  83c701               add edi, 1
// 006d438f  57                   push edi
// 006d4390  ffd2                 call edx
// 006d4392  5f                   pop edi
// 006d4393  5e                   pop esi
// 006d4394  c3                   ret 
// 006d4395  5f                   pop edi
// 006d4396  33c0                 xor eax, eax
// 006d4398  5e                   pop esi
// 006d4399  c3                   ret 

struct CXTPReportRow_Batch {
    int field_0x50;
    int field_0x6c;
    int getNextRow();
};

extern "C" int __stdcall sub_663c50(int);

int CXTPReportRow_Batch::getNextRow()
{
    int c = field_0x50;
    if (c != 0)
        return 0;
    if (field_0x6c == -1)
        return 0;
    int idx = field_0x6c;
    int n = sub_663c50(c) - 1;
    if (idx < n)
    {
        int p = field_0x50;
        int* vt = *(int**)p;
        int (*fn)(int*, int) = (int (*)(int*, int))vt[0x5c / 4];
        return fn((int*)p, idx + 1);
    }
    return 0;
}
