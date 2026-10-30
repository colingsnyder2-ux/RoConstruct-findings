// roc 2012-06 00a3cc00  unit: CXTPDockingPaneTabbedContainer  size: 464 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a3cc00
//
// 00a3cc00  53                   push ebx
// 00a3cc01  55                   push ebp
// 00a3cc02  56                   push esi
// 00a3cc03  57                   push edi
// 00a3cc04  8bf9                 mov edi, ecx
// 00a3cc06  8bb7a4010000         mov esi, dword ptr [edi + 0x1a4]
// 00a3cc0c  8d6f54               lea ebp, [edi + 0x54]
// 00a3cc0f  8bcd                 mov ecx, ebp
// 00a3cc11  e85ad5ffff           call 0xa3a170
// 00a3cc16  8bd8                 mov ebx, eax
// 00a3cc18  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a3cc1c  8b4014               mov eax, dword ptr [eax + 0x14]
// 00a3cc1f  0510dbffff           add eax, 0xffffdb10
// 00a3cc24  83f803               cmp eax, 3
// 00a3cc27  0f8789010000         ja 0xa3cdb6
// 00a3cc2d  ff2485c0cda300       jmp dword ptr [eax*4 + 0xa3cdc0]
// 00a3cc34  83bbb400000000       cmp dword ptr [ebx + 0xb4], 0
// 00a3cc3b  7471                 je 0xa3ccae
// 00a3cc3d  8bbf94000000         mov edi, dword ptr [edi + 0x94]
// 00a3cc43  85ff                 test edi, edi
// 00a3cc45  0f846b010000         je 0xa3cdb6
// 00a3cc4b  8b2d9821b200         mov ebp, dword ptr [0xb22198]
// 00a3cc51  8bc7                 mov eax, edi
// 00a3cc53  8b7008               mov esi, dword ptr [eax + 8]
// 00a3cc56  8b7f04               mov edi, dword ptr [edi + 4]
// 00a3cc59  85f6                 test esi, esi
// 00a3cc5b  7405                 je 0xa3cc62
// 00a3cc5d  83c6e0               add esi, -0x20
// 00a3cc60  eb02                 jmp 0xa3cc64
// 00a3cc62  33f6                 xor esi, esi
// 00a3cc64  8bce                 mov ecx, esi
// 00a3cc66  e82574faff           call 0x9e4090
// 00a3cc6b  a801                 test al, 1
// 00a3cc6d  7534                 jne 0xa3cca3
// 00a3cc6f  8d4e04               lea ecx, [esi + 4]
// 00a3cc72  51                   push ecx
// 00a3cc73  ffd5                 call ebp
// 00a3cc75  6a00                 push 0
// 00a3cc77  6a00                 push 0
// 00a3cc79  56                   push esi
// 00a3cc7a  6a02                 push 2
// 00a3cc7c  8bcb                 mov ecx, ebx
// 00a3cc7e  e88d97f8ff           call 0x9c6410
// 00a3cc83  85c0                 test eax, eax
// 00a3cc85  7515                 jne 0xa3cc9c
// 00a3cc87  8bce                 mov ecx, esi
// 00a3cc89  e8a270faff           call 0x9e3d30
// 00a3cc8e  6a00                 push 0
// 00a3cc90  6a00                 push 0
// 00a3cc92  56                   push esi
// 00a3cc93  6a03                 push 3
// 00a3cc95  8bcb                 mov ecx, ebx
// 00a3cc97  e87497f8ff           call 0x9c6410
// 00a3cc9c  8bce                 mov ecx, esi
// 00a3cc9e  e8e759f4ff           call 0x98268a
// 00a3cca3  85ff                 test edi, edi
// 00a3cca5  75aa                 jne 0xa3cc51
// 00a3cca7  5f                   pop edi
// 00a3cca8  5e                   pop esi
// 00a3cca9  5d                   pop ebp
// 00a3ccaa  5b                   pop ebx
// 00a3ccab  c20400               ret 4
// 00a3ccae  85f6                 test esi, esi
// 00a3ccb0  0f8400010000         je 0xa3cdb6
// 00a3ccb6  8d5604               lea edx, [esi + 4]
// 00a3ccb9  52                   push edx
// 00a3ccba  ff159821b200         call dword ptr [0xb22198]
// 00a3ccc0  6a00                 push 0
// 00a3ccc2  6a00                 push 0
// 00a3ccc4  56                   push esi
// 00a3ccc5  6a02                 push 2
// 00a3ccc7  8bcb                 mov ecx, ebx
// 00a3ccc9  e84297f8ff           call 0x9c6410
// 00a3ccce  85c0                 test eax, eax
// 00a3ccd0  7515                 jne 0xa3cce7
// 00a3ccd2  8bce                 mov ecx, esi
// 00a3ccd4  e85770faff           call 0x9e3d30
// 00a3ccd9  6a00                 push 0
// 00a3ccdb  6a00                 push 0
// 00a3ccdd  56                   push esi
// 00a3ccde  6a03                 push 3
// 00a3cce0  8bcb                 mov ecx, ebx
// 00a3cce2  e82997f8ff           call 0x9c6410
// 00a3cce7  8bce                 mov ecx, esi
// 00a3cce9  e89c59f4ff           call 0x98268a
// 00a3ccee  5f                   pop edi
// 00a3ccef  5e                   pop esi
// 00a3ccf0  5d                   pop ebp
// 00a3ccf1  5b                   pop ebx
// 00a3ccf2  c20400               ret 4
// 00a3ccf5  8b4500               mov eax, dword ptr [ebp]
// 00a3ccf8  8b501c               mov edx, dword ptr [eax + 0x1c]
// 00a3ccfb  8bcd                 mov ecx, ebp
// 00a3ccfd  ffd2                 call edx
// 00a3ccff  85c0                 test eax, eax
// 00a3cd01  7548                 jne 0xa3cd4b
// 00a3cd03  50                   push eax
// 00a3cd04  50                   push eax
// 00a3cd05  56                   push esi
// 00a3cd06  6a12                 push 0x12
// 00a3cd08  8bcb                 mov ecx, ebx
// 00a3cd0a  e80197f8ff           call 0x9c6410
// 00a3cd0f  85c0                 test eax, eax
// 00a3cd11  0f859f000000         jne 0xa3cdb6
// 00a3cd17  8b4500               mov eax, dword ptr [ebp]
// 00a3cd1a  8b5018               mov edx, dword ptr [eax + 0x18]
// 00a3cd1d  8bcd                 mov ecx, ebp
// 00a3cd1f  ffd2                 call edx
// 00a3cd21  8bc8                 mov ecx, eax
// 00a3cd23  e87c57f4ff           call 0x9824a4
// 00a3cd28  8bcf                 mov ecx, edi
// 00a3cd2a  e821e6ffff           call 0xa3b350
// 00a3cd2f  8bce                 mov ecx, esi
// 00a3cd31  e81a70faff           call 0x9e3d50
// 00a3cd36  6a00                 push 0
// 00a3cd38  6a00                 push 0
// 00a3cd3a  56                   push esi
// 00a3cd3b  6a13                 push 0x13
// 00a3cd3d  8bcb                 mov ecx, ebx
// 00a3cd3f  e8cc96f8ff           call 0x9c6410
// 00a3cd44  5f                   pop edi
// 00a3cd45  5e                   pop esi
// 00a3cd46  5d                   pop ebp
// 00a3cd47  5b                   pop ebx
// 00a3cd48  c20400               ret 4
// 00a3cd4b  83bbb800000000       cmp dword ptr [ebx + 0xb8], 0
// 00a3cd52  7418                 je 0xa3cd6c
// 00a3cd54  8bc5                 mov eax, ebp
// 00a3cd56  50                   push eax
// 00a3cd57  8bcd                 mov ecx, ebp
// 00a3cd59  e812d4ffff           call 0xa3a170
// 00a3cd5e  8bc8                 mov ecx, eax
// 00a3cd60  e87bb9f8ff           call 0x9c86e0
// 00a3cd65  5f                   pop edi
// 00a3cd66  5e                   pop esi
// 00a3cd67  5d                   pop ebp
// 00a3cd68  5b                   pop ebx
// 00a3cd69  c20400               ret 4
// 00a3cd6c  85f6                 test esi, esi
// 00a3cd6e  7419                 je 0xa3cd89
// 00a3cd70  8d4620               lea eax, [esi + 0x20]
// 00a3cd73  50                   push eax
// 00a3cd74  8bcd                 mov ecx, ebp
// 00a3cd76  e8f5d3ffff           call 0xa3a170
// 00a3cd7b  8bc8                 mov ecx, eax
// 00a3cd7d  e85eb9f8ff           call 0x9c86e0
// 00a3cd82  5f                   pop edi
// 00a3cd83  5e                   pop esi
// 00a3cd84  5d                   pop ebp
// 00a3cd85  5b                   pop ebx
// 00a3cd86  c20400               ret 4
// 00a3cd89  33c0                 xor eax, eax
// 00a3cd8b  50                   push eax
// 00a3cd8c  8bcd                 mov ecx, ebp
// 00a3cd8e  e8ddd3ffff           call 0xa3a170
// 00a3cd93  8bc8                 mov ecx, eax
// 00a3cd95  e846b9f8ff           call 0x9c86e0
// 00a3cd9a  5f                   pop edi
// 00a3cd9b  5e                   pop esi
// 00a3cd9c  5d                   pop ebp
// 00a3cd9d  5b                   pop ebx
// 00a3cd9e  c20400               ret 4
// 00a3cda1  8bcf                 mov ecx, edi
// 00a3cda3  e858f3ffff           call 0xa3c100
// 00a3cda8  5f                   pop edi
// 00a3cda9  5e                   pop esi
// 00a3cdaa  5d                   pop ebp
// 00a3cdab  5b                   pop ebx
// 00a3cdac  c20400               ret 4
// 00a3cdaf  8bcf                 mov ecx, edi
// 00a3cdb1  e80adcffff           call 0xa3a9c0
// 00a3cdb6  5f                   pop edi
// 00a3cdb7  5e                   pop esi
// 00a3cdb8  5d                   pop ebp
// 00a3cdb9  5b                   pop ebx
// 00a3cdba  c20400               ret 4
// 00a3cdbd  8d4900               lea ecx, [ecx]
// 00a3cdc0  f5                   cmc 
// 00a3cdc1  cc                   int3 
// 00a3cdc2  a30034cca3           mov dword ptr [0xa3cc3400], eax
// 00a3cdc7  00a1cda300af         add byte ptr [ecx - 0x50ff5c33], ah
// 00a3cdcd  cda3                 int 0xa3
// copied from an identical function in another client (function ?OnCaptionButtonClick@CXTPDockingPaneTabbedContainer@@MAEXPAVCXTPDockingPaneCaptionButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp