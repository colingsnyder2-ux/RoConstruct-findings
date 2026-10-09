// roc 2008-06 0074fb60  unit: CXTPReportHyperlinks  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0074fb60
//
// 0074fb60  53                   push ebx
// 0074fb61  56                   push esi
// 0074fb62  57                   push edi
// 0074fb63  8bf9                 mov edi, ecx
// 0074fb65  e8f69ef6ff           call 0x6b9a60
// 0074fb6a  8bd8                 mov ebx, eax
// 0074fb6c  33f6                 xor esi, esi
// 0074fb6e  85db                 test ebx, ebx
// 0074fb70  7e29                 jle 0x74fb9b
// 0074fb72  55                   push ebp
// 0074fb73  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0074fb77  56                   push esi
// 0074fb78  8bcf                 mov ecx, edi
// 0074fb7a  e871ffffff           call 0x74faf0
// 0074fb7f  3bc5                 cmp eax, ebp
// 0074fb81  740c                 je 0x74fb8f
// 0074fb83  46                   inc esi
// 0074fb84  3bf3                 cmp esi, ebx
// 0074fb86  7cef                 jl 0x74fb77
// 0074fb88  5d                   pop ebp
// 0074fb89  5f                   pop edi
// 0074fb8a  5e                   pop esi
// 0074fb8b  5b                   pop ebx
// 0074fb8c  c20400               ret 4
// 0074fb8f  6a01                 push 1
// 0074fb91  56                   push esi
// 0074fb92  8d4f24               lea ecx, [edi + 0x24]
// 0074fb95  e8d6d4fcff           call 0x71d070
// 0074fb9a  5d                   pop ebp
// 0074fb9b  5f                   pop edi
// 0074fb9c  5e                   pop esi
// 0074fb9d  5b                   pop ebx
// 0074fb9e  c20400               ret 4
// copied from an identical function in another client (function ?FindRow@CXTPReportRow_Batch@ns_ROCX00003b@@QAEXH@Z)

namespace ns_ROCX00003b {
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
