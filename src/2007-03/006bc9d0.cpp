// roc 2007-03 006bc9d0  unit: seg_006b0000  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006bc9d0
//
// 006bc9d0  57                   push edi
// 006bc9d1  8b7c2408             mov edi, dword ptr [esp + 8]
// 006bc9d5  85ff                 test edi, edi
// 006bc9d7  7c4c                 jl 0x6bca25
// 006bc9d9  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006bc9dd  85c0                 test eax, eax
// 006bc9df  7c44                 jl 0x6bca25
// 006bc9e1  3b4130               cmp eax, dword ptr [ecx + 0x30]
// 006bc9e4  53                   push ebx
// 006bc9e5  56                   push esi
// 006bc9e6  7d30                 jge 0x6bca18
// 006bc9e8  3b4130               cmp eax, dword ptr [ecx + 0x30]
// 006bc9eb  8d7128               lea esi, [ecx + 0x28]
// 006bc9ee  7d30                 jge 0x6bca20
// 006bc9f0  8b4e04               mov ecx, dword ptr [esi + 4]
// 006bc9f3  8b1c81               mov ebx, dword ptr [ecx + eax*4]
// 006bc9f6  85db                 test ebx, ebx
// 006bc9f8  741e                 je 0x6bca18
// 006bc9fa  3bf8                 cmp edi, eax
// 006bc9fc  741a                 je 0x6bca18
// 006bc9fe  7e03                 jle 0x6bca03
// 006bca00  83ef01               sub edi, 1
// 006bca03  6a01                 push 1
// 006bca05  50                   push eax
// 006bca06  8bce                 mov ecx, esi
// 006bca08  e883fcffff           call 0x6bc690
// 006bca0d  6a01                 push 1
// 006bca0f  53                   push ebx
// 006bca10  57                   push edi
// 006bca11  8bce                 mov ecx, esi
// 006bca13  e81834f9ff           call 0x64fe30
// 006bca18  5e                   pop esi
// 006bca19  5b                   pop ebx
// 006bca1a  8bc7                 mov eax, edi
// 006bca1c  5f                   pop edi
// 006bca1d  c20800               ret 8
// 006bca20  e88919f6ff           call 0x61e3ae
// 006bca25  83c8ff               or eax, 0xffffffff
// 006bca28  5f                   pop edi
// 006bca29  c20800               ret 8
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportColumns.cpp (function ?ChangeColumnOrder@CXTPReportColumns@@QAEHHH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportColumns.cpp
