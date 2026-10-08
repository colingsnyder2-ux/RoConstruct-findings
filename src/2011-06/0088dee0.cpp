// from server: 100% by auto
// roc 2011-06 0088dee0  unit: CXTPRibbonTheme  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0088dee0
//
// 0088dee0  83ec20               sub esp, 0x20
// 0088dee3  53                   push ebx
// 0088dee4  55                   push ebp
// 0088dee5  56                   push esi
// 0088dee6  57                   push edi
// 0088dee7  680c0bad00           push 0xad0b0c
// 0088deec  e89f130000           call 0x88f290
// 0088def1  8bf0                 mov esi, eax
// 0088def3  85f6                 test esi, esi
// 0088def5  7479                 je 0x88df70
// 0088def7  8bce                 mov ecx, esi
// 0088def9  e892f80500           call 0x8ed790
// 0088defe  8bce                 mov ecx, esi
// 0088df00  8bf8                 mov edi, eax
// 0088df02  33db                 xor ebx, ebx
// 0088df04  33ed                 xor ebp, ebp
// 0088df06  e8a5f80500           call 0x8ed7b0
// 0088df0b  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0088df0f  8bd1                 mov edx, ecx
// 0088df11  2bd0                 sub edx, eax
// 0088df13  89542420             mov dword ptr [esp + 0x20], edx
// 0088df17  8b542444             mov edx, dword ptr [esp + 0x44]
// 0088df1b  894c2428             mov dword ptr [esp + 0x28], ecx
// 0088df1f  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0088df23  2bd7                 sub edx, edi
// 0088df25  83ea04               sub edx, 4
// 0088df28  83c1fc               add ecx, -4
// 0088df2b  68ff00ff00           push 0xff00ff
// 0088df30  89542428             mov dword ptr [esp + 0x28], edx
// 0088df34  894c2430             mov dword ptr [esp + 0x30], ecx
// 0088df38  33c9                 xor ecx, ecx
// 0088df3a  8d542414             lea edx, [esp + 0x14]
// 0088df3e  52                   push edx
// 0088df3f  83ec10               sub esp, 0x10
// 0088df42  894c2428             mov dword ptr [esp + 0x28], ecx
// 0088df46  894c242c             mov dword ptr [esp + 0x2c], ecx
// 0088df4a  894c2430             mov dword ptr [esp + 0x30], ecx
// 0088df4e  894c2434             mov dword ptr [esp + 0x34], ecx
// 0088df52  8bcc                 mov ecx, esp
// 0088df54  8919                 mov dword ptr [ecx], ebx
// 0088df56  896904               mov dword ptr [ecx + 4], ebp
// 0088df59  894108               mov dword ptr [ecx + 8], eax
// 0088df5c  89790c               mov dword ptr [ecx + 0xc], edi
// 0088df5f  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0088df63  8d442438             lea eax, [esp + 0x38]
// 0088df67  50                   push eax
// 0088df68  51                   push ecx
// 0088df69  8bce                 mov ecx, esi
// 0088df6b  e8e0fc0500           call 0x8edc50
// 0088df70  5f                   pop edi
// 0088df71  5e                   pop esi
// 0088df72  5d                   pop ebp
// 0088df73  5b                   pop ebx
// 0088df74  83c420               add esp, 0x20
// 0088df77  c21400               ret 0x14
// library xtp-15.2.1/Source\Ribbon\XTPRibbonTheme.cpp (function ?DrawStatusBarGripper@CXTPRibbonTheme@@MAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Ribbon/XTPRibbonTheme.cpp
