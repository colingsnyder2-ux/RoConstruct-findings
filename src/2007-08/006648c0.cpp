// from server: 51% by colin
// roc 2007-08 006648c0  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006648c0
//
// 006648c0  53                   push ebx
// 006648c1  56                   push esi
// 006648c2  57                   push edi
// 006648c3  8b7934               mov edi, dword ptr [ecx + 0x34]
// 006648c6  33c0                 xor eax, eax
// 006648c8  85ff                 test edi, edi
// 006648ca  7e25                 jle 0x6648f1
// 006648cc  8b742410             mov esi, dword ptr [esp + 0x10]
// 006648d0  85c0                 test eax, eax
// 006648d2  7c4b                 jl 0x66491f
// 006648d4  3bc7                 cmp eax, edi
// 006648d6  7d47                 jge 0x66491f
// 006648d8  8b5930               mov ebx, dword ptr [ecx + 0x30]
// 006648db  8bd3                 mov edx, ebx
// 006648dd  8b54c204             mov edx, dword ptr [edx + eax*8 + 4]
// 006648e1  2b14c3               sub edx, dword ptr [ebx + eax*8]
// 006648e4  3bd6                 cmp edx, esi
// 006648e6  7f11                 jg 0x6648f9
// 006648e8  83c001               add eax, 1
// 006648eb  2bf2                 sub esi, edx
// 006648ed  3bc7                 cmp eax, edi
// 006648ef  7cdf                 jl 0x6648d0
// 006648f1  5f                   pop edi
// 006648f2  5e                   pop esi
// 006648f3  33c0                 xor eax, eax
// 006648f5  5b                   pop ebx
// 006648f6  c20400               ret 4
// 006648f9  3bc7                 cmp eax, edi
// 006648fb  8b5120               mov edx, dword ptr [ecx + 0x20]
// 006648fe  8b92a0000000         mov edx, dword ptr [edx + 0xa0]
// 00664904  7d19                 jge 0x66491f
// 00664906  8b3a                 mov edi, dword ptr [edx]
// 00664908  8bcb                 mov ecx, ebx
// 0066490a  8d04c1               lea eax, [ecx + eax*8]
// 0066490d  8b00                 mov eax, dword ptr [eax]
// 0066490f  03c6                 add eax, esi
// 00664911  8bca                 mov ecx, edx
// 00664913  8b575c               mov edx, dword ptr [edi + 0x5c]
// 00664916  50                   push eax
// 00664917  ffd2                 call edx
// 00664919  5f                   pop edi
// 0066491a  5e                   pop esi
// 0066491b  5b                   pop ebx
// 0066491c  c20400               ret 4
// 0066491f  e8fcb5fcff           call 0x62ff20

struct VCXTPReportRows {
    char pad[0x20];
    void* p20;
    char pad2[0x0c];
    int* p30;
    int count34;
    int GetRowHeight(int index);
};

int VCXTPReportRows::GetRowHeight(int index) {
    int i = 0;
    int n = count34;
    if (n <= 0)
        return 0;
    while (i >= 0 && i < n) {
        int* p = p30;
        int diff = p[i * 2 + 1] - p[i * 2];
        if (diff > index) {
            if (i >= n)
                break;
            void* q = *(void**)((char*)p20 + 0xa0);
            int (*fn)(void*, int);
            fn = *(int (**)(void*, int))(*(int*)q + 0x5c);
            return fn(q, p[i * 2] + index);
        }
        i++;
        index -= diff;
        if (i >= n)
            break;
    }
    return 0;
}
