// roc 2007-03 006bc7d0  unit: seg_006b0000  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006bc7d0
//
// 006bc7d0  53                   push ebx
// 006bc7d1  55                   push ebp
// 006bc7d2  56                   push esi
// 006bc7d3  57                   push edi
// 006bc7d4  8bf9                 mov edi, ecx
// 006bc7d6  8b4730               mov eax, dword ptr [edi + 0x30]
// 006bc7d9  33f6                 xor esi, esi
// 006bc7db  85c0                 test eax, eax
// 006bc7dd  7e37                 jle 0x6bc816
// 006bc7df  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 006bc7e3  85f6                 test esi, esi
// 006bc7e5  7c11                 jl 0x6bc7f8
// 006bc7e7  3bf0                 cmp esi, eax
// 006bc7e9  7d0d                 jge 0x6bc7f8
// 006bc7eb  3b7730               cmp esi, dword ptr [edi + 0x30]
// 006bc7ee  7d2f                 jge 0x6bc81f
// 006bc7f0  8b472c               mov eax, dword ptr [edi + 0x2c]
// 006bc7f3  8b1cb0               mov ebx, dword ptr [eax + esi*4]
// 006bc7f6  eb02                 jmp 0x6bc7fa
// 006bc7f8  33db                 xor ebx, ebx
// 006bc7fa  8bcb                 mov ecx, ebx
// 006bc7fc  e87fe1f8ff           call 0x64a980
// 006bc801  85c0                 test eax, eax
// 006bc803  7407                 je 0x6bc80c
// 006bc805  85ed                 test ebp, ebp
// 006bc807  741b                 je 0x6bc824
// 006bc809  83ed01               sub ebp, 1
// 006bc80c  8b4730               mov eax, dword ptr [edi + 0x30]
// 006bc80f  83c601               add esi, 1
// 006bc812  3bf0                 cmp esi, eax
// 006bc814  7ccd                 jl 0x6bc7e3
// 006bc816  5f                   pop edi
// 006bc817  5e                   pop esi
// 006bc818  5d                   pop ebp
// 006bc819  33c0                 xor eax, eax
// 006bc81b  5b                   pop ebx
// 006bc81c  c20400               ret 4
// 006bc81f  e88a1bf6ff           call 0x61e3ae
// 006bc824  5f                   pop edi
// 006bc825  5e                   pop esi
// 006bc826  5d                   pop ebp
// 006bc827  8bc3                 mov eax, ebx
// 006bc829  5b                   pop ebx
// 006bc82a  c20400               ret 4
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportColumns.cpp (function ?GetVisibleAt@CXTPReportColumns@@QBEPAVCXTPReportColumn@@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportColumns.cpp
