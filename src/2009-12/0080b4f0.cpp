// roc 2009-12 0080b4f0  unit: CXTPImageManagerResource::CBitmapDC  size: 447 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0080b4f0
//
// 0080b4f0  6aff                 push -1
// 0080b4f2  68c8989500           push 0x9598c8
// 0080b4f7  64a100000000         mov eax, dword ptr fs:[0]
// 0080b4fd  50                   push eax
// 0080b4fe  83ec24               sub esp, 0x24
// 0080b501  53                   push ebx
// 0080b502  55                   push ebp
// 0080b503  56                   push esi
// 0080b504  57                   push edi
// 0080b505  a10052b600           mov eax, dword ptr [0xb65200]
// 0080b50a  33c4                 xor eax, esp
// 0080b50c  50                   push eax
// 0080b50d  8d442438             lea eax, [esp + 0x38]
// 0080b511  64a300000000         mov dword ptr fs:[0], eax
// 0080b517  8d4c2428             lea ecx, [esp + 0x28]
// 0080b51b  e88eaf1100           call 0x9264ae
// 0080b520  33ed                 xor ebp, ebp
// 0080b522  55                   push ebp
// 0080b523  896c2444             mov dword ptr [esp + 0x44], ebp
// 0080b527  ff1554b19800         call dword ptr [0x98b154]
// 0080b52d  50                   push eax
// 0080b52e  8d4c242c             lea ecx, [esp + 0x2c]
// 0080b532  e865af1100           call 0x92649c
// 0080b537  8d442424             lea eax, [esp + 0x24]
// 0080b53b  50                   push eax
// 0080b53c  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0080b540  8d4c2420             lea ecx, [esp + 0x20]
// 0080b544  51                   push ecx
// 0080b545  8d542428             lea edx, [esp + 0x28]
// 0080b549  52                   push edx
// 0080b54a  50                   push eax
// 0080b54b  8d4c2438             lea ecx, [esp + 0x38]
// 0080b54f  51                   push ecx
// 0080b550  896c2430             mov dword ptr [esp + 0x30], ebp
// 0080b554  896c2434             mov dword ptr [esp + 0x34], ebp
// 0080b558  e873f3ffff           call 0x80a8d0
// 0080b55d  83c414               add esp, 0x14
// 0080b560  85c0                 test eax, eax
// 0080b562  7527                 jne 0x80b58b
// 0080b564  8d4c2428             lea ecx, [esp + 0x28]
// 0080b568  c7442440ffffffff     mov dword ptr [esp + 0x40], 0xffffffff
// 0080b570  e833af1100           call 0x9264a8
// 0080b575  33c0                 xor eax, eax
// 0080b577  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0080b57b  64890d00000000       mov dword ptr fs:[0], ecx
// 0080b582  59                   pop ecx
// 0080b583  5f                   pop edi
// 0080b584  5e                   pop esi
// 0080b585  5d                   pop ebp
// 0080b586  5b                   pop ebx
// 0080b587  83c430               add esp, 0x30
// 0080b58a  c3                   ret 
// 0080b58b  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0080b58f  55                   push ebp
// 0080b590  55                   push ebp
// 0080b591  896c2420             mov dword ptr [esp + 0x20], ebp
// 0080b595  8d442420             lea eax, [esp + 0x20]
// 0080b599  50                   push eax
// 0080b59a  ba18000000           mov edx, 0x18
// 0080b59f  6689570e             mov word ptr [edi + 0xe], dx
// 0080b5a3  896f14               mov dword ptr [edi + 0x14], ebp
// 0080b5a6  55                   push ebp
// 0080b5a7  896f10               mov dword ptr [edi + 0x10], ebp
// 0080b5aa  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0080b5ae  57                   push edi
// 0080b5af  51                   push ecx
// 0080b5b0  ff1560b19800         call dword ptr [0x98b160]
// 0080b5b6  8b742418             mov esi, dword ptr [esp + 0x18]
// 0080b5ba  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0080b5be  89442424             mov dword ptr [esp + 0x24], eax
// 0080b5c2  3bf5                 cmp esi, ebp
// 0080b5c4  0f84a4000000         je 0x80b66e
// 0080b5ca  3bcd                 cmp ecx, ebp
// 0080b5cc  0f84aa000000         je 0x80b67c
// 0080b5d2  3bc5                 cmp eax, ebp
// 0080b5d4  0f8494000000         je 0x80b66e
// 0080b5da  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0080b5de  8bd8                 mov ebx, eax
// 0080b5e0  c1e810               shr eax, 0x10
// 0080b5e3  88442417             mov byte ptr [esp + 0x17], al
// 0080b5e7  8b4708               mov eax, dword ptr [edi + 8]
// 0080b5ea  0faf4704             imul eax, dword ptr [edi + 4]
// 0080b5ee  c1eb08               shr ebx, 8
// 0080b5f1  3bc5                 cmp eax, ebp
// 0080b5f3  7479                 je 0x80b66e
// 0080b5f5  41                   inc ecx
// 0080b5f6  0fb65102             movzx edx, byte ptr [ecx + 2]
// 0080b5fa  48                   dec eax
// 0080b5fb  83fa78               cmp edx, 0x78
// 0080b5fe  7d22                 jge 0x80b622
// 0080b600  8a54244c             mov dl, byte ptr [esp + 0x4c]
// 0080b604  8816                 mov byte ptr [esi], dl
// 0080b606  8b542418             mov edx, dword ptr [esp + 0x18]
// 0080b60a  885a01               mov byte ptr [edx + 1], bl
// 0080b60d  8b542418             mov edx, dword ptr [esp + 0x18]
// 0080b611  89442420             mov dword ptr [esp + 0x20], eax
// 0080b615  8a442417             mov al, byte ptr [esp + 0x17]
// 0080b619  884202               mov byte ptr [edx + 2], al
// 0080b61c  8b442420             mov eax, dword ptr [esp + 0x20]
// 0080b620  eb36                 jmp 0x80b658
// 0080b622  0fb651ff             movzx edx, byte ptr [ecx - 1]
// 0080b626  69d2ff000000         imul edx, edx, 0xff
// 0080b62c  c1fa08               sar edx, 8
// 0080b62f  8816                 mov byte ptr [esi], dl
// 0080b631  0fb611               movzx edx, byte ptr [ecx]
// 0080b634  8b742418             mov esi, dword ptr [esp + 0x18]
// 0080b638  69d2ff000000         imul edx, edx, 0xff
// 0080b63e  c1fa08               sar edx, 8
// 0080b641  885601               mov byte ptr [esi + 1], dl
// 0080b644  0fb65101             movzx edx, byte ptr [ecx + 1]
// 0080b648  8b742418             mov esi, dword ptr [esp + 0x18]
// 0080b64c  69d2ff000000         imul edx, edx, 0xff
// 0080b652  c1fa08               sar edx, 8
// 0080b655  885602               mov byte ptr [esi + 2], dl
// 0080b658  8b742418             mov esi, dword ptr [esp + 0x18]
// 0080b65c  83c603               add esi, 3
// 0080b65f  83c104               add ecx, 4
// 0080b662  89742418             mov dword ptr [esp + 0x18], esi
// 0080b666  3bc5                 cmp eax, ebp
// 0080b668  758c                 jne 0x80b5f6
// 0080b66a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0080b66e  3bcd                 cmp ecx, ebp
// 0080b670  740a                 je 0x80b67c
// 0080b672  51                   push ecx
// 0080b673  ff1540b79800         call dword ptr [0x98b740]
// 0080b679  83c404               add esp, 4
// 0080b67c  57                   push edi
// 0080b67d  ff1540b79800         call dword ptr [0x98b740]
// 0080b683  83c404               add esp, 4
// 0080b686  8d4c2428             lea ecx, [esp + 0x28]
// 0080b68a  c7442440ffffffff     mov dword ptr [esp + 0x40], 0xffffffff
// 0080b692  e811ae1100           call 0x9264a8
// 0080b697  8b442424             mov eax, dword ptr [esp + 0x24]
// 0080b69b  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0080b69f  64890d00000000       mov dword ptr fs:[0], ecx
// 0080b6a6  59                   pop ecx
// 0080b6a7  5f                   pop edi
// 0080b6a8  5e                   pop esi
// 0080b6a9  5d                   pop ebp
// 0080b6aa  5b                   pop ebx
// 0080b6ab  83c430               add esp, 0x30
// 0080b6ae  c3                   ret 
// copied from an identical function in another client (function ?ResampleAlphaLayer@CXTPImageManager@@SAPAUHBITMAP__@@PAU2@K@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp