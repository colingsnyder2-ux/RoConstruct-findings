// roc 2009-06 007d6190  unit: CXTPDockingPaneTabbedContainer  size: 254 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007d6190
//
// 007d6190  6aff                 push -1
// 007d6192  6823ee8700           push 0x87ee23
// 007d6197  64a100000000         mov eax, dword ptr fs:[0]
// 007d619d  50                   push eax
// 007d619e  81ecac000000         sub esp, 0xac
// 007d61a4  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007d61a9  33c4                 xor eax, esp
// 007d61ab  898424a8000000       mov dword ptr [esp + 0xa8], eax
// 007d61b2  53                   push ebx
// 007d61b3  55                   push ebp
// 007d61b4  56                   push esi
// 007d61b5  57                   push edi
// 007d61b6  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007d61bb  33c4                 xor eax, esp
// 007d61bd  50                   push eax
// 007d61be  8d8424c0000000       lea eax, [esp + 0xc0]
// 007d61c5  64a300000000         mov dword ptr fs:[0], eax
// 007d61cb  8bf1                 mov esi, ecx
// 007d61cd  56                   push esi
// 007d61ce  8d4c246c             lea ecx, [esp + 0x6c]
// 007d61d2  e8f131f4ff           call 0x7193c8
// 007d61d7  56                   push esi
// 007d61d8  8d4c241c             lea ecx, [esp + 0x1c]
// 007d61dc  c78424cc00000000000000 mov dword ptr [esp + 0xcc], 0
// 007d61e7  e8e4a2f9ff           call 0x7704d0
// 007d61ec  8d442468             lea eax, [esp + 0x68]
// 007d61f0  50                   push eax
// 007d61f1  8d4c243c             lea ecx, [esp + 0x3c]
// 007d61f5  e806a4f9ff           call 0x770600
// 007d61fa  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007d61fe  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 007d6202  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 007d6206  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 007d620a  894c2434             mov dword ptr [esp + 0x34], ecx
// 007d620e  8d4e54               lea ecx, [esi + 0x54]
// 007d6211  c68424c800000001     mov byte ptr [esp + 0xc8], 1
// 007d6219  e8f2faffff           call 0x7d5d10
// 007d621e  83ec10               sub esp, 0x10
// 007d6221  8bd4                 mov edx, esp
// 007d6223  893a                 mov dword ptr [edx], edi
// 007d6225  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 007d6229  896a04               mov dword ptr [edx + 4], ebp
// 007d622c  895a08               mov dword ptr [edx + 8], ebx
// 007d622f  8bc8                 mov ecx, eax
// 007d6231  8b00                 mov eax, dword ptr [eax]
// 007d6233  8b4058               mov eax, dword ptr [eax + 0x58]
// 007d6236  897a0c               mov dword ptr [edx + 0xc], edi
// 007d6239  56                   push esi
// 007d623a  8d54244c             lea edx, [esp + 0x4c]
// 007d623e  52                   push edx
// 007d623f  ffd0                 call eax
// 007d6241  8d4c2438             lea ecx, [esp + 0x38]
// 007d6245  c68424c800000000     mov byte ptr [esp + 0xc8], 0
// 007d624d  e8eea4f9ff           call 0x770740
// 007d6252  8d4c2468             lea ecx, [esp + 0x68]
// 007d6256  c78424c8000000ffffffff mov dword ptr [esp + 0xc8], 0xffffffff
// 007d6261  e85c31f4ff           call 0x7193c2
// 007d6266  8b8c24c0000000       mov ecx, dword ptr [esp + 0xc0]
// 007d626d  64890d00000000       mov dword ptr fs:[0], ecx
// 007d6274  59                   pop ecx
// 007d6275  5f                   pop edi
// 007d6276  5e                   pop esi
// 007d6277  5d                   pop ebp
// 007d6278  5b                   pop ebx
// 007d6279  8b8c24a8000000       mov ecx, dword ptr [esp + 0xa8]
// 007d6280  33cc                 xor ecx, esp
// 007d6282  e8f342f4ff           call 0x71a57a
// 007d6287  81c4b8000000         add esp, 0xb8
// 007d628d  c3                   ret 
// copied from an identical function in another client (function ?OnPaint@CXTPDockingPaneTabbedContainer@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneTabbedContainer.cpp