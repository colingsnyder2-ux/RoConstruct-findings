// roc 2007-08 0052d530  unit: RBX::RunService  size: 341 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0052d530
//
// 0052d530  6aff                 push -1
// 0052d532  6889037500           push 0x750389
// 0052d537  64a100000000         mov eax, dword ptr fs:[0]
// 0052d53d  50                   push eax
// 0052d53e  64892500000000       mov dword ptr fs:[0], esp
// 0052d545  83ec18               sub esp, 0x18
// 0052d548  55                   push ebp
// 0052d549  56                   push esi
// 0052d54a  57                   push edi
// 0052d54b  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0052d553  8b6c244c             mov ebp, dword ptr [esp + 0x4c]
// 0052d557  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0052d55b  83ec08               sub esp, 8
// 0052d55e  85ed                 test ebp, ebp
// 0052d560  8bc4                 mov eax, esp
// 0052d562  8908                 mov dword ptr [eax], ecx
// 0052d564  c744243402000000     mov dword ptr [esp + 0x34], 2
// 0052d56c  89642418             mov dword ptr [esp + 0x18], esp
// 0052d570  896804               mov dword ptr [eax + 4], ebp
// 0052d573  740c                 je 0x52d581
// 0052d575  8d5504               lea edx, [ebp + 4]
// 0052d578  b801000000           mov eax, 1
// 0052d57d  f00fc102             lock xadd dword ptr [edx], eax
// 0052d581  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 0052d585  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0052d589  83ec08               sub esp, 8
// 0052d58c  85ff                 test edi, edi
// 0052d58e  8bc4                 mov eax, esp
// 0052d590  8908                 mov dword ptr [eax], ecx
// 0052d592  89642420             mov dword ptr [esp + 0x20], esp
// 0052d596  897804               mov dword ptr [eax + 4], edi
// 0052d599  740c                 je 0x52d5a7
// 0052d59b  8d5704               lea edx, [edi + 4]
// 0052d59e  b801000000           mov eax, 1
// 0052d5a3  f00fc102             lock xadd dword ptr [edx], eax
// 0052d5a7  8d4c2424             lea ecx, [esp + 0x24]
// 0052d5ab  e8904c0000           call 0x532240
// 0052d5b0  8b742434             mov esi, dword ptr [esp + 0x34]
// 0052d5b4  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0052d5b8  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0052d5bc  890e                 mov dword ptr [esi], ecx
// 0052d5be  895604               mov dword ptr [esi + 4], edx
// 0052d5c1  8b08                 mov ecx, dword ptr [eax]
// 0052d5c3  894e08               mov dword ptr [esi + 8], ecx
// 0052d5c6  8b4804               mov ecx, dword ptr [eax + 4]
// 0052d5c9  85c9                 test ecx, ecx
// 0052d5cb  894e0c               mov dword ptr [esi + 0xc], ecx
// 0052d5ce  740c                 je 0x52d5dc
// 0052d5d0  83c104               add ecx, 4
// 0052d5d3  ba01000000           mov edx, 1
// 0052d5d8  f00fc111             lock xadd dword ptr [ecx], edx
// 0052d5dc  8b4808               mov ecx, dword ptr [eax + 8]
// 0052d5df  894e10               mov dword ptr [esi + 0x10], ecx
// 0052d5e2  8b400c               mov eax, dword ptr [eax + 0xc]
// 0052d5e5  85c0                 test eax, eax
// 0052d5e7  894614               mov dword ptr [esi + 0x14], eax
// 0052d5ea  740c                 je 0x52d5f8
// 0052d5ec  83c004               add eax, 4
// 0052d5ef  ba01000000           mov edx, 1
// 0052d5f4  f00fc110             lock xadd dword ptr [eax], edx
// 0052d5f8  8d4c2414             lea ecx, [esp + 0x14]
// 0052d5fc  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 0052d604  e877f8ffff           call 0x52ce80
// 0052d609  85ff                 test edi, edi
// 0052d60b  c644242c01           mov byte ptr [esp + 0x2c], 1
// 0052d610  742a                 je 0x52d63c
// 0052d612  8d4704               lea eax, [edi + 4]
// 0052d615  83c9ff               or ecx, 0xffffffff
// 0052d618  f00fc108             lock xadd dword ptr [eax], ecx
// 0052d61c  751e                 jne 0x52d63c
// 0052d61e  8b17                 mov edx, dword ptr [edi]
// 0052d620  8b4204               mov eax, dword ptr [edx + 4]
// 0052d623  8bcf                 mov ecx, edi
// 0052d625  ffd0                 call eax
// 0052d627  8d4f08               lea ecx, [edi + 8]
// 0052d62a  83caff               or edx, 0xffffffff
// 0052d62d  f00fc111             lock xadd dword ptr [ecx], edx
// 0052d631  7509                 jne 0x52d63c
// 0052d633  8b07                 mov eax, dword ptr [edi]
// 0052d635  8b5008               mov edx, dword ptr [eax + 8]
// 0052d638  8bcf                 mov ecx, edi
// 0052d63a  ffd2                 call edx
// 0052d63c  85ed                 test ebp, ebp
// 0052d63e  c644242c00           mov byte ptr [esp + 0x2c], 0
// 0052d643  742c                 je 0x52d671
// 0052d645  8d4504               lea eax, [ebp + 4]
// 0052d648  83c9ff               or ecx, 0xffffffff
// 0052d64b  f00fc108             lock xadd dword ptr [eax], ecx
// 0052d64f  7520                 jne 0x52d671
// 0052d651  8b5500               mov edx, dword ptr [ebp]
// 0052d654  8b4204               mov eax, dword ptr [edx + 4]
// 0052d657  8bcd                 mov ecx, ebp
// 0052d659  ffd0                 call eax
// 0052d65b  8d4d08               lea ecx, [ebp + 8]
// 0052d65e  83caff               or edx, 0xffffffff
// 0052d661  f00fc111             lock xadd dword ptr [ecx], edx
// 0052d665  750a                 jne 0x52d671
// 0052d667  8b4500               mov eax, dword ptr [ebp]
// 0052d66a  8b5008               mov edx, dword ptr [eax + 8]
// 0052d66d  8bcd                 mov ecx, ebp
// 0052d66f  ffd2                 call edx
// 0052d671  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0052d675  5f                   pop edi
// 0052d676  8bc6                 mov eax, esi
// 0052d678  5e                   pop esi
// 0052d679  64890d00000000       mov dword ptr fs:[0], ecx
// 0052d680  5d                   pop ebp
// 0052d681  83c424               add esp, 0x24
// 0052d684  c3                   ret 
// library rbxgs/util\RunStateOwner.cpp (function ??$bind@XVRunService@RBX@@V?$shared_ptr@VDataModel@RBX@@@boost@@V?$shared_ptr@VRunService@RBX@@@4@V34@@boost@@YA?AV?$bind_t@XV?$mf1@XVRunService@RBX@@V?$shared_ptr@VDataModel@RBX@@@boost@@@_mfi@boost@@V?$list2@V?$value@V?$shared_ptr@VRunService@RBX@@@boost@@@_bi@boost@@V?$value@V?$shared_ptr@VDataModel@RBX@@@boost@@@23@@_bi@3@@_bi@0@P8RunService@RBX@@AEXV?$shared_ptr@VDataModel@RBX@@@0@@ZV?$shared_ptr@VRunService@RBX@@@0@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
