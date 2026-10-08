// from server: 100% by auto
// roc 2007-08 006b1630  unit: CXTPRibbonTheme  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006b1630
//
// 006b1630  83ec10               sub esp, 0x10
// 006b1633  53                   push ebx
// 006b1634  55                   push ebp
// 006b1635  56                   push esi
// 006b1636  57                   push edi
// 006b1637  68885e7d00           push 0x7d5e88
// 006b163c  e86f910000           call 0x6ba7b0
// 006b1641  8bf0                 mov esi, eax
// 006b1643  85f6                 test esi, esi
// 006b1645  7479                 je 0x6b16c0
// 006b1647  8bce                 mov ecx, esi
// 006b1649  e812ea0500           call 0x710060
// 006b164e  8bce                 mov ecx, esi
// 006b1650  8bf8                 mov edi, eax
// 006b1652  33db                 xor ebx, ebx
// 006b1654  33ed                 xor ebp, ebp
// 006b1656  e825ea0500           call 0x710080
// 006b165b  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 006b165f  8bd1                 mov edx, ecx
// 006b1661  2bd0                 sub edx, eax
// 006b1663  89542410             mov dword ptr [esp + 0x10], edx
// 006b1667  8b542434             mov edx, dword ptr [esp + 0x34]
// 006b166b  894c2418             mov dword ptr [esp + 0x18], ecx
// 006b166f  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 006b1673  2bd7                 sub edx, edi
// 006b1675  83ea04               sub edx, 4
// 006b1678  83c1fc               add ecx, -4
// 006b167b  68ff00ff00           push 0xff00ff
// 006b1680  89542418             mov dword ptr [esp + 0x18], edx
// 006b1684  894c2420             mov dword ptr [esp + 0x20], ecx
// 006b1688  33c9                 xor ecx, ecx
// 006b168a  8d54242c             lea edx, [esp + 0x2c]
// 006b168e  52                   push edx
// 006b168f  83ec10               sub esp, 0x10
// 006b1692  894c2440             mov dword ptr [esp + 0x40], ecx
// 006b1696  894c2444             mov dword ptr [esp + 0x44], ecx
// 006b169a  894c2448             mov dword ptr [esp + 0x48], ecx
// 006b169e  894c244c             mov dword ptr [esp + 0x4c], ecx
// 006b16a2  8bcc                 mov ecx, esp
// 006b16a4  8919                 mov dword ptr [ecx], ebx
// 006b16a6  896904               mov dword ptr [ecx + 4], ebp
// 006b16a9  894108               mov dword ptr [ecx + 8], eax
// 006b16ac  89790c               mov dword ptr [ecx + 0xc], edi
// 006b16af  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 006b16b3  8d442428             lea eax, [esp + 0x28]
// 006b16b7  50                   push eax
// 006b16b8  51                   push ecx
// 006b16b9  8bce                 mov ecx, esi
// 006b16bb  e860ee0500           call 0x710520
// 006b16c0  5f                   pop edi
// 006b16c1  5e                   pop esi
// 006b16c2  5d                   pop ebp
// 006b16c3  5b                   pop ebx
// 006b16c4  83c410               add esp, 0x10
// 006b16c7  c21400               ret 0x14
// library xtp-11.2.2-vc8/Source\Ribbon\XTPRibbonTheme.cpp (function ?DrawStatusBarGripper@CXTPRibbonTheme@@MAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Ribbon/XTPRibbonTheme.cpp
