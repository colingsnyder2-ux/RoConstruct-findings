// roc 2009-06 007925c0  unit: CXTCaption  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007925c0
//
// 007925c0  53                   push ebx
// 007925c1  55                   push ebp
// 007925c2  56                   push esi
// 007925c3  57                   push edi
// 007925c4  8bf9                 mov edi, ecx
// 007925c6  e8e5a8fbff           call 0x74ceb0
// 007925cb  8bd8                 mov ebx, eax
// 007925cd  33f6                 xor esi, esi
// 007925cf  85db                 test ebx, ebx
// 007925d1  7e15                 jle 0x7925e8
// 007925d3  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 007925d7  56                   push esi
// 007925d8  8bcf                 mov ecx, edi
// 007925da  e8b1ffffff           call 0x792590
// 007925df  3bc5                 cmp eax, ebp
// 007925e1  740f                 je 0x7925f2
// 007925e3  46                   inc esi
// 007925e4  3bf3                 cmp esi, ebx
// 007925e6  7cef                 jl 0x7925d7
// 007925e8  5f                   pop edi
// 007925e9  5e                   pop esi
// 007925ea  5d                   pop ebp
// 007925eb  83c8ff               or eax, 0xffffffff
// 007925ee  5b                   pop ebx
// 007925ef  c20400               ret 4
// 007925f2  5f                   pop edi
// 007925f3  8bc6                 mov eax, esi
// 007925f5  5e                   pop esi
// 007925f6  5d                   pop ebp
// 007925f7  5b                   pop ebx
// 007925f8  c20400               ret 4
// copied from an identical function in another client (function ?Find@CXTPReportRow_Batch@ns_ROCX000011@@QAEHH@Z)

namespace ns_ROCX000011 {
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
