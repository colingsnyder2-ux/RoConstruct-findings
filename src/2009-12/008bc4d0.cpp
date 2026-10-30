// roc 2009-12 008bc4d0  unit: CXTPDockingPaneContextStickerWnd  size: 615 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008bc4d0
//
// 008bc4d0  53                   push ebx
// 008bc4d1  55                   push ebp
// 008bc4d2  56                   push esi
// 008bc4d3  57                   push edi
// 008bc4d4  8bf1                 mov esi, ecx
// 008bc4d6  e8f534f7ff           call 0x82f9d0
// 008bc4db  8bc8                 mov ecx, eax
// 008bc4dd  e84e32f7ff           call 0x82f730
// 008bc4e2  8bd0                 mov edx, eax
// 008bc4e4  8b4654               mov eax, dword ptr [esi + 0x54]
// 008bc4e7  33c9                 xor ecx, ecx
// 008bc4e9  2420                 and al, 0x20
// 008bc4eb  3c20                 cmp al, 0x20
// 008bc4ed  0f94c1               sete cl
// 008bc4f0  8be9                 mov ebp, ecx
// 008bc4f2  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 008bc4f5  e846fcffff           call 0x8bc140
// 008bc4fa  85c0                 test eax, eax
// 008bc4fc  0f8515010000         jne 0x8bc617
// 008bc502  83fa02               cmp edx, 2
// 008bc505  7507                 jne 0x8bc50e
// 008bc507  bbed240000           mov ebx, 0x24ed
// 008bc50c  eb0f                 jmp 0x8bc51d
// 008bc50e  33db                 xor ebx, ebx
// 008bc510  83fa03               cmp edx, 3
// 008bc513  0f94c3               sete bl
// 008bc516  8d9c1bec240000       lea ebx, [ebx + ebx + 0x24ec]
// 008bc51d  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 008bc521  85ed                 test ebp, ebp
// 008bc523  7414                 je 0x8bc539
// 008bc525  6a01                 push 1
// 008bc527  6818bcb900           push 0xb9bc18
// 008bc52c  68eb240000           push 0x24eb
// 008bc531  57                   push edi
// 008bc532  8bce                 mov ecx, esi
// 008bc534  e817feffff           call 0x8bc350
// 008bc539  b804000000           mov eax, 4
// 008bc53e  844654               test byte ptr [esi + 0x54], al
// 008bc541  7420                 je 0x8bc563
// 008bc543  33d2                 xor edx, edx
// 008bc545  394658               cmp dword ptr [esi + 0x58], eax
// 008bc548  55                   push ebp
// 008bc549  0f95c2               setne dl
// 008bc54c  4a                   dec edx
// 008bc54d  23c2                 and eax, edx
// 008bc54f  8d0440               lea eax, [eax + eax*2]
// 008bc552  8d0cc528bbb900       lea ecx, [eax*8 + 0xb9bb28]
// 008bc559  51                   push ecx
// 008bc55a  53                   push ebx
// 008bc55b  57                   push edi
// 008bc55c  8bce                 mov ecx, esi
// 008bc55e  e8edfdffff           call 0x8bc350
// 008bc563  f6465401             test byte ptr [esi + 0x54], 1
// 008bc567  7425                 je 0x8bc58e
// 008bc569  33c0                 xor eax, eax
// 008bc56b  837e5801             cmp dword ptr [esi + 0x58], 1
// 008bc56f  55                   push ebp
// 008bc570  0f94c0               sete al
// 008bc573  8bce                 mov ecx, esi
// 008bc575  8d048501000000       lea eax, [eax*4 + 1]
// 008bc57c  8d1440               lea edx, [eax + eax*2]
// 008bc57f  8d04d528bbb900       lea eax, [edx*8 + 0xb9bb28]
// 008bc586  50                   push eax
// 008bc587  53                   push ebx
// 008bc588  57                   push edi
// 008bc589  e8c2fdffff           call 0x8bc350
// 008bc58e  f6465408             test byte ptr [esi + 0x54], 8
// 008bc592  7425                 je 0x8bc5b9
// 008bc594  33c0                 xor eax, eax
// 008bc596  837e5808             cmp dword ptr [esi + 0x58], 8
// 008bc59a  55                   push ebp
// 008bc59b  0f94c0               sete al
// 008bc59e  8d048502000000       lea eax, [eax*4 + 2]
// 008bc5a5  8d0c40               lea ecx, [eax + eax*2]
// 008bc5a8  8d14cd28bbb900       lea edx, [ecx*8 + 0xb9bb28]
// 008bc5af  52                   push edx
// 008bc5b0  53                   push ebx
// 008bc5b1  57                   push edi
// 008bc5b2  8bce                 mov ecx, esi
// 008bc5b4  e897fdffff           call 0x8bc350
// 008bc5b9  f6465402             test byte ptr [esi + 0x54], 2
// 008bc5bd  7425                 je 0x8bc5e4
// 008bc5bf  33c0                 xor eax, eax
// 008bc5c1  837e5802             cmp dword ptr [esi + 0x58], 2
// 008bc5c5  55                   push ebp
// 008bc5c6  0f94c0               sete al
// 008bc5c9  8d048503000000       lea eax, [eax*4 + 3]
// 008bc5d0  8d0440               lea eax, [eax + eax*2]
// 008bc5d3  8d0cc528bbb900       lea ecx, [eax*8 + 0xb9bb28]
// 008bc5da  51                   push ecx
// 008bc5db  53                   push ebx
// 008bc5dc  57                   push edi
// 008bc5dd  8bce                 mov ecx, esi
// 008bc5df  e86cfdffff           call 0x8bc350
// 008bc5e4  f6465410             test byte ptr [esi + 0x54], 0x10
// 008bc5e8  0f8442010000         je 0x8bc730
// 008bc5ee  33c0                 xor eax, eax
// 008bc5f0  837e5810             cmp dword ptr [esi + 0x58], 0x10
// 008bc5f4  6a01                 push 1
// 008bc5f6  0f94c0               sete al
// 008bc5f9  8bce                 mov ecx, esi
// 008bc5fb  83c008               add eax, 8
// 008bc5fe  8d1440               lea edx, [eax + eax*2]
// 008bc601  8d04d528bbb900       lea eax, [edx*8 + 0xb9bb28]
// 008bc608  50                   push eax
// 008bc609  53                   push ebx
// 008bc60a  57                   push edi
// 008bc60b  e840fdffff           call 0x8bc350
// 008bc610  5f                   pop edi
// 008bc611  5e                   pop esi
// 008bc612  5d                   pop ebp
// 008bc613  5b                   pop ebx
// 008bc614  c20400               ret 4
// 008bc617  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 008bc61b  8bfd                 mov edi, ebp
// 008bc61d  f7df                 neg edi
// 008bc61f  1bff                 sbb edi, edi
// 008bc621  83e7f5               and edi, 0xfffffff5
// 008bc624  83c70b               add edi, 0xb
// 008bc627  85ed                 test ebp, ebp
// 008bc629  7426                 je 0x8bc651
// 008bc62b  33c0                 xor eax, eax
// 008bc62d  837e5810             cmp dword ptr [esi + 0x58], 0x10
// 008bc631  6a01                 push 1
// 008bc633  0f95c0               setne al
// 008bc636  83c009               add eax, 9
// 008bc639  8d0c40               lea ecx, [eax + eax*2]
// 008bc63c  8d14cd30bcb900       lea edx, [ecx*8 + 0xb9bc30]
// 008bc643  52                   push edx
// 008bc644  68ef240000           push 0x24ef
// 008bc649  53                   push ebx
// 008bc64a  8bce                 mov ecx, esi
// 008bc64c  e8fffcffff           call 0x8bc350
// 008bc651  b804000000           mov eax, 4
// 008bc656  844654               test byte ptr [esi + 0x54], al
// 008bc659  7428                 je 0x8bc683
// 008bc65b  33c9                 xor ecx, ecx
// 008bc65d  394658               cmp dword ptr [esi + 0x58], eax
// 008bc660  55                   push ebp
// 008bc661  0f95c1               setne cl
// 008bc664  49                   dec ecx
// 008bc665  23c8                 and ecx, eax
// 008bc667  03cf                 add ecx, edi
// 008bc669  8bc1                 mov eax, ecx
// 008bc66b  8d1440               lea edx, [eax + eax*2]
// 008bc66e  8d04d530bcb900       lea eax, [edx*8 + 0xb9bc30]
// 008bc675  50                   push eax
// 008bc676  68ef240000           push 0x24ef
// 008bc67b  53                   push ebx
// 008bc67c  8bce                 mov ecx, esi
// 008bc67e  e8cdfcffff           call 0x8bc350
// 008bc683  f6465401             test byte ptr [esi + 0x54], 1
// 008bc687  742b                 je 0x8bc6b4
// 008bc689  33c0                 xor eax, eax
// 008bc68b  837e5801             cmp dword ptr [esi + 0x58], 1
// 008bc68f  55                   push ebp
// 008bc690  0f94c0               sete al
// 008bc693  8d048501000000       lea eax, [eax*4 + 1]
// 008bc69a  03c7                 add eax, edi
// 008bc69c  8d0c40               lea ecx, [eax + eax*2]
// 008bc69f  8d14cd30bcb900       lea edx, [ecx*8 + 0xb9bc30]
// 008bc6a6  52                   push edx
// 008bc6a7  68ef240000           push 0x24ef
// 008bc6ac  53                   push ebx
// 008bc6ad  8bce                 mov ecx, esi
// 008bc6af  e89cfcffff           call 0x8bc350
// 008bc6b4  f6465408             test byte ptr [esi + 0x54], 8
// 008bc6b8  742b                 je 0x8bc6e5
// 008bc6ba  33c0                 xor eax, eax
// 008bc6bc  837e5808             cmp dword ptr [esi + 0x58], 8
// 008bc6c0  55                   push ebp
// 008bc6c1  0f94c0               sete al
// 008bc6c4  8d048502000000       lea eax, [eax*4 + 2]
// 008bc6cb  03c7                 add eax, edi
// 008bc6cd  8d0440               lea eax, [eax + eax*2]
// 008bc6d0  8d0cc530bcb900       lea ecx, [eax*8 + 0xb9bc30]
// 008bc6d7  51                   push ecx
// 008bc6d8  68ef240000           push 0x24ef
// 008bc6dd  53                   push ebx
// 008bc6de  8bce                 mov ecx, esi
// 008bc6e0  e86bfcffff           call 0x8bc350
// 008bc6e5  f6465402             test byte ptr [esi + 0x54], 2
// 008bc6e9  742b                 je 0x8bc716
// 008bc6eb  33c0                 xor eax, eax
// 008bc6ed  837e5802             cmp dword ptr [esi + 0x58], 2
// 008bc6f1  55                   push ebp
// 008bc6f2  0f94c0               sete al
// 008bc6f5  8bce                 mov ecx, esi
// 008bc6f7  8d048503000000       lea eax, [eax*4 + 3]
// 008bc6fe  03c7                 add eax, edi
// 008bc700  8d1440               lea edx, [eax + eax*2]
// 008bc703  8d04d530bcb900       lea eax, [edx*8 + 0xb9bc30]
// 008bc70a  50                   push eax
// 008bc70b  68ef240000           push 0x24ef
// 008bc710  53                   push ebx
// 008bc711  e83afcffff           call 0x8bc350
// 008bc716  f6465410             test byte ptr [esi + 0x54], 0x10
// 008bc71a  7414                 je 0x8bc730
// 008bc71c  6a01                 push 1
// 008bc71e  68f0bcb900           push 0xb9bcf0
// 008bc723  68ef240000           push 0x24ef
// 008bc728  53                   push ebx
// 008bc729  8bce                 mov ecx, esi
// 008bc72b  e820fcffff           call 0x8bc350
// 008bc730  5f                   pop edi
// 008bc731  5e                   pop esi
// 008bc732  5d                   pop ebp
// 008bc733  5b                   pop ebx
// 008bc734  c20400               ret 4
// copied from an identical function in another client (function ?OnDraw@CXTPDockingPaneContextStickerWnd@@QAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneContext.cpp