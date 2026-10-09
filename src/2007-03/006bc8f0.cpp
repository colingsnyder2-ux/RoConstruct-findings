// roc 2007-03 006bc8f0  unit: seg_006b0000  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006bc8f0
//
// 006bc8f0  53                   push ebx
// 006bc8f1  56                   push esi
// 006bc8f2  57                   push edi
// 006bc8f3  8bf9                 mov edi, ecx
// 006bc8f5  e866b7fdff           call 0x698060
// 006bc8fa  8bd8                 mov ebx, eax
// 006bc8fc  33f6                 xor esi, esi
// 006bc8fe  85db                 test ebx, ebx
// 006bc900  7e2b                 jle 0x6bc92d
// 006bc902  55                   push ebp
// 006bc903  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 006bc907  56                   push esi
// 006bc908  8bcf                 mov ecx, edi
// 006bc90a  e871ffffff           call 0x6bc880
// 006bc90f  3bc5                 cmp eax, ebp
// 006bc911  740e                 je 0x6bc921
// 006bc913  83c601               add esi, 1
// 006bc916  3bf3                 cmp esi, ebx
// 006bc918  7ced                 jl 0x6bc907
// 006bc91a  5d                   pop ebp
// 006bc91b  5f                   pop edi
// 006bc91c  5e                   pop esi
// 006bc91d  5b                   pop ebx
// 006bc91e  c20400               ret 4
// 006bc921  6a01                 push 1
// 006bc923  56                   push esi
// 006bc924  8d4f24               lea ecx, [edi + 0x24]
// 006bc927  e864fdffff           call 0x6bc690
// 006bc92c  5d                   pop ebp
// 006bc92d  5f                   pop edi
// 006bc92e  5e                   pop esi
// 006bc92f  5b                   pop ebx
// 006bc930  c20400               ret 4
// copied from an identical function in another client (function ?FindRow@CXTPReportRow_Batch@ns_ROCX00000d@@QAEXH@Z)

namespace ns_ROCX00000d {
struct CXTPReportRow_Batch {
    int sub_6D3600(int index);
    void sub_6D26B0(int index, int flag);
    int sub_47B540();
    void FindRow(int row);
};

void CXTPReportRow_Batch::FindRow(int row) {
    int count = sub_47B540();
    int i = 0;
    if (count > 0) {
        do {
            if (sub_6D3600(i) == row) {
                ((CXTPReportRow_Batch *)((char *)this + 0x24))->sub_6D26B0(i, 1);
                break;
            }
            ++i;
        } while (i < count);
    }
}
}
