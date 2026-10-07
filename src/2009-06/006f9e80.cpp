// roc 2009-06 006f9e80  unit: RBX::GroupDragTool  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006f9e80
//
// 006f9e80  83ec10               sub esp, 0x10
// 006f9e83  8b442418             mov eax, dword ptr [esp + 0x18]
// 006f9e87  8d0c24               lea ecx, [esp]
// 006f9e8a  890424               mov dword ptr [esp], eax
// 006f9e8d  8b442414             mov eax, dword ptr [esp + 0x14]
// 006f9e91  51                   push ecx
// 006f9e92  c744240c04000000     mov dword ptr [esp + 0xc], 4
// 006f9e9a  e801ffffff           call 0x6f9da0
// 006f9e9f  83c414               add esp, 0x14
// 006f9ea2  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_stringK)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
