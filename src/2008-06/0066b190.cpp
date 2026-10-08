// from server: 100% by auto
// roc 2008-06 0066b190  unit: RBX::GroupDragTool  size: 155 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0066b190
//
// 0066b190  8b4618               mov eax, dword ptr [esi + 0x18]
// 0066b193  57                   push edi
// 0066b194  8b3e                 mov edi, dword ptr [esi]
// 0066b196  50                   push eax
// 0066b197  68ff000000           push 0xff
// 0066b19c  50                   push eax
// 0066b19d  8b4620               mov eax, dword ptr [esi + 0x20]
// 0066b1a0  56                   push esi
// 0066b1a1  e8aafaffff           call 0x66ac50
// 0066b1a6  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0066b1a9  8d472c               lea eax, [edi + 0x2c]
// 0066b1ac  41                   inc ecx
// 0066b1ad  83c410               add esp, 0x10
// 0066b1b0  c74620ffffffff       mov dword ptr [esi + 0x20], 0xffffffff
// 0066b1b7  3b08                 cmp ecx, dword ptr [eax]
// 0066b1b9  7e20                 jle 0x66b1db
// 0066b1bb  8b570c               mov edx, dword ptr [edi + 0xc]
// 0066b1be  68acd08400           push 0x84d0ac
// 0066b1c3  68fdffff7f           push 0x7ffffffd
// 0066b1c8  6a04                 push 4
// 0066b1ca  50                   push eax
// 0066b1cb  8b4610               mov eax, dword ptr [esi + 0x10]
// 0066b1ce  52                   push edx
// 0066b1cf  50                   push eax
// 0066b1d0  e86b55ffff           call 0x660740
// 0066b1d5  83c418               add esp, 0x18
// 0066b1d8  89470c               mov dword ptr [edi + 0xc], eax
// 0066b1db  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0066b1de  8b442408             mov eax, dword ptr [esp + 8]
// 0066b1e2  8b570c               mov edx, dword ptr [edi + 0xc]
// 0066b1e5  89048a               mov dword ptr [edx + ecx*4], eax
// 0066b1e8  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0066b1eb  8d4730               lea eax, [edi + 0x30]
// 0066b1ee  41                   inc ecx
// 0066b1ef  3b08                 cmp ecx, dword ptr [eax]
// 0066b1f1  7e20                 jle 0x66b213
// 0066b1f3  8b5714               mov edx, dword ptr [edi + 0x14]
// 0066b1f6  68acd08400           push 0x84d0ac
// 0066b1fb  68fdffff7f           push 0x7ffffffd
// 0066b200  6a04                 push 4
// 0066b202  50                   push eax
// 0066b203  8b4610               mov eax, dword ptr [esi + 0x10]
// 0066b206  52                   push edx
// 0066b207  50                   push eax
// 0066b208  e83355ffff           call 0x660740
// 0066b20d  83c418               add esp, 0x18
// 0066b210  894714               mov dword ptr [edi + 0x14], eax
// 0066b213  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0066b216  8b5714               mov edx, dword ptr [edi + 0x14]
// 0066b219  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0066b21d  89048a               mov dword ptr [edx + ecx*4], eax
// 0066b220  8b4618               mov eax, dword ptr [esi + 0x18]
// 0066b223  8d4801               lea ecx, [eax + 1]
// 0066b226  894e18               mov dword ptr [esi + 0x18], ecx
// 0066b229  5f                   pop edi
// 0066b22a  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_code)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
