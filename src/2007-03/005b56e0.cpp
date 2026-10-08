// roc 2007-03 005b56e0  unit: seg_005b0000  size: 369 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005b56e0
//
// 005b56e0  64a100000000         mov eax, dword ptr fs:[0]
// 005b56e6  6aff                 push -1
// 005b56e8  68e8397500           push 0x7539e8
// 005b56ed  50                   push eax
// 005b56ee  64892500000000       mov dword ptr fs:[0], esp
// 005b56f5  83ec0c               sub esp, 0xc
// 005b56f8  53                   push ebx
// 005b56f9  55                   push ebp
// 005b56fa  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 005b56fe  56                   push esi
// 005b56ff  57                   push edi
// 005b5700  55                   push ebp
// 005b5701  e85afdffff           call 0x5b5460
// 005b5706  83c404               add esp, 4
// 005b5709  8bcd                 mov ecx, ebp
// 005b570b  33db                 xor ebx, ebx
// 005b570d  e80ecbfbff           call 0x572220
// 005b5712  85c0                 test eax, eax
// 005b5714  0f8624010000         jbe 0x5b583e
// 005b571a  8d9b00000000         lea ebx, [ebx]
// 005b5720  8b4d04               mov ecx, dword ptr [ebp + 4]
// 005b5723  85c9                 test ecx, ecx
// 005b5725  740c                 je 0x5b5733
// 005b5727  8b4508               mov eax, dword ptr [ebp + 8]
// 005b572a  2bc1                 sub eax, ecx
// 005b572c  c1f803               sar eax, 3
// 005b572f  3bd8                 cmp ebx, eax
// 005b5731  7206                 jb 0x5b5739
// 005b5733  ff1544e97700         call dword ptr [0x77e944]
// 005b5739  8b4504               mov eax, dword ptr [ebp + 4]
// 005b573c  8d542414             lea edx, [esp + 0x14]
// 005b5740  8d0cd8               lea ecx, [eax + ebx*8]
// 005b5743  52                   push edx
// 005b5744  e8675c0100           call 0x5cb3b0
// 005b5749  8b742418             mov esi, dword ptr [esp + 0x18]
// 005b574d  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005b5751  83ec08               sub esp, 8
// 005b5754  85f6                 test esi, esi
// 005b5756  8bc4                 mov eax, esp
// 005b5758  8938                 mov dword ptr [eax], edi
// 005b575a  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 005b5762  89642418             mov dword ptr [esp + 0x18], esp
// 005b5766  897004               mov dword ptr [eax + 4], esi
// 005b5769  740c                 je 0x5b5777
// 005b576b  8d4604               lea eax, [esi + 4]
// 005b576e  b901000000           mov ecx, 1
// 005b5773  f00fc108             lock xadd dword ptr [eax], ecx
// 005b5777  e884cffbff           call 0x572700
// 005b577c  83c408               add esp, 8
// 005b577f  84c0                 test al, al
// 005b5781  7473                 je 0x5b57f6
// 005b5783  6a00                 push 0
// 005b5785  8bcf                 mov ecx, edi
// 005b5787  e87412fcff           call 0x576a00
// 005b578c  8bcd                 mov ecx, ebp
// 005b578e  e88dcafbff           call 0x572220
// 005b5793  83f801               cmp eax, 1
// 005b5796  755e                 jne 0x5b57f6
// 005b5798  840500788b00         test byte ptr [0x8b7800], al
// 005b579e  751a                 jne 0x5b57ba
// 005b57a0  d9ee                 fldz 
// 005b57a2  090500788b00         or dword ptr [0x8b7800], eax
// 005b57a8  d915f4778b00         fst dword ptr [0x8b77f4]
// 005b57ae  d915f8778b00         fst dword ptr [0x8b77f8]
// 005b57b4  d91dfc778b00         fstp dword ptr [0x8b77fc]
// 005b57ba  68f4778b00           push 0x8b77f4
// 005b57bf  8bcf                 mov ecx, edi
// 005b57c1  e82a0ffcff           call 0x5766f0
// 005b57c6  f60500788b0001       test byte ptr [0x8b7800], 1
// 005b57cd  751b                 jne 0x5b57ea
// 005b57cf  d9ee                 fldz 
// 005b57d1  830d00788b0001       or dword ptr [0x8b7800], 1
// 005b57d8  d915f4778b00         fst dword ptr [0x8b77f4]
// 005b57de  d915f8778b00         fst dword ptr [0x8b77f8]
// 005b57e4  d91dfc778b00         fstp dword ptr [0x8b77fc]
// 005b57ea  68f4778b00           push 0x8b77f4
// 005b57ef  8bcf                 mov ecx, edi
// 005b57f1  e8ba0ffcff           call 0x5767b0
// 005b57f6  85f6                 test esi, esi
// 005b57f8  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 005b5800  742a                 je 0x5b582c
// 005b5802  8d5604               lea edx, [esi + 4]
// 005b5805  83c8ff               or eax, 0xffffffff
// 005b5808  f00fc102             lock xadd dword ptr [edx], eax
// 005b580c  751e                 jne 0x5b582c
// 005b580e  8b16                 mov edx, dword ptr [esi]
// 005b5810  8b4204               mov eax, dword ptr [edx + 4]
// 005b5813  8bce                 mov ecx, esi
// 005b5815  ffd0                 call eax
// 005b5817  8d4e08               lea ecx, [esi + 8]
// 005b581a  83caff               or edx, 0xffffffff
// 005b581d  f00fc111             lock xadd dword ptr [ecx], edx
// 005b5821  7509                 jne 0x5b582c
// 005b5823  8b06                 mov eax, dword ptr [esi]
// 005b5825  8b5008               mov edx, dword ptr [eax + 8]
// 005b5828  8bce                 mov ecx, esi
// 005b582a  ffd2                 call edx
// 005b582c  8bcd                 mov ecx, ebp
// 005b582e  83c301               add ebx, 1
// 005b5831  e8eac9fbff           call 0x572220
// 005b5836  3bd8                 cmp ebx, eax
// 005b5838  0f82e2feffff         jb 0x5b5720
// 005b583e  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005b5842  5f                   pop edi
// 005b5843  5e                   pop esi
// 005b5844  5d                   pop ebp
// 005b5845  64890d00000000       mov dword ptr fs:[0], ecx
// 005b584c  5b                   pop ebx
// 005b584d  83c418               add esp, 0x18
// 005b5850  c3                   ret 
// library rbxgs/tool\DragUtilities.cpp (function ?joinAndStopDragging@DragUtilities@RBX@@SAXABV?$vector@V?$weak_ptr@VPartInstance@RBX@@@boost@@V?$allocator@V?$weak_ptr@VPartInstance@RBX@@@boost@@@std@@@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/DragUtilities.cpp
