// roc 2008-06 0074fb20  unit: CXTPReportHyperlinks  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0074fb20
//
// 0074fb20  53                   push ebx
// 0074fb21  55                   push ebp
// 0074fb22  56                   push esi
// 0074fb23  57                   push edi
// 0074fb24  8bf9                 mov edi, ecx
// 0074fb26  e8359ff6ff           call 0x6b9a60
// 0074fb2b  8bd8                 mov ebx, eax
// 0074fb2d  33f6                 xor esi, esi
// 0074fb2f  85db                 test ebx, ebx
// 0074fb31  7e15                 jle 0x74fb48
// 0074fb33  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0074fb37  56                   push esi
// 0074fb38  8bcf                 mov ecx, edi
// 0074fb3a  e8b1ffffff           call 0x74faf0
// 0074fb3f  3bc5                 cmp eax, ebp
// 0074fb41  740f                 je 0x74fb52
// 0074fb43  46                   inc esi
// 0074fb44  3bf3                 cmp esi, ebx
// 0074fb46  7cef                 jl 0x74fb37
// 0074fb48  5f                   pop edi
// 0074fb49  5e                   pop esi
// 0074fb4a  5d                   pop ebp
// 0074fb4b  83c8ff               or eax, 0xffffffff
// 0074fb4e  5b                   pop ebx
// 0074fb4f  c20400               ret 4
// 0074fb52  5f                   pop edi
// 0074fb53  8bc6                 mov eax, esi
// 0074fb55  5e                   pop esi
// 0074fb56  5d                   pop ebp
// 0074fb57  5b                   pop ebx
// 0074fb58  c20400               ret 4
// copied from an identical function in another client (function ?Find@CXTPReportRow_Batch@ns_ROCX000029@@QAEHH@Z)

namespace ns_ROCX000029 {
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
