// from server: 100% by auto
// roc 2007-08 006d3750  unit: PAVCXTPReportColumn::?$CArray  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d3750
//
// 006d3750  57                   push edi
// 006d3751  8b7c2408             mov edi, dword ptr [esp + 8]
// 006d3755  85ff                 test edi, edi
// 006d3757  7c4c                 jl 0x6d37a5
// 006d3759  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006d375d  85c0                 test eax, eax
// 006d375f  7c44                 jl 0x6d37a5
// 006d3761  3b4130               cmp eax, dword ptr [ecx + 0x30]
// 006d3764  53                   push ebx
// 006d3765  56                   push esi
// 006d3766  7d30                 jge 0x6d3798
// 006d3768  3b4130               cmp eax, dword ptr [ecx + 0x30]
// 006d376b  8d7128               lea esi, [ecx + 0x28]
// 006d376e  7d30                 jge 0x6d37a0
// 006d3770  8b4e04               mov ecx, dword ptr [esi + 4]
// 006d3773  8b1c81               mov ebx, dword ptr [ecx + eax*4]
// 006d3776  85db                 test ebx, ebx
// 006d3778  741e                 je 0x6d3798
// 006d377a  3bf8                 cmp edi, eax
// 006d377c  741a                 je 0x6d3798
// 006d377e  7e03                 jle 0x6d3783
// 006d3780  83ef01               sub edi, 1
// 006d3783  6a01                 push 1
// 006d3785  50                   push eax
// 006d3786  8bce                 mov ecx, esi
// 006d3788  e823efffff           call 0x6d26b0
// 006d378d  6a01                 push 1
// 006d378f  53                   push ebx
// 006d3790  57                   push edi
// 006d3791  8bce                 mov ecx, esi
// 006d3793  e8b880f6ff           call 0x63b850
// 006d3798  5e                   pop esi
// 006d3799  5b                   pop ebx
// 006d379a  8bc7                 mov eax, edi
// 006d379c  5f                   pop edi
// 006d379d  c20800               ret 8
// 006d37a0  e87bc7f5ff           call 0x62ff20
// 006d37a5  83c8ff               or eax, 0xffffffff
// 006d37a8  5f                   pop edi
// 006d37a9  c20800               ret 8
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportColumns.cpp (function ?ChangeColumnOrder@CXTPReportColumns@@QAEHHH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportColumns.cpp
