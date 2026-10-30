// from server: 100% by auto
// roc 2012-06 009dd020  unit: CXTPTabClientWnd::CNavigateButtonActiveFiles  size: 155 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009dd020
//
// 009dd020  83ec20               sub esp, 0x20
// 009dd023  8b442428             mov eax, dword ptr [esp + 0x28]
// 009dd027  53                   push ebx
// 009dd028  55                   push ebp
// 009dd029  8be9                 mov ebp, ecx
// 009dd02b  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 009dd02f  03c1                 add eax, ecx
// 009dd031  99                   cdq 
// 009dd032  2bc2                 sub eax, edx
// 009dd034  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 009dd038  56                   push esi
// 009dd039  8bf0                 mov esi, eax
// 009dd03b  8b442438             mov eax, dword ptr [esp + 0x38]
// 009dd03f  03c2                 add eax, edx
// 009dd041  99                   cdq 
// 009dd042  57                   push edi
// 009dd043  2bc2                 sub eax, edx
// 009dd045  8bf8                 mov edi, eax
// 009dd047  d1fe                 sar esi, 1
// 009dd049  d1ff                 sar edi, 1
// 009dd04b  8d4eff               lea ecx, [esi - 1]
// 009dd04e  47                   inc edi
// 009dd04f  894c2418             mov dword ptr [esp + 0x18], ecx
// 009dd053  8d47ff               lea eax, [edi - 1]
// 009dd056  8d4f02               lea ecx, [edi + 2]
// 009dd059  89442414             mov dword ptr [esp + 0x14], eax
// 009dd05d  894c241c             mov dword ptr [esp + 0x1c], ecx
// 009dd061  894c2424             mov dword ptr [esp + 0x24], ecx
// 009dd065  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 009dd069  8d5603               lea edx, [esi + 3]
// 009dd06c  8944242c             mov dword ptr [esp + 0x2c], eax
// 009dd070  6a04                 push 4
// 009dd072  8d442414             lea eax, [esp + 0x14]
// 009dd076  8954242c             mov dword ptr [esp + 0x2c], edx
// 009dd07a  8b5104               mov edx, dword ptr [ecx + 4]
// 009dd07d  50                   push eax
// 009dd07e  8d5efc               lea ebx, [esi - 4]
// 009dd081  52                   push edx
// 009dd082  895c241c             mov dword ptr [esp + 0x1c], ebx
// 009dd086  8974242c             mov dword ptr [esp + 0x2c], esi
// 009dd08a  ff15b020b200         call dword ptr [0xb220b0]
// 009dd090  837d3000             cmp dword ptr [ebp + 0x30], 0
// 009dd094  741b                 je 0x9dd0b1
// 009dd096  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 009dd09a  8b5104               mov edx, dword ptr [ecx + 4]
// 009dd09d  8d47fd               lea eax, [edi - 3]
// 009dd0a0  50                   push eax
// 009dd0a1  83c604               add esi, 4
// 009dd0a4  56                   push esi
// 009dd0a5  83c7fb               add edi, -5
// 009dd0a8  57                   push edi
// 009dd0a9  53                   push ebx
// 009dd0aa  52                   push edx
// 009dd0ab  ff157421b200         call dword ptr [0xb22174]
// 009dd0b1  5f                   pop edi
// 009dd0b2  5e                   pop esi
// 009dd0b3  5d                   pop ebp
// 009dd0b4  5b                   pop ebx
// 009dd0b5  83c420               add esp, 0x20
// 009dd0b8  c21400               ret 0x14
// library xtp-15.2.1/Source\CommandBars\XTPTabClientWnd.cpp (function ?DrawEntry@CNavigateButtonActiveFiles@CXTPTabClientWnd@@UAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPTabClientWnd.cpp
