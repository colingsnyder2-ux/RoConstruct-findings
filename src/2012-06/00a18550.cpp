// roc 2012-06 00a18550  unit: CXTPShortcutManager  size: 535 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a18550
//
// 00a18550  6aff                 push -1
// 00a18552  68eb3cae00           push 0xae3ceb
// 00a18557  64a100000000         mov eax, dword ptr fs:[0]
// 00a1855d  50                   push eax
// 00a1855e  81ec24010000         sub esp, 0x124
// 00a18564  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a18569  33c4                 xor eax, esp
// 00a1856b  89842420010000       mov dword ptr [esp + 0x120], eax
// 00a18572  53                   push ebx
// 00a18573  55                   push ebp
// 00a18574  56                   push esi
// 00a18575  57                   push edi
// 00a18576  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a1857b  33c4                 xor eax, esp
// 00a1857d  50                   push eax
// 00a1857e  8d842438010000       lea eax, [esp + 0x138]
// 00a18585  64a300000000         mov dword ptr fs:[0], eax
// 00a1858b  8b9c244c010000       mov ebx, dword ptr [esp + 0x14c]
// 00a18592  8d43a0               lea eax, [ebx - 0x60]
// 00a18595  83f809               cmp eax, 9
// 00a18598  7717                 ja 0xa185b1
// 00a1859a  0fbe8c2448010000     movsx ecx, byte ptr [esp + 0x148]
// 00a185a2  83c3d0               add ebx, -0x30
// 00a185a5  33c0                 xor eax, eax
// 00a185a7  3bcb                 cmp ecx, ebx
// 00a185a9  0f94c0               sete al
// 00a185ac  e989010000           jmp 0xa1873a
// 00a185b1  6a02                 push 2
// 00a185b3  53                   push ebx
// 00a185b4  ff15103db200         call dword ptr [0xb23d10]
// 00a185ba  84c0                 test al, al
// 00a185bc  0f848b000000         je 0xa1864d
// 00a185c2  8b942448010000       mov edx, dword ptr [esp + 0x148]
// 00a185c9  52                   push edx
// 00a185ca  e8d1f5ffff           call 0xa17ba0
// 00a185cf  83c404               add esp, 4
// 00a185d2  88442417             mov byte ptr [esp + 0x17], al
// 00a185d6  389c2448010000       cmp byte ptr [esp + 0x148], bl
// 00a185dd  0f8452010000         je 0xa18735
// 00a185e3  3ac3                 cmp al, bl
// 00a185e5  0f844a010000         je 0xa18735
// 00a185eb  8b35443cb200         mov esi, dword ptr [0xb23c44]
// 00a185f1  6a00                 push 0
// 00a185f3  6a00                 push 0
// 00a185f5  ffd6                 call esi
// 00a185f7  8be8                 mov ebp, eax
// 00a185f9  896c241c             mov dword ptr [esp + 0x1c], ebp
// 00a185fd  83fd01               cmp ebp, 1
// 00a18600  764b                 jbe 0xa1864d
// 00a18602  8d4c2420             lea ecx, [esp + 0x20]
// 00a18606  e855fdffff           call 0xa18360
// 00a1860b  6aff                 push -1
// 00a1860d  55                   push ebp
// 00a1860e  8d4c2428             lea ecx, [esp + 0x28]
// 00a18612  c784244801000000000000 mov dword ptr [esp + 0x148], 0
// 00a1861d  e83efcf7ff           call 0x998260
// 00a18622  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00a18626  57                   push edi
// 00a18627  55                   push ebp
// 00a18628  ffd6                 call esi
// 00a1862a  8d442434             lea eax, [esp + 0x34]
// 00a1862e  50                   push eax
// 00a1862f  ff158c3bb200         call dword ptr [0xb23b8c]
// 00a18635  85c0                 test eax, eax
// 00a18637  751b                 jne 0xa18654
// 00a18639  8d4c2420             lea ecx, [esp + 0x20]
// 00a1863d  c7842440010000ffffffff mov dword ptr [esp + 0x140], 0xffffffff
// 00a18648  e833fdffff           call 0xa18380
// 00a1864d  33c0                 xor eax, eax
// 00a1864f  e9e6000000           jmp 0xa1873a
// 00a18654  33f6                 xor esi, esi
// 00a18656  85ed                 test ebp, ebp
// 00a18658  76df                 jbe 0xa18639
// 00a1865a  8b2d883bb200         mov ebp, dword ptr [0xb23b88]
// 00a18660  eb15                 jmp 0xa18677
// 00a18662  eb0c                 jmp 0xa18670
// 00a18664  8da42400000000       lea esp, [esp]
// 00a1866b  eb03                 jmp 0xa18670
// 00a1866d  8d4900               lea ecx, [ecx]
// 00a18670  8b9c244c010000       mov ebx, dword ptr [esp + 0x14c]
// 00a18677  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00a1867f  85f6                 test esi, esi
// 00a18681  0f8cdb000000         jl 0xa18762
// 00a18687  3b742428             cmp esi, dword ptr [esp + 0x28]
// 00a1868b  0f8dd1000000         jge 0xa18762
// 00a18691  8b0cb7               mov ecx, dword ptr [edi + esi*4]
// 00a18694  51                   push ecx
// 00a18695  6a00                 push 0
// 00a18697  8d542420             lea edx, [esp + 0x20]
// 00a1869b  52                   push edx
// 00a1869c  8d442440             lea eax, [esp + 0x40]
// 00a186a0  50                   push eax
// 00a186a1  6a00                 push 0
// 00a186a3  53                   push ebx
// 00a186a4  ffd5                 call ebp
// 00a186a6  83f801               cmp eax, 1
// 00a186a9  751c                 jne 0xa186c7
// 00a186ab  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a186af  38842448010000       cmp byte ptr [esp + 0x148], al
// 00a186b6  7469                 je 0xa18721
// 00a186b8  50                   push eax
// 00a186b9  e8e2f4ffff           call 0xa17ba0
// 00a186be  83c404               add esp, 4
// 00a186c1  38442417             cmp byte ptr [esp + 0x17], al
// 00a186c5  745a                 je 0xa18721
// 00a186c7  8a5c2444             mov bl, byte ptr [esp + 0x44]
// 00a186cb  c644244481           mov byte ptr [esp + 0x44], 0x81
// 00a186d0  8b0cb7               mov ecx, dword ptr [edi + esi*4]
// 00a186d3  51                   push ecx
// 00a186d4  8b8c2450010000       mov ecx, dword ptr [esp + 0x150]
// 00a186db  6a00                 push 0
// 00a186dd  8d542420             lea edx, [esp + 0x20]
// 00a186e1  52                   push edx
// 00a186e2  8d442440             lea eax, [esp + 0x40]
// 00a186e6  50                   push eax
// 00a186e7  6a00                 push 0
// 00a186e9  51                   push ecx
// 00a186ea  ffd5                 call ebp
// 00a186ec  83f801               cmp eax, 1
// 00a186ef  751c                 jne 0xa1870d
// 00a186f1  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a186f5  38842448010000       cmp byte ptr [esp + 0x148], al
// 00a186fc  7423                 je 0xa18721
// 00a186fe  50                   push eax
// 00a186ff  e89cf4ffff           call 0xa17ba0
// 00a18704  83c404               add esp, 4
// 00a18707  38442417             cmp byte ptr [esp + 0x17], al
// 00a1870b  7414                 je 0xa18721
// 00a1870d  46                   inc esi
// 00a1870e  885c2444             mov byte ptr [esp + 0x44], bl
// 00a18712  3b74241c             cmp esi, dword ptr [esp + 0x1c]
// 00a18716  0f8254ffffff         jb 0xa18670
// 00a1871c  e918ffffff           jmp 0xa18639
// 00a18721  8d4c2420             lea ecx, [esp + 0x20]
// 00a18725  c7842440010000ffffffff mov dword ptr [esp + 0x140], 0xffffffff
// 00a18730  e84bfcffff           call 0xa18380
// 00a18735  b801000000           mov eax, 1
// 00a1873a  8b8c2438010000       mov ecx, dword ptr [esp + 0x138]
// 00a18741  64890d00000000       mov dword ptr fs:[0], ecx
// 00a18748  59                   pop ecx
// 00a18749  5f                   pop edi
// 00a1874a  5e                   pop esi
// 00a1874b  5d                   pop ebp
// 00a1874c  5b                   pop ebx
// 00a1874d  8b8c2420010000       mov ecx, dword ptr [esp + 0x120]
// 00a18754  33cc                 xor ecx, esp
// 00a18756  e8dcb2f6ff           call 0x983a37
// 00a1875b  81c430010000         add esp, 0x130
// 00a18761  c3                   ret 
// 00a18762  e8599cf6ff           call 0x9823c0
// copied from an identical function in another client (function ?CompareAccelKey@CXTPShortcutManager@@SAHDI@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPShortcutManager.cpp