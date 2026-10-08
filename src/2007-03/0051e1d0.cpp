// roc 2007-03 0051e1d0  unit: seg_00510000  size: 256 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0051e1d0
//
// 0051e1d0  51                   push ecx
// 0051e1d1  53                   push ebx
// 0051e1d2  55                   push ebp
// 0051e1d3  56                   push esi
// 0051e1d4  8bd8                 mov ebx, eax
// 0051e1d6  8bf1                 mov esi, ecx
// 0051e1d8  57                   push edi
// 0051e1d9  8b7c9e48             mov edi, dword ptr [esi + ebx*4 + 0x48]
// 0051e1dd  85ff                 test edi, edi
// 0051e1df  897c2410             mov dword ptr [esp + 0x10], edi
// 0051e1e3  7518                 jne 0x51e1fd
// 0051e1e5  8b06                 mov eax, dword ptr [esi]
// 0051e1e7  c7401434000000       mov dword ptr [eax + 0x14], 0x34
// 0051e1ee  8b0e                 mov ecx, dword ptr [esi]
// 0051e1f0  895918               mov dword ptr [ecx + 0x18], ebx
// 0051e1f3  8b16                 mov edx, dword ptr [esi]
// 0051e1f5  8b02                 mov eax, dword ptr [edx]
// 0051e1f7  56                   push esi
// 0051e1f8  ffd0                 call eax
// 0051e1fa  83c404               add esp, 4
// 0051e1fd  33ed                 xor ebp, ebp
// 0051e1ff  8d4704               lea eax, [edi + 4]
// 0051e202  ba10000000           mov edx, 0x10
// 0051e207  eb07                 jmp 0x51e210
// 0051e209  8da42400000000       lea esp, [esp]
// 0051e210  b9ff000000           mov ecx, 0xff
// 0051e215  663948fc             cmp word ptr [eax - 4], cx
// 0051e219  7605                 jbe 0x51e220
// 0051e21b  bd01000000           mov ebp, 1
// 0051e220  663948fe             cmp word ptr [eax - 2], cx
// 0051e224  7605                 jbe 0x51e22b
// 0051e226  bd01000000           mov ebp, 1
// 0051e22b  663908               cmp word ptr [eax], cx
// 0051e22e  7605                 jbe 0x51e235
// 0051e230  bd01000000           mov ebp, 1
// 0051e235  66394802             cmp word ptr [eax + 2], cx
// 0051e239  7605                 jbe 0x51e240
// 0051e23b  bd01000000           mov ebp, 1
// 0051e240  83c008               add eax, 8
// 0051e243  83ea01               sub edx, 1
// 0051e246  75c8                 jne 0x51e210
// 0051e248  80bf8000000000       cmp byte ptr [edi + 0x80], 0
// 0051e24f  7577                 jne 0x51e2c8
// 0051e251  68db000000           push 0xdb
// 0051e256  8bc6                 mov eax, esi
// 0051e258  e823ffffff           call 0x51e180
// 0051e25d  8bc5                 mov eax, ebp
// 0051e25f  f7d8                 neg eax
// 0051e261  1bc0                 sbb eax, eax
// 0051e263  83e040               and eax, 0x40
// 0051e266  83c043               add eax, 0x43
// 0051e269  8bce                 mov ecx, esi
// 0051e26b  e830ffffff           call 0x51e1a0
// 0051e270  8bcd                 mov ecx, ebp
// 0051e272  c1e104               shl ecx, 4
// 0051e275  03cb                 add ecx, ebx
// 0051e277  51                   push ecx
// 0051e278  e8c3feffff           call 0x51e140
// 0051e27d  83c408               add esp, 8
// 0051e280  bb202c7a00           mov ebx, 0x7a2c20
// 0051e285  eb04                 jmp 0x51e28b
// 0051e287  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0051e28b  85ed                 test ebp, ebp
// 0051e28d  8b13                 mov edx, dword ptr [ebx]
// 0051e28f  0fb73c57             movzx edi, word ptr [edi + edx*2]
// 0051e293  740e                 je 0x51e2a3
// 0051e295  8bc7                 mov eax, edi
// 0051e297  c1e808               shr eax, 8
// 0051e29a  50                   push eax
// 0051e29b  e8a0feffff           call 0x51e140
// 0051e2a0  83c404               add esp, 4
// 0051e2a3  81e7ff000000         and edi, 0xff
// 0051e2a9  57                   push edi
// 0051e2aa  e891feffff           call 0x51e140
// 0051e2af  83c304               add ebx, 4
// 0051e2b2  83c404               add esp, 4
// 0051e2b5  81fb202d7a00         cmp ebx, 0x7a2d20
// 0051e2bb  7cca                 jl 0x51e287
// 0051e2bd  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0051e2c1  c6818000000001       mov byte ptr [ecx + 0x80], 1
// 0051e2c8  5f                   pop edi
// 0051e2c9  5e                   pop esi
// 0051e2ca  8bc5                 mov eax, ebp
// 0051e2cc  5d                   pop ebp
// 0051e2cd  5b                   pop ebx
// 0051e2ce  59                   pop ecx
// 0051e2cf  c3                   ret 
// library jpeg-6b/jcmarker.c (function _emit_dqt)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /Ob1 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
