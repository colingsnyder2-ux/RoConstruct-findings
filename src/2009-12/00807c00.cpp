// roc 2009-12 00807c00  unit: CXTPCommandBar  size: 346 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00807c00
//
// 00807c00  6aff                 push -1
// 00807c02  6864979500           push 0x959764
// 00807c07  64a100000000         mov eax, dword ptr fs:[0]
// 00807c0d  50                   push eax
// 00807c0e  51                   push ecx
// 00807c0f  53                   push ebx
// 00807c10  56                   push esi
// 00807c11  57                   push edi
// 00807c12  a10052b600           mov eax, dword ptr [0xb65200]
// 00807c17  33c4                 xor eax, esp
// 00807c19  50                   push eax
// 00807c1a  8d442414             lea eax, [esp + 0x14]
// 00807c1e  64a300000000         mov dword ptr fs:[0], eax
// 00807c24  8bf9                 mov edi, ecx
// 00807c26  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00807c2e  8b742428             mov esi, dword ptr [esp + 0x28]
// 00807c32  85f6                 test esi, esi
// 00807c34  0f840b010000         je 0x807d45
// 00807c3a  e851f4ffff           call 0x807090
// 00807c3f  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00807c43  8b5020               mov edx, dword ptr [eax + 0x20]
// 00807c46  8bcb                 mov ecx, ebx
// 00807c48  f7d9                 neg ecx
// 00807c4a  6a00                 push 0
// 00807c4c  1bc9                 sbb ecx, ecx
// 00807c4e  23ce                 and ecx, esi
// 00807c50  51                   push ecx
// 00807c51  6856280000           push 0x2856
// 00807c56  52                   push edx
// 00807c57  ff15c4cb9800         call dword ptr [0x98cbc4]
// 00807c5d  8bcf                 mov ecx, edi
// 00807c5f  e86cc8ffff           call 0x8044d0
// 00807c64  85c0                 test eax, eax
// 00807c66  7434                 je 0x807c9c
// 00807c68  85db                 test ebx, ebx
// 00807c6a  7428                 je 0x807c94
// 00807c6c  8b8e8c000000         mov ecx, dword ptr [esi + 0x8c]
// 00807c72  85c9                 test ecx, ecx
// 00807c74  7f20                 jg 0x807c96
// 00807c76  8b965c010000         mov edx, dword ptr [esi + 0x15c]
// 00807c7c  85d2                 test edx, edx
// 00807c7e  740c                 je 0x807c8c
// 00807c80  8b4a30               mov ecx, dword ptr [edx + 0x30]
// 00807c83  85c9                 test ecx, ecx
// 00807c85  7f0f                 jg 0x807c96
// 00807c87  8b4a28               mov ecx, dword ptr [edx + 0x28]
// 00807c8a  eb0a                 jmp 0x807c96
// 00807c8c  8b8e84000000         mov ecx, dword ptr [esi + 0x84]
// 00807c92  eb02                 jmp 0x807c96
// 00807c94  33c9                 xor ecx, ecx
// 00807c96  8988b8000000         mov dword ptr [eax + 0xb8], ecx
// 00807c9c  8b8680000000         mov eax, dword ptr [esi + 0x80]
// 00807ca2  3b877c010000         cmp eax, dword ptr [edi + 0x17c]
// 00807ca8  7527                 jne 0x807cd1
// 00807caa  85db                 test ebx, ebx
// 00807cac  0f8593000000         jne 0x807d45
// 00807cb2  c7877c010000ffffffff mov dword ptr [edi + 0x17c], 0xffffffff
// 00807cbc  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00807cc0  64890d00000000       mov dword ptr fs:[0], ecx
// 00807cc7  59                   pop ecx
// 00807cc8  5f                   pop edi
// 00807cc9  5e                   pop esi
// 00807cca  5b                   pop ebx
// 00807ccb  83c410               add esp, 0x10
// 00807cce  c20800               ret 8
// 00807cd1  c7877c010000ffffffff mov dword ptr [edi + 0x17c], 0xffffffff
// 00807cdb  85db                 test ebx, ebx
// 00807cdd  741d                 je 0x807cfc
// 00807cdf  8b06                 mov eax, dword ptr [esi]
// 00807ce1  8b505c               mov edx, dword ptr [eax + 0x5c]
// 00807ce4  8d4c2424             lea ecx, [esp + 0x24]
// 00807ce8  51                   push ecx
// 00807ce9  8bce                 mov ecx, esi
// 00807ceb  ffd2                 call edx
// 00807ced  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00807cf5  bb01000000           mov ebx, 1
// 00807cfa  eb1c                 jmp 0x807d18
// 00807cfc  6856fd9900           push 0x99fd56
// 00807d01  8d4c242c             lea ecx, [esp + 0x2c]
// 00807d05  ff15b8de9800         call dword ptr [0x98deb8]
// 00807d0b  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 00807d13  bb02000000           mov ebx, 2
// 00807d18  50                   push eax
// 00807d19  8bcf                 mov ecx, edi
// 00807d1b  895c2414             mov dword ptr [esp + 0x14], ebx
// 00807d1f  e89cf7ffff           call 0x8074c0
// 00807d24  f6c302               test bl, 2
// 00807d27  740d                 je 0x807d36
// 00807d29  8d4c2428             lea ecx, [esp + 0x28]
// 00807d2d  83e3fd               and ebx, 0xfffffffd
// 00807d30  ff15c0de9800         call dword ptr [0x98dec0]
// 00807d36  f6c301               test bl, 1
// 00807d39  740a                 je 0x807d45
// 00807d3b  8d4c2424             lea ecx, [esp + 0x24]
// 00807d3f  ff15c0de9800         call dword ptr [0x98dec0]
// 00807d45  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00807d49  64890d00000000       mov dword ptr fs:[0], ecx
// 00807d50  59                   pop ecx
// 00807d51  5f                   pop edi
// 00807d52  5e                   pop esi
// 00807d53  5b                   pop ebx
// 00807d54  83c410               add esp, 0x10
// 00807d57  c20800               ret 8
// copied from an identical function in another client (function ?OnControlSelected@CXTPCommandBar@@UAEXHPAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCommandBar.cpp