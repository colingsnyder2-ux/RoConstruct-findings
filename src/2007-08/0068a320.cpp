// from server: 100% by auto
// roc 2007-08 0068a320  unit: CXTPTabClientWnd::CNavigateButtonActiveFiles  size: 157 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0068a320
//
// 0068a320  83ec20               sub esp, 0x20
// 0068a323  8b442428             mov eax, dword ptr [esp + 0x28]
// 0068a327  53                   push ebx
// 0068a328  55                   push ebp
// 0068a329  8be9                 mov ebp, ecx
// 0068a32b  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0068a32f  03c1                 add eax, ecx
// 0068a331  99                   cdq 
// 0068a332  2bc2                 sub eax, edx
// 0068a334  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0068a338  56                   push esi
// 0068a339  8bf0                 mov esi, eax
// 0068a33b  8b442438             mov eax, dword ptr [esp + 0x38]
// 0068a33f  03c2                 add eax, edx
// 0068a341  99                   cdq 
// 0068a342  57                   push edi
// 0068a343  2bc2                 sub eax, edx
// 0068a345  8bf8                 mov edi, eax
// 0068a347  d1fe                 sar esi, 1
// 0068a349  d1ff                 sar edi, 1
// 0068a34b  8d4eff               lea ecx, [esi - 1]
// 0068a34e  83c701               add edi, 1
// 0068a351  894c2418             mov dword ptr [esp + 0x18], ecx
// 0068a355  8d47ff               lea eax, [edi - 1]
// 0068a358  8d4f02               lea ecx, [edi + 2]
// 0068a35b  89442414             mov dword ptr [esp + 0x14], eax
// 0068a35f  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0068a363  894c2424             mov dword ptr [esp + 0x24], ecx
// 0068a367  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0068a36b  8d5603               lea edx, [esi + 3]
// 0068a36e  8944242c             mov dword ptr [esp + 0x2c], eax
// 0068a372  6a04                 push 4
// 0068a374  8d442414             lea eax, [esp + 0x14]
// 0068a378  8954242c             mov dword ptr [esp + 0x2c], edx
// 0068a37c  8b5104               mov edx, dword ptr [ecx + 4]
// 0068a37f  50                   push eax
// 0068a380  8d5efc               lea ebx, [esi - 4]
// 0068a383  52                   push edx
// 0068a384  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0068a388  8974242c             mov dword ptr [esp + 0x2c], esi
// 0068a38c  ff1540d17700         call dword ptr [0x77d140]
// 0068a392  837d3000             cmp dword ptr [ebp + 0x30], 0
// 0068a396  741b                 je 0x68a3b3
// 0068a398  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0068a39c  8b5104               mov edx, dword ptr [ecx + 4]
// 0068a39f  8d47fd               lea eax, [edi - 3]
// 0068a3a2  50                   push eax
// 0068a3a3  83c604               add esi, 4
// 0068a3a6  56                   push esi
// 0068a3a7  83c7fb               add edi, -5
// 0068a3aa  57                   push edi
// 0068a3ab  53                   push ebx
// 0068a3ac  52                   push edx
// 0068a3ad  ff157cd07700         call dword ptr [0x77d07c]
// 0068a3b3  5f                   pop edi
// 0068a3b4  5e                   pop esi
// 0068a3b5  5d                   pop ebp
// 0068a3b6  5b                   pop ebx
// 0068a3b7  83c420               add esp, 0x20
// 0068a3ba  c21400               ret 0x14
// library xtp-11.2.2-vc8/Source\CommandBars\XTPTabClientWnd.cpp (function ?DrawEntry@CNavigateButtonActiveFiles@CXTPTabClientWnd@@UAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPTabClientWnd.cpp
