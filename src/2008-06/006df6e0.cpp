// from server: 100% by auto
// roc 2008-06 006df6e0  unit: CXTTreeBase::PAXPAXUCLRFONT::?$CMap  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006df6e0
//
// 006df6e0  8b442404             mov eax, dword ptr [esp + 4]
// 006df6e4  85c0                 test eax, eax
// 006df6e6  7417                 je 0x6df6ff
// 006df6e8  6a0c                 push 0xc
// 006df6ea  50                   push eax
// 006df6eb  ff1548218000         call dword ptr [0x802148]
// 006df6f1  48                   dec eax
// 006df6f2  b907000000           mov ecx, 7
// 006df6f7  3bc8                 cmp ecx, eax
// 006df6f9  1bc0                 sbb eax, eax
// 006df6fb  40                   inc eax
// 006df6fc  c20400               ret 4
// 006df6ff  53                   push ebx
// 006df700  8b1d4c2b8000         mov ebx, dword ptr [0x802b4c]
// 006df706  56                   push esi
// 006df707  ffd3                 call ebx
// 006df709  50                   push eax
// 006df70a  ff15cc2c8000         call dword ptr [0x802ccc]
// 006df710  8bf0                 mov esi, eax
// 006df712  85f6                 test esi, esi
// 006df714  7427                 je 0x6df73d
// 006df716  57                   push edi
// 006df717  6a0c                 push 0xc
// 006df719  56                   push esi
// 006df71a  ff1548218000         call dword ptr [0x802148]
// 006df720  56                   push esi
// 006df721  8bf8                 mov edi, eax
// 006df723  ffd3                 call ebx
// 006df725  50                   push eax
// 006df726  ff15c02c8000         call dword ptr [0x802cc0]
// 006df72c  4f                   dec edi
// 006df72d  ba07000000           mov edx, 7
// 006df732  3bd7                 cmp edx, edi
// 006df734  5f                   pop edi
// 006df735  1bc0                 sbb eax, eax
// 006df737  5e                   pop esi
// 006df738  40                   inc eax
// 006df739  5b                   pop ebx
// 006df73a  c20400               ret 4
// 006df73d  5e                   pop esi
// 006df73e  33c0                 xor eax, eax
// 006df740  5b                   pop ebx
// 006df741  c20400               ret 4
// library xtp-11.2.2/Source\Common\XTPColorManager.cpp (function ?IsLowResolution@CXTPColorManager@@QAEHPAUHDC__@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPColorManager.cpp
