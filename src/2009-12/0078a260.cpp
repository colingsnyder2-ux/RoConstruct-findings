// roc 2009-12 0078a260  unit: RBX::UniversalTool  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0078a260
//
// 0078a260  56                   push esi
// 0078a261  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0078a265  833e00               cmp dword ptr [esi], 0
// 0078a268  7417                 je 0x78a281
// 0078a26a  8b442410             mov eax, dword ptr [esp + 0x10]
// 0078a26e  c70600000000         mov dword ptr [esi], 0
// 0078a274  c70001000000         mov dword ptr [eax], 1
// 0078a27a  b81cd89a00           mov eax, 0x9ad81c
// 0078a27f  5e                   pop esi
// 0078a280  c3                   ret 
// 0078a281  8b4e04               mov ecx, dword ptr [esi + 4]
// 0078a284  51                   push ecx
// 0078a285  ff1510b99800         call dword ptr [0x98b910]
// 0078a28b  83c404               add esp, 4
// 0078a28e  85c0                 test eax, eax
// 0078a290  7404                 je 0x78a296
// 0078a292  33c0                 xor eax, eax
// 0078a294  5e                   pop esi
// 0078a295  c3                   ret 
// 0078a296  8b5604               mov edx, dword ptr [esi + 4]
// 0078a299  57                   push edi
// 0078a29a  52                   push edx
// 0078a29b  6800020000           push 0x200
// 0078a2a0  8d7e08               lea edi, [esi + 8]
// 0078a2a3  6a01                 push 1
// 0078a2a5  57                   push edi
// 0078a2a6  ff15a4b89800         call dword ptr [0x98b8a4]
// 0078a2ac  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0078a2b0  83c410               add esp, 0x10
// 0078a2b3  33d2                 xor edx, edx
// 0078a2b5  3bd0                 cmp edx, eax
// 0078a2b7  8901                 mov dword ptr [ecx], eax
// 0078a2b9  1bc0                 sbb eax, eax
// 0078a2bb  23c7                 and eax, edi
// 0078a2bd  5f                   pop edi
// 0078a2be  5e                   pop esi
// 0078a2bf  c3                   ret 
// copied from an identical function in another client (function _getF)

// from server: 100% by tester
// roc-lang: c
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4-dll lauxlib.c