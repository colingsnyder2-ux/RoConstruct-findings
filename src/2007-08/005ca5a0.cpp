// roc 2007-08 005ca5a0  unit: seg_005c0000  size: 714 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ca5a0
//
// 005ca5a0  53                   push ebx
// 005ca5a1  55                   push ebp
// 005ca5a2  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 005ca5a6  56                   push esi
// 005ca5a7  8b742414             mov esi, dword ptr [esp + 0x14]
// 005ca5ab  57                   push edi
// 005ca5ac  8d642400             lea esp, [esp]
// 005ca5b0  0fbe4500             movsx eax, byte ptr [ebp]
// 005ca5b4  83f829               cmp eax, 0x29
// 005ca5b7  0f87e4000000         ja 0x5ca6a1
// 005ca5bd  0fb68014a85c00       movzx eax, byte ptr [eax + 0x5ca814]
// 005ca5c4  ff2485fca75c00       jmp dword ptr [eax*4 + 0x5ca7fc]
// 005ca5cb  8a4501               mov al, byte ptr [ebp + 1]
// 005ca5ce  3c62                 cmp al, 0x62
// 005ca5d0  0f84a1000000         je 0x5ca677
// 005ca5d6  3c66                 cmp al, 0x66
// 005ca5d8  7433                 je 0x5ca60d
// 005ca5da  0fb6c8               movzx ecx, al
// 005ca5dd  51                   push ecx
// 005ca5de  ff159ce87700         call dword ptr [0x77e89c]
// 005ca5e4  83c404               add esp, 4
// 005ca5e7  85c0                 test eax, eax
// 005ca5e9  0f84b2000000         je 0x5ca6a1
// 005ca5ef  0fb64501             movzx eax, byte ptr [ebp + 1]
// 005ca5f3  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005ca5f7  8bde                 mov ebx, esi
// 005ca5f9  e8d2feffff           call 0x5ca4d0
// 005ca5fe  8bf0                 mov esi, eax
// 005ca600  85f6                 test esi, esi
// 005ca602  0f84ed010000         je 0x5ca7f5
// 005ca608  83c502               add ebp, 2
// 005ca60b  eba3                 jmp 0x5ca5b0
// 005ca60d  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005ca611  83c502               add ebp, 2
// 005ca614  807d005b             cmp byte ptr [ebp], 0x5b
// 005ca618  7411                 je 0x5ca62b
// 005ca61a  8b5708               mov edx, dword ptr [edi + 8]
// 005ca61d  685c9f7b00           push 0x7b9f5c
// 005ca622  52                   push edx
// 005ca623  e8b842ffff           call 0x5be8e0
// 005ca628  83c408               add esp, 8
// 005ca62b  8bc5                 mov eax, ebp
// 005ca62d  e81efaffff           call 0x5ca050
// 005ca632  3b37                 cmp esi, dword ptr [edi]
// 005ca634  8bd8                 mov ebx, eax
// 005ca636  7504                 jne 0x5ca63c
// 005ca638  32c0                 xor al, al
// 005ca63a  eb03                 jmp 0x5ca63f
// 005ca63c  8a46ff               mov al, byte ptr [esi - 1]
// 005ca63f  0fb6c0               movzx eax, al
// 005ca642  8d7bff               lea edi, [ebx - 1]
// 005ca645  57                   push edi
// 005ca646  50                   push eax
// 005ca647  8bc5                 mov eax, ebp
// 005ca649  e892fbffff           call 0x5ca1e0
// 005ca64e  83c408               add esp, 8
// 005ca651  85c0                 test eax, eax
// 005ca653  0f859c010000         jne 0x5ca7f5
// 005ca659  0fb60e               movzx ecx, byte ptr [esi]
// 005ca65c  57                   push edi
// 005ca65d  51                   push ecx
// 005ca65e  8bc5                 mov eax, ebp
// 005ca660  e87bfbffff           call 0x5ca1e0
// 005ca665  83c408               add esp, 8
// 005ca668  85c0                 test eax, eax
// 005ca66a  0f8485010000         je 0x5ca7f5
// 005ca670  8beb                 mov ebp, ebx
// 005ca672  e939ffffff           jmp 0x5ca5b0
// 005ca677  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 005ca67b  8d4502               lea eax, [ebp + 2]
// 005ca67e  8bce                 mov ecx, esi
// 005ca680  e8fbfbffff           call 0x5ca280
// 005ca685  8bf0                 mov esi, eax
// 005ca687  85f6                 test esi, esi
// 005ca689  0f8466010000         je 0x5ca7f5
// 005ca68f  83c504               add ebp, 4
// 005ca692  e919ffffff           jmp 0x5ca5b0
// 005ca697  807d0100             cmp byte ptr [ebp + 1], 0
// 005ca69b  0f8402010000         je 0x5ca7a3
// 005ca6a1  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 005ca6a5  8bc5                 mov eax, ebp
// 005ca6a7  8bfb                 mov edi, ebx
// 005ca6a9  e8a2f9ffff           call 0x5ca050
// 005ca6ae  3b7304               cmp esi, dword ptr [ebx + 4]
// 005ca6b1  8bf8                 mov edi, eax
// 005ca6b3  734c                 jae 0x5ca701
// 005ca6b5  8a4d00               mov cl, byte ptr [ebp]
// 005ca6b8  80f925               cmp cl, 0x25
// 005ca6bb  0fb606               movzx eax, byte ptr [esi]
// 005ca6be  7429                 je 0x5ca6e9
// 005ca6c0  80f92e               cmp cl, 0x2e
// 005ca6c3  7435                 je 0x5ca6fa
// 005ca6c5  80f95b               cmp cl, 0x5b
// 005ca6c8  740e                 je 0x5ca6d8
// 005ca6ca  0fb6d1               movzx edx, cl
// 005ca6cd  33c9                 xor ecx, ecx
// 005ca6cf  3bd0                 cmp edx, eax
// 005ca6d1  0f94c1               sete cl
// 005ca6d4  8bc1                 mov eax, ecx
// 005ca6d6  eb1e                 jmp 0x5ca6f6
// 005ca6d8  8d57ff               lea edx, [edi - 1]
// 005ca6db  52                   push edx
// 005ca6dc  50                   push eax
// 005ca6dd  8bc5                 mov eax, ebp
// 005ca6df  e8fcfaffff           call 0x5ca1e0
// 005ca6e4  83c408               add esp, 8
// 005ca6e7  eb0d                 jmp 0x5ca6f6
// 005ca6e9  0fb65d01             movzx ebx, byte ptr [ebp + 1]
// 005ca6ed  e8cef9ffff           call 0x5ca0c0
// 005ca6f2  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 005ca6f6  85c0                 test eax, eax
// 005ca6f8  7407                 je 0x5ca701
// 005ca6fa  b901000000           mov ecx, 1
// 005ca6ff  eb02                 jmp 0x5ca703
// 005ca701  33c9                 xor ecx, ecx
// 005ca703  0fbe07               movsx eax, byte ptr [edi]
// 005ca706  83c0d6               add eax, -0x2a
// 005ca709  83f815               cmp eax, 0x15
// 005ca70c  7733                 ja 0x5ca741
// 005ca70e  0fb68054a85c00       movzx eax, byte ptr [eax + 0x5ca854]
// 005ca715  ff248540a85c00       jmp dword ptr [eax*4 + 0x5ca840]
// 005ca71c  85c9                 test ecx, ecx
// 005ca71e  7419                 je 0x5ca739
// 005ca720  8d4f01               lea ecx, [edi + 1]
// 005ca723  51                   push ecx
// 005ca724  8d5601               lea edx, [esi + 1]
// 005ca727  52                   push edx
// 005ca728  53                   push ebx
// 005ca729  e872feffff           call 0x5ca5a0
// 005ca72e  83c40c               add esp, 0xc
// 005ca731  85c0                 test eax, eax
// 005ca733  0f85be000000         jne 0x5ca7f7
// 005ca739  8d6f01               lea ebp, [edi + 1]
// 005ca73c  e96ffeffff           jmp 0x5ca5b0
// 005ca741  85c9                 test ecx, ecx
// 005ca743  0f84ac000000         je 0x5ca7f5
// 005ca749  83c601               add esi, 1
// 005ca74c  8bef                 mov ebp, edi
// 005ca74e  e95dfeffff           jmp 0x5ca5b0
// 005ca753  807d0129             cmp byte ptr [ebp + 1], 0x29
// 005ca757  8d4501               lea eax, [ebp + 1]
// 005ca75a  8bde                 mov ebx, esi
// 005ca75c  8b742414             mov esi, dword ptr [esp + 0x14]
// 005ca760  7513                 jne 0x5ca775
// 005ca762  6afe                 push -2
// 005ca764  83c502               add ebp, 2
// 005ca767  55                   push ebp
// 005ca768  e8b3fcffff           call 0x5ca420
// 005ca76d  83c408               add esp, 8
// 005ca770  5f                   pop edi
// 005ca771  5e                   pop esi
// 005ca772  5d                   pop ebp
// 005ca773  5b                   pop ebx
// 005ca774  c3                   ret 
// 005ca775  6aff                 push -1
// 005ca777  50                   push eax
// 005ca778  e8a3fcffff           call 0x5ca420
// 005ca77d  83c408               add esp, 8
// 005ca780  5f                   pop edi
// 005ca781  5e                   pop esi
// 005ca782  5d                   pop ebp
// 005ca783  5b                   pop ebx
// 005ca784  c3                   ret 
// 005ca785  83c501               add ebp, 1
// 005ca788  8bde                 mov ebx, esi
// 005ca78a  8b742414             mov esi, dword ptr [esp + 0x14]
// 005ca78e  55                   push ebp
// 005ca78f  e8dcfcffff           call 0x5ca470
// 005ca794  83c404               add esp, 4
// 005ca797  5f                   pop edi
// 005ca798  5e                   pop esi
// 005ca799  5d                   pop ebp
// 005ca79a  5b                   pop ebx
// 005ca79b  c3                   ret 
// 005ca79c  5f                   pop edi
// 005ca79d  8bc6                 mov eax, esi
// 005ca79f  5e                   pop esi
// 005ca7a0  5d                   pop ebp
// 005ca7a1  5b                   pop ebx
// 005ca7a2  c3                   ret 
// 005ca7a3  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005ca7a7  33c0                 xor eax, eax
// 005ca7a9  3b7104               cmp esi, dword ptr [ecx + 4]
// 005ca7ac  5f                   pop edi
// 005ca7ad  0f95c0               setne al
// 005ca7b0  83e801               sub eax, 1
// 005ca7b3  23c6                 and eax, esi
// 005ca7b5  5e                   pop esi
// 005ca7b6  5d                   pop ebp
// 005ca7b7  5b                   pop ebx
// 005ca7b8  c3                   ret 
// 005ca7b9  57                   push edi
// 005ca7ba  55                   push ebp
// 005ca7bb  56                   push esi
// 005ca7bc  53                   push ebx
// 005ca7bd  e82efbffff           call 0x5ca2f0
// 005ca7c2  83c410               add esp, 0x10
// 005ca7c5  5f                   pop edi
// 005ca7c6  5e                   pop esi
// 005ca7c7  5d                   pop ebp
// 005ca7c8  5b                   pop ebx
// 005ca7c9  c3                   ret 
// 005ca7ca  85c9                 test ecx, ecx
// 005ca7cc  7427                 je 0x5ca7f5
// 005ca7ce  57                   push edi
// 005ca7cf  55                   push ebp
// 005ca7d0  83c601               add esi, 1
// 005ca7d3  56                   push esi
// 005ca7d4  53                   push ebx
// 005ca7d5  e816fbffff           call 0x5ca2f0
// 005ca7da  83c410               add esp, 0x10
// 005ca7dd  5f                   pop edi
// 005ca7de  5e                   pop esi
// 005ca7df  5d                   pop ebp
// 005ca7e0  5b                   pop ebx
// 005ca7e1  c3                   ret 
// 005ca7e2  57                   push edi
// 005ca7e3  53                   push ebx
// 005ca7e4  8bfd                 mov edi, ebp
// 005ca7e6  8bc6                 mov eax, esi
// 005ca7e8  e8a3fbffff           call 0x5ca390
// 005ca7ed  83c408               add esp, 8
// 005ca7f0  5f                   pop edi
// 005ca7f1  5e                   pop esi
// 005ca7f2  5d                   pop ebp
// 005ca7f3  5b                   pop ebx
// 005ca7f4  c3                   ret 
// 005ca7f5  33c0                 xor eax, eax
// 005ca7f7  5f                   pop edi
// 005ca7f8  5e                   pop esi
// 005ca7f9  5d                   pop ebp
// 005ca7fa  5b                   pop ebx
// 005ca7fb  c3                   ret 
// 005ca7fc  9c                   pushfd 
// 005ca7fd  a7                   cmpsd dword ptr [esi], dword ptr es:[edi]
// 005ca7fe  5c                   pop esp
// 005ca7ff  0097a65c00cb         add byte ptr [edi - 0x34ffa35a], dl
// 005ca805  a5                   movsd dword ptr es:[edi], dword ptr [esi]
// 005ca806  5c                   pop esp
// 005ca807  0053a7               add byte ptr [ebx - 0x59], dl
// 005ca80a  5c                   pop esp
// 005ca80b  0085a75c00a1         add byte ptr [ebp - 0x5effa359], al
// 005ca811  a6                   cmpsb byte ptr [esi], byte ptr es:[edi]
// 005ca812  5c                   pop esp
// 005ca813  0000                 add byte ptr [eax], al
// 005ca815  0505050505           add eax, 0x5050505
// 005ca81a  0505050505           add eax, 0x5050505
// 005ca81f  0505050505           add eax, 0x5050505
// 005ca824  0505050505           add eax, 0x5050505
// 005ca829  0505050505           add eax, 0x5050505
// 005ca82e  0505050505           add eax, 0x5050505
// 005ca833  0505050505           add eax, 0x5050505
// 005ca838  0102                 add dword ptr [edx], eax
// 005ca83a  050503048b           add eax, 0x8b040305
// copied from an identical function in another client (function _match)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1-dll lstrlib.c