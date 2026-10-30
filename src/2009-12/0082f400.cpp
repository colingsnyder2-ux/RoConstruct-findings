// roc 2009-12 0082f400  unit: CXTPReportSelectedRows  size: 810 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0082f400
//
// 0082f400  6aff                 push -1
// 0082f402  6816be9500           push 0x95be16
// 0082f407  64a100000000         mov eax, dword ptr fs:[0]
// 0082f40d  50                   push eax
// 0082f40e  81ec38060000         sub esp, 0x638
// 0082f414  a10052b600           mov eax, dword ptr [0xb65200]
// 0082f419  33c4                 xor eax, esp
// 0082f41b  89842434060000       mov dword ptr [esp + 0x634], eax
// 0082f422  53                   push ebx
// 0082f423  56                   push esi
// 0082f424  57                   push edi
// 0082f425  a10052b600           mov eax, dword ptr [0xb65200]
// 0082f42a  33c4                 xor eax, esp
// 0082f42c  50                   push eax
// 0082f42d  8d842448060000       lea eax, [esp + 0x648]
// 0082f434  64a300000000         mov dword ptr fs:[0], eax
// 0082f43a  8bf1                 mov esi, ecx
// 0082f43c  89742410             mov dword ptr [esp + 0x10], esi
// 0082f440  6a01                 push 1
// 0082f442  8d4c2424             lea ecx, [esp + 0x24]
// 0082f446  e8f5c20300           call 0x86b740
// 0082f44b  8bc8                 mov ecx, eax
// 0082f44d  c784245006000000000000 mov dword ptr [esp + 0x650], 0
// 0082f458  e803c80300           call 0x86bc60
// 0082f45d  85c0                 test eax, eax
// 0082f45f  8d4c2420             lea ecx, [esp + 0x20]
// 0082f463  0f94c3               sete bl
// 0082f466  c7842450060000ffffffff mov dword ptr [esp + 0x650], 0xffffffff
// 0082f471  e89acc0300           call 0x86c110
// 0082f476  84db                 test bl, bl
// 0082f478  0f8583020000         jne 0x82f701
// 0082f47e  6a00                 push 0
// 0082f480  8bce                 mov ecx, esi
// 0082f482  e839feffff           call 0x82f2c0
// 0082f487  85c0                 test eax, eax
// 0082f489  0f8572020000         jne 0x82f701
// 0082f48f  6804010000           push 0x104
// 0082f494  50                   push eax
// 0082f495  8d442434             lea eax, [esp + 0x34]
// 0082f499  50                   push eax
// 0082f49a  e80556fcff           call 0x7f4aa4
// 0082f49f  6804010000           push 0x104
// 0082f4a4  8d8c2444020000       lea ecx, [esp + 0x244]
// 0082f4ab  6a00                 push 0
// 0082f4ad  51                   push ecx
// 0082f4ae  e8f155fcff           call 0x7f4aa4
// 0082f4b3  6804010000           push 0x104
// 0082f4b8  8d942458040000       lea edx, [esp + 0x458]
// 0082f4bf  6a00                 push 0
// 0082f4c1  52                   push edx
// 0082f4c2  e8dd55fcff           call 0x7f4aa4
// 0082f4c7  83c424               add esp, 0x24
// 0082f4ca  6a01                 push 1
// 0082f4cc  8d4c2418             lea ecx, [esp + 0x18]
// 0082f4d0  e86bc20300           call 0x86b740
// 0082f4d5  6804010000           push 0x104
// 0082f4da  8d8c2440040000       lea ecx, [esp + 0x440]
// 0082f4e1  51                   push ecx
// 0082f4e2  6804010000           push 0x104
// 0082f4e7  8d942440020000       lea edx, [esp + 0x240]
// 0082f4ee  52                   push edx
// 0082f4ef  6804010000           push 0x104
// 0082f4f4  8d4c2440             lea ecx, [esp + 0x40]
// 0082f4f8  51                   push ecx
// 0082f4f9  8bc8                 mov ecx, eax
// 0082f4fb  c784246806000001000000 mov dword ptr [esp + 0x668], 1
// 0082f506  e8e5c30300           call 0x86b8f0
// 0082f50b  85c0                 test eax, eax
// 0082f50d  8d4c2414             lea ecx, [esp + 0x14]
// 0082f511  0f95c3               setne bl
// 0082f514  c7842450060000ffffffff mov dword ptr [esp + 0x650], 0xffffffff
// 0082f51f  e8eccb0300           call 0x86c110
// 0082f524  84db                 test bl, bl
// 0082f526  0f85d5010000         jne 0x82f701
// 0082f52c  8b35f8b99800         mov esi, dword ptr [0x98b9f8]
// 0082f532  8d54242c             lea edx, [esp + 0x2c]
// 0082f536  6804010000           push 0x104
// 0082f53b  52                   push edx
// 0082f53c  ffd6                 call esi
// 0082f53e  8b3d88b99800         mov edi, dword ptr [0x98b988]
// 0082f544  8d442434             lea eax, [esp + 0x34]
// 0082f548  68f0649f00           push 0x9f64f0
// 0082f54d  50                   push eax
// 0082f54e  ffd7                 call edi
// 0082f550  83c410               add esp, 0x10
// 0082f553  85c0                 test eax, eax
// 0082f555  7523                 jne 0x82f57a
// 0082f557  8d4c242c             lea ecx, [esp + 0x2c]
// 0082f55b  6804010000           push 0x104
// 0082f560  51                   push ecx
// 0082f561  ffd6                 call esi
// 0082f563  8d542434             lea edx, [esp + 0x34]
// 0082f567  68c8649f00           push 0x9f64c8
// 0082f56c  52                   push edx
// 0082f56d  ffd7                 call edi
// 0082f56f  83c410               add esp, 0x10
// 0082f572  85c0                 test eax, eax
// 0082f574  0f8406010000         je 0x82f680
// 0082f57a  8d842434020000       lea eax, [esp + 0x234]
// 0082f581  6804010000           push 0x104
// 0082f586  50                   push eax
// 0082f587  ffd6                 call esi
// 0082f589  83c408               add esp, 8
// 0082f58c  b9b0649f00           mov ecx, 0x9f64b0
// 0082f591  8d842434020000       lea eax, [esp + 0x234]
// 0082f598  668b10               mov dx, word ptr [eax]
// 0082f59b  663b11               cmp dx, word ptr [ecx]
// 0082f59e  751e                 jne 0x82f5be
// 0082f5a0  6685d2               test dx, dx
// 0082f5a3  7415                 je 0x82f5ba
// 0082f5a5  668b5002             mov dx, word ptr [eax + 2]
// 0082f5a9  663b5102             cmp dx, word ptr [ecx + 2]
// 0082f5ad  750f                 jne 0x82f5be
// 0082f5af  83c004               add eax, 4
// 0082f5b2  83c104               add ecx, 4
// 0082f5b5  6685d2               test dx, dx
// 0082f5b8  75de                 jne 0x82f598
// 0082f5ba  33c0                 xor eax, eax
// 0082f5bc  eb05                 jmp 0x82f5c3
// 0082f5be  1bc0                 sbb eax, eax
// 0082f5c0  83d8ff               sbb eax, -1
// 0082f5c3  85c0                 test eax, eax
// 0082f5c5  750a                 jne 0x82f5d1
// 0082f5c7  b801000000           mov eax, 1
// 0082f5cc  e932010000           jmp 0x82f703
// 0082f5d1  8d8c2434020000       lea ecx, [esp + 0x234]
// 0082f5d8  6804010000           push 0x104
// 0082f5dd  51                   push ecx
// 0082f5de  ffd6                 call esi
// 0082f5e0  83c408               add esp, 8
// 0082f5e3  b99c649f00           mov ecx, 0x9f649c
// 0082f5e8  8d842434020000       lea eax, [esp + 0x234]
// 0082f5ef  90                   nop 
// 0082f5f0  668b10               mov dx, word ptr [eax]
// 0082f5f3  663b11               cmp dx, word ptr [ecx]
// 0082f5f6  751e                 jne 0x82f616
// 0082f5f8  6685d2               test dx, dx
// 0082f5fb  7415                 je 0x82f612
// 0082f5fd  668b5002             mov dx, word ptr [eax + 2]
// 0082f601  663b5102             cmp dx, word ptr [ecx + 2]
// 0082f605  750f                 jne 0x82f616
// 0082f607  83c004               add eax, 4
// 0082f60a  83c104               add ecx, 4
// 0082f60d  6685d2               test dx, dx
// 0082f610  75de                 jne 0x82f5f0
// 0082f612  33c0                 xor eax, eax
// 0082f614  eb05                 jmp 0x82f61b
// 0082f616  1bc0                 sbb eax, eax
// 0082f618  83d8ff               sbb eax, -1
// 0082f61b  85c0                 test eax, eax
// 0082f61d  750a                 jne 0x82f629
// 0082f61f  b802000000           mov eax, 2
// 0082f624  e9da000000           jmp 0x82f703
// 0082f629  8d942434020000       lea edx, [esp + 0x234]
// 0082f630  6804010000           push 0x104
// 0082f635  52                   push edx
// 0082f636  ffd6                 call esi
// 0082f638  83c408               add esp, 8
// 0082f63b  b988649f00           mov ecx, 0x9f6488
// 0082f640  8d842434020000       lea eax, [esp + 0x234]
// 0082f647  668b10               mov dx, word ptr [eax]
// 0082f64a  663b11               cmp dx, word ptr [ecx]
// 0082f64d  751e                 jne 0x82f66d
// 0082f64f  6685d2               test dx, dx
// 0082f652  7415                 je 0x82f669
// 0082f654  668b5002             mov dx, word ptr [eax + 2]
// 0082f658  663b5102             cmp dx, word ptr [ecx + 2]
// 0082f65c  750f                 jne 0x82f66d
// 0082f65e  83c004               add eax, 4
// 0082f661  83c104               add ecx, 4
// 0082f664  6685d2               test dx, dx
// 0082f667  75de                 jne 0x82f647
// 0082f669  33c0                 xor eax, eax
// 0082f66b  eb05                 jmp 0x82f672
// 0082f66d  1bc0                 sbb eax, eax
// 0082f66f  83d8ff               sbb eax, -1
// 0082f672  85c0                 test eax, eax
// 0082f674  750a                 jne 0x82f680
// 0082f676  b803000000           mov eax, 3
// 0082f67b  e983000000           jmp 0x82f703
// 0082f680  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0082f684  83bb6001000000       cmp dword ptr [ebx + 0x160], 0
// 0082f68b  7445                 je 0x82f6d2
// 0082f68d  8d44242c             lea eax, [esp + 0x2c]
// 0082f691  6804010000           push 0x104
// 0082f696  50                   push eax
// 0082f697  ffd6                 call esi
// 0082f699  8d4c2434             lea ecx, [esp + 0x34]
// 0082f69d  6868649f00           push 0x9f6468
// 0082f6a2  51                   push ecx
// 0082f6a3  ffd7                 call edi
// 0082f6a5  83c410               add esp, 0x10
// 0082f6a8  85c0                 test eax, eax
// 0082f6aa  751f                 jne 0x82f6cb
// 0082f6ac  8d54242c             lea edx, [esp + 0x2c]
// 0082f6b0  6804010000           push 0x104
// 0082f6b5  52                   push edx
// 0082f6b6  ffd6                 call esi
// 0082f6b8  8d442434             lea eax, [esp + 0x34]
// 0082f6bc  683c649f00           push 0x9f643c
// 0082f6c1  50                   push eax
// 0082f6c2  ffd7                 call edi
// 0082f6c4  83c410               add esp, 0x10
// 0082f6c7  85c0                 test eax, eax
// 0082f6c9  7407                 je 0x82f6d2
// 0082f6cb  b804000000           mov eax, 4
// 0082f6d0  eb31                 jmp 0x82f703
// 0082f6d2  83bb6401000000       cmp dword ptr [ebx + 0x164], 0
// 0082f6d9  7426                 je 0x82f701
// 0082f6db  8d4c242c             lea ecx, [esp + 0x2c]
// 0082f6df  6804010000           push 0x104
// 0082f6e4  51                   push ecx
// 0082f6e5  ffd6                 call esi
// 0082f6e7  8d542434             lea edx, [esp + 0x34]
// 0082f6eb  6820649f00           push 0x9f6420
// 0082f6f0  52                   push edx
// 0082f6f1  ffd7                 call edi
// 0082f6f3  83c410               add esp, 0x10
// 0082f6f6  85c0                 test eax, eax
// 0082f6f8  7407                 je 0x82f701
// 0082f6fa  b805000000           mov eax, 5
// 0082f6ff  eb02                 jmp 0x82f703
// 0082f701  33c0                 xor eax, eax
// 0082f703  8b8c2448060000       mov ecx, dword ptr [esp + 0x648]
// 0082f70a  64890d00000000       mov dword ptr fs:[0], ecx
// 0082f711  59                   pop ecx
// 0082f712  5f                   pop edi
// 0082f713  5e                   pop esi
// 0082f714  5b                   pop ebx
// 0082f715  8b8c2434060000       mov ecx, dword ptr [esp + 0x634]
// 0082f71c  33cc                 xor ecx, esp
// 0082f71e  e8775cfcff           call 0x7f539a
// 0082f723  81c444060000         add esp, 0x644
// 0082f729  c3                   ret 
// copied from an identical function in another client (function ?_GetWinThemeWrapperTheme@CXTPColorManager@@AAE?AW4XTPCurrentSystemTheme@@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Common\XTPColorManager.cpp