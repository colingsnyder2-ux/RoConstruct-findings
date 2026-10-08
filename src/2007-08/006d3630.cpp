// from server: 100% by colin
// roc 2007-08 006d3630  unit: CXTPReportRow_Batch  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d3630
//
// 006d3630  53                   push ebx
// 006d3631  55                   push ebp
// 006d3632  56                   push esi
// 006d3633  57                   push edi
// 006d3634  8bf9                 mov edi, ecx
// 006d3636  e8057fdaff           call 0x47b540
// 006d363b  8bd8                 mov ebx, eax
// 006d363d  33f6                 xor esi, esi
// 006d363f  85db                 test ebx, ebx
// 006d3641  7e17                 jle 0x6d365a
// 006d3643  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 006d3647  56                   push esi
// 006d3648  8bcf                 mov ecx, edi
// 006d364a  e8b1ffffff           call 0x6d3600
// 006d364f  3bc5                 cmp eax, ebp
// 006d3651  7411                 je 0x6d3664
// 006d3653  83c601               add esi, 1
// 006d3656  3bf3                 cmp esi, ebx
// 006d3658  7ced                 jl 0x6d3647
// 006d365a  5f                   pop edi
// 006d365b  5e                   pop esi
// 006d365c  5d                   pop ebp
// 006d365d  83c8ff               or eax, 0xffffffff
// 006d3660  5b                   pop ebx
// 006d3661  c20400               ret 4
// 006d3664  5f                   pop edi
// 006d3665  8bc6                 mov eax, esi
// 006d3667  5e                   pop esi
// 006d3668  5d                   pop ebp
// 006d3669  5b                   pop ebx
// 006d366a  c20400               ret 4

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
