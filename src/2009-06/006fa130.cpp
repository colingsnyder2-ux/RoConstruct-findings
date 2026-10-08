// from server: 100% by auto
// roc 2009-06 006fa130  unit: RBX::GroupDragTool  size: 155 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006fa130
//
// 006fa130  8b4618               mov eax, dword ptr [esi + 0x18]
// 006fa133  57                   push edi
// 006fa134  8b3e                 mov edi, dword ptr [esi]
// 006fa136  50                   push eax
// 006fa137  68ff000000           push 0xff
// 006fa13c  50                   push eax
// 006fa13d  8b4620               mov eax, dword ptr [esi + 0x20]
// 006fa140  56                   push esi
// 006fa141  e8aafaffff           call 0x6f9bf0
// 006fa146  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 006fa149  8d472c               lea eax, [edi + 0x2c]
// 006fa14c  41                   inc ecx
// 006fa14d  83c410               add esp, 0x10
// 006fa150  c74620ffffffff       mov dword ptr [esi + 0x20], 0xffffffff
// 006fa157  3b08                 cmp ecx, dword ptr [eax]
// 006fa159  7e20                 jle 0x6fa17b
// 006fa15b  8b570c               mov edx, dword ptr [edi + 0xc]
// 006fa15e  6860ea8e00           push 0x8eea60
// 006fa163  68fdffff7f           push 0x7ffffffd
// 006fa168  6a04                 push 4
// 006fa16a  50                   push eax
// 006fa16b  8b4610               mov eax, dword ptr [esi + 0x10]
// 006fa16e  52                   push edx
// 006fa16f  50                   push eax
// 006fa170  e83b36ffff           call 0x6ed7b0
// 006fa175  83c418               add esp, 0x18
// 006fa178  89470c               mov dword ptr [edi + 0xc], eax
// 006fa17b  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 006fa17e  8b442408             mov eax, dword ptr [esp + 8]
// 006fa182  8b570c               mov edx, dword ptr [edi + 0xc]
// 006fa185  89048a               mov dword ptr [edx + ecx*4], eax
// 006fa188  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 006fa18b  8d4730               lea eax, [edi + 0x30]
// 006fa18e  41                   inc ecx
// 006fa18f  3b08                 cmp ecx, dword ptr [eax]
// 006fa191  7e20                 jle 0x6fa1b3
// 006fa193  8b5714               mov edx, dword ptr [edi + 0x14]
// 006fa196  6860ea8e00           push 0x8eea60
// 006fa19b  68fdffff7f           push 0x7ffffffd
// 006fa1a0  6a04                 push 4
// 006fa1a2  50                   push eax
// 006fa1a3  8b4610               mov eax, dword ptr [esi + 0x10]
// 006fa1a6  52                   push edx
// 006fa1a7  50                   push eax
// 006fa1a8  e80336ffff           call 0x6ed7b0
// 006fa1ad  83c418               add esp, 0x18
// 006fa1b0  894714               mov dword ptr [edi + 0x14], eax
// 006fa1b3  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 006fa1b6  8b5714               mov edx, dword ptr [edi + 0x14]
// 006fa1b9  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006fa1bd  89048a               mov dword ptr [edx + ecx*4], eax
// 006fa1c0  8b4618               mov eax, dword ptr [esi + 0x18]
// 006fa1c3  8d4801               lea ecx, [eax + 1]
// 006fa1c6  894e18               mov dword ptr [esi + 0x18], ecx
// 006fa1c9  5f                   pop edi
// 006fa1ca  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_code)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
