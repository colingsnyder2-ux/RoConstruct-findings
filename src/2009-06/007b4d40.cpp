// roc 2009-06 007b4d40  unit: CXTPShortcutManager  size: 535 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007b4d40
//
// 007b4d40  6aff                 push -1
// 007b4d42  68cbce8700           push 0x87cecb
// 007b4d47  64a100000000         mov eax, dword ptr fs:[0]
// 007b4d4d  50                   push eax
// 007b4d4e  81ec24010000         sub esp, 0x124
// 007b4d54  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007b4d59  33c4                 xor eax, esp
// 007b4d5b  89842420010000       mov dword ptr [esp + 0x120], eax
// 007b4d62  53                   push ebx
// 007b4d63  55                   push ebp
// 007b4d64  56                   push esi
// 007b4d65  57                   push edi
// 007b4d66  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007b4d6b  33c4                 xor eax, esp
// 007b4d6d  50                   push eax
// 007b4d6e  8d842438010000       lea eax, [esp + 0x138]
// 007b4d75  64a300000000         mov dword ptr fs:[0], eax
// 007b4d7b  8b9c244c010000       mov ebx, dword ptr [esp + 0x14c]
// 007b4d82  8d43a0               lea eax, [ebx - 0x60]
// 007b4d85  83f809               cmp eax, 9
// 007b4d88  7717                 ja 0x7b4da1
// 007b4d8a  0fbe8c2448010000     movsx ecx, byte ptr [esp + 0x148]
// 007b4d92  83c3d0               add ebx, -0x30
// 007b4d95  33c0                 xor eax, eax
// 007b4d97  3bcb                 cmp ecx, ebx
// 007b4d99  0f94c0               sete al
// 007b4d9c  e989010000           jmp 0x7b4f2a
// 007b4da1  6a02                 push 2
// 007b4da3  53                   push ebx
// 007b4da4  ff1568ed8900         call dword ptr [0x89ed68]
// 007b4daa  84c0                 test al, al
// 007b4dac  0f848b000000         je 0x7b4e3d
// 007b4db2  8b942448010000       mov edx, dword ptr [esp + 0x148]
// 007b4db9  52                   push edx
// 007b4dba  e861f5ffff           call 0x7b4320
// 007b4dbf  83c404               add esp, 4
// 007b4dc2  88442417             mov byte ptr [esp + 0x17], al
// 007b4dc6  389c2448010000       cmp byte ptr [esp + 0x148], bl
// 007b4dcd  0f8452010000         je 0x7b4f25
// 007b4dd3  3ac3                 cmp al, bl
// 007b4dd5  0f844a010000         je 0x7b4f25
// 007b4ddb  8b35a4ec8900         mov esi, dword ptr [0x89eca4]
// 007b4de1  6a00                 push 0
// 007b4de3  6a00                 push 0
// 007b4de5  ffd6                 call esi
// 007b4de7  8be8                 mov ebp, eax
// 007b4de9  896c241c             mov dword ptr [esp + 0x1c], ebp
// 007b4ded  83fd01               cmp ebp, 1
// 007b4df0  764b                 jbe 0x7b4e3d
// 007b4df2  8d4c2420             lea ecx, [esp + 0x20]
// 007b4df6  e855fdffff           call 0x7b4b50
// 007b4dfb  6aff                 push -1
// 007b4dfd  55                   push ebp
// 007b4dfe  8d4c2428             lea ecx, [esp + 0x28]
// 007b4e02  c784244801000000000000 mov dword ptr [esp + 0x148], 0
// 007b4e0d  e8fed6f9ff           call 0x752510
// 007b4e12  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 007b4e16  57                   push edi
// 007b4e17  55                   push ebp
// 007b4e18  ffd6                 call esi
// 007b4e1a  8d442434             lea eax, [esp + 0x34]
// 007b4e1e  50                   push eax
// 007b4e1f  ff156ced8900         call dword ptr [0x89ed6c]
// 007b4e25  85c0                 test eax, eax
// 007b4e27  751b                 jne 0x7b4e44
// 007b4e29  8d4c2420             lea ecx, [esp + 0x20]
// 007b4e2d  c7842440010000ffffffff mov dword ptr [esp + 0x140], 0xffffffff
// 007b4e38  e833fdffff           call 0x7b4b70
// 007b4e3d  33c0                 xor eax, eax
// 007b4e3f  e9e6000000           jmp 0x7b4f2a
// 007b4e44  33f6                 xor esi, esi
// 007b4e46  85ed                 test ebp, ebp
// 007b4e48  76df                 jbe 0x7b4e29
// 007b4e4a  8b2da8ec8900         mov ebp, dword ptr [0x89eca8]
// 007b4e50  eb15                 jmp 0x7b4e67
// 007b4e52  eb0c                 jmp 0x7b4e60
// 007b4e54  8da42400000000       lea esp, [esp]
// 007b4e5b  eb03                 jmp 0x7b4e60
// 007b4e5d  8d4900               lea ecx, [ecx]
// 007b4e60  8b9c244c010000       mov ebx, dword ptr [esp + 0x14c]
// 007b4e67  c744241800000000     mov dword ptr [esp + 0x18], 0
// 007b4e6f  85f6                 test esi, esi
// 007b4e71  0f8cdb000000         jl 0x7b4f52
// 007b4e77  3b742428             cmp esi, dword ptr [esp + 0x28]
// 007b4e7b  0f8dd1000000         jge 0x7b4f52
// 007b4e81  8b0cb7               mov ecx, dword ptr [edi + esi*4]
// 007b4e84  51                   push ecx
// 007b4e85  6a00                 push 0
// 007b4e87  8d542420             lea edx, [esp + 0x20]
// 007b4e8b  52                   push edx
// 007b4e8c  8d442440             lea eax, [esp + 0x40]
// 007b4e90  50                   push eax
// 007b4e91  6a00                 push 0
// 007b4e93  53                   push ebx
// 007b4e94  ffd5                 call ebp
// 007b4e96  83f801               cmp eax, 1
// 007b4e99  751c                 jne 0x7b4eb7
// 007b4e9b  8b442418             mov eax, dword ptr [esp + 0x18]
// 007b4e9f  38842448010000       cmp byte ptr [esp + 0x148], al
// 007b4ea6  7469                 je 0x7b4f11
// 007b4ea8  50                   push eax
// 007b4ea9  e872f4ffff           call 0x7b4320
// 007b4eae  83c404               add esp, 4
// 007b4eb1  38442417             cmp byte ptr [esp + 0x17], al
// 007b4eb5  745a                 je 0x7b4f11
// 007b4eb7  8a5c2444             mov bl, byte ptr [esp + 0x44]
// 007b4ebb  c644244481           mov byte ptr [esp + 0x44], 0x81
// 007b4ec0  8b0cb7               mov ecx, dword ptr [edi + esi*4]
// 007b4ec3  51                   push ecx
// 007b4ec4  8b8c2450010000       mov ecx, dword ptr [esp + 0x150]
// 007b4ecb  6a00                 push 0
// 007b4ecd  8d542420             lea edx, [esp + 0x20]
// 007b4ed1  52                   push edx
// 007b4ed2  8d442440             lea eax, [esp + 0x40]
// 007b4ed6  50                   push eax
// 007b4ed7  6a00                 push 0
// 007b4ed9  51                   push ecx
// 007b4eda  ffd5                 call ebp
// 007b4edc  83f801               cmp eax, 1
// 007b4edf  751c                 jne 0x7b4efd
// 007b4ee1  8b442418             mov eax, dword ptr [esp + 0x18]
// 007b4ee5  38842448010000       cmp byte ptr [esp + 0x148], al
// 007b4eec  7423                 je 0x7b4f11
// 007b4eee  50                   push eax
// 007b4eef  e82cf4ffff           call 0x7b4320
// 007b4ef4  83c404               add esp, 4
// 007b4ef7  38442417             cmp byte ptr [esp + 0x17], al
// 007b4efb  7414                 je 0x7b4f11
// 007b4efd  46                   inc esi
// 007b4efe  885c2444             mov byte ptr [esp + 0x44], bl
// 007b4f02  3b74241c             cmp esi, dword ptr [esp + 0x1c]
// 007b4f06  0f8254ffffff         jb 0x7b4e60
// 007b4f0c  e918ffffff           jmp 0x7b4e29
// 007b4f11  8d4c2420             lea ecx, [esp + 0x20]
// 007b4f15  c7842440010000ffffffff mov dword ptr [esp + 0x140], 0xffffffff
// 007b4f20  e84bfcffff           call 0x7b4b70
// 007b4f25  b801000000           mov eax, 1
// 007b4f2a  8b8c2438010000       mov ecx, dword ptr [esp + 0x138]
// 007b4f31  64890d00000000       mov dword ptr fs:[0], ecx
// 007b4f38  59                   pop ecx
// 007b4f39  5f                   pop edi
// 007b4f3a  5e                   pop esi
// 007b4f3b  5d                   pop ebp
// 007b4f3c  5b                   pop ebx
// 007b4f3d  8b8c2420010000       mov ecx, dword ptr [esp + 0x120]
// 007b4f44  33cc                 xor ecx, esp
// 007b4f46  e82f56f6ff           call 0x71a57a
// 007b4f4b  81c430010000         add esp, 0x130
// 007b4f51  c3                   ret 
// 007b4f52  e88d3df6ff           call 0x718ce4
// copied from an identical function in another client (function ?CompareAccelKey@CXTPShortcutManager@@SAHDI@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPShortcutManager.cpp