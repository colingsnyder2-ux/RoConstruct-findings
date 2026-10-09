// roc 2009-06 00792600  unit: CXTCaption  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00792600
//
// 00792600  53                   push ebx
// 00792601  56                   push esi
// 00792602  57                   push edi
// 00792603  8bf9                 mov edi, ecx
// 00792605  e8a6a8fbff           call 0x74ceb0
// 0079260a  8bd8                 mov ebx, eax
// 0079260c  33f6                 xor esi, esi
// 0079260e  85db                 test ebx, ebx
// 00792610  7e29                 jle 0x79263b
// 00792612  55                   push ebp
// 00792613  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00792617  56                   push esi
// 00792618  8bcf                 mov ecx, edi
// 0079261a  e871ffffff           call 0x792590
// 0079261f  3bc5                 cmp eax, ebp
// 00792621  740c                 je 0x79262f
// 00792623  46                   inc esi
// 00792624  3bf3                 cmp esi, ebx
// 00792626  7cef                 jl 0x792617
// 00792628  5d                   pop ebp
// 00792629  5f                   pop edi
// 0079262a  5e                   pop esi
// 0079262b  5b                   pop ebx
// 0079262c  c20400               ret 4
// 0079262f  6a01                 push 1
// 00792631  56                   push esi
// 00792632  8d4f24               lea ecx, [edi + 0x24]
// 00792635  e82600fcff           call 0x752660
// 0079263a  5d                   pop ebp
// 0079263b  5f                   pop edi
// 0079263c  5e                   pop esi
// 0079263d  5b                   pop ebx
// 0079263e  c20400               ret 4
// copied from an identical function in another client (function ?FindRow@CXTPReportRow_Batch@ns_ROCX00004b@@QAEXH@Z)

namespace ns_ROCX00004b {
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
