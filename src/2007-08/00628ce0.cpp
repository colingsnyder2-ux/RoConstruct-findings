// from server: 100% by auto
// roc 2007-08 00628ce0  unit: RBX::AssemblyStage  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00628ce0
//
// 00628ce0  8b4618               mov eax, dword ptr [esi + 0x18]
// 00628ce3  57                   push edi
// 00628ce4  8b3e                 mov edi, dword ptr [esi]
// 00628ce6  50                   push eax
// 00628ce7  68ff000000           push 0xff
// 00628cec  50                   push eax
// 00628ced  8b4620               mov eax, dword ptr [esi + 0x20]
// 00628cf0  56                   push esi
// 00628cf1  e86afaffff           call 0x628760
// 00628cf6  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00628cf9  8d472c               lea eax, [edi + 0x2c]
// 00628cfc  83c101               add ecx, 1
// 00628cff  83c410               add esp, 0x10
// 00628d02  c74620ffffffff       mov dword ptr [esi + 0x20], 0xffffffff
// 00628d09  3b08                 cmp ecx, dword ptr [eax]
// 00628d0b  7e20                 jle 0x628d2d
// 00628d0d  8b570c               mov edx, dword ptr [edi + 0xc]
// 00628d10  68204c7c00           push 0x7c4c20
// 00628d15  68fdffff7f           push 0x7ffffffd
// 00628d1a  6a04                 push 4
// 00628d1c  50                   push eax
// 00628d1d  8b4610               mov eax, dword ptr [esi + 0x10]
// 00628d20  52                   push edx
// 00628d21  50                   push eax
// 00628d22  e819adfeff           call 0x613a40
// 00628d27  83c418               add esp, 0x18
// 00628d2a  89470c               mov dword ptr [edi + 0xc], eax
// 00628d2d  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00628d30  8b442408             mov eax, dword ptr [esp + 8]
// 00628d34  8b570c               mov edx, dword ptr [edi + 0xc]
// 00628d37  89048a               mov dword ptr [edx + ecx*4], eax
// 00628d3a  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00628d3d  8d4730               lea eax, [edi + 0x30]
// 00628d40  83c101               add ecx, 1
// 00628d43  3b08                 cmp ecx, dword ptr [eax]
// 00628d45  7e20                 jle 0x628d67
// 00628d47  8b5714               mov edx, dword ptr [edi + 0x14]
// 00628d4a  68204c7c00           push 0x7c4c20
// 00628d4f  68fdffff7f           push 0x7ffffffd
// 00628d54  6a04                 push 4
// 00628d56  50                   push eax
// 00628d57  8b4610               mov eax, dword ptr [esi + 0x10]
// 00628d5a  52                   push edx
// 00628d5b  50                   push eax
// 00628d5c  e8dfacfeff           call 0x613a40
// 00628d61  83c418               add esp, 0x18
// 00628d64  894714               mov dword ptr [edi + 0x14], eax
// 00628d67  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00628d6a  8b5714               mov edx, dword ptr [edi + 0x14]
// 00628d6d  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00628d71  89048a               mov dword ptr [edx + ecx*4], eax
// 00628d74  8b4618               mov eax, dword ptr [esi + 0x18]
// 00628d77  8d4801               lea ecx, [eax + 1]
// 00628d7a  894e18               mov dword ptr [esi + 0x18], ecx
// 00628d7d  5f                   pop edi
// 00628d7e  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_code)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
