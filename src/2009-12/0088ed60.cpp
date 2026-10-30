// roc 2009-12 0088ed60  unit: CXTPShortcutManager  size: 535 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0088ed60
//
// 0088ed60  6aff                 push -1
// 0088ed62  686b109600           push 0x96106b
// 0088ed67  64a100000000         mov eax, dword ptr fs:[0]
// 0088ed6d  50                   push eax
// 0088ed6e  81ec24010000         sub esp, 0x124
// 0088ed74  a10052b600           mov eax, dword ptr [0xb65200]
// 0088ed79  33c4                 xor eax, esp
// 0088ed7b  89842420010000       mov dword ptr [esp + 0x120], eax
// 0088ed82  53                   push ebx
// 0088ed83  55                   push ebp
// 0088ed84  56                   push esi
// 0088ed85  57                   push edi
// 0088ed86  a10052b600           mov eax, dword ptr [0xb65200]
// 0088ed8b  33c4                 xor eax, esp
// 0088ed8d  50                   push eax
// 0088ed8e  8d842438010000       lea eax, [esp + 0x138]
// 0088ed95  64a300000000         mov dword ptr fs:[0], eax
// 0088ed9b  8b9c244c010000       mov ebx, dword ptr [esp + 0x14c]
// 0088eda2  8d43a0               lea eax, [ebx - 0x60]
// 0088eda5  83f809               cmp eax, 9
// 0088eda8  7717                 ja 0x88edc1
// 0088edaa  0fbe8c2448010000     movsx ecx, byte ptr [esp + 0x148]
// 0088edb2  83c3d0               add ebx, -0x30
// 0088edb5  33c0                 xor eax, eax
// 0088edb7  3bcb                 cmp ecx, ebx
// 0088edb9  0f94c0               sete al
// 0088edbc  e989010000           jmp 0x88ef4a
// 0088edc1  6a02                 push 2
// 0088edc3  53                   push ebx
// 0088edc4  ff15fcc99800         call dword ptr [0x98c9fc]
// 0088edca  84c0                 test al, al
// 0088edcc  0f848b000000         je 0x88ee5d
// 0088edd2  8b942448010000       mov edx, dword ptr [esp + 0x148]
// 0088edd9  52                   push edx
// 0088edda  e861f5ffff           call 0x88e340
// 0088eddf  83c404               add esp, 4
// 0088ede2  88442417             mov byte ptr [esp + 0x17], al
// 0088ede6  389c2448010000       cmp byte ptr [esp + 0x148], bl
// 0088eded  0f8452010000         je 0x88ef45
// 0088edf3  3ac3                 cmp al, bl
// 0088edf5  0f844a010000         je 0x88ef45
// 0088edfb  8b35b0cb9800         mov esi, dword ptr [0x98cbb0]
// 0088ee01  6a00                 push 0
// 0088ee03  6a00                 push 0
// 0088ee05  ffd6                 call esi
// 0088ee07  8be8                 mov ebp, eax
// 0088ee09  896c241c             mov dword ptr [esp + 0x1c], ebp
// 0088ee0d  83fd01               cmp ebp, 1
// 0088ee10  764b                 jbe 0x88ee5d
// 0088ee12  8d4c2420             lea ecx, [esp + 0x20]
// 0088ee16  e855fdffff           call 0x88eb70
// 0088ee1b  6aff                 push -1
// 0088ee1d  55                   push ebp
// 0088ee1e  8d4c2428             lea ecx, [esp + 0x28]
// 0088ee22  c784244801000000000000 mov dword ptr [esp + 0x148], 0
// 0088ee2d  e86e65fcff           call 0x8553a0
// 0088ee32  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0088ee36  57                   push edi
// 0088ee37  55                   push ebp
// 0088ee38  ffd6                 call esi
// 0088ee3a  8d442434             lea eax, [esp + 0x34]
// 0088ee3e  50                   push eax
// 0088ee3f  ff1500ca9800         call dword ptr [0x98ca00]
// 0088ee45  85c0                 test eax, eax
// 0088ee47  751b                 jne 0x88ee64
// 0088ee49  8d4c2420             lea ecx, [esp + 0x20]
// 0088ee4d  c7842440010000ffffffff mov dword ptr [esp + 0x140], 0xffffffff
// 0088ee58  e833fdffff           call 0x88eb90
// 0088ee5d  33c0                 xor eax, eax
// 0088ee5f  e9e6000000           jmp 0x88ef4a
// 0088ee64  33f6                 xor esi, esi
// 0088ee66  85ed                 test ebp, ebp
// 0088ee68  76df                 jbe 0x88ee49
// 0088ee6a  8b2daccb9800         mov ebp, dword ptr [0x98cbac]
// 0088ee70  eb15                 jmp 0x88ee87
// 0088ee72  eb0c                 jmp 0x88ee80
// 0088ee74  8da42400000000       lea esp, [esp]
// 0088ee7b  eb03                 jmp 0x88ee80
// 0088ee7d  8d4900               lea ecx, [ecx]
// 0088ee80  8b9c244c010000       mov ebx, dword ptr [esp + 0x14c]
// 0088ee87  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0088ee8f  85f6                 test esi, esi
// 0088ee91  0f8cdb000000         jl 0x88ef72
// 0088ee97  3b742428             cmp esi, dword ptr [esp + 0x28]
// 0088ee9b  0f8dd1000000         jge 0x88ef72
// 0088eea1  8b0cb7               mov ecx, dword ptr [edi + esi*4]
// 0088eea4  51                   push ecx
// 0088eea5  6a00                 push 0
// 0088eea7  8d542420             lea edx, [esp + 0x20]
// 0088eeab  52                   push edx
// 0088eeac  8d442440             lea eax, [esp + 0x40]
// 0088eeb0  50                   push eax
// 0088eeb1  6a00                 push 0
// 0088eeb3  53                   push ebx
// 0088eeb4  ffd5                 call ebp
// 0088eeb6  83f801               cmp eax, 1
// 0088eeb9  751c                 jne 0x88eed7
// 0088eebb  8b442418             mov eax, dword ptr [esp + 0x18]
// 0088eebf  38842448010000       cmp byte ptr [esp + 0x148], al
// 0088eec6  7469                 je 0x88ef31
// 0088eec8  50                   push eax
// 0088eec9  e872f4ffff           call 0x88e340
// 0088eece  83c404               add esp, 4
// 0088eed1  38442417             cmp byte ptr [esp + 0x17], al
// 0088eed5  745a                 je 0x88ef31
// 0088eed7  8a5c2444             mov bl, byte ptr [esp + 0x44]
// 0088eedb  c644244481           mov byte ptr [esp + 0x44], 0x81
// 0088eee0  8b0cb7               mov ecx, dword ptr [edi + esi*4]
// 0088eee3  51                   push ecx
// 0088eee4  8b8c2450010000       mov ecx, dword ptr [esp + 0x150]
// 0088eeeb  6a00                 push 0
// 0088eeed  8d542420             lea edx, [esp + 0x20]
// 0088eef1  52                   push edx
// 0088eef2  8d442440             lea eax, [esp + 0x40]
// 0088eef6  50                   push eax
// 0088eef7  6a00                 push 0
// 0088eef9  51                   push ecx
// 0088eefa  ffd5                 call ebp
// 0088eefc  83f801               cmp eax, 1
// 0088eeff  751c                 jne 0x88ef1d
// 0088ef01  8b442418             mov eax, dword ptr [esp + 0x18]
// 0088ef05  38842448010000       cmp byte ptr [esp + 0x148], al
// 0088ef0c  7423                 je 0x88ef31
// 0088ef0e  50                   push eax
// 0088ef0f  e82cf4ffff           call 0x88e340
// 0088ef14  83c404               add esp, 4
// 0088ef17  38442417             cmp byte ptr [esp + 0x17], al
// 0088ef1b  7414                 je 0x88ef31
// 0088ef1d  46                   inc esi
// 0088ef1e  885c2444             mov byte ptr [esp + 0x44], bl
// 0088ef22  3b74241c             cmp esi, dword ptr [esp + 0x1c]
// 0088ef26  0f8254ffffff         jb 0x88ee80
// 0088ef2c  e918ffffff           jmp 0x88ee49
// 0088ef31  8d4c2420             lea ecx, [esp + 0x20]
// 0088ef35  c7842440010000ffffffff mov dword ptr [esp + 0x140], 0xffffffff
// 0088ef40  e84bfcffff           call 0x88eb90
// 0088ef45  b801000000           mov eax, 1
// 0088ef4a  8b8c2438010000       mov ecx, dword ptr [esp + 0x138]
// 0088ef51  64890d00000000       mov dword ptr fs:[0], ecx
// 0088ef58  59                   pop ecx
// 0088ef59  5f                   pop edi
// 0088ef5a  5e                   pop esi
// 0088ef5b  5d                   pop ebp
// 0088ef5c  5b                   pop ebx
// 0088ef5d  8b8c2420010000       mov ecx, dword ptr [esp + 0x120]
// 0088ef64  33cc                 xor ecx, esp
// 0088ef66  e82f64f6ff           call 0x7f539a
// 0088ef6b  81c430010000         add esp, 0x130
// 0088ef71  c3                   ret 
// 0088ef72  e8954bf6ff           call 0x7f3b0c
// copied from an identical function in another client (function ?CompareAccelKey@CXTPShortcutManager@@SAHDI@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPShortcutManager.cpp