// from server: 100% by auto
// roc 2011-06 007f29b0  unit: RBX::AdvLuaDragTool  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007f29b0
//
// 007f29b0  c1e009               shl eax, 9
// 007f29b3  0b44240c             or eax, dword ptr [esp + 0xc]
// 007f29b7  56                   push esi
// 007f29b8  c1e008               shl eax, 8
// 007f29bb  0b44240c             or eax, dword ptr [esp + 0xc]
// 007f29bf  8bf1                 mov esi, ecx
// 007f29c1  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 007f29c4  8b5108               mov edx, dword ptr [ecx + 8]
// 007f29c7  c1e006               shl eax, 6
// 007f29ca  0b442408             or eax, dword ptr [esp + 8]
// 007f29ce  57                   push edi
// 007f29cf  52                   push edx
// 007f29d0  50                   push eax
// 007f29d1  e83afdffff           call 0x7f2710
// 007f29d6  8b7e20               mov edi, dword ptr [esi + 0x20]
// 007f29d9  8b460c               mov eax, dword ptr [esi + 0xc]
// 007f29dc  c74620ffffffff       mov dword ptr [esi + 0x20], 0xffffffff
// 007f29e3  8b4808               mov ecx, dword ptr [eax + 8]
// 007f29e6  51                   push ecx
// 007f29e7  681680ff7f           push 0x7fff8016
// 007f29ec  e81ffdffff           call 0x7f2710
// 007f29f1  57                   push edi
// 007f29f2  8d542428             lea edx, [esp + 0x28]
// 007f29f6  52                   push edx
// 007f29f7  56                   push esi
// 007f29f8  89442430             mov dword ptr [esp + 0x30], eax
// 007f29fc  e84ff8ffff           call 0x7f2250
// 007f2a01  8b442430             mov eax, dword ptr [esp + 0x30]
// 007f2a05  83c41c               add esp, 0x1c
// 007f2a08  5f                   pop edi
// 007f2a09  5e                   pop esi
// 007f2a0a  c3                   ret 
// library lua-5.1.4/lcode.c (function _condjump)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
