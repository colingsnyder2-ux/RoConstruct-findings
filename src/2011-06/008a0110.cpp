// roc 2011-06 008a0110  unit: CXTPShortcutManager  size: 535 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008a0110
//
// 008a0110  6aff                 push -1
// 008a0112  685ba1a000           push 0xa0a15b
// 008a0117  64a100000000         mov eax, dword ptr fs:[0]
// 008a011d  50                   push eax
// 008a011e  81ec24010000         sub esp, 0x124
// 008a0124  a12058c900           mov eax, dword ptr [0xc95820]
// 008a0129  33c4                 xor eax, esp
// 008a012b  89842420010000       mov dword ptr [esp + 0x120], eax
// 008a0132  53                   push ebx
// 008a0133  55                   push ebp
// 008a0134  56                   push esi
// 008a0135  57                   push edi
// 008a0136  a12058c900           mov eax, dword ptr [0xc95820]
// 008a013b  33c4                 xor eax, esp
// 008a013d  50                   push eax
// 008a013e  8d842438010000       lea eax, [esp + 0x138]
// 008a0145  64a300000000         mov dword ptr fs:[0], eax
// 008a014b  8b9c244c010000       mov ebx, dword ptr [esp + 0x14c]
// 008a0152  8d43a0               lea eax, [ebx - 0x60]
// 008a0155  83f809               cmp eax, 9
// 008a0158  7717                 ja 0x8a0171
// 008a015a  0fbe8c2448010000     movsx ecx, byte ptr [esp + 0x148]
// 008a0162  83c3d0               add ebx, -0x30
// 008a0165  33c0                 xor eax, eax
// 008a0167  3bcb                 cmp ecx, ebx
// 008a0169  0f94c0               sete al
// 008a016c  e989010000           jmp 0x8a02fa
// 008a0171  6a02                 push 2
// 008a0173  53                   push ebx
// 008a0174  ff15e81aa400         call dword ptr [0xa41ae8]
// 008a017a  84c0                 test al, al
// 008a017c  0f848b000000         je 0x8a020d
// 008a0182  8b942448010000       mov edx, dword ptr [esp + 0x148]
// 008a0189  52                   push edx
// 008a018a  e8d1f5ffff           call 0x89f760
// 008a018f  83c404               add esp, 4
// 008a0192  88442417             mov byte ptr [esp + 0x17], al
// 008a0196  389c2448010000       cmp byte ptr [esp + 0x148], bl
// 008a019d  0f8452010000         je 0x8a02f5
// 008a01a3  3ac3                 cmp al, bl
// 008a01a5  0f844a010000         je 0x8a02f5
// 008a01ab  8b35381aa400         mov esi, dword ptr [0xa41a38]
// 008a01b1  6a00                 push 0
// 008a01b3  6a00                 push 0
// 008a01b5  ffd6                 call esi
// 008a01b7  8be8                 mov ebp, eax
// 008a01b9  896c241c             mov dword ptr [esp + 0x1c], ebp
// 008a01bd  83fd01               cmp ebp, 1
// 008a01c0  764b                 jbe 0x8a020d
// 008a01c2  8d4c2420             lea ecx, [esp + 0x20]
// 008a01c6  e855fdffff           call 0x89ff20
// 008a01cb  6aff                 push -1
// 008a01cd  55                   push ebp
// 008a01ce  8d4c2428             lea ecx, [esp + 0x28]
// 008a01d2  c784244801000000000000 mov dword ptr [esp + 0x148], 0
// 008a01dd  e85ee9f9ff           call 0x83eb40
// 008a01e2  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 008a01e6  57                   push edi
// 008a01e7  55                   push ebp
// 008a01e8  ffd6                 call esi
// 008a01ea  8d442434             lea eax, [esp + 0x34]
// 008a01ee  50                   push eax
// 008a01ef  ff15b41ba400         call dword ptr [0xa41bb4]
// 008a01f5  85c0                 test eax, eax
// 008a01f7  751b                 jne 0x8a0214
// 008a01f9  8d4c2420             lea ecx, [esp + 0x20]
// 008a01fd  c7842440010000ffffffff mov dword ptr [esp + 0x140], 0xffffffff
// 008a0208  e833fdffff           call 0x89ff40
// 008a020d  33c0                 xor eax, eax
// 008a020f  e9e6000000           jmp 0x8a02fa
// 008a0214  33f6                 xor esi, esi
// 008a0216  85ed                 test ebp, ebp
// 008a0218  76df                 jbe 0x8a01f9
// 008a021a  8b2db81ba400         mov ebp, dword ptr [0xa41bb8]
// 008a0220  eb15                 jmp 0x8a0237
// 008a0222  eb0c                 jmp 0x8a0230
// 008a0224  8da42400000000       lea esp, [esp]
// 008a022b  eb03                 jmp 0x8a0230
// 008a022d  8d4900               lea ecx, [ecx]
// 008a0230  8b9c244c010000       mov ebx, dword ptr [esp + 0x14c]
// 008a0237  c744241800000000     mov dword ptr [esp + 0x18], 0
// 008a023f  85f6                 test esi, esi
// 008a0241  0f8cdb000000         jl 0x8a0322
// 008a0247  3b742428             cmp esi, dword ptr [esp + 0x28]
// 008a024b  0f8dd1000000         jge 0x8a0322
// 008a0251  8b0cb7               mov ecx, dword ptr [edi + esi*4]
// 008a0254  51                   push ecx
// 008a0255  6a00                 push 0
// 008a0257  8d542420             lea edx, [esp + 0x20]
// 008a025b  52                   push edx
// 008a025c  8d442440             lea eax, [esp + 0x40]
// 008a0260  50                   push eax
// 008a0261  6a00                 push 0
// 008a0263  53                   push ebx
// 008a0264  ffd5                 call ebp
// 008a0266  83f801               cmp eax, 1
// 008a0269  751c                 jne 0x8a0287
// 008a026b  8b442418             mov eax, dword ptr [esp + 0x18]
// 008a026f  38842448010000       cmp byte ptr [esp + 0x148], al
// 008a0276  7469                 je 0x8a02e1
// 008a0278  50                   push eax
// 008a0279  e8e2f4ffff           call 0x89f760
// 008a027e  83c404               add esp, 4
// 008a0281  38442417             cmp byte ptr [esp + 0x17], al
// 008a0285  745a                 je 0x8a02e1
// 008a0287  8a5c2444             mov bl, byte ptr [esp + 0x44]
// 008a028b  c644244481           mov byte ptr [esp + 0x44], 0x81
// 008a0290  8b0cb7               mov ecx, dword ptr [edi + esi*4]
// 008a0293  51                   push ecx
// 008a0294  8b8c2450010000       mov ecx, dword ptr [esp + 0x150]
// 008a029b  6a00                 push 0
// 008a029d  8d542420             lea edx, [esp + 0x20]
// 008a02a1  52                   push edx
// 008a02a2  8d442440             lea eax, [esp + 0x40]
// 008a02a6  50                   push eax
// 008a02a7  6a00                 push 0
// 008a02a9  51                   push ecx
// 008a02aa  ffd5                 call ebp
// 008a02ac  83f801               cmp eax, 1
// 008a02af  751c                 jne 0x8a02cd
// 008a02b1  8b442418             mov eax, dword ptr [esp + 0x18]
// 008a02b5  38842448010000       cmp byte ptr [esp + 0x148], al
// 008a02bc  7423                 je 0x8a02e1
// 008a02be  50                   push eax
// 008a02bf  e89cf4ffff           call 0x89f760
// 008a02c4  83c404               add esp, 4
// 008a02c7  38442417             cmp byte ptr [esp + 0x17], al
// 008a02cb  7414                 je 0x8a02e1
// 008a02cd  46                   inc esi
// 008a02ce  885c2444             mov byte ptr [esp + 0x44], bl
// 008a02d2  3b74241c             cmp esi, dword ptr [esp + 0x1c]
// 008a02d6  0f8254ffffff         jb 0x8a0230
// 008a02dc  e918ffffff           jmp 0x8a01f9
// 008a02e1  8d4c2420             lea ecx, [esp + 0x20]
// 008a02e5  c7842440010000ffffffff mov dword ptr [esp + 0x140], 0xffffffff
// 008a02f0  e84bfcffff           call 0x89ff40
// 008a02f5  b801000000           mov eax, 1
// 008a02fa  8b8c2438010000       mov ecx, dword ptr [esp + 0x138]
// 008a0301  64890d00000000       mov dword ptr fs:[0], ecx
// 008a0308  59                   pop ecx
// 008a0309  5f                   pop edi
// 008a030a  5e                   pop esi
// 008a030b  5d                   pop ebp
// 008a030c  5b                   pop ebx
// 008a030d  8b8c2420010000       mov ecx, dword ptr [esp + 0x120]
// 008a0314  33cc                 xor ecx, esp
// 008a0316  e8dcb5f6ff           call 0x80b8f7
// 008a031b  81c430010000         add esp, 0x130
// 008a0321  c3                   ret 
// 008a0322  e8e39ff6ff           call 0x80a30a
// copied from an identical function in another client (function ?CompareAccelKey@CXTPShortcutManager@@SAHDI@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPShortcutManager.cpp