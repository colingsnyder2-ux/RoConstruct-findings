// roc 2010-06 00842f50  unit: CXTPShortcutManager  size: 535 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00842f50
//
// 00842f50  6aff                 push -1
// 00842f52  688b6f9b00           push 0x9b6f8b
// 00842f57  64a100000000         mov eax, dword ptr fs:[0]
// 00842f5d  50                   push eax
// 00842f5e  81ec24010000         sub esp, 0x124
// 00842f64  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 00842f69  33c4                 xor eax, esp
// 00842f6b  89842420010000       mov dword ptr [esp + 0x120], eax
// 00842f72  53                   push ebx
// 00842f73  55                   push ebp
// 00842f74  56                   push esi
// 00842f75  57                   push edi
// 00842f76  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 00842f7b  33c4                 xor eax, esp
// 00842f7d  50                   push eax
// 00842f7e  8d842438010000       lea eax, [esp + 0x138]
// 00842f85  64a300000000         mov dword ptr fs:[0], eax
// 00842f8b  8b9c244c010000       mov ebx, dword ptr [esp + 0x14c]
// 00842f92  8d43a0               lea eax, [ebx - 0x60]
// 00842f95  83f809               cmp eax, 9
// 00842f98  7717                 ja 0x842fb1
// 00842f9a  0fbe8c2448010000     movsx ecx, byte ptr [esp + 0x148]
// 00842fa2  83c3d0               add ebx, -0x30
// 00842fa5  33c0                 xor eax, eax
// 00842fa7  3bcb                 cmp ecx, ebx
// 00842fa9  0f94c0               sete al
// 00842fac  e989010000           jmp 0x84313a
// 00842fb1  6a02                 push 2
// 00842fb3  53                   push ebx
// 00842fb4  ff1588bb9e00         call dword ptr [0x9ebb88]
// 00842fba  84c0                 test al, al
// 00842fbc  0f848b000000         je 0x84304d
// 00842fc2  8b942448010000       mov edx, dword ptr [esp + 0x148]
// 00842fc9  52                   push edx
// 00842fca  e8d1f5ffff           call 0x8425a0
// 00842fcf  83c404               add esp, 4
// 00842fd2  88442417             mov byte ptr [esp + 0x17], al
// 00842fd6  389c2448010000       cmp byte ptr [esp + 0x148], bl
// 00842fdd  0f8452010000         je 0x843135
// 00842fe3  3ac3                 cmp al, bl
// 00842fe5  0f844a010000         je 0x843135
// 00842feb  8b350cbb9e00         mov esi, dword ptr [0x9ebb0c]
// 00842ff1  6a00                 push 0
// 00842ff3  6a00                 push 0
// 00842ff5  ffd6                 call esi
// 00842ff7  8be8                 mov ebp, eax
// 00842ff9  896c241c             mov dword ptr [esp + 0x1c], ebp
// 00842ffd  83fd01               cmp ebp, 1
// 00843000  764b                 jbe 0x84304d
// 00843002  8d4c2420             lea ecx, [esp + 0x20]
// 00843006  e855fdffff           call 0x842d60
// 0084300b  6aff                 push -1
// 0084300d  55                   push ebp
// 0084300e  8d4c2428             lea ecx, [esp + 0x28]
// 00843012  c784244801000000000000 mov dword ptr [esp + 0x148], 0
// 0084301d  e8dee2f9ff           call 0x7e1300
// 00843022  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00843026  57                   push edi
// 00843027  55                   push ebp
// 00843028  ffd6                 call esi
// 0084302a  8d442434             lea eax, [esp + 0x34]
// 0084302e  50                   push eax
// 0084302f  ff158cbb9e00         call dword ptr [0x9ebb8c]
// 00843035  85c0                 test eax, eax
// 00843037  751b                 jne 0x843054
// 00843039  8d4c2420             lea ecx, [esp + 0x20]
// 0084303d  c7842440010000ffffffff mov dword ptr [esp + 0x140], 0xffffffff
// 00843048  e833fdffff           call 0x842d80
// 0084304d  33c0                 xor eax, eax
// 0084304f  e9e6000000           jmp 0x84313a
// 00843054  33f6                 xor esi, esi
// 00843056  85ed                 test ebp, ebp
// 00843058  76df                 jbe 0x843039
// 0084305a  8b2d10bb9e00         mov ebp, dword ptr [0x9ebb10]
// 00843060  eb15                 jmp 0x843077
// 00843062  eb0c                 jmp 0x843070
// 00843064  8da42400000000       lea esp, [esp]
// 0084306b  eb03                 jmp 0x843070
// 0084306d  8d4900               lea ecx, [ecx]
// 00843070  8b9c244c010000       mov ebx, dword ptr [esp + 0x14c]
// 00843077  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0084307f  85f6                 test esi, esi
// 00843081  0f8cdb000000         jl 0x843162
// 00843087  3b742428             cmp esi, dword ptr [esp + 0x28]
// 0084308b  0f8dd1000000         jge 0x843162
// 00843091  8b0cb7               mov ecx, dword ptr [edi + esi*4]
// 00843094  51                   push ecx
// 00843095  6a00                 push 0
// 00843097  8d542420             lea edx, [esp + 0x20]
// 0084309b  52                   push edx
// 0084309c  8d442440             lea eax, [esp + 0x40]
// 008430a0  50                   push eax
// 008430a1  6a00                 push 0
// 008430a3  53                   push ebx
// 008430a4  ffd5                 call ebp
// 008430a6  83f801               cmp eax, 1
// 008430a9  751c                 jne 0x8430c7
// 008430ab  8b442418             mov eax, dword ptr [esp + 0x18]
// 008430af  38842448010000       cmp byte ptr [esp + 0x148], al
// 008430b6  7469                 je 0x843121
// 008430b8  50                   push eax
// 008430b9  e8e2f4ffff           call 0x8425a0
// 008430be  83c404               add esp, 4
// 008430c1  38442417             cmp byte ptr [esp + 0x17], al
// 008430c5  745a                 je 0x843121
// 008430c7  8a5c2444             mov bl, byte ptr [esp + 0x44]
// 008430cb  c644244481           mov byte ptr [esp + 0x44], 0x81
// 008430d0  8b0cb7               mov ecx, dword ptr [edi + esi*4]
// 008430d3  51                   push ecx
// 008430d4  8b8c2450010000       mov ecx, dword ptr [esp + 0x150]
// 008430db  6a00                 push 0
// 008430dd  8d542420             lea edx, [esp + 0x20]
// 008430e1  52                   push edx
// 008430e2  8d442440             lea eax, [esp + 0x40]
// 008430e6  50                   push eax
// 008430e7  6a00                 push 0
// 008430e9  51                   push ecx
// 008430ea  ffd5                 call ebp
// 008430ec  83f801               cmp eax, 1
// 008430ef  751c                 jne 0x84310d
// 008430f1  8b442418             mov eax, dword ptr [esp + 0x18]
// 008430f5  38842448010000       cmp byte ptr [esp + 0x148], al
// 008430fc  7423                 je 0x843121
// 008430fe  50                   push eax
// 008430ff  e89cf4ffff           call 0x8425a0
// 00843104  83c404               add esp, 4
// 00843107  38442417             cmp byte ptr [esp + 0x17], al
// 0084310b  7414                 je 0x843121
// 0084310d  46                   inc esi
// 0084310e  885c2444             mov byte ptr [esp + 0x44], bl
// 00843112  3b74241c             cmp esi, dword ptr [esp + 0x1c]
// 00843116  0f8254ffffff         jb 0x843070
// 0084311c  e918ffffff           jmp 0x843039
// 00843121  8d4c2420             lea ecx, [esp + 0x20]
// 00843125  c7842440010000ffffffff mov dword ptr [esp + 0x140], 0xffffffff
// 00843130  e84bfcffff           call 0x842d80
// 00843135  b801000000           mov eax, 1
// 0084313a  8b8c2438010000       mov ecx, dword ptr [esp + 0x138]
// 00843141  64890d00000000       mov dword ptr fs:[0], ecx
// 00843148  59                   pop ecx
// 00843149  5f                   pop edi
// 0084314a  5e                   pop esi
// 0084314b  5d                   pop ebp
// 0084314c  5b                   pop ebx
// 0084314d  8b8c2420010000       mov ecx, dword ptr [esp + 0x120]
// 00843154  33cc                 xor ecx, esp
// 00843156  e87963f6ff           call 0x7a94d4
// 0084315b  81c430010000         add esp, 0x130
// 00843161  c3                   ret 
// 00843162  e8e54af6ff           call 0x7a7c4c
// copied from an identical function in another client (function ?CompareAccelKey@CXTPShortcutManager@@SAHDI@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPShortcutManager.cpp