// roc 2012-06 00a064c0  unit: CXTPRibbonTheme  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a064c0
//
// 00a064c0  83ec20               sub esp, 0x20
// 00a064c3  53                   push ebx
// 00a064c4  55                   push ebp
// 00a064c5  56                   push esi
// 00a064c6  57                   push edi
// 00a064c7  68c4c1c100           push 0xc1c1c4
// 00a064cc  e89f130000           call 0xa07870
// 00a064d1  8bf0                 mov esi, eax
// 00a064d3  85f6                 test esi, esi
// 00a064d5  7479                 je 0xa06550
// 00a064d7  8bce                 mov ecx, esi
// 00a064d9  e892f60500           call 0xa65b70
// 00a064de  8bce                 mov ecx, esi
// 00a064e0  8bf8                 mov edi, eax
// 00a064e2  33db                 xor ebx, ebx
// 00a064e4  33ed                 xor ebp, ebp
// 00a064e6  e8a5f60500           call 0xa65b90
// 00a064eb  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00a064ef  8bd1                 mov edx, ecx
// 00a064f1  2bd0                 sub edx, eax
// 00a064f3  89542420             mov dword ptr [esp + 0x20], edx
// 00a064f7  8b542444             mov edx, dword ptr [esp + 0x44]
// 00a064fb  894c2428             mov dword ptr [esp + 0x28], ecx
// 00a064ff  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00a06503  2bd7                 sub edx, edi
// 00a06505  83ea04               sub edx, 4
// 00a06508  83c1fc               add ecx, -4
// 00a0650b  68ff00ff00           push 0xff00ff
// 00a06510  89542428             mov dword ptr [esp + 0x28], edx
// 00a06514  894c2430             mov dword ptr [esp + 0x30], ecx
// 00a06518  33c9                 xor ecx, ecx
// 00a0651a  8d542414             lea edx, [esp + 0x14]
// 00a0651e  52                   push edx
// 00a0651f  83ec10               sub esp, 0x10
// 00a06522  894c2428             mov dword ptr [esp + 0x28], ecx
// 00a06526  894c242c             mov dword ptr [esp + 0x2c], ecx
// 00a0652a  894c2430             mov dword ptr [esp + 0x30], ecx
// 00a0652e  894c2434             mov dword ptr [esp + 0x34], ecx
// 00a06532  8bcc                 mov ecx, esp
// 00a06534  8919                 mov dword ptr [ecx], ebx
// 00a06536  896904               mov dword ptr [ecx + 4], ebp
// 00a06539  894108               mov dword ptr [ecx + 8], eax
// 00a0653c  89790c               mov dword ptr [ecx + 0xc], edi
// 00a0653f  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00a06543  8d442438             lea eax, [esp + 0x38]
// 00a06547  50                   push eax
// 00a06548  51                   push ecx
// 00a06549  8bce                 mov ecx, esi
// 00a0654b  e8e0fa0500           call 0xa66030
// 00a06550  5f                   pop edi
// 00a06551  5e                   pop esi
// 00a06552  5d                   pop ebp
// 00a06553  5b                   pop ebx
// 00a06554  83c420               add esp, 0x20
// 00a06557  c21400               ret 0x14
// library xtp-15.2.1/Source\Ribbon\XTPRibbonTheme.cpp (function ?DrawStatusBarGripper@CXTPRibbonTheme@@MAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Ribbon/XTPRibbonTheme.cpp
