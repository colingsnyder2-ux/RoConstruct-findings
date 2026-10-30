// roc 2010-06 00867380  unit: CXTPDockingPaneTabbedContainer  size: 464 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00867380
//
// 00867380  53                   push ebx
// 00867381  55                   push ebp
// 00867382  56                   push esi
// 00867383  57                   push edi
// 00867384  8bf9                 mov edi, ecx
// 00867386  8bb7a4010000         mov esi, dword ptr [edi + 0x1a4]
// 0086738c  8d6f54               lea ebp, [edi + 0x54]
// 0086738f  8bcd                 mov ecx, ebp
// 00867391  e87ad5ffff           call 0x864910
// 00867396  8bd8                 mov ebx, eax
// 00867398  8b442414             mov eax, dword ptr [esp + 0x14]
// 0086739c  8b4014               mov eax, dword ptr [eax + 0x14]
// 0086739f  0510dbffff           add eax, 0xffffdb10
// 008673a4  83f803               cmp eax, 3
// 008673a7  0f8789010000         ja 0x867536
// 008673ad  ff248540758600       jmp dword ptr [eax*4 + 0x867540]
// 008673b4  83bbb400000000       cmp dword ptr [ebx + 0xb4], 0
// 008673bb  7471                 je 0x86742e
// 008673bd  8bbf94000000         mov edi, dword ptr [edi + 0x94]
// 008673c3  85ff                 test edi, edi
// 008673c5  0f846b010000         je 0x867536
// 008673cb  8b2d80a39e00         mov ebp, dword ptr [0x9ea380]
// 008673d1  8bc7                 mov eax, edi
// 008673d3  8b7008               mov esi, dword ptr [eax + 8]
// 008673d6  8b7f04               mov edi, dword ptr [edi + 4]
// 008673d9  85f6                 test esi, esi
// 008673db  7405                 je 0x8673e2
// 008673dd  83c6e0               add esi, -0x20
// 008673e0  eb02                 jmp 0x8673e4
// 008673e2  33f6                 xor esi, esi
// 008673e4  8bce                 mov ecx, esi
// 008673e6  e86597faff           call 0x810b50
// 008673eb  a801                 test al, 1
// 008673ed  7534                 jne 0x867423
// 008673ef  8d4e04               lea ecx, [esi + 4]
// 008673f2  51                   push ecx
// 008673f3  ffd5                 call ebp
// 008673f5  6a00                 push 0
// 008673f7  6a00                 push 0
// 008673f9  56                   push esi
// 008673fa  6a02                 push 2
// 008673fc  8bcb                 mov ecx, ebx
// 008673fe  e83d53f8ff           call 0x7ec740
// 00867403  85c0                 test eax, eax
// 00867405  7515                 jne 0x86741c
// 00867407  8bce                 mov ecx, esi
// 00867409  e8e293faff           call 0x8107f0
// 0086740e  6a00                 push 0
// 00867410  6a00                 push 0
// 00867412  56                   push esi
// 00867413  6a03                 push 3
// 00867415  8bcb                 mov ecx, ebx
// 00867417  e82453f8ff           call 0x7ec740
// 0086741c  8bce                 mov ecx, esi
// 0086741e  e8f90af4ff           call 0x7a7f1c
// 00867423  85ff                 test edi, edi
// 00867425  75aa                 jne 0x8673d1
// 00867427  5f                   pop edi
// 00867428  5e                   pop esi
// 00867429  5d                   pop ebp
// 0086742a  5b                   pop ebx
// 0086742b  c20400               ret 4
// 0086742e  85f6                 test esi, esi
// 00867430  0f8400010000         je 0x867536
// 00867436  8d5604               lea edx, [esi + 4]
// 00867439  52                   push edx
// 0086743a  ff1580a39e00         call dword ptr [0x9ea380]
// 00867440  6a00                 push 0
// 00867442  6a00                 push 0
// 00867444  56                   push esi
// 00867445  6a02                 push 2
// 00867447  8bcb                 mov ecx, ebx
// 00867449  e8f252f8ff           call 0x7ec740
// 0086744e  85c0                 test eax, eax
// 00867450  7515                 jne 0x867467
// 00867452  8bce                 mov ecx, esi
// 00867454  e89793faff           call 0x8107f0
// 00867459  6a00                 push 0
// 0086745b  6a00                 push 0
// 0086745d  56                   push esi
// 0086745e  6a03                 push 3
// 00867460  8bcb                 mov ecx, ebx
// 00867462  e8d952f8ff           call 0x7ec740
// 00867467  8bce                 mov ecx, esi
// 00867469  e8ae0af4ff           call 0x7a7f1c
// 0086746e  5f                   pop edi
// 0086746f  5e                   pop esi
// 00867470  5d                   pop ebp
// 00867471  5b                   pop ebx
// 00867472  c20400               ret 4
// 00867475  8b4500               mov eax, dword ptr [ebp]
// 00867478  8b501c               mov edx, dword ptr [eax + 0x1c]
// 0086747b  8bcd                 mov ecx, ebp
// 0086747d  ffd2                 call edx
// 0086747f  85c0                 test eax, eax
// 00867481  7548                 jne 0x8674cb
// 00867483  50                   push eax
// 00867484  50                   push eax
// 00867485  56                   push esi
// 00867486  6a12                 push 0x12
// 00867488  8bcb                 mov ecx, ebx
// 0086748a  e8b152f8ff           call 0x7ec740
// 0086748f  85c0                 test eax, eax
// 00867491  0f859f000000         jne 0x867536
// 00867497  8b4500               mov eax, dword ptr [ebp]
// 0086749a  8b5018               mov edx, dword ptr [eax + 0x18]
// 0086749d  8bcd                 mov ecx, ebp
// 0086749f  ffd2                 call edx
// 008674a1  8bc8                 mov ecx, eax
// 008674a3  e89a08f4ff           call 0x7a7d42
// 008674a8  8bcf                 mov ecx, edi
// 008674aa  e821e6ffff           call 0x865ad0
// 008674af  8bce                 mov ecx, esi
// 008674b1  e85a93faff           call 0x810810
// 008674b6  6a00                 push 0
// 008674b8  6a00                 push 0
// 008674ba  56                   push esi
// 008674bb  6a13                 push 0x13
// 008674bd  8bcb                 mov ecx, ebx
// 008674bf  e87c52f8ff           call 0x7ec740
// 008674c4  5f                   pop edi
// 008674c5  5e                   pop esi
// 008674c6  5d                   pop ebp
// 008674c7  5b                   pop ebx
// 008674c8  c20400               ret 4
// 008674cb  83bbb800000000       cmp dword ptr [ebx + 0xb8], 0
// 008674d2  7418                 je 0x8674ec
// 008674d4  8bc5                 mov eax, ebp
// 008674d6  50                   push eax
// 008674d7  8bcd                 mov ecx, ebp
// 008674d9  e832d4ffff           call 0x864910
// 008674de  8bc8                 mov ecx, eax
// 008674e0  e8db74f8ff           call 0x7ee9c0
// 008674e5  5f                   pop edi
// 008674e6  5e                   pop esi
// 008674e7  5d                   pop ebp
// 008674e8  5b                   pop ebx
// 008674e9  c20400               ret 4
// 008674ec  85f6                 test esi, esi
// 008674ee  7419                 je 0x867509
// 008674f0  8d4620               lea eax, [esi + 0x20]
// 008674f3  50                   push eax
// 008674f4  8bcd                 mov ecx, ebp
// 008674f6  e815d4ffff           call 0x864910
// 008674fb  8bc8                 mov ecx, eax
// 008674fd  e8be74f8ff           call 0x7ee9c0
// 00867502  5f                   pop edi
// 00867503  5e                   pop esi
// 00867504  5d                   pop ebp
// 00867505  5b                   pop ebx
// 00867506  c20400               ret 4
// 00867509  33c0                 xor eax, eax
// 0086750b  50                   push eax
// 0086750c  8bcd                 mov ecx, ebp
// 0086750e  e8fdd3ffff           call 0x864910
// 00867513  8bc8                 mov ecx, eax
// 00867515  e8a674f8ff           call 0x7ee9c0
// 0086751a  5f                   pop edi
// 0086751b  5e                   pop esi
// 0086751c  5d                   pop ebp
// 0086751d  5b                   pop ebx
// 0086751e  c20400               ret 4
// 00867521  8bcf                 mov ecx, edi
// 00867523  e858f3ffff           call 0x866880
// 00867528  5f                   pop edi
// 00867529  5e                   pop esi
// 0086752a  5d                   pop ebp
// 0086752b  5b                   pop ebx
// 0086752c  c20400               ret 4
// 0086752f  8bcf                 mov ecx, edi
// 00867531  e80adcffff           call 0x865140
// 00867536  5f                   pop edi
// 00867537  5e                   pop esi
// 00867538  5d                   pop ebp
// 00867539  5b                   pop ebx
// 0086753a  c20400               ret 4
// 0086753d  8d4900               lea ecx, [ecx]
// 00867540  7574                 jne 0x8675b6
// 00867542  8600                 xchg byte ptr [eax], al
// 00867544  b473                 mov ah, 0x73
// 00867546  8600                 xchg byte ptr [eax], al
// 00867548  217586               and dword ptr [ebp - 0x7a], esi
// 0086754b  002f                 add byte ptr [edi], ch
// 0086754d  7586                 jne 0x8674d5
// copied from an identical function in another client (function ?OnCaptionButtonClick@CXTPDockingPaneTabbedContainer@@MAEXPAVCXTPDockingPaneCaptionButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp