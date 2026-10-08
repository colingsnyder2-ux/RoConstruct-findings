// roc 2007-08 005ba850  unit: RBX::VFaceInstance::?$EnumPropDescriptor  size: 263 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ba850
//
// 005ba850  64a100000000         mov eax, dword ptr fs:[0]
// 005ba856  6aff                 push -1
// 005ba858  68d8bc7500           push 0x75bcd8
// 005ba85d  50                   push eax
// 005ba85e  64892500000000       mov dword ptr fs:[0], esp
// 005ba865  83ec0c               sub esp, 0xc
// 005ba868  53                   push ebx
// 005ba869  55                   push ebp
// 005ba86a  56                   push esi
// 005ba86b  57                   push edi
// 005ba86c  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 005ba870  57                   push edi
// 005ba871  e8fafdffff           call 0x5ba670
// 005ba876  83c404               add esp, 4
// 005ba879  8bcf                 mov ecx, edi
// 005ba87b  33ed                 xor ebp, ebp
// 005ba87d  e83e24e5ff           call 0x40ccc0
// 005ba882  85c0                 test eax, eax
// 005ba884  0f86ba000000         jbe 0x5ba944
// 005ba88a  8d9b00000000         lea ebx, [ebx]
// 005ba890  8b4f04               mov ecx, dword ptr [edi + 4]
// 005ba893  85c9                 test ecx, ecx
// 005ba895  740c                 je 0x5ba8a3
// 005ba897  8b4708               mov eax, dword ptr [edi + 8]
// 005ba89a  2bc1                 sub eax, ecx
// 005ba89c  c1f803               sar eax, 3
// 005ba89f  3be8                 cmp ebp, eax
// 005ba8a1  7206                 jb 0x5ba8a9
// 005ba8a3  ff15d8e67700         call dword ptr [0x77e6d8]
// 005ba8a9  8b4704               mov eax, dword ptr [edi + 4]
// 005ba8ac  8d542414             lea edx, [esp + 0x14]
// 005ba8b0  8d0ce8               lea ecx, [eax + ebp*8]
// 005ba8b3  52                   push edx
// 005ba8b4  e8371f0400           call 0x5fc7f0
// 005ba8b9  8b742418             mov esi, dword ptr [esp + 0x18]
// 005ba8bd  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 005ba8c1  83ec08               sub esp, 8
// 005ba8c4  85f6                 test esi, esi
// 005ba8c6  8bc4                 mov eax, esp
// 005ba8c8  8918                 mov dword ptr [eax], ebx
// 005ba8ca  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 005ba8d2  89642418             mov dword ptr [esp + 0x18], esp
// 005ba8d6  897004               mov dword ptr [eax + 4], esi
// 005ba8d9  740c                 je 0x5ba8e7
// 005ba8db  8d4604               lea eax, [esi + 4]
// 005ba8de  b901000000           mov ecx, 1
// 005ba8e3  f00fc108             lock xadd dword ptr [eax], ecx
// 005ba8e7  e80494fbff           call 0x573cf0
// 005ba8ec  83c408               add esp, 8
// 005ba8ef  84c0                 test al, al
// 005ba8f1  7409                 je 0x5ba8fc
// 005ba8f3  6a01                 push 1
// 005ba8f5  8bcb                 mov ecx, ebx
// 005ba8f7  e854d9fbff           call 0x578250
// 005ba8fc  85f6                 test esi, esi
// 005ba8fe  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 005ba906  742a                 je 0x5ba932
// 005ba908  8d5604               lea edx, [esi + 4]
// 005ba90b  83c8ff               or eax, 0xffffffff
// 005ba90e  f00fc102             lock xadd dword ptr [edx], eax
// 005ba912  751e                 jne 0x5ba932
// 005ba914  8b16                 mov edx, dword ptr [esi]
// 005ba916  8b4204               mov eax, dword ptr [edx + 4]
// 005ba919  8bce                 mov ecx, esi
// 005ba91b  ffd0                 call eax
// 005ba91d  8d4e08               lea ecx, [esi + 8]
// 005ba920  83caff               or edx, 0xffffffff
// 005ba923  f00fc111             lock xadd dword ptr [ecx], edx
// 005ba927  7509                 jne 0x5ba932
// 005ba929  8b06                 mov eax, dword ptr [esi]
// 005ba92b  8b5008               mov edx, dword ptr [eax + 8]
// 005ba92e  8bce                 mov ecx, esi
// 005ba930  ffd2                 call edx
// 005ba932  8bcf                 mov ecx, edi
// 005ba934  83c501               add ebp, 1
// 005ba937  e88423e5ff           call 0x40ccc0
// 005ba93c  3be8                 cmp ebp, eax
// 005ba93e  0f824cffffff         jb 0x5ba890
// 005ba944  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005ba948  5f                   pop edi
// 005ba949  5e                   pop esi
// 005ba94a  5d                   pop ebp
// 005ba94b  64890d00000000       mov dword ptr fs:[0], ecx
// 005ba952  5b                   pop ebx
// 005ba953  83c418               add esp, 0x18
// 005ba956  c3                   ret 
// library rbxgs/tool\DragUtilities.cpp (function ?unJoinAndSetDragging@DragUtilities@RBX@@SAXABV?$vector@V?$weak_ptr@VPartInstance@RBX@@@boost@@V?$allocator@V?$weak_ptr@VPartInstance@RBX@@@boost@@@std@@@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/DragUtilities.cpp
