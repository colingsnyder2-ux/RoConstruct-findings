// from server: 100% by auto
// roc 2007-08 004be500  unit: RakPeer  size: 712 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004be500
//
// 004be500  83ec60               sub esp, 0x60
// 004be503  33c0                 xor eax, eax
// 004be505  56                   push esi
// 004be506  8b742468             mov esi, dword ptr [esp + 0x68]
// 004be50a  89442418             mov dword ptr [esp + 0x18], eax
// 004be50e  8944241c             mov dword ptr [esp + 0x1c], eax
// 004be512  89442420             mov dword ptr [esp + 0x20], eax
// 004be516  8d442424             lea eax, [esp + 0x24]
// 004be51a  50                   push eax
// 004be51b  56                   push esi
// 004be51c  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 004be524  e8f7f7ffff           call 0x4bdd20
// 004be529  8d4c244c             lea ecx, [esp + 0x4c]
// 004be52d  51                   push ecx
// 004be52e  8d542440             lea edx, [esp + 0x40]
// 004be532  52                   push edx
// 004be533  8d442434             lea eax, [esp + 0x34]
// 004be537  50                   push eax
// 004be538  56                   push esi
// 004be539  e842d5ffff           call 0x4bba80
// 004be53e  83c418               add esp, 0x18
// 004be541  33c0                 xor eax, eax
// 004be543  837c844400           cmp dword ptr [esp + eax*4 + 0x44], 0
// 004be548  752c                 jne 0x4be576
// 004be54a  83c001               add eax, 1
// 004be54d  83f804               cmp eax, 4
// 004be550  72f1                 jb 0x4be543
// 004be552  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 004be556  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004be55a  8b542418             mov edx, dword ptr [esp + 0x18]
// 004be55e  8908                 mov dword ptr [eax], ecx
// 004be560  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004be564  895004               mov dword ptr [eax + 4], edx
// 004be567  8b542420             mov edx, dword ptr [esp + 0x20]
// 004be56b  894808               mov dword ptr [eax + 8], ecx
// 004be56e  89500c               mov dword ptr [eax + 0xc], edx
// 004be571  5e                   pop esi
// 004be572  83c460               add esp, 0x60
// 004be575  c3                   ret 
// 004be576  8b4e04               mov ecx, dword ptr [esi + 4]
// 004be579  8b5608               mov edx, dword ptr [esi + 8]
// 004be57c  8b06                 mov eax, dword ptr [esi]
// 004be57e  894c2408             mov dword ptr [esp + 8], ecx
// 004be582  8d4c2434             lea ecx, [esp + 0x34]
// 004be586  8954240c             mov dword ptr [esp + 0xc], edx
// 004be58a  89442404             mov dword ptr [esp + 4], eax
// 004be58e  8b460c               mov eax, dword ptr [esi + 0xc]
// 004be591  51                   push ecx
// 004be592  8d542408             lea edx, [esp + 8]
// 004be596  52                   push edx
// 004be597  89442418             mov dword ptr [esp + 0x18], eax
// 004be59b  e8e0b2ffff           call 0x4b9880
// 004be5a0  8d44242c             lea eax, [esp + 0x2c]
// 004be5a4  50                   push eax
// 004be5a5  8d4c2440             lea ecx, [esp + 0x40]
// 004be5a9  51                   push ecx
// 004be5aa  8d542454             lea edx, [esp + 0x54]
// 004be5ae  52                   push edx
// 004be5af  50                   push eax
// 004be5b0  e8cbd4ffff           call 0x4bba80
// 004be5b5  83c418               add esp, 0x18
// 004be5b8  33c0                 xor eax, eax
// 004be5ba  8d9b00000000         lea ebx, [ebx]
// 004be5c0  837c842400           cmp dword ptr [esp + eax*4 + 0x24], 0
// 004be5c5  752c                 jne 0x4be5f3
// 004be5c7  83c001               add eax, 1
// 004be5ca  83f804               cmp eax, 4
// 004be5cd  72f1                 jb 0x4be5c0
// 004be5cf  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 004be5d3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004be5d7  8b542408             mov edx, dword ptr [esp + 8]
// 004be5db  8908                 mov dword ptr [eax], ecx
// 004be5dd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004be5e1  895004               mov dword ptr [eax + 4], edx
// 004be5e4  8b542410             mov edx, dword ptr [esp + 0x10]
// 004be5e8  894808               mov dword ptr [eax + 8], ecx
// 004be5eb  89500c               mov dword ptr [eax + 0xc], edx
// 004be5ee  5e                   pop esi
// 004be5ef  83c460               add esp, 0x60
// 004be5f2  c3                   ret 
// 004be5f3  8d442454             lea eax, [esp + 0x54]
// 004be5f7  50                   push eax
// 004be5f8  56                   push esi
// 004be5f9  8d4c241c             lea ecx, [esp + 0x1c]
// 004be5fd  51                   push ecx
// 004be5fe  8d542410             lea edx, [esp + 0x10]
// 004be602  52                   push edx
// 004be603  8d442444             lea eax, [esp + 0x44]
// 004be607  50                   push eax
// 004be608  e833d7ffff           call 0x4bbd40
// 004be60d  8d4c2458             lea ecx, [esp + 0x58]
// 004be611  51                   push ecx
// 004be612  8d54244c             lea edx, [esp + 0x4c]
// 004be616  52                   push edx
// 004be617  8d442440             lea eax, [esp + 0x40]
// 004be61b  50                   push eax
// 004be61c  51                   push ecx
// 004be61d  e85ed4ffff           call 0x4bba80
// 004be622  83c424               add esp, 0x24
// 004be625  33c0                 xor eax, eax
// 004be627  837c844400           cmp dword ptr [esp + eax*4 + 0x44], 0
// 004be62c  752c                 jne 0x4be65a
// 004be62e  83c001               add eax, 1
// 004be631  83f804               cmp eax, 4
// 004be634  72f1                 jb 0x4be627
// 004be636  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 004be63a  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 004be63e  8b542458             mov edx, dword ptr [esp + 0x58]
// 004be642  8908                 mov dword ptr [eax], ecx
// 004be644  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 004be648  895004               mov dword ptr [eax + 4], edx
// 004be64b  8b542460             mov edx, dword ptr [esp + 0x60]
// 004be64f  894808               mov dword ptr [eax + 8], ecx
// 004be652  89500c               mov dword ptr [eax + 0xc], edx
// 004be655  5e                   pop esi
// 004be656  83c460               add esp, 0x60
// 004be659  c3                   ret 
// 004be65a  8d542414             lea edx, [esp + 0x14]
// 004be65e  52                   push edx
// 004be65f  56                   push esi
// 004be660  8d44240c             lea eax, [esp + 0xc]
// 004be664  50                   push eax
// 004be665  8d4c2460             lea ecx, [esp + 0x60]
// 004be669  51                   push ecx
// 004be66a  8d542444             lea edx, [esp + 0x44]
// 004be66e  52                   push edx
// 004be66f  e8ccd6ffff           call 0x4bbd40
// 004be674  8d442438             lea eax, [esp + 0x38]
// 004be678  50                   push eax
// 004be679  8d4c244c             lea ecx, [esp + 0x4c]
// 004be67d  51                   push ecx
// 004be67e  8d542460             lea edx, [esp + 0x60]
// 004be682  52                   push edx
// 004be683  50                   push eax
// 004be684  e8f7d3ffff           call 0x4bba80
// 004be689  83c424               add esp, 0x24
// 004be68c  33c0                 xor eax, eax
// 004be68e  8bff                 mov edi, edi
// 004be690  837c842400           cmp dword ptr [esp + eax*4 + 0x24], 0
// 004be695  750d                 jne 0x4be6a4
// 004be697  83c001               add eax, 1
// 004be69a  83f804               cmp eax, 4
// 004be69d  72f1                 jb 0x4be690
// 004be69f  e9aefeffff           jmp 0x4be552
// 004be6a4  8d4c2404             lea ecx, [esp + 4]
// 004be6a8  51                   push ecx
// 004be6a9  56                   push esi
// 004be6aa  8d54245c             lea edx, [esp + 0x5c]
// 004be6ae  52                   push edx
// 004be6af  8d442420             lea eax, [esp + 0x20]
// 004be6b3  50                   push eax
// 004be6b4  8d4c2444             lea ecx, [esp + 0x44]
// 004be6b8  51                   push ecx
// 004be6b9  e882d6ffff           call 0x4bbd40
// 004be6be  8d542458             lea edx, [esp + 0x58]
// 004be6c2  52                   push edx
// 004be6c3  8d44244c             lea eax, [esp + 0x4c]
// 004be6c7  50                   push eax
// 004be6c8  8d4c2440             lea ecx, [esp + 0x40]
// 004be6cc  51                   push ecx
// 004be6cd  52                   push edx
// 004be6ce  e8add3ffff           call 0x4bba80
// 004be6d3  83c424               add esp, 0x24
// 004be6d6  33c0                 xor eax, eax
// 004be6d8  837c844400           cmp dword ptr [esp + eax*4 + 0x44], 0
// 004be6dd  750d                 jne 0x4be6ec
// 004be6df  83c001               add eax, 1
// 004be6e2  83f804               cmp eax, 4
// 004be6e5  72f1                 jb 0x4be6d8
// 004be6e7  e9e3feffff           jmp 0x4be5cf
// 004be6ec  8d442454             lea eax, [esp + 0x54]
// 004be6f0  50                   push eax
// 004be6f1  56                   push esi
// 004be6f2  8d4c241c             lea ecx, [esp + 0x1c]
// 004be6f6  51                   push ecx
// 004be6f7  8d542410             lea edx, [esp + 0x10]
// 004be6fb  52                   push edx
// 004be6fc  8d442444             lea eax, [esp + 0x44]
// 004be700  50                   push eax
// 004be701  e83ad6ffff           call 0x4bbd40
// 004be706  8d4c2438             lea ecx, [esp + 0x38]
// 004be70a  51                   push ecx
// 004be70b  8d54244c             lea edx, [esp + 0x4c]
// 004be70f  52                   push edx
// 004be710  8d442460             lea eax, [esp + 0x60]
// 004be714  50                   push eax
// 004be715  51                   push ecx
// 004be716  e865d3ffff           call 0x4bba80
// 004be71b  83c424               add esp, 0x24
// 004be71e  33c0                 xor eax, eax
// 004be720  837c842400           cmp dword ptr [esp + eax*4 + 0x24], 0
// 004be725  750d                 jne 0x4be734
// 004be727  83c001               add eax, 1
// 004be72a  83f804               cmp eax, 4
// 004be72d  72f1                 jb 0x4be720
// 004be72f  e902ffffff           jmp 0x4be636
// 004be734  8d542414             lea edx, [esp + 0x14]
// 004be738  52                   push edx
// 004be739  56                   push esi
// 004be73a  8d44240c             lea eax, [esp + 0xc]
// 004be73e  50                   push eax
// 004be73f  8d4c2460             lea ecx, [esp + 0x60]
// 004be743  51                   push ecx
// 004be744  8d542444             lea edx, [esp + 0x44]
// 004be748  52                   push edx
// 004be749  e8f2d5ffff           call 0x4bbd40
// 004be74e  8d442458             lea eax, [esp + 0x58]
// 004be752  50                   push eax
// 004be753  8d4c244c             lea ecx, [esp + 0x4c]
// 004be757  51                   push ecx
// 004be758  8d542440             lea edx, [esp + 0x40]
// 004be75c  52                   push edx
// 004be75d  50                   push eax
// 004be75e  e81dd3ffff           call 0x4bba80
// 004be763  83c424               add esp, 0x24
// 004be766  33c0                 xor eax, eax
// 004be768  837c844400           cmp dword ptr [esp + eax*4 + 0x44], 0
// 004be76d  750d                 jne 0x4be77c
// 004be76f  83c001               add eax, 1
// 004be772  83f804               cmp eax, 4
// 004be775  72f1                 jb 0x4be768
// 004be777  e9d6fdffff           jmp 0x4be552
// 004be77c  8d4c2404             lea ecx, [esp + 4]
// 004be780  51                   push ecx
// 004be781  56                   push esi
// 004be782  8d54245c             lea edx, [esp + 0x5c]
// 004be786  52                   push edx
// 004be787  8d442420             lea eax, [esp + 0x20]
// 004be78b  50                   push eax
// 004be78c  8d4c2444             lea ecx, [esp + 0x44]
// 004be790  51                   push ecx
// 004be791  e8aad5ffff           call 0x4bbd40
// 004be796  8d542438             lea edx, [esp + 0x38]
// 004be79a  52                   push edx
// 004be79b  8d44244c             lea eax, [esp + 0x4c]
// 004be79f  50                   push eax
// 004be7a0  8d4c2460             lea ecx, [esp + 0x60]
// 004be7a4  51                   push ecx
// 004be7a5  52                   push edx
// 004be7a6  e8d5d2ffff           call 0x4bba80
// 004be7ab  83c424               add esp, 0x24
// 004be7ae  33c0                 xor eax, eax
// 004be7b0  837c842400           cmp dword ptr [esp + eax*4 + 0x24], 0
// 004be7b5  0f8538feffff         jne 0x4be5f3
// 004be7bb  83c001               add eax, 1
// 004be7be  83f804               cmp eax, 4
// 004be7c1  72ed                 jb 0x4be7b0
// 004be7c3  e907feffff           jmp 0x4be5cf

// from server: 26% by colin
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet DS_Table.cpp