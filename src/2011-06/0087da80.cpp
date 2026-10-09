// roc 2011-06 0087da80  unit: CXTPWinThemeWrapper  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0087da80
//
// 0087da80  53                   push ebx
// 0087da81  55                   push ebp
// 0087da82  56                   push esi
// 0087da83  57                   push edi
// 0087da84  8bf9                 mov edi, ecx
// 0087da86  e845670200           call 0x8a41d0
// 0087da8b  8bd8                 mov ebx, eax
// 0087da8d  33f6                 xor esi, esi
// 0087da8f  85db                 test ebx, ebx
// 0087da91  7e15                 jle 0x87daa8
// 0087da93  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0087da97  56                   push esi
// 0087da98  8bcf                 mov ecx, edi
// 0087da9a  e8b1ffffff           call 0x87da50
// 0087da9f  3bc5                 cmp eax, ebp
// 0087daa1  740f                 je 0x87dab2
// 0087daa3  46                   inc esi
// 0087daa4  3bf3                 cmp esi, ebx
// 0087daa6  7cef                 jl 0x87da97
// 0087daa8  5f                   pop edi
// 0087daa9  5e                   pop esi
// 0087daaa  5d                   pop ebp
// 0087daab  83c8ff               or eax, 0xffffffff
// 0087daae  5b                   pop ebx
// 0087daaf  c20400               ret 4
// 0087dab2  5f                   pop edi
// 0087dab3  8bc6                 mov eax, esi
// 0087dab5  5e                   pop esi
// 0087dab6  5d                   pop ebp
// 0087dab7  5b                   pop ebx
// 0087dab8  c20400               ret 4
// copied from an identical function in another client (function ?Find@CXTPReportRow_Batch@ns_ROCX00001c@@QAEHH@Z)

namespace ns_ROCX00001c {
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
