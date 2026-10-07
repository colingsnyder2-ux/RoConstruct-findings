// roc 2012-06 0059c4b0  unit: VAuthoringSettings::?$FactoryProduct  size: 459 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0059c4b0
//
// 0059c4b0  83ec30               sub esp, 0x30
// 0059c4b3  8b11                 mov edx, dword ptr [ecx]
// 0059c4b5  53                   push ebx
// 0059c4b6  55                   push ebp
// 0059c4b7  56                   push esi
// 0059c4b8  57                   push edi
// 0059c4b9  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 0059c4bd  8bc7                 mov eax, edi
// 0059c4bf  c1e004               shl eax, 4
// 0059c4c2  8b740208             mov esi, dword ptr [edx + eax + 8]
// 0059c4c6  89742410             mov dword ptr [esp + 0x10], esi
// 0059c4ca  8b7104               mov esi, dword ptr [ecx + 4]
// 0059c4cd  c1e604               shl esi, 4
// 0059c4d0  8b5c16f0             mov ebx, dword ptr [esi + edx - 0x10]
// 0059c4d4  891c02               mov dword ptr [edx + eax], ebx
// 0059c4d7  8b5c16f4             mov ebx, dword ptr [esi + edx - 0xc]
// 0059c4db  8d7416f0             lea esi, [esi + edx - 0x10]
// 0059c4df  895c0204             mov dword ptr [edx + eax + 4], ebx
// 0059c4e3  8b5e08               mov ebx, dword ptr [esi + 8]
// 0059c4e6  895c0208             mov dword ptr [edx + eax + 8], ebx
// 0059c4ea  8b760c               mov esi, dword ptr [esi + 0xc]
// 0059c4ed  8974020c             mov dword ptr [edx + eax + 0xc], esi
// 0059c4f1  8b11                 mov edx, dword ptr [ecx]
// 0059c4f3  8b3410               mov esi, dword ptr [eax + edx]
// 0059c4f6  89742418             mov dword ptr [esp + 0x18], esi
// 0059c4fa  8b741004             mov esi, dword ptr [eax + edx + 4]
// 0059c4fe  ff4904               dec dword ptr [ecx + 4]
// 0059c501  8b4104               mov eax, dword ptr [ecx + 4]
// 0059c504  8d5c3f01             lea ebx, [edi + edi + 1]
// 0059c508  8d543f02             lea edx, [edi + edi + 2]
// 0059c50c  8974241c             mov dword ptr [esp + 0x1c], esi
// 0059c510  89542444             mov dword ptr [esp + 0x44], edx
// 0059c514  3bd8                 cmp ebx, eax
// 0059c516  0f8351010000         jae 0x59c66d
// 0059c51c  eb06                 jmp 0x59c524
// 0059c51e  8bff                 mov edi, edi
// 0059c520  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0059c524  3b5104               cmp edx, dword ptr [ecx + 4]
// 0059c527  0f8321010000         jae 0x59c64e
// 0059c52d  8b01                 mov eax, dword ptr [ecx]
// 0059c52f  8bd3                 mov edx, ebx
// 0059c531  c1e204               shl edx, 4
// 0059c534  03d0                 add edx, eax
// 0059c536  397204               cmp dword ptr [edx + 4], esi
// 0059c539  7238                 jb 0x59c573
// 0059c53b  770c                 ja 0x59c549
// 0059c53d  8b32                 mov esi, dword ptr [edx]
// 0059c53f  3b742418             cmp esi, dword ptr [esp + 0x18]
// 0059c543  722e                 jb 0x59c573
// 0059c545  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0059c549  8b6c2444             mov ebp, dword ptr [esp + 0x44]
// 0059c54d  c1e504               shl ebp, 4
// 0059c550  896c2414             mov dword ptr [esp + 0x14], ebp
// 0059c554  8b6c2804             mov ebp, dword ptr [eax + ebp + 4]
// 0059c558  3bee                 cmp ebp, esi
// 0059c55a  0f870d010000         ja 0x59c66d
// 0059c560  7211                 jb 0x59c573
// 0059c562  8b742414             mov esi, dword ptr [esp + 0x14]
// 0059c566  8b3406               mov esi, dword ptr [esi + eax]
// 0059c569  3b742418             cmp esi, dword ptr [esp + 0x18]
// 0059c56d  0f83fa000000         jae 0x59c66d
// 0059c573  8b742444             mov esi, dword ptr [esp + 0x44]
// 0059c577  8b6a04               mov ebp, dword ptr [edx + 4]
// 0059c57a  c1e604               shl esi, 4
// 0059c57d  03f0                 add esi, eax
// 0059c57f  3b6e04               cmp ebp, dword ptr [esi + 4]
// 0059c582  775a                 ja 0x59c5de
// 0059c584  7206                 jb 0x59c58c
// 0059c586  8b2a                 mov ebp, dword ptr [edx]
// 0059c588  3b2e                 cmp ebp, dword ptr [esi]
// 0059c58a  7352                 jae 0x59c5de
// 0059c58c  8b7204               mov esi, dword ptr [edx + 4]
// 0059c58f  8b2a                 mov ebp, dword ptr [edx]
// 0059c591  89742424             mov dword ptr [esp + 0x24], esi
// 0059c595  8b7208               mov esi, dword ptr [edx + 8]
// 0059c598  89742428             mov dword ptr [esp + 0x28], esi
// 0059c59c  8b720c               mov esi, dword ptr [edx + 0xc]
// 0059c59f  8974242c             mov dword ptr [esp + 0x2c], esi
// 0059c5a3  8bf7                 mov esi, edi
// 0059c5a5  c1e604               shl esi, 4
// 0059c5a8  8b3c06               mov edi, dword ptr [esi + eax]
// 0059c5ab  893a                 mov dword ptr [edx], edi
// 0059c5ad  8b7c0604             mov edi, dword ptr [esi + eax + 4]
// 0059c5b1  897a04               mov dword ptr [edx + 4], edi
// 0059c5b4  8b7c0608             mov edi, dword ptr [esi + eax + 8]
// 0059c5b8  897a08               mov dword ptr [edx + 8], edi
// 0059c5bb  8b44060c             mov eax, dword ptr [esi + eax + 0xc]
// 0059c5bf  89420c               mov dword ptr [edx + 0xc], eax
// 0059c5c2  8b01                 mov eax, dword ptr [ecx]
// 0059c5c4  8b542424             mov edx, dword ptr [esp + 0x24]
// 0059c5c8  03c6                 add eax, esi
// 0059c5ca  8928                 mov dword ptr [eax], ebp
// 0059c5cc  895004               mov dword ptr [eax + 4], edx
// 0059c5cf  8b542428             mov edx, dword ptr [esp + 0x28]
// 0059c5d3  895008               mov dword ptr [eax + 8], edx
// 0059c5d6  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0059c5da  8bfb                 mov edi, ebx
// 0059c5dc  eb4a                 jmp 0x59c628
// 0059c5de  8b5608               mov edx, dword ptr [esi + 8]
// 0059c5e1  8b1e                 mov ebx, dword ptr [esi]
// 0059c5e3  8b6e04               mov ebp, dword ptr [esi + 4]
// 0059c5e6  89542438             mov dword ptr [esp + 0x38], edx
// 0059c5ea  8b560c               mov edx, dword ptr [esi + 0xc]
// 0059c5ed  8954243c             mov dword ptr [esp + 0x3c], edx
// 0059c5f1  8bd7                 mov edx, edi
// 0059c5f3  c1e204               shl edx, 4
// 0059c5f6  8b3c02               mov edi, dword ptr [edx + eax]
// 0059c5f9  893e                 mov dword ptr [esi], edi
// 0059c5fb  8b7c0204             mov edi, dword ptr [edx + eax + 4]
// 0059c5ff  897e04               mov dword ptr [esi + 4], edi
// 0059c602  8b7c0208             mov edi, dword ptr [edx + eax + 8]
// 0059c606  897e08               mov dword ptr [esi + 8], edi
// 0059c609  8b44020c             mov eax, dword ptr [edx + eax + 0xc]
// 0059c60d  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 0059c611  89460c               mov dword ptr [esi + 0xc], eax
// 0059c614  8b01                 mov eax, dword ptr [ecx]
// 0059c616  03c2                 add eax, edx
// 0059c618  8b542438             mov edx, dword ptr [esp + 0x38]
// 0059c61c  8918                 mov dword ptr [eax], ebx
// 0059c61e  896804               mov dword ptr [eax + 4], ebp
// 0059c621  895008               mov dword ptr [eax + 8], edx
// 0059c624  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0059c628  89500c               mov dword ptr [eax + 0xc], edx
// 0059c62b  8d5c3f01             lea ebx, [edi + edi + 1]
// 0059c62f  8d543f02             lea edx, [edi + edi + 2]
// 0059c633  89542444             mov dword ptr [esp + 0x44], edx
// 0059c637  3b5904               cmp ebx, dword ptr [ecx + 4]
// 0059c63a  0f82e0feffff         jb 0x59c520
// 0059c640  8b442410             mov eax, dword ptr [esp + 0x10]
// 0059c644  5f                   pop edi
// 0059c645  5e                   pop esi
// 0059c646  5d                   pop ebp
// 0059c647  5b                   pop ebx
// 0059c648  83c430               add esp, 0x30
// 0059c64b  c20400               ret 4
// 0059c64e  8b11                 mov edx, dword ptr [ecx]
// 0059c650  8bc3                 mov eax, ebx
// 0059c652  c1e004               shl eax, 4
// 0059c655  3b741004             cmp esi, dword ptr [eax + edx + 4]
// 0059c659  7212                 jb 0x59c66d
// 0059c65b  7709                 ja 0x59c666
// 0059c65d  8b742418             mov esi, dword ptr [esp + 0x18]
// 0059c661  3b3410               cmp esi, dword ptr [eax + edx]
// 0059c664  7607                 jbe 0x59c66d
// 0059c666  57                   push edi
// 0059c667  53                   push ebx
// 0059c668  e8a3f1ffff           call 0x59b810
// 0059c66d  8b442410             mov eax, dword ptr [esp + 0x10]
// 0059c671  5f                   pop edi
// 0059c672  5e                   pop esi
// 0059c673  5d                   pop ebp
// 0059c674  5b                   pop ebx
// 0059c675  83c430               add esp, 0x30
// 0059c678  c20400               ret 4
// library rbx2016-raknet/ReliabilityLayer.cpp (function ?Pop@?$Heap@_KPAUInternalPacket@RakNet@@$0A@@DataStructures@@QAEPAUInternalPacket@RakNet@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet ReliabilityLayer.cpp
