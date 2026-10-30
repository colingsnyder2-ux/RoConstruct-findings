// roc 2007-08 006e0960  unit: CXTPDockingPaneAutoHidePanel  size: 254 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e0960
//
// 006e0960  6aff                 push -1
// 006e0962  6883317600           push 0x763183
// 006e0967  64a100000000         mov eax, dword ptr fs:[0]
// 006e096d  50                   push eax
// 006e096e  81ecac000000         sub esp, 0xac
// 006e0974  a188518b00           mov eax, dword ptr [0x8b5188]
// 006e0979  33c4                 xor eax, esp
// 006e097b  898424a8000000       mov dword ptr [esp + 0xa8], eax
// 006e0982  53                   push ebx
// 006e0983  55                   push ebp
// 006e0984  56                   push esi
// 006e0985  57                   push edi
// 006e0986  a188518b00           mov eax, dword ptr [0x8b5188]
// 006e098b  33c4                 xor eax, esp
// 006e098d  50                   push eax
// 006e098e  8d8424c0000000       lea eax, [esp + 0xc0]
// 006e0995  64a300000000         mov dword ptr fs:[0], eax
// 006e099b  8bf1                 mov esi, ecx
// 006e099d  56                   push esi
// 006e099e  8d4c246c             lea ecx, [esp + 0x6c]
// 006e09a2  e8e9faf4ff           call 0x630490
// 006e09a7  56                   push esi
// 006e09a8  8d4c241c             lea ecx, [esp + 0x1c]
// 006e09ac  c78424cc00000000000000 mov dword ptr [esp + 0xcc], 0
// 006e09b7  e844f6f9ff           call 0x680000
// 006e09bc  8d442468             lea eax, [esp + 0x68]
// 006e09c0  50                   push eax
// 006e09c1  8d4c243c             lea ecx, [esp + 0x3c]
// 006e09c5  e826f9f9ff           call 0x6802f0
// 006e09ca  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006e09ce  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 006e09d2  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 006e09d6  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 006e09da  894c2434             mov dword ptr [esp + 0x34], ecx
// 006e09de  8d4e54               lea ecx, [esi + 0x54]
// 006e09e1  c68424c800000001     mov byte ptr [esp + 0xc8], 1
// 006e09e9  e862fbffff           call 0x6e0550
// 006e09ee  83ec10               sub esp, 0x10
// 006e09f1  8bd4                 mov edx, esp
// 006e09f3  893a                 mov dword ptr [edx], edi
// 006e09f5  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 006e09f9  896a04               mov dword ptr [edx + 4], ebp
// 006e09fc  895a08               mov dword ptr [edx + 8], ebx
// 006e09ff  8bc8                 mov ecx, eax
// 006e0a01  8b00                 mov eax, dword ptr [eax]
// 006e0a03  8b4058               mov eax, dword ptr [eax + 0x58]
// 006e0a06  897a0c               mov dword ptr [edx + 0xc], edi
// 006e0a09  56                   push esi
// 006e0a0a  8d54244c             lea edx, [esp + 0x4c]
// 006e0a0e  52                   push edx
// 006e0a0f  ffd0                 call eax
// 006e0a11  8d4c2438             lea ecx, [esp + 0x38]
// 006e0a15  c68424c800000000     mov byte ptr [esp + 0xc8], 0
// 006e0a1d  e80efaf9ff           call 0x680430
// 006e0a22  8d4c2468             lea ecx, [esp + 0x68]
// 006e0a26  c78424c8000000ffffffff mov dword ptr [esp + 0xc8], 0xffffffff
// 006e0a31  e854faf4ff           call 0x63048a
// 006e0a36  8b8c24c0000000       mov ecx, dword ptr [esp + 0xc0]
// 006e0a3d  64890d00000000       mov dword ptr fs:[0], ecx
// 006e0a44  59                   pop ecx
// 006e0a45  5f                   pop edi
// 006e0a46  5e                   pop esi
// 006e0a47  5d                   pop ebp
// 006e0a48  5b                   pop ebx
// 006e0a49  8b8c24a8000000       mov ecx, dword ptr [esp + 0xa8]
// 006e0a50  33cc                 xor ecx, esp
// 006e0a52  e8c7fff4ff           call 0x630a1e
// 006e0a57  81c4b8000000         add esp, 0xb8
// 006e0a5d  c3                   ret 
// copied from an identical function in another client (function ?OnPaint@CXTPDockingPaneTabbedContainer@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneTabbedContainer.cpp