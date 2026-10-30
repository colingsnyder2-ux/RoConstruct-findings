// from server: 100% by auto
// roc 2010-06 0078fd30  unit: RBX::GroupDragTool  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0078fd30
//
// 0078fd30  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0078fd34  56                   push esi
// 0078fd35  8b742408             mov esi, dword ptr [esp + 8]
// 0078fd39  8b460c               mov eax, dword ptr [esi + 0xc]
// 0078fd3c  8b4808               mov ecx, dword ptr [eax + 8]
// 0078fd3f  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0078fd43  42                   inc edx
// 0078fd44  c1e217               shl edx, 0x17
// 0078fd47  c1e006               shl eax, 6
// 0078fd4a  0bd0                 or edx, eax
// 0078fd4c  51                   push ecx
// 0078fd4d  83ca1e               or edx, 0x1e
// 0078fd50  52                   push edx
// 0078fd51  e86afdffff           call 0x78fac0
// 0078fd56  83c408               add esp, 8
// 0078fd59  5e                   pop esi
// 0078fd5a  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_ret)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
