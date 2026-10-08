// roc 2011-06 008c47d0  unit: CXTPDockingPaneTabbedContainer  size: 464 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008c47d0
//
// 008c47d0  53                   push ebx
// 008c47d1  55                   push ebp
// 008c47d2  56                   push esi
// 008c47d3  57                   push edi
// 008c47d4  8bf9                 mov edi, ecx
// 008c47d6  8bb7a4010000         mov esi, dword ptr [edi + 0x1a4]
// 008c47dc  8d6f54               lea ebp, [edi + 0x54]
// 008c47df  8bcd                 mov ecx, ebp
// 008c47e1  e87ad5ffff           call 0x8c1d60
// 008c47e6  8bd8                 mov ebx, eax
// 008c47e8  8b442414             mov eax, dword ptr [esp + 0x14]
// 008c47ec  8b4014               mov eax, dword ptr [eax + 0x14]
// 008c47ef  0510dbffff           add eax, 0xffffdb10
// 008c47f4  83f803               cmp eax, 3
// 008c47f7  0f8789010000         ja 0x8c4986
// 008c47fd  ff248590498c00       jmp dword ptr [eax*4 + 0x8c4990]
// 008c4804  83bbb400000000       cmp dword ptr [ebx + 0xb4], 0
// 008c480b  7471                 je 0x8c487e
// 008c480d  8bbf94000000         mov edi, dword ptr [edi + 0x94]
// 008c4813  85ff                 test edi, edi
// 008c4815  0f846b010000         je 0x8c4986
// 008c481b  8b2d4c03a400         mov ebp, dword ptr [0xa4034c]
// 008c4821  8bc7                 mov eax, edi
// 008c4823  8b7008               mov esi, dword ptr [eax + 8]
// 008c4826  8b7f04               mov edi, dword ptr [edi + 4]
// 008c4829  85f6                 test esi, esi
// 008c482b  7405                 je 0x8c4832
// 008c482d  83c6e0               add esi, -0x20
// 008c4830  eb02                 jmp 0x8c4834
// 008c4832  33f6                 xor esi, esi
// 008c4834  8bce                 mov ecx, esi
// 008c4836  e8259bfaff           call 0x86e360
// 008c483b  a801                 test al, 1
// 008c483d  7534                 jne 0x8c4873
// 008c483f  8d4e04               lea ecx, [esi + 4]
// 008c4842  51                   push ecx
// 008c4843  ffd5                 call ebp
// 008c4845  6a00                 push 0
// 008c4847  6a00                 push 0
// 008c4849  56                   push esi
// 008c484a  6a02                 push 2
// 008c484c  8bcb                 mov ecx, ebx
// 008c484e  e80d97f8ff           call 0x84df60
// 008c4853  85c0                 test eax, eax
// 008c4855  7515                 jne 0x8c486c
// 008c4857  8bce                 mov ecx, esi
// 008c4859  e8a297faff           call 0x86e000
// 008c485e  6a00                 push 0
// 008c4860  6a00                 push 0
// 008c4862  56                   push esi
// 008c4863  6a03                 push 3
// 008c4865  8bcb                 mov ecx, ebx
// 008c4867  e8f496f8ff           call 0x84df60
// 008c486c  8bce                 mov ecx, esi
// 008c486e  e8675df4ff           call 0x80a5da
// 008c4873  85ff                 test edi, edi
// 008c4875  75aa                 jne 0x8c4821
// 008c4877  5f                   pop edi
// 008c4878  5e                   pop esi
// 008c4879  5d                   pop ebp
// 008c487a  5b                   pop ebx
// 008c487b  c20400               ret 4
// 008c487e  85f6                 test esi, esi
// 008c4880  0f8400010000         je 0x8c4986
// 008c4886  8d5604               lea edx, [esi + 4]
// 008c4889  52                   push edx
// 008c488a  ff154c03a400         call dword ptr [0xa4034c]
// 008c4890  6a00                 push 0
// 008c4892  6a00                 push 0
// 008c4894  56                   push esi
// 008c4895  6a02                 push 2
// 008c4897  8bcb                 mov ecx, ebx
// 008c4899  e8c296f8ff           call 0x84df60
// 008c489e  85c0                 test eax, eax
// 008c48a0  7515                 jne 0x8c48b7
// 008c48a2  8bce                 mov ecx, esi
// 008c48a4  e85797faff           call 0x86e000
// 008c48a9  6a00                 push 0
// 008c48ab  6a00                 push 0
// 008c48ad  56                   push esi
// 008c48ae  6a03                 push 3
// 008c48b0  8bcb                 mov ecx, ebx
// 008c48b2  e8a996f8ff           call 0x84df60
// 008c48b7  8bce                 mov ecx, esi
// 008c48b9  e81c5df4ff           call 0x80a5da
// 008c48be  5f                   pop edi
// 008c48bf  5e                   pop esi
// 008c48c0  5d                   pop ebp
// 008c48c1  5b                   pop ebx
// 008c48c2  c20400               ret 4
// 008c48c5  8b4500               mov eax, dword ptr [ebp]
// 008c48c8  8b501c               mov edx, dword ptr [eax + 0x1c]
// 008c48cb  8bcd                 mov ecx, ebp
// 008c48cd  ffd2                 call edx
// 008c48cf  85c0                 test eax, eax
// 008c48d1  7548                 jne 0x8c491b
// 008c48d3  50                   push eax
// 008c48d4  50                   push eax
// 008c48d5  56                   push esi
// 008c48d6  6a12                 push 0x12
// 008c48d8  8bcb                 mov ecx, ebx
// 008c48da  e88196f8ff           call 0x84df60
// 008c48df  85c0                 test eax, eax
// 008c48e1  0f859f000000         jne 0x8c4986
// 008c48e7  8b4500               mov eax, dword ptr [ebp]
// 008c48ea  8b5018               mov edx, dword ptr [eax + 0x18]
// 008c48ed  8bcd                 mov ecx, ebp
// 008c48ef  ffd2                 call edx
// 008c48f1  8bc8                 mov ecx, eax
// 008c48f3  e8085bf4ff           call 0x80a400
// 008c48f8  8bcf                 mov ecx, edi
// 008c48fa  e821e6ffff           call 0x8c2f20
// 008c48ff  8bce                 mov ecx, esi
// 008c4901  e81a97faff           call 0x86e020
// 008c4906  6a00                 push 0
// 008c4908  6a00                 push 0
// 008c490a  56                   push esi
// 008c490b  6a13                 push 0x13
// 008c490d  8bcb                 mov ecx, ebx
// 008c490f  e84c96f8ff           call 0x84df60
// 008c4914  5f                   pop edi
// 008c4915  5e                   pop esi
// 008c4916  5d                   pop ebp
// 008c4917  5b                   pop ebx
// 008c4918  c20400               ret 4
// 008c491b  83bbb800000000       cmp dword ptr [ebx + 0xb8], 0
// 008c4922  7418                 je 0x8c493c
// 008c4924  8bc5                 mov eax, ebp
// 008c4926  50                   push eax
// 008c4927  8bcd                 mov ecx, ebp
// 008c4929  e832d4ffff           call 0x8c1d60
// 008c492e  8bc8                 mov ecx, eax
// 008c4930  e8dbb8f8ff           call 0x850210
// 008c4935  5f                   pop edi
// 008c4936  5e                   pop esi
// 008c4937  5d                   pop ebp
// 008c4938  5b                   pop ebx
// 008c4939  c20400               ret 4
// 008c493c  85f6                 test esi, esi
// 008c493e  7419                 je 0x8c4959
// 008c4940  8d4620               lea eax, [esi + 0x20]
// 008c4943  50                   push eax
// 008c4944  8bcd                 mov ecx, ebp
// 008c4946  e815d4ffff           call 0x8c1d60
// 008c494b  8bc8                 mov ecx, eax
// 008c494d  e8beb8f8ff           call 0x850210
// 008c4952  5f                   pop edi
// 008c4953  5e                   pop esi
// 008c4954  5d                   pop ebp
// 008c4955  5b                   pop ebx
// 008c4956  c20400               ret 4
// 008c4959  33c0                 xor eax, eax
// 008c495b  50                   push eax
// 008c495c  8bcd                 mov ecx, ebp
// 008c495e  e8fdd3ffff           call 0x8c1d60
// 008c4963  8bc8                 mov ecx, eax
// 008c4965  e8a6b8f8ff           call 0x850210
// 008c496a  5f                   pop edi
// 008c496b  5e                   pop esi
// 008c496c  5d                   pop ebp
// 008c496d  5b                   pop ebx
// 008c496e  c20400               ret 4
// 008c4971  8bcf                 mov ecx, edi
// 008c4973  e858f3ffff           call 0x8c3cd0
// 008c4978  5f                   pop edi
// 008c4979  5e                   pop esi
// 008c497a  5d                   pop ebp
// 008c497b  5b                   pop ebx
// 008c497c  c20400               ret 4
// 008c497f  8bcf                 mov ecx, edi
// 008c4981  e80adcffff           call 0x8c2590
// 008c4986  5f                   pop edi
// 008c4987  5e                   pop esi
// 008c4988  5d                   pop ebp
// 008c4989  5b                   pop ebx
// 008c498a  c20400               ret 4
// 008c498d  8d4900               lea ecx, [ecx]
// 008c4990  c5488c               lds ecx, ptr [eax - 0x74]
// 008c4993  000448               add byte ptr [eax + ecx*2], al
// 008c4996  8c00                 mov word ptr [eax], es
// 008c4998  7149                 jno 0x8c49e3
// 008c499a  8c00                 mov word ptr [eax], es
// 008c499c  7f49                 jg 0x8c49e7
// 008c499e  8c00                 mov word ptr [eax], es
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?OnCaptionButtonClick@CXTPDockingPaneTabbedContainer@@MAEXPAVCXTPDockingPaneCaptionButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
