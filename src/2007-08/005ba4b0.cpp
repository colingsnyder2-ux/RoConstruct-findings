// roc 2007-08 005ba4b0  unit: RBX::VFaceInstance::?$EnumPropDescriptor  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ba4b0
//
// 005ba4b0  51                   push ecx
// 005ba4b1  53                   push ebx
// 005ba4b2  56                   push esi
// 005ba4b3  8b742410             mov esi, dword ptr [esp + 0x10]
// 005ba4b7  57                   push edi
// 005ba4b8  8bce                 mov ecx, esi
// 005ba4ba  33ff                 xor edi, edi
// 005ba4bc  e8ff27e5ff           call 0x40ccc0
// 005ba4c1  85c0                 test eax, eax
// 005ba4c3  764f                 jbe 0x5ba514
// 005ba4c5  8b1dd8e67700         mov ebx, dword ptr [0x77e6d8]
// 005ba4cb  eb03                 jmp 0x5ba4d0
// 005ba4cd  8d4900               lea ecx, [ecx]
// 005ba4d0  8b4e04               mov ecx, dword ptr [esi + 4]
// 005ba4d3  85c9                 test ecx, ecx
// 005ba4d5  740c                 je 0x5ba4e3
// 005ba4d7  8b4608               mov eax, dword ptr [esi + 8]
// 005ba4da  2bc1                 sub eax, ecx
// 005ba4dc  c1f803               sar eax, 3
// 005ba4df  3bf8                 cmp edi, eax
// 005ba4e1  7202                 jb 0x5ba4e5
// 005ba4e3  ffd3                 call ebx
// 005ba4e5  8b4604               mov eax, dword ptr [esi + 4]
// 005ba4e8  83ec08               sub esp, 8
// 005ba4eb  8bd4                 mov edx, esp
// 005ba4ed  89642414             mov dword ptr [esp + 0x14], esp
// 005ba4f1  8d0cf8               lea ecx, [eax + edi*8]
// 005ba4f4  52                   push edx
// 005ba4f5  e8f6220400           call 0x5fc7f0
// 005ba4fa  e8f197fbff           call 0x573cf0
// 005ba4ff  83c408               add esp, 8
// 005ba502  84c0                 test al, al
// 005ba504  7515                 jne 0x5ba51b
// 005ba506  8bce                 mov ecx, esi
// 005ba508  83c701               add edi, 1
// 005ba50b  e8b027e5ff           call 0x40ccc0
// 005ba510  3bf8                 cmp edi, eax
// 005ba512  72bc                 jb 0x5ba4d0
// 005ba514  32c0                 xor al, al
// 005ba516  5f                   pop edi
// 005ba517  5e                   pop esi
// 005ba518  5b                   pop ebx
// 005ba519  59                   pop ecx
// 005ba51a  c3                   ret 
// 005ba51b  5f                   pop edi
// 005ba51c  5e                   pop esi
// 005ba51d  b001                 mov al, 1
// 005ba51f  5b                   pop ebx
// 005ba520  59                   pop ecx
// 005ba521  c3                   ret 
// library rbxgs/tool\DragUtilities.cpp (function ?anyPartAlive@DragUtilities@RBX@@SA_NABV?$vector@V?$weak_ptr@VPartInstance@RBX@@@boost@@V?$allocator@V?$weak_ptr@VPartInstance@RBX@@@boost@@@std@@@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/DragUtilities.cpp
