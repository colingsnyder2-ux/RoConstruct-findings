// roc 2009-06 007d8760  unit: CXTPDockingPaneTabbedContainer  size: 464 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007d8760
//
// 007d8760  53                   push ebx
// 007d8761  55                   push ebp
// 007d8762  56                   push esi
// 007d8763  57                   push edi
// 007d8764  8bf9                 mov edi, ecx
// 007d8766  8bb7a4010000         mov esi, dword ptr [edi + 0x1a4]
// 007d876c  8d6f54               lea ebp, [edi + 0x54]
// 007d876f  8bcd                 mov ecx, ebp
// 007d8771  e88ad5ffff           call 0x7d5d00
// 007d8776  8bd8                 mov ebx, eax
// 007d8778  8b442414             mov eax, dword ptr [esp + 0x14]
// 007d877c  8b4014               mov eax, dword ptr [eax + 0x14]
// 007d877f  0510dbffff           add eax, 0xffffdb10
// 007d8784  83f803               cmp eax, 3
// 007d8787  0f8789010000         ja 0x7d8916
// 007d878d  ff248520897d00       jmp dword ptr [eax*4 + 0x7d8920]
// 007d8794  83bbb400000000       cmp dword ptr [ebx + 0xb4], 0
// 007d879b  7471                 je 0x7d880e
// 007d879d  8bbf94000000         mov edi, dword ptr [edi + 0x94]
// 007d87a3  85ff                 test edi, edi
// 007d87a5  0f846b010000         je 0x7d8916
// 007d87ab  8b2dd0e18900         mov ebp, dword ptr [0x89e1d0]
// 007d87b1  8bc7                 mov eax, edi
// 007d87b3  8b7008               mov esi, dword ptr [eax + 8]
// 007d87b6  8b7f04               mov edi, dword ptr [edi + 4]
// 007d87b9  85f6                 test esi, esi
// 007d87bb  7405                 je 0x7d87c2
// 007d87bd  83c6e0               add esi, -0x20
// 007d87c0  eb02                 jmp 0x7d87c4
// 007d87c2  33f6                 xor esi, esi
// 007d87c4  8bce                 mov ecx, esi
// 007d87c6  e86593faff           call 0x781b30
// 007d87cb  a801                 test al, 1
// 007d87cd  7534                 jne 0x7d8803
// 007d87cf  8d4e04               lea ecx, [esi + 4]
// 007d87d2  51                   push ecx
// 007d87d3  ffd5                 call ebp
// 007d87d5  6a00                 push 0
// 007d87d7  6a00                 push 0
// 007d87d9  56                   push esi
// 007d87da  6a02                 push 2
// 007d87dc  8bcb                 mov ecx, ebx
// 007d87de  e8cd4ff8ff           call 0x75d7b0
// 007d87e3  85c0                 test eax, eax
// 007d87e5  7515                 jne 0x7d87fc
// 007d87e7  8bce                 mov ecx, esi
// 007d87e9  e8e28ffaff           call 0x7817d0
// 007d87ee  6a00                 push 0
// 007d87f0  6a00                 push 0
// 007d87f2  56                   push esi
// 007d87f3  6a03                 push 3
// 007d87f5  8bcb                 mov ecx, ebx
// 007d87f7  e8b44ff8ff           call 0x75d7b0
// 007d87fc  8bce                 mov ecx, esi
// 007d87fe  e8a507f4ff           call 0x718fa8
// 007d8803  85ff                 test edi, edi
// 007d8805  75aa                 jne 0x7d87b1
// 007d8807  5f                   pop edi
// 007d8808  5e                   pop esi
// 007d8809  5d                   pop ebp
// 007d880a  5b                   pop ebx
// 007d880b  c20400               ret 4
// 007d880e  85f6                 test esi, esi
// 007d8810  0f8400010000         je 0x7d8916
// 007d8816  8d5604               lea edx, [esi + 4]
// 007d8819  52                   push edx
// 007d881a  ff15d0e18900         call dword ptr [0x89e1d0]
// 007d8820  6a00                 push 0
// 007d8822  6a00                 push 0
// 007d8824  56                   push esi
// 007d8825  6a02                 push 2
// 007d8827  8bcb                 mov ecx, ebx
// 007d8829  e8824ff8ff           call 0x75d7b0
// 007d882e  85c0                 test eax, eax
// 007d8830  7515                 jne 0x7d8847
// 007d8832  8bce                 mov ecx, esi
// 007d8834  e8978ffaff           call 0x7817d0
// 007d8839  6a00                 push 0
// 007d883b  6a00                 push 0
// 007d883d  56                   push esi
// 007d883e  6a03                 push 3
// 007d8840  8bcb                 mov ecx, ebx
// 007d8842  e8694ff8ff           call 0x75d7b0
// 007d8847  8bce                 mov ecx, esi
// 007d8849  e85a07f4ff           call 0x718fa8
// 007d884e  5f                   pop edi
// 007d884f  5e                   pop esi
// 007d8850  5d                   pop ebp
// 007d8851  5b                   pop ebx
// 007d8852  c20400               ret 4
// 007d8855  8b4500               mov eax, dword ptr [ebp]
// 007d8858  8b501c               mov edx, dword ptr [eax + 0x1c]
// 007d885b  8bcd                 mov ecx, ebp
// 007d885d  ffd2                 call edx
// 007d885f  85c0                 test eax, eax
// 007d8861  7548                 jne 0x7d88ab
// 007d8863  50                   push eax
// 007d8864  50                   push eax
// 007d8865  56                   push esi
// 007d8866  6a12                 push 0x12
// 007d8868  8bcb                 mov ecx, ebx
// 007d886a  e8414ff8ff           call 0x75d7b0
// 007d886f  85c0                 test eax, eax
// 007d8871  0f859f000000         jne 0x7d8916
// 007d8877  8b4500               mov eax, dword ptr [ebp]
// 007d887a  8b5018               mov edx, dword ptr [eax + 0x18]
// 007d887d  8bcd                 mov ecx, ebp
// 007d887f  ffd2                 call edx
// 007d8881  8bc8                 mov ecx, eax
// 007d8883  e85205f4ff           call 0x718dda
// 007d8888  8bcf                 mov ecx, edi
// 007d888a  e821e6ffff           call 0x7d6eb0
// 007d888f  8bce                 mov ecx, esi
// 007d8891  e85a8ffaff           call 0x7817f0
// 007d8896  6a00                 push 0
// 007d8898  6a00                 push 0
// 007d889a  56                   push esi
// 007d889b  6a13                 push 0x13
// 007d889d  8bcb                 mov ecx, ebx
// 007d889f  e80c4ff8ff           call 0x75d7b0
// 007d88a4  5f                   pop edi
// 007d88a5  5e                   pop esi
// 007d88a6  5d                   pop ebp
// 007d88a7  5b                   pop ebx
// 007d88a8  c20400               ret 4
// 007d88ab  83bbb800000000       cmp dword ptr [ebx + 0xb8], 0
// 007d88b2  7418                 je 0x7d88cc
// 007d88b4  8bc5                 mov eax, ebp
// 007d88b6  50                   push eax
// 007d88b7  8bcd                 mov ecx, ebp
// 007d88b9  e842d4ffff           call 0x7d5d00
// 007d88be  8bc8                 mov ecx, eax
// 007d88c0  e8db71f8ff           call 0x75faa0
// 007d88c5  5f                   pop edi
// 007d88c6  5e                   pop esi
// 007d88c7  5d                   pop ebp
// 007d88c8  5b                   pop ebx
// 007d88c9  c20400               ret 4
// 007d88cc  85f6                 test esi, esi
// 007d88ce  7419                 je 0x7d88e9
// 007d88d0  8d4620               lea eax, [esi + 0x20]
// 007d88d3  50                   push eax
// 007d88d4  8bcd                 mov ecx, ebp
// 007d88d6  e825d4ffff           call 0x7d5d00
// 007d88db  8bc8                 mov ecx, eax
// 007d88dd  e8be71f8ff           call 0x75faa0
// 007d88e2  5f                   pop edi
// 007d88e3  5e                   pop esi
// 007d88e4  5d                   pop ebp
// 007d88e5  5b                   pop ebx
// 007d88e6  c20400               ret 4
// 007d88e9  33c0                 xor eax, eax
// 007d88eb  50                   push eax
// 007d88ec  8bcd                 mov ecx, ebp
// 007d88ee  e80dd4ffff           call 0x7d5d00
// 007d88f3  8bc8                 mov ecx, eax
// 007d88f5  e8a671f8ff           call 0x75faa0
// 007d88fa  5f                   pop edi
// 007d88fb  5e                   pop esi
// 007d88fc  5d                   pop ebp
// 007d88fd  5b                   pop ebx
// 007d88fe  c20400               ret 4
// 007d8901  8bcf                 mov ecx, edi
// 007d8903  e858f3ffff           call 0x7d7c60
// 007d8908  5f                   pop edi
// 007d8909  5e                   pop esi
// 007d890a  5d                   pop ebp
// 007d890b  5b                   pop ebx
// 007d890c  c20400               ret 4
// 007d890f  8bcf                 mov ecx, edi
// 007d8911  e80adcffff           call 0x7d6520
// 007d8916  5f                   pop edi
// 007d8917  5e                   pop esi
// 007d8918  5d                   pop ebp
// 007d8919  5b                   pop ebx
// 007d891a  c20400               ret 4
// 007d891d  8d4900               lea ecx, [ecx]
// 007d8920  55                   push ebp
// 007d8921  887d00               mov byte ptr [ebp], bh
// 007d8924  94                   xchg esp, eax
// 007d8925  877d00               xchg dword ptr [ebp], edi
// 007d8928  01897d000f89         add dword ptr [ecx - 0x76f0ff83], ecx
// 007d892e  7d00                 jge 0x7d8930
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?OnCaptionButtonClick@CXTPDockingPaneTabbedContainer@@MAEXPAVCXTPDockingPaneCaptionButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
