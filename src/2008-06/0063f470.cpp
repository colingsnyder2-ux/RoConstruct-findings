// roc 2008-06 0063f470  unit: RBX::ResizeTool  size: 437 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063f470
//
// 0063f470  6aff                 push -1
// 0063f472  6818117d00           push 0x7d1118
// 0063f477  64a100000000         mov eax, dword ptr fs:[0]
// 0063f47d  50                   push eax
// 0063f47e  64892500000000       mov dword ptr fs:[0], esp
// 0063f485  83ec10               sub esp, 0x10
// 0063f488  8b4114               mov eax, dword ptr [ecx + 0x14]
// 0063f48b  89442404             mov dword ptr [esp + 4], eax
// 0063f48f  33c0                 xor eax, eax
// 0063f491  56                   push esi
// 0063f492  57                   push edi
// 0063f493  894c2408             mov dword ptr [esp + 8], ecx
// 0063f497  89442410             mov dword ptr [esp + 0x10], eax
// 0063f49b  89442414             mov dword ptr [esp + 0x14], eax
// 0063f49f  6a01                 push 1
// 0063f4a1  8d4c2410             lea ecx, [esp + 0x10]
// 0063f4a5  89442424             mov dword ptr [esp + 0x24], eax
// 0063f4a9  e81228f4ff           call 0x581cc0
// 0063f4ae  8bb054010000         mov esi, dword ptr [eax + 0x154]
// 0063f4b4  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 0063f4b7  3b7e10               cmp edi, dword ptr [esi + 0x10]
// 0063f4ba  7606                 jbe 0x63f4c2
// 0063f4bc  ff1590288000         call dword ptr [0x802890]
// 0063f4c2  53                   push ebx
// 0063f4c3  55                   push ebp
// 0063f4c4  8b2e                 mov ebp, dword ptr [esi]
// 0063f4c6  eb08                 jmp 0x63f4d0
// 0063f4c8  8da42400000000       lea esp, [esp]
// 0063f4cf  90                   nop 
// 0063f4d0  6a01                 push 1
// 0063f4d2  8d4c2418             lea ecx, [esp + 0x18]
// 0063f4d6  e8e527f4ff           call 0x581cc0
// 0063f4db  8bb054010000         mov esi, dword ptr [eax + 0x154]
// 0063f4e1  8b5e10               mov ebx, dword ptr [esi + 0x10]
// 0063f4e4  395e0c               cmp dword ptr [esi + 0xc], ebx
// 0063f4e7  7606                 jbe 0x63f4ef
// 0063f4e9  ff1590288000         call dword ptr [0x802890]
// 0063f4ef  8b36                 mov esi, dword ptr [esi]
// 0063f4f1  85ed                 test ebp, ebp
// 0063f4f3  7404                 je 0x63f4f9
// 0063f4f5  3bee                 cmp ebp, esi
// 0063f4f7  740a                 je 0x63f503
// 0063f4f9  8b3590288000         mov esi, dword ptr [0x802890]
// 0063f4ff  ffd6                 call esi
// 0063f501  eb06                 jmp 0x63f509
// 0063f503  8b3590288000         mov esi, dword ptr [0x802890]
// 0063f509  3bfb                 cmp edi, ebx
// 0063f50b  0f84c5000000         je 0x63f5d6
// 0063f511  85ed                 test ebp, ebp
// 0063f513  0f85b0000000         jne 0x63f5c9
// 0063f519  ffd6                 call esi
// 0063f51b  33c0                 xor eax, eax
// 0063f51d  3b7810               cmp edi, dword ptr [eax + 0x10]
// 0063f520  7202                 jb 0x63f524
// 0063f522  ffd6                 call esi
// 0063f524  8b07                 mov eax, dword ptr [edi]
// 0063f526  6a00                 push 0
// 0063f528  6850dd9200           push 0x92dd50
// 0063f52d  687c909200           push 0x92907c
// 0063f532  6a00                 push 0
// 0063f534  50                   push eax
// 0063f535  e88c220600           call 0x6a17c6
// 0063f53a  8bf0                 mov esi, eax
// 0063f53c  83c414               add esp, 0x14
// 0063f53f  85f6                 test esi, esi
// 0063f541  7467                 je 0x63f5aa
// 0063f543  f605b4d5970001       test byte ptr [0x97d5b4], 1
// 0063f54a  7527                 jne 0x63f573
// 0063f54c  d90504e78100         fld dword ptr [0x81e704]
// 0063f552  830db4d5970001       or dword ptr [0x97d5b4], 1
// 0063f559  d91da8d59700         fstp dword ptr [0x97d5a8]
// 0063f55f  d90538f88200         fld dword ptr [0x82f838]
// 0063f565  d91dacd59700         fstp dword ptr [0x97d5ac]
// 0063f56b  d9e8                 fld1 
// 0063f56d  d91db0d59700         fstp dword ptr [0x97d5b0]
// 0063f573  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0063f577  8b4114               mov eax, dword ptr [ecx + 0x14]
// 0063f57a  8b542430             mov edx, dword ptr [esp + 0x30]
// 0063f57e  8d8888020000         lea ecx, [eax + 0x288]
// 0063f584  8b01                 mov eax, dword ptr [ecx]
// 0063f586  68a8d59700           push 0x97d5a8
// 0063f58b  52                   push edx
// 0063f58c  8b5008               mov edx, dword ptr [eax + 8]
// 0063f58f  ffd2                 call edx
// 0063f591  50                   push eax
// 0063f592  8bce                 mov ecx, esi
// 0063f594  e81797f5ff           call 0x598cb0
// 0063f599  50                   push eax
// 0063f59a  8bce                 mov ecx, esi
// 0063f59c  e82f97f5ff           call 0x598cd0
// 0063f5a1  50                   push eax
// 0063f5a2  e879850300           call 0x677b20
// 0063f5a7  83c414               add esp, 0x14
// 0063f5aa  85ed                 test ebp, ebp
// 0063f5ac  7523                 jne 0x63f5d1
// 0063f5ae  ff1590288000         call dword ptr [0x802890]
// 0063f5b4  33c0                 xor eax, eax
// 0063f5b6  3b7810               cmp edi, dword ptr [eax + 0x10]
// 0063f5b9  7206                 jb 0x63f5c1
// 0063f5bb  ff1590288000         call dword ptr [0x802890]
// 0063f5c1  83c708               add edi, 8
// 0063f5c4  e907ffffff           jmp 0x63f4d0
// 0063f5c9  8b4500               mov eax, dword ptr [ebp]
// 0063f5cc  e94cffffff           jmp 0x63f51d
// 0063f5d1  8b4500               mov eax, dword ptr [ebp]
// 0063f5d4  ebe0                 jmp 0x63f5b6
// 0063f5d6  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0063f5da  5d                   pop ebp
// 0063f5db  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 0063f5e3  5b                   pop ebx
// 0063f5e4  85f6                 test esi, esi
// 0063f5e6  742a                 je 0x63f612
// 0063f5e8  8d4604               lea eax, [esi + 4]
// 0063f5eb  83c9ff               or ecx, 0xffffffff
// 0063f5ee  f00fc108             lock xadd dword ptr [eax], ecx
// 0063f5f2  751e                 jne 0x63f612
// 0063f5f4  8b16                 mov edx, dword ptr [esi]
// 0063f5f6  8b4204               mov eax, dword ptr [edx + 4]
// 0063f5f9  8bce                 mov ecx, esi
// 0063f5fb  ffd0                 call eax
// 0063f5fd  8d4e08               lea ecx, [esi + 8]
// 0063f600  83caff               or edx, 0xffffffff
// 0063f603  f00fc111             lock xadd dword ptr [ecx], edx
// 0063f607  7509                 jne 0x63f612
// 0063f609  8b06                 mov eax, dword ptr [esi]
// 0063f60b  8b5008               mov edx, dword ptr [eax + 8]
// 0063f60e  8bce                 mov ecx, esi
// 0063f610  ffd2                 call edx
// 0063f612  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0063f616  5f                   pop edi
// 0063f617  5e                   pop esi
// 0063f618  64890d00000000       mov dword ptr fs:[0], ecx
// 0063f61f  83c41c               add esp, 0x1c
// 0063f622  c20400               ret 4
// library rbxgs/roc_unit_4329760619cd676f.cpp (function ?render2d@ResizeTool@RBX@@MAEXPAVAdorn@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_4329760619cd676f.cpp
