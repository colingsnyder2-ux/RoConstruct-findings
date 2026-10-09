// roc 2010-06 00820370  unit: CXTPWinThemeWrapper  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00820370
//
// 00820370  53                   push ebx
// 00820371  55                   push ebp
// 00820372  56                   push esi
// 00820373  57                   push edi
// 00820374  8bf9                 mov edi, ecx
// 00820376  e8d587f9ff           call 0x7b8b50
// 0082037b  8bd8                 mov ebx, eax
// 0082037d  33f6                 xor esi, esi
// 0082037f  85db                 test ebx, ebx
// 00820381  7e15                 jle 0x820398
// 00820383  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00820387  56                   push esi
// 00820388  8bcf                 mov ecx, edi
// 0082038a  e8b1ffffff           call 0x820340
// 0082038f  3bc5                 cmp eax, ebp
// 00820391  740f                 je 0x8203a2
// 00820393  46                   inc esi
// 00820394  3bf3                 cmp esi, ebx
// 00820396  7cef                 jl 0x820387
// 00820398  5f                   pop edi
// 00820399  5e                   pop esi
// 0082039a  5d                   pop ebp
// 0082039b  83c8ff               or eax, 0xffffffff
// 0082039e  5b                   pop ebx
// 0082039f  c20400               ret 4
// 008203a2  5f                   pop edi
// 008203a3  8bc6                 mov eax, esi
// 008203a5  5e                   pop esi
// 008203a6  5d                   pop ebp
// 008203a7  5b                   pop ebx
// 008203a8  c20400               ret 4
// copied from an identical function in another client (function ?Find@CXTPReportRow_Batch@ns_ROCX00001b@@QAEHH@Z)

namespace ns_ROCX00001b {
struct CXTPReportRow_Batch {
    int GetCount();
    int FindRow(int row);
    int Find(int row);
};

int CXTPReportRow_Batch::Find(int row)
{
    int count = GetCount();
    int i = 0;
    if (count > 0) {
        do {
            if (FindRow(i) == row)
                return i;
            ++i;
        } while (i < count);
    }
    return -1;
}
}
