// roc 2010-06 0082c100  unit: CXTPRibbonTheme  size: 1133 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0082c100
//
// 0082c100  6aff                 push -1
// 0082c102  68a05d9b00           push 0x9b5da0
// 0082c107  64a100000000         mov eax, dword ptr fs:[0]
// 0082c10d  50                   push eax
// 0082c10e  83ec08               sub esp, 8
// 0082c111  53                   push ebx
// 0082c112  56                   push esi
// 0082c113  57                   push edi
// 0082c114  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 0082c119  33c4                 xor eax, esp
// 0082c11b  50                   push eax
// 0082c11c  8d442418             lea eax, [esp + 0x18]
// 0082c120  64a300000000         mov dword ptr fs:[0], eax
// 0082c126  8bf1                 mov esi, ecx
// 0082c128  e843640000           call 0x832570
// 0082c12d  8bce                 mov ecx, esi
// 0082c12f  e8bc600000           call 0x8321f0
// 0082c134  51                   push ecx
// 0082c135  8bcc                 mov ecx, esp
// 0082c137  89642414             mov dword ptr [esp + 0x14], esp
// 0082c13b  684c58a600           push 0xa6584c
// 0082c140  8bf8                 mov edi, eax
// 0082c142  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 0082c148  51                   push ecx
// 0082c149  8bcc                 mov ecx, esp
// 0082c14b  8964241c             mov dword ptr [esp + 0x1c], esp
// 0082c14f  684458a600           push 0xa65844
// 0082c154  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 0082c15c  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 0082c162  8bce                 mov ecx, esi
// 0082c164  c644242801           mov byte ptr [esp + 0x28], 1
// 0082c169  e882600000           call 0x8321f0
// 0082c16e  83cbff               or ebx, 0xffffffff
// 0082c171  8bc8                 mov ecx, eax
// 0082c173  895c2428             mov dword ptr [esp + 0x28], ebx
// 0082c177  e8f4910600           call 0x895370
// 0082c17c  51                   push ecx
// 0082c17d  8bcc                 mov ecx, esp
// 0082c17f  89642418             mov dword ptr [esp + 0x18], esp
// 0082c183  683458a600           push 0xa65834
// 0082c188  89866c060000         mov dword ptr [esi + 0x66c], eax
// 0082c18e  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 0082c194  51                   push ecx
// 0082c195  8bcc                 mov ecx, esp
// 0082c197  89642418             mov dword ptr [esp + 0x18], esp
// 0082c19b  684458a600           push 0xa65844
// 0082c1a0  c744242c02000000     mov dword ptr [esp + 0x2c], 2
// 0082c1a8  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 0082c1ae  8bcf                 mov ecx, edi
// 0082c1b0  895c2428             mov dword ptr [esp + 0x28], ebx
// 0082c1b4  e8b7910600           call 0x895370
// 0082c1b9  8b8e68060000         mov ecx, dword ptr [esi + 0x668]
// 0082c1bf  8b89e4000000         mov ecx, dword ptr [ecx + 0xe4]
// 0082c1c5  51                   push ecx
// 0082c1c6  8981cc000000         mov dword ptr [ecx + 0xcc], eax
// 0082c1cc  8bcc                 mov ecx, esp
// 0082c1ce  89642418             mov dword ptr [esp + 0x18], esp
// 0082c1d2  683458a600           push 0xa65834
// 0082c1d7  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 0082c1dd  51                   push ecx
// 0082c1de  8bcc                 mov ecx, esp
// 0082c1e0  89642418             mov dword ptr [esp + 0x18], esp
// 0082c1e4  684458a600           push 0xa65844
// 0082c1e9  c744242c03000000     mov dword ptr [esp + 0x2c], 3
// 0082c1f1  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 0082c1f7  8bcf                 mov ecx, edi
// 0082c1f9  895c2428             mov dword ptr [esp + 0x28], ebx
// 0082c1fd  e86e910600           call 0x895370
// 0082c202  8b9668060000         mov edx, dword ptr [esi + 0x668]
// 0082c208  8b8ae4000000         mov ecx, dword ptr [edx + 0xe4]
// 0082c20e  51                   push ecx
// 0082c20f  8981a8000000         mov dword ptr [ecx + 0xa8], eax
// 0082c215  8bcc                 mov ecx, esp
// 0082c217  89642418             mov dword ptr [esp + 0x18], esp
// 0082c21b  682458a600           push 0xa65824
// 0082c220  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 0082c226  51                   push ecx
// 0082c227  8bcc                 mov ecx, esp
// 0082c229  89642418             mov dword ptr [esp + 0x18], esp
// 0082c22d  684458a600           push 0xa65844
// 0082c232  c744242c04000000     mov dword ptr [esp + 0x2c], 4
// 0082c23a  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 0082c240  8bcf                 mov ecx, edi
// 0082c242  895c2428             mov dword ptr [esp + 0x28], ebx
// 0082c246  e825910600           call 0x895370
// 0082c24b  8b8e68060000         mov ecx, dword ptr [esi + 0x668]
// 0082c251  8b89e4000000         mov ecx, dword ptr [ecx + 0xe4]
// 0082c257  51                   push ecx
// 0082c258  8981c0000000         mov dword ptr [ecx + 0xc0], eax
// 0082c25e  8bcc                 mov ecx, esp
// 0082c260  89642418             mov dword ptr [esp + 0x18], esp
// 0082c264  681058a600           push 0xa65810
// 0082c269  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 0082c26f  51                   push ecx
// 0082c270  8bcc                 mov ecx, esp
// 0082c272  89642418             mov dword ptr [esp + 0x18], esp
// 0082c276  684458a600           push 0xa65844
// 0082c27b  c744242c05000000     mov dword ptr [esp + 0x2c], 5
// 0082c283  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 0082c289  8bcf                 mov ecx, edi
// 0082c28b  895c2428             mov dword ptr [esp + 0x28], ebx
// 0082c28f  e8dc900600           call 0x895370
// 0082c294  51                   push ecx
// 0082c295  8bcc                 mov ecx, esp
// 0082c297  89642418             mov dword ptr [esp + 0x18], esp
// 0082c29b  680058a600           push 0xa65800
// 0082c2a0  898674060000         mov dword ptr [esi + 0x674], eax
// 0082c2a6  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 0082c2ac  51                   push ecx
// 0082c2ad  8bcc                 mov ecx, esp
// 0082c2af  89642418             mov dword ptr [esp + 0x18], esp
// 0082c2b3  684458a600           push 0xa65844
// 0082c2b8  c744242c06000000     mov dword ptr [esp + 0x2c], 6
// 0082c2c0  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 0082c2c6  8bcf                 mov ecx, edi
// 0082c2c8  895c2428             mov dword ptr [esp + 0x28], ebx
// 0082c2cc  e89f900600           call 0x895370
// 0082c2d1  51                   push ecx
// 0082c2d2  8bcc                 mov ecx, esp
// 0082c2d4  89642418             mov dword ptr [esp + 0x18], esp
// 0082c2d8  68f457a600           push 0xa657f4
// 0082c2dd  898690030000         mov dword ptr [esi + 0x390], eax
// 0082c2e3  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 0082c2e9  51                   push ecx
// 0082c2ea  8bcc                 mov ecx, esp
// 0082c2ec  89642418             mov dword ptr [esp + 0x18], esp
// 0082c2f0  684458a600           push 0xa65844
// 0082c2f5  c744242c07000000     mov dword ptr [esp + 0x2c], 7
// 0082c2fd  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 0082c303  8bcf                 mov ecx, edi
// 0082c305  895c2428             mov dword ptr [esp + 0x28], ebx
// 0082c309  e862900600           call 0x895370
// 0082c30e  51                   push ecx
// 0082c30f  8bcc                 mov ecx, esp
// 0082c311  89642418             mov dword ptr [esp + 0x18], esp
// 0082c315  68e057a600           push 0xa657e0
// 0082c31a  898670060000         mov dword ptr [esi + 0x670], eax
// 0082c320  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 0082c326  51                   push ecx
// 0082c327  8bcc                 mov ecx, esp
// 0082c329  89642418             mov dword ptr [esp + 0x18], esp
// 0082c32d  684458a600           push 0xa65844
// 0082c332  c744242c08000000     mov dword ptr [esp + 0x2c], 8
// 0082c33a  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 0082c340  8bcf                 mov ecx, edi
// 0082c342  895c2428             mov dword ptr [esp + 0x28], ebx
// 0082c346  e825900600           call 0x895370
// 0082c34b  51                   push ecx
// 0082c34c  8bcc                 mov ecx, esp
// 0082c34e  89642418             mov dword ptr [esp + 0x18], esp
// 0082c352  68c457a600           push 0xa657c4
// 0082c357  898678060000         mov dword ptr [esi + 0x678], eax
// 0082c35d  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 0082c363  51                   push ecx
// 0082c364  8bcc                 mov ecx, esp
// 0082c366  89642418             mov dword ptr [esp + 0x18], esp
// 0082c36a  684458a600           push 0xa65844
// 0082c36f  c744242c09000000     mov dword ptr [esp + 0x2c], 9
// 0082c377  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 0082c37d  8bcf                 mov ecx, edi
// 0082c37f  895c2428             mov dword ptr [esp + 0x28], ebx
// 0082c383  e8e88f0600           call 0x895370
// 0082c388  51                   push ecx
// 0082c389  89867c060000         mov dword ptr [esi + 0x67c], eax
// 0082c38f  8bcc                 mov ecx, esp
// 0082c391  89642418             mov dword ptr [esp + 0x18], esp
// 0082c395  68a857a600           push 0xa657a8
// 0082c39a  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 0082c3a0  51                   push ecx
// 0082c3a1  8bcc                 mov ecx, esp
// 0082c3a3  89642418             mov dword ptr [esp + 0x18], esp
// 0082c3a7  684458a600           push 0xa65844
// 0082c3ac  c744242c0a000000     mov dword ptr [esp + 0x2c], 0xa
// 0082c3b4  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 0082c3ba  8bcf                 mov ecx, edi
// 0082c3bc  895c2428             mov dword ptr [esp + 0x28], ebx
// 0082c3c0  e8ab8f0600           call 0x895370
// 0082c3c5  51                   push ecx
// 0082c3c6  8bcc                 mov ecx, esp
// 0082c3c8  89642418             mov dword ptr [esp + 0x18], esp
// 0082c3cc  689857a600           push 0xa65798
// 0082c3d1  898680060000         mov dword ptr [esi + 0x680], eax
// 0082c3d7  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 0082c3dd  51                   push ecx
// 0082c3de  8bcc                 mov ecx, esp
// 0082c3e0  89642418             mov dword ptr [esp + 0x18], esp
// 0082c3e4  684458a600           push 0xa65844
// 0082c3e9  c744242c0b000000     mov dword ptr [esp + 0x2c], 0xb
// 0082c3f1  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 0082c3f7  8bcf                 mov ecx, edi
// 0082c3f9  895c2428             mov dword ptr [esp + 0x28], ebx
// 0082c3fd  e86e8f0600           call 0x895370
// 0082c402  51                   push ecx
// 0082c403  8bcc                 mov ecx, esp
// 0082c405  89642418             mov dword ptr [esp + 0x18], esp
// 0082c409  688457a600           push 0xa65784
// 0082c40e  898678030000         mov dword ptr [esi + 0x378], eax
// 0082c414  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 0082c41a  51                   push ecx
// 0082c41b  8bcc                 mov ecx, esp
// 0082c41d  89642418             mov dword ptr [esp + 0x18], esp
// 0082c421  684458a600           push 0xa65844
// 0082c426  c744242c0c000000     mov dword ptr [esp + 0x2c], 0xc
// 0082c42e  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 0082c434  8bcf                 mov ecx, edi
// 0082c436  895c2428             mov dword ptr [esp + 0x28], ebx
// 0082c43a  e8318f0600           call 0x895370
// 0082c43f  50                   push eax
// 0082c440  8d8e84060000         lea ecx, [esi + 0x684]
// 0082c446  e82576fbff           call 0x7e3a70
// 0082c44b  d905e026a100         fld dword ptr [0xa126e0]
// 0082c451  83ec08               sub esp, 8
// 0082c454  d95c2404             fstp dword ptr [esp + 4]
// 0082c458  8bcc                 mov ecx, esp
// 0082c45a  8964241c             mov dword ptr [esp + 0x1c], esp
// 0082c45e  686457a600           push 0xa65764
// 0082c463  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 0082c469  51                   push ecx
// 0082c46a  8bcc                 mov ecx, esp
// 0082c46c  8964241c             mov dword ptr [esp + 0x1c], esp
// 0082c470  684458a600           push 0xa65844
// 0082c475  c74424300d000000     mov dword ptr [esp + 0x30], 0xd
// 0082c47d  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 0082c483  8bcf                 mov ecx, edi
// 0082c485  895c242c             mov dword ptr [esp + 0x2c], ebx
// 0082c489  e8e28e0600           call 0x895370
// 0082c48e  50                   push eax
// 0082c48f  51                   push ecx
// 0082c490  8bcc                 mov ecx, esp
// 0082c492  89642420             mov dword ptr [esp + 0x20], esp
// 0082c496  684457a600           push 0xa65744
// 0082c49b  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 0082c4a1  51                   push ecx
// 0082c4a2  8bcc                 mov ecx, esp
// 0082c4a4  89642420             mov dword ptr [esp + 0x20], esp
// 0082c4a8  684458a600           push 0xa65844
// 0082c4ad  c74424340e000000     mov dword ptr [esp + 0x34], 0xe
// 0082c4b5  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 0082c4bb  8bcf                 mov ecx, edi
// 0082c4bd  895c2430             mov dword ptr [esp + 0x30], ebx
// 0082c4c1  e8aa8e0600           call 0x895370
// 0082c4c6  50                   push eax
// 0082c4c7  8d8edc040000         lea ecx, [esi + 0x4dc]
// 0082c4cd  e83e6bfbff           call 0x7e3010
// 0082c4d2  51                   push ecx
// 0082c4d3  8bcc                 mov ecx, esp
// 0082c4d5  89642418             mov dword ptr [esp + 0x18], esp
// 0082c4d9  682c57a600           push 0xa6572c
// 0082c4de  c7462000000000       mov dword ptr [esi + 0x20], 0
// 0082c4e5  c7860c030000a7a7a700 mov dword ptr [esi + 0x30c], 0xa7a7a7
// 0082c4ef  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 0082c4f5  51                   push ecx
// 0082c4f6  8bcc                 mov ecx, esp
// 0082c4f8  89642418             mov dword ptr [esp + 0x18], esp
// 0082c4fc  684458a600           push 0xa65844
// 0082c501  c744242c0f000000     mov dword ptr [esp + 0x2c], 0xf
// 0082c509  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 0082c50f  8bcf                 mov ecx, edi
// 0082c511  895c2428             mov dword ptr [esp + 0x28], ebx
// 0082c515  e8568e0600           call 0x895370
// 0082c51a  d905e026a100         fld dword ptr [0xa126e0]
// 0082c520  51                   push ecx
// 0082c521  d91c24               fstp dword ptr [esp]
// 0082c524  68e9eeee00           push 0xeeeee9
// 0082c529  68e9eeee00           push 0xeeeee9
// 0082c52e  8d8ebc040000         lea ecx, [esi + 0x4bc]
// 0082c534  898684030000         mov dword ptr [esi + 0x384], eax
// 0082c53a  c7866c03000086868600 mov dword ptr [esi + 0x36c], 0x868686
// 0082c544  c78654030000fafafa00 mov dword ptr [esi + 0x354], 0xfafafa
// 0082c54e  e8bd6afbff           call 0x7e3010
// 0082c553  8bce                 mov ecx, esi
// 0082c555  e8e6bf0000           call 0x838540
// 0082c55a  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0082c55e  64890d00000000       mov dword ptr fs:[0], ecx
// 0082c565  59                   pop ecx
// 0082c566  5f                   pop edi
// 0082c567  5e                   pop esi
// 0082c568  5b                   pop ebx
// 0082c569  83c414               add esp, 0x14
// 0082c56c  c3                   ret 
// copied from an identical function in another client (function ?RefreshMetrics@CXTPRibbonTheme@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonTheme.cpp