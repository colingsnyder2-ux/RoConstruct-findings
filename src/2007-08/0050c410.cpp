// from server: 100% by auto
// roc 2007-08 0050c410  unit: G3D::BinaryInput  size: 198 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050c410
//
// 0050c410  83ec10               sub esp, 0x10
// 0050c413  55                   push ebp
// 0050c414  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0050c418  83fdff               cmp ebp, -1
// 0050c41b  8bd1                 mov edx, ecx
// 0050c41d  89542408             mov dword ptr [esp + 8], edx
// 0050c421  7605                 jbe 0x50c428
// 0050c423  e838fbffff           call 0x50bf60
// 0050c428  8b4a08               mov ecx, dword ptr [edx + 8]
// 0050c42b  56                   push esi
// 0050c42c  57                   push edi
// 0050c42d  8d7204               lea esi, [edx + 4]
// 0050c430  8d7d1f               lea edi, [ebp + 0x1f]
// 0050c433  c1ef05               shr edi, 5
// 0050c436  85c9                 test ecx, ecx
// 0050c438  745c                 je 0x50c496
// 0050c43a  8b4608               mov eax, dword ptr [esi + 8]
// 0050c43d  2bc1                 sub eax, ecx
// 0050c43f  c1f802               sar eax, 2
// 0050c442  3bf8                 cmp edi, eax
// 0050c444  7350                 jae 0x50c496
// 0050c446  8b4608               mov eax, dword ptr [esi + 8]
// 0050c449  3bc8                 cmp ecx, eax
// 0050c44b  8944240c             mov dword ptr [esp + 0xc], eax
// 0050c44f  7606                 jbe 0x50c457
// 0050c451  ff15d8e67700         call dword ptr [0x77e6d8]
// 0050c457  53                   push ebx
// 0050c458  8b5e04               mov ebx, dword ptr [esi + 4]
// 0050c45b  3b5e08               cmp ebx, dword ptr [esi + 8]
// 0050c45e  7606                 jbe 0x50c466
// 0050c460  ff15d8e67700         call dword ptr [0x77e6d8]
// 0050c466  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0050c46a  8d1cbb               lea ebx, [ebx + edi*4]
// 0050c46d  3b5e08               cmp ebx, dword ptr [esi + 8]
// 0050c470  7705                 ja 0x50c477
// 0050c472  3b5e04               cmp ebx, dword ptr [esi + 4]
// 0050c475  7306                 jae 0x50c47d
// 0050c477  ff15d8e67700         call dword ptr [0x77e6d8]
// 0050c47d  8b442410             mov eax, dword ptr [esp + 0x10]
// 0050c481  50                   push eax
// 0050c482  56                   push esi
// 0050c483  53                   push ebx
// 0050c484  56                   push esi
// 0050c485  8d4c2428             lea ecx, [esp + 0x28]
// 0050c489  51                   push ecx
// 0050c48a  8bce                 mov ecx, esi
// 0050c48c  e80f180c00           call 0x5cdca0
// 0050c491  8b542414             mov edx, dword ptr [esp + 0x14]
// 0050c495  5b                   pop ebx
// 0050c496  892a                 mov dword ptr [edx], ebp
// 0050c498  83e51f               and ebp, 0x1f
// 0050c49b  7630                 jbe 0x50c4cd
// 0050c49d  8b4e04               mov ecx, dword ptr [esi + 4]
// 0050c4a0  83c7ff               add edi, -1
// 0050c4a3  85c9                 test ecx, ecx
// 0050c4a5  740c                 je 0x50c4b3
// 0050c4a7  8b4608               mov eax, dword ptr [esi + 8]
// 0050c4aa  2bc1                 sub eax, ecx
// 0050c4ac  c1f802               sar eax, 2
// 0050c4af  3bf8                 cmp edi, eax
// 0050c4b1  7206                 jb 0x50c4b9
// 0050c4b3  ff15d8e67700         call dword ptr [0x77e6d8]
// 0050c4b9  8b5604               mov edx, dword ptr [esi + 4]
// 0050c4bc  8d04ba               lea eax, [edx + edi*4]
// 0050c4bf  ba01000000           mov edx, 1
// 0050c4c4  8bcd                 mov ecx, ebp
// 0050c4c6  d3e2                 shl edx, cl
// 0050c4c8  83ea01               sub edx, 1
// 0050c4cb  2110                 and dword ptr [eax], edx
// 0050c4cd  5f                   pop edi
// 0050c4ce  5e                   pop esi
// 0050c4cf  5d                   pop ebp
// 0050c4d0  83c410               add esp, 0x10
// 0050c4d3  c20400               ret 4
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?_Trim@?$vector@_NV?$allocator@_N@std@@@std@@IAEXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
