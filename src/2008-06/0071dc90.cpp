// roc 2008-06 0071dc90  unit: CXTPShortcutManager  size: 341 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0071dc90
//
// 0071dc90  53                   push ebx
// 0071dc91  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0071dc95  56                   push esi
// 0071dc96  57                   push edi
// 0071dc97  33ff                 xor edi, edi
// 0071dc99  3bdf                 cmp ebx, edi
// 0071dc9b  8bf1                 mov esi, ecx
// 0071dc9d  7d05                 jge 0x71dca4
// 0071dc9f  e8a02cf8ff           call 0x6a0944
// 0071dca4  8b442414             mov eax, dword ptr [esp + 0x14]
// 0071dca8  3bc7                 cmp eax, edi
// 0071dcaa  7c03                 jl 0x71dcaf
// 0071dcac  894610               mov dword ptr [esi + 0x10], eax
// 0071dcaf  3bdf                 cmp ebx, edi
// 0071dcb1  751f                 jne 0x71dcd2
// 0071dcb3  8b4604               mov eax, dword ptr [esi + 4]
// 0071dcb6  3bc7                 cmp eax, edi
// 0071dcb8  740c                 je 0x71dcc6
// 0071dcba  50                   push eax
// 0071dcbb  e88a2cf8ff           call 0x6a094a
// 0071dcc0  83c404               add esp, 4
// 0071dcc3  897e04               mov dword ptr [esi + 4], edi
// 0071dcc6  897e0c               mov dword ptr [esi + 0xc], edi
// 0071dcc9  897e08               mov dword ptr [esi + 8], edi
// 0071dccc  5f                   pop edi
// 0071dccd  5e                   pop esi
// 0071dcce  5b                   pop ebx
// 0071dccf  c20800               ret 8
// 0071dcd2  8b5604               mov edx, dword ptr [esi + 4]
// 0071dcd5  55                   push ebp
// 0071dcd6  3bd7                 cmp edx, edi
// 0071dcd8  7531                 jne 0x71dd0b
// 0071dcda  8b6e10               mov ebp, dword ptr [esi + 0x10]
// 0071dcdd  3bdd                 cmp ebx, ebp
// 0071dcdf  7e02                 jle 0x71dce3
// 0071dce1  8beb                 mov ebp, ebx
// 0071dce3  8d7c6d00             lea edi, [ebp + ebp*2]
// 0071dce7  03ff                 add edi, edi
// 0071dce9  57                   push edi
// 0071dcea  e8672cf8ff           call 0x6a0956
// 0071dcef  57                   push edi
// 0071dcf0  6a00                 push 0
// 0071dcf2  50                   push eax
// 0071dcf3  894604               mov dword ptr [esi + 4], eax
// 0071dcf6  e8093af8ff           call 0x6a1704
// 0071dcfb  83c410               add esp, 0x10
// 0071dcfe  896e0c               mov dword ptr [esi + 0xc], ebp
// 0071dd01  5d                   pop ebp
// 0071dd02  5f                   pop edi
// 0071dd03  895e08               mov dword ptr [esi + 8], ebx
// 0071dd06  5e                   pop esi
// 0071dd07  5b                   pop ebx
// 0071dd08  c20800               ret 8
// 0071dd0b  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0071dd0e  3bd9                 cmp ebx, ecx
// 0071dd10  7f2f                 jg 0x71dd41
// 0071dd12  8b4e08               mov ecx, dword ptr [esi + 8]
// 0071dd15  3bd9                 cmp ebx, ecx
// 0071dd17  0f8ebe000000         jle 0x71dddb
// 0071dd1d  8bc3                 mov eax, ebx
// 0071dd1f  2bc1                 sub eax, ecx
// 0071dd21  8d0440               lea eax, [eax + eax*2]
// 0071dd24  03c0                 add eax, eax
// 0071dd26  50                   push eax
// 0071dd27  8d0c49               lea ecx, [ecx + ecx*2]
// 0071dd2a  8d144a               lea edx, [edx + ecx*2]
// 0071dd2d  57                   push edi
// 0071dd2e  52                   push edx
// 0071dd2f  e8d039f8ff           call 0x6a1704
// 0071dd34  83c40c               add esp, 0xc
// 0071dd37  5d                   pop ebp
// 0071dd38  5f                   pop edi
// 0071dd39  895e08               mov dword ptr [esi + 8], ebx
// 0071dd3c  5e                   pop esi
// 0071dd3d  5b                   pop ebx
// 0071dd3e  c20800               ret 8
// 0071dd41  8b4610               mov eax, dword ptr [esi + 0x10]
// 0071dd44  3bc7                 cmp eax, edi
// 0071dd46  7524                 jne 0x71dd6c
// 0071dd48  8b4608               mov eax, dword ptr [esi + 8]
// 0071dd4b  99                   cdq 
// 0071dd4c  83e207               and edx, 7
// 0071dd4f  03c2                 add eax, edx
// 0071dd51  c1f803               sar eax, 3
// 0071dd54  83f804               cmp eax, 4
// 0071dd57  7d07                 jge 0x71dd60
// 0071dd59  b804000000           mov eax, 4
// 0071dd5e  eb0c                 jmp 0x71dd6c
// 0071dd60  3d00040000           cmp eax, 0x400
// 0071dd65  7e05                 jle 0x71dd6c
// 0071dd67  b800040000           mov eax, 0x400
// 0071dd6c  8d3c01               lea edi, [ecx + eax]
// 0071dd6f  3bdf                 cmp ebx, edi
// 0071dd71  7d06                 jge 0x71dd79
// 0071dd73  897c2414             mov dword ptr [esp + 0x14], edi
// 0071dd77  eb06                 jmp 0x71dd7f
// 0071dd79  895c2414             mov dword ptr [esp + 0x14], ebx
// 0071dd7d  8bfb                 mov edi, ebx
// 0071dd7f  3bf9                 cmp edi, ecx
// 0071dd81  7d05                 jge 0x71dd88
// 0071dd83  e8bc2bf8ff           call 0x6a0944
// 0071dd88  8d3c7f               lea edi, [edi + edi*2]
// 0071dd8b  03ff                 add edi, edi
// 0071dd8d  57                   push edi
// 0071dd8e  e8c32bf8ff           call 0x6a0956
// 0071dd93  8b4e04               mov ecx, dword ptr [esi + 4]
// 0071dd96  8be8                 mov ebp, eax
// 0071dd98  8b4608               mov eax, dword ptr [esi + 8]
// 0071dd9b  8d0440               lea eax, [eax + eax*2]
// 0071dd9e  03c0                 add eax, eax
// 0071dda0  50                   push eax
// 0071dda1  51                   push ecx
// 0071dda2  57                   push edi
// 0071dda3  55                   push ebp
// 0071dda4  e8673aceff           call 0x401810
// 0071dda9  8b4e08               mov ecx, dword ptr [esi + 8]
// 0071ddac  8bc3                 mov eax, ebx
// 0071ddae  2bc1                 sub eax, ecx
// 0071ddb0  8d1440               lea edx, [eax + eax*2]
// 0071ddb3  03d2                 add edx, edx
// 0071ddb5  52                   push edx
// 0071ddb6  8d0449               lea eax, [ecx + ecx*2]
// 0071ddb9  8d4c4500             lea ecx, [ebp + eax*2]
// 0071ddbd  6a00                 push 0
// 0071ddbf  51                   push ecx
// 0071ddc0  e83f39f8ff           call 0x6a1704
// 0071ddc5  8b5604               mov edx, dword ptr [esi + 4]
// 0071ddc8  52                   push edx
// 0071ddc9  e87c2bf8ff           call 0x6a094a
// 0071ddce  8b442438             mov eax, dword ptr [esp + 0x38]
// 0071ddd2  83c424               add esp, 0x24
// 0071ddd5  896e04               mov dword ptr [esi + 4], ebp
// 0071ddd8  89460c               mov dword ptr [esi + 0xc], eax
// 0071dddb  5d                   pop ebp
// 0071dddc  5f                   pop edi
// 0071dddd  895e08               mov dword ptr [esi + 8], ebx
// 0071dde0  5e                   pop esi
// 0071dde1  5b                   pop ebx
// 0071dde2  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPShortcutManager.cpp (function ?SetSize@?$CArray@UtagACCEL@@AAU1@@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPShortcutManager.cpp
