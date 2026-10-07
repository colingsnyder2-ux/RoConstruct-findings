// roc 2008-06 00701e80  unit: CXTPTabClientWnd::CNavigateButtonActiveFiles  size: 155 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00701e80
//
// 00701e80  83ec20               sub esp, 0x20
// 00701e83  8b442428             mov eax, dword ptr [esp + 0x28]
// 00701e87  53                   push ebx
// 00701e88  55                   push ebp
// 00701e89  8be9                 mov ebp, ecx
// 00701e8b  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00701e8f  03c1                 add eax, ecx
// 00701e91  99                   cdq 
// 00701e92  2bc2                 sub eax, edx
// 00701e94  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00701e98  56                   push esi
// 00701e99  8bf0                 mov esi, eax
// 00701e9b  8b442438             mov eax, dword ptr [esp + 0x38]
// 00701e9f  03c2                 add eax, edx
// 00701ea1  99                   cdq 
// 00701ea2  57                   push edi
// 00701ea3  2bc2                 sub eax, edx
// 00701ea5  8bf8                 mov edi, eax
// 00701ea7  d1fe                 sar esi, 1
// 00701ea9  d1ff                 sar edi, 1
// 00701eab  8d4eff               lea ecx, [esi - 1]
// 00701eae  47                   inc edi
// 00701eaf  894c2418             mov dword ptr [esp + 0x18], ecx
// 00701eb3  8d47ff               lea eax, [edi - 1]
// 00701eb6  8d4f02               lea ecx, [edi + 2]
// 00701eb9  89442414             mov dword ptr [esp + 0x14], eax
// 00701ebd  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00701ec1  894c2424             mov dword ptr [esp + 0x24], ecx
// 00701ec5  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00701ec9  8d5603               lea edx, [esi + 3]
// 00701ecc  8944242c             mov dword ptr [esp + 0x2c], eax
// 00701ed0  6a04                 push 4
// 00701ed2  8d442414             lea eax, [esp + 0x14]
// 00701ed6  8954242c             mov dword ptr [esp + 0x2c], edx
// 00701eda  8b5104               mov edx, dword ptr [ecx + 4]
// 00701edd  50                   push eax
// 00701ede  8d5efc               lea ebx, [esi - 4]
// 00701ee1  52                   push edx
// 00701ee2  895c241c             mov dword ptr [esp + 0x1c], ebx
// 00701ee6  8974242c             mov dword ptr [esp + 0x2c], esi
// 00701eea  ff15c8208000         call dword ptr [0x8020c8]
// 00701ef0  837d3000             cmp dword ptr [ebp + 0x30], 0
// 00701ef4  741b                 je 0x701f11
// 00701ef6  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00701efa  8b5104               mov edx, dword ptr [ecx + 4]
// 00701efd  8d47fd               lea eax, [edi - 3]
// 00701f00  50                   push eax
// 00701f01  83c604               add esi, 4
// 00701f04  56                   push esi
// 00701f05  83c7fb               add edi, -5
// 00701f08  57                   push edi
// 00701f09  53                   push ebx
// 00701f0a  52                   push edx
// 00701f0b  ff1508218000         call dword ptr [0x802108]
// 00701f11  5f                   pop edi
// 00701f12  5e                   pop esi
// 00701f13  5d                   pop ebp
// 00701f14  5b                   pop ebx
// 00701f15  83c420               add esp, 0x20
// 00701f18  c21400               ret 0x14
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?DrawEntry@CNavigateButtonActiveFiles@CXTPTabClientWnd@@UAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
