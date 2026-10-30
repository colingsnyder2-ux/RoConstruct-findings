// roc 2009-12 00838100  unit: CXTPControls  size: 317 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00838100
//
// 00838100  6aff                 push -1
// 00838102  681ac49500           push 0x95c41a
// 00838107  64a100000000         mov eax, dword ptr fs:[0]
// 0083810d  50                   push eax
// 0083810e  83ec18               sub esp, 0x18
// 00838111  56                   push esi
// 00838112  57                   push edi
// 00838113  a10052b600           mov eax, dword ptr [0xb65200]
// 00838118  33c4                 xor eax, esp
// 0083811a  50                   push eax
// 0083811b  8d442424             lea eax, [esp + 0x24]
// 0083811f  64a300000000         mov dword ptr fs:[0], eax
// 00838125  8bf1                 mov esi, ecx
// 00838127  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 0083812b  85ff                 test edi, edi
// 0083812d  0f84f4000000         je 0x838227
// 00838133  8b4720               mov eax, dword ptr [edi + 0x20]
// 00838136  50                   push eax
// 00838137  ff1584cc9800         call dword ptr [0x98cc84]
// 0083813d  85c0                 test eax, eax
// 0083813f  0f84e2000000         je 0x838227
// 00838145  56                   push esi
// 00838146  8bcf                 mov ecx, edi
// 00838148  e86de60e00           call 0x9267ba
// 0083814d  85c0                 test eax, eax
// 0083814f  0f84d2000000         je 0x838227
// 00838155  8d4c240c             lea ecx, [esp + 0xc]
// 00838159  ff1574de9800         call dword ptr [0x98de74]
// 0083815f  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00838163  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 0083816b  8d4c240c             lea ecx, [esp + 0xc]
// 0083816f  85c0                 test eax, eax
// 00838171  7403                 je 0x838176
// 00838173  50                   push eax
// 00838174  eb05                 jmp 0x83817b
// 00838176  68a8449a00           push 0x9a44a8
// 0083817b  ff155cde9800         call dword ptr [0x98de5c]
// 00838181  8d4c2434             lea ecx, [esp + 0x34]
// 00838185  ff1574de9800         call dword ptr [0x98de74]
// 0083818b  8b442438             mov eax, dword ptr [esp + 0x38]
// 0083818f  c644242c01           mov byte ptr [esp + 0x2c], 1
// 00838194  8d4c2434             lea ecx, [esp + 0x34]
// 00838198  85c0                 test eax, eax
// 0083819a  7403                 je 0x83819f
// 0083819c  50                   push eax
// 0083819d  eb05                 jmp 0x8381a4
// 0083819f  68207e9f00           push 0x9f7e20
// 008381a4  ff155cde9800         call dword ptr [0x98de5c]
// 008381aa  837e0803             cmp dword ptr [esi + 8], 3
// 008381ae  7407                 je 0x8381b7
// 008381b0  c7460801000000       mov dword ptr [esi + 8], 1
// 008381b7  6801000080           push 0x80000001
// 008381bc  8d4c2414             lea ecx, [esp + 0x14]
// 008381c0  e8dbf40600           call 0x8a76a0
// 008381c5  6a2c                 push 0x2c
// 008381c7  56                   push esi
// 008381c8  8d4c243c             lea ecx, [esp + 0x3c]
// 008381cc  c644243402           mov byte ptr [esp + 0x34], 2
// 008381d1  ff1580de9800         call dword ptr [0x98de80]
// 008381d7  50                   push eax
// 008381d8  8d4c2418             lea ecx, [esp + 0x18]
// 008381dc  ff1580de9800         call dword ptr [0x98de80]
// 008381e2  50                   push eax
// 008381e3  8d4c2420             lea ecx, [esp + 0x20]
// 008381e7  e8a4f90600           call 0x8a7b90
// 008381ec  8d4c2410             lea ecx, [esp + 0x10]
// 008381f0  c644242c01           mov byte ptr [esp + 0x2c], 1
// 008381f5  e8c6f40600           call 0x8a76c0
// 008381fa  8d4c2434             lea ecx, [esp + 0x34]
// 008381fe  ff15c0de9800         call dword ptr [0x98dec0]
// 00838204  8d4c240c             lea ecx, [esp + 0xc]
// 00838208  ff15c0de9800         call dword ptr [0x98dec0]
// 0083820e  b801000000           mov eax, 1
// 00838213  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00838217  64890d00000000       mov dword ptr fs:[0], ecx
// 0083821e  59                   pop ecx
// 0083821f  5f                   pop edi
// 00838220  5e                   pop esi
// 00838221  83c424               add esp, 0x24
// 00838224  c20c00               ret 0xc
// 00838227  33c0                 xor eax, eax
// 00838229  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0083822d  64890d00000000       mov dword ptr fs:[0], ecx
// 00838234  59                   pop ecx
// 00838235  5f                   pop edi
// 00838236  5e                   pop esi
// 00838237  83c424               add esp, 0x24
// 0083823a  c20c00               ret 0xc
// copied from an identical function in another client (function ?SaveWindowPos@CXTWindowPos@@QAEHPAVCWnd@@PBD1@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Controls\XTWindowPos.cpp