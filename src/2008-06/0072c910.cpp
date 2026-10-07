// roc 2008-06 0072c910  unit: CXTPRibbonTheme  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0072c910
//
// 0072c910  83ec20               sub esp, 0x20
// 0072c913  53                   push ebx
// 0072c914  55                   push ebp
// 0072c915  56                   push esi
// 0072c916  57                   push edi
// 0072c917  688c208600           push 0x86208c
// 0072c91c  e8cf8d0000           call 0x7356f0
// 0072c921  8bf0                 mov esi, eax
// 0072c923  85f6                 test esi, esi
// 0072c925  7479                 je 0x72c9a0
// 0072c927  8bce                 mov ecx, esi
// 0072c929  e8820e0600           call 0x78d7b0
// 0072c92e  8bce                 mov ecx, esi
// 0072c930  8bf8                 mov edi, eax
// 0072c932  33db                 xor ebx, ebx
// 0072c934  33ed                 xor ebp, ebp
// 0072c936  e8950e0600           call 0x78d7d0
// 0072c93b  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0072c93f  8bd1                 mov edx, ecx
// 0072c941  2bd0                 sub edx, eax
// 0072c943  89542420             mov dword ptr [esp + 0x20], edx
// 0072c947  8b542444             mov edx, dword ptr [esp + 0x44]
// 0072c94b  894c2428             mov dword ptr [esp + 0x28], ecx
// 0072c94f  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0072c953  2bd7                 sub edx, edi
// 0072c955  83ea04               sub edx, 4
// 0072c958  83c1fc               add ecx, -4
// 0072c95b  68ff00ff00           push 0xff00ff
// 0072c960  89542428             mov dword ptr [esp + 0x28], edx
// 0072c964  894c2430             mov dword ptr [esp + 0x30], ecx
// 0072c968  33c9                 xor ecx, ecx
// 0072c96a  8d542414             lea edx, [esp + 0x14]
// 0072c96e  52                   push edx
// 0072c96f  83ec10               sub esp, 0x10
// 0072c972  894c2428             mov dword ptr [esp + 0x28], ecx
// 0072c976  894c242c             mov dword ptr [esp + 0x2c], ecx
// 0072c97a  894c2430             mov dword ptr [esp + 0x30], ecx
// 0072c97e  894c2434             mov dword ptr [esp + 0x34], ecx
// 0072c982  8bcc                 mov ecx, esp
// 0072c984  8919                 mov dword ptr [ecx], ebx
// 0072c986  896904               mov dword ptr [ecx + 4], ebp
// 0072c989  894108               mov dword ptr [ecx + 8], eax
// 0072c98c  89790c               mov dword ptr [ecx + 0xc], edi
// 0072c98f  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0072c993  8d442438             lea eax, [esp + 0x38]
// 0072c997  50                   push eax
// 0072c998  51                   push ecx
// 0072c999  8bce                 mov ecx, esi
// 0072c99b  e8d0120600           call 0x78dc70
// 0072c9a0  5f                   pop edi
// 0072c9a1  5e                   pop esi
// 0072c9a2  5d                   pop ebp
// 0072c9a3  5b                   pop ebx
// 0072c9a4  83c420               add esp, 0x20
// 0072c9a7  c21400               ret 0x14
// library xtp-11.2.2/Source\Ribbon\XTPRibbonTheme.cpp (function ?DrawStatusBarGripper@CXTPRibbonTheme@@MAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonTheme.cpp
