// roc 2007-03 006bc8b0  unit: seg_006b0000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006bc8b0
//
// 006bc8b0  53                   push ebx
// 006bc8b1  55                   push ebp
// 006bc8b2  56                   push esi
// 006bc8b3  57                   push edi
// 006bc8b4  8bf9                 mov edi, ecx
// 006bc8b6  e8a5b7fdff           call 0x698060
// 006bc8bb  8bd8                 mov ebx, eax
// 006bc8bd  33f6                 xor esi, esi
// 006bc8bf  85db                 test ebx, ebx
// 006bc8c1  7e17                 jle 0x6bc8da
// 006bc8c3  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 006bc8c7  56                   push esi
// 006bc8c8  8bcf                 mov ecx, edi
// 006bc8ca  e8b1ffffff           call 0x6bc880
// 006bc8cf  3bc5                 cmp eax, ebp
// 006bc8d1  7411                 je 0x6bc8e4
// 006bc8d3  83c601               add esi, 1
// 006bc8d6  3bf3                 cmp esi, ebx
// 006bc8d8  7ced                 jl 0x6bc8c7
// 006bc8da  5f                   pop edi
// 006bc8db  5e                   pop esi
// 006bc8dc  5d                   pop ebp
// 006bc8dd  83c8ff               or eax, 0xffffffff
// 006bc8e0  5b                   pop ebx
// 006bc8e1  c20400               ret 4
// 006bc8e4  5f                   pop edi
// 006bc8e5  8bc6                 mov eax, esi
// 006bc8e7  5e                   pop esi
// 006bc8e8  5d                   pop ebp
// 006bc8e9  5b                   pop ebx
// 006bc8ea  c20400               ret 4
// copied from an identical function in another client (function ?Find@CXTPReportRow_Batch@ns_ROCX000025@@QAEHH@Z)

namespace ns_ROCX000025 {
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
