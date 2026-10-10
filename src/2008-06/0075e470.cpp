// roc 2008-06 0075e470  unit: CXTPDockingPaneTabbedContainer  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0075e470
//
// 0075e470  83ec10               sub esp, 0x10
// 0075e473  55                   push ebp
// 0075e474  56                   push esi
// 0075e475  8bf1                 mov esi, ecx
// 0075e477  33ed                 xor ebp, ebp
// 0075e479  396e10               cmp dword ptr [esi + 0x10], ebp
// 0075e47c  740a                 je 0x75e488
// 0075e47e  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0075e481  8b01                 mov eax, dword ptr [ecx]
// 0075e483  8b5058               mov edx, dword ptr [eax + 0x58]
// 0075e486  ffd2                 call edx
// 0075e488  396ecc               cmp dword ptr [esi - 0x34], ebp
// 0075e48b  754d                 jne 0x75e4da
// 0075e48d  8b06                 mov eax, dword ptr [esi]
// 0075e48f  8b5018               mov edx, dword ptr [eax + 0x18]
// 0075e492  53                   push ebx
// 0075e493  8b5eac               mov ebx, dword ptr [esi - 0x54]
// 0075e496  57                   push edi
// 0075e497  55                   push ebp
// 0075e498  8d7eac               lea edi, [esi - 0x54]
// 0075e49b  55                   push ebp
// 0075e49c  8bce                 mov ecx, esi
// 0075e49e  896c2418             mov dword ptr [esp + 0x18], ebp
// 0075e4a2  896c241c             mov dword ptr [esp + 0x1c], ebp
// 0075e4a6  896c2420             mov dword ptr [esp + 0x20], ebp
// 0075e4aa  896c2424             mov dword ptr [esp + 0x24], ebp
// 0075e4ae  ffd2                 call edx
// 0075e4b0  8b535c               mov edx, dword ptr [ebx + 0x5c]
// 0075e4b3  50                   push eax
// 0075e4b4  8d44241c             lea eax, [esp + 0x1c]
// 0075e4b8  50                   push eax
// 0075e4b9  6800000056           push 0x56000000
// 0075e4be  6816b78000           push 0x80b716
// 0075e4c3  68986b8500           push 0x856b98
// 0075e4c8  8bcf                 mov ecx, edi
// 0075e4ca  ffd2                 call edx
// 0075e4cc  8b8e6c010000         mov ecx, dword ptr [esi + 0x16c]
// 0075e4d2  57                   push edi
// 0075e4d3  e842dd0500           call 0x7bc21a
// 0075e4d8  5f                   pop edi
// 0075e4d9  5b                   pop ebx
// 0075e4da  5e                   pop esi
// 0075e4db  5d                   pop ebp
// 0075e4dc  83c410               add esp, 0x10
// 0075e4df  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?CreateContainer@CXTPDockingPaneTabbedContainer@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
