// roc 2008-06 0066b3f0  unit: RBX::GroupDragTool  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0066b3f0
//
// 0066b3f0  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0066b3f4  56                   push esi
// 0066b3f5  8b742408             mov esi, dword ptr [esp + 8]
// 0066b3f9  8b460c               mov eax, dword ptr [esi + 0xc]
// 0066b3fc  8b4808               mov ecx, dword ptr [eax + 8]
// 0066b3ff  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0066b403  42                   inc edx
// 0066b404  c1e217               shl edx, 0x17
// 0066b407  c1e006               shl eax, 6
// 0066b40a  0bd0                 or edx, eax
// 0066b40c  51                   push ecx
// 0066b40d  83ca1e               or edx, 0x1e
// 0066b410  52                   push edx
// 0066b411  e87afdffff           call 0x66b190
// 0066b416  83c408               add esp, 8
// 0066b419  5e                   pop esi
// 0066b41a  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_ret)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
