// from server: 100% by auto
// roc 2011-06 008649f0  unit: CXTPTabClientWnd::CNavigateButtonActiveFiles  size: 155 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008649f0
//
// 008649f0  83ec20               sub esp, 0x20
// 008649f3  8b442428             mov eax, dword ptr [esp + 0x28]
// 008649f7  53                   push ebx
// 008649f8  55                   push ebp
// 008649f9  8be9                 mov ebp, ecx
// 008649fb  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 008649ff  03c1                 add eax, ecx
// 00864a01  99                   cdq 
// 00864a02  2bc2                 sub eax, edx
// 00864a04  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00864a08  56                   push esi
// 00864a09  8bf0                 mov esi, eax
// 00864a0b  8b442438             mov eax, dword ptr [esp + 0x38]
// 00864a0f  03c2                 add eax, edx
// 00864a11  99                   cdq 
// 00864a12  57                   push edi
// 00864a13  2bc2                 sub eax, edx
// 00864a15  8bf8                 mov edi, eax
// 00864a17  d1fe                 sar esi, 1
// 00864a19  d1ff                 sar edi, 1
// 00864a1b  8d4eff               lea ecx, [esi - 1]
// 00864a1e  47                   inc edi
// 00864a1f  894c2418             mov dword ptr [esp + 0x18], ecx
// 00864a23  8d47ff               lea eax, [edi - 1]
// 00864a26  8d4f02               lea ecx, [edi + 2]
// 00864a29  89442414             mov dword ptr [esp + 0x14], eax
// 00864a2d  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00864a31  894c2424             mov dword ptr [esp + 0x24], ecx
// 00864a35  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00864a39  8d5603               lea edx, [esi + 3]
// 00864a3c  8944242c             mov dword ptr [esp + 0x2c], eax
// 00864a40  6a04                 push 4
// 00864a42  8d442414             lea eax, [esp + 0x14]
// 00864a46  8954242c             mov dword ptr [esp + 0x2c], edx
// 00864a4a  8b5104               mov edx, dword ptr [ecx + 4]
// 00864a4d  50                   push eax
// 00864a4e  8d5efc               lea ebx, [esi - 4]
// 00864a51  52                   push edx
// 00864a52  895c241c             mov dword ptr [esp + 0x1c], ebx
// 00864a56  8974242c             mov dword ptr [esp + 0x2c], esi
// 00864a5a  ff151801a400         call dword ptr [0xa40118]
// 00864a60  837d3000             cmp dword ptr [ebp + 0x30], 0
// 00864a64  741b                 je 0x864a81
// 00864a66  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00864a6a  8b5104               mov edx, dword ptr [ecx + 4]
// 00864a6d  8d47fd               lea eax, [edi - 3]
// 00864a70  50                   push eax
// 00864a71  83c604               add esi, 4
// 00864a74  56                   push esi
// 00864a75  83c7fb               add edi, -5
// 00864a78  57                   push edi
// 00864a79  53                   push ebx
// 00864a7a  52                   push edx
// 00864a7b  ff15c000a400         call dword ptr [0xa400c0]
// 00864a81  5f                   pop edi
// 00864a82  5e                   pop esi
// 00864a83  5d                   pop ebp
// 00864a84  5b                   pop ebx
// 00864a85  83c420               add esp, 0x20
// 00864a88  c21400               ret 0x14
// library xtp-15.2.1/Source\CommandBars\XTPTabClientWnd.cpp (function ?DrawEntry@CNavigateButtonActiveFiles@CXTPTabClientWnd@@UAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPTabClientWnd.cpp
