// roc 2010-06 0078f800  unit: RBX::GroupDragTool  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0078f800
//
// 0078f800  83ec10               sub esp, 0x10
// 0078f803  8b442418             mov eax, dword ptr [esp + 0x18]
// 0078f807  8d0c24               lea ecx, [esp]
// 0078f80a  890424               mov dword ptr [esp], eax
// 0078f80d  8b442414             mov eax, dword ptr [esp + 0x14]
// 0078f811  51                   push ecx
// 0078f812  c744240c04000000     mov dword ptr [esp + 0xc], 4
// 0078f81a  e801ffffff           call 0x78f720
// 0078f81f  83c414               add esp, 0x14
// 0078f822  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_stringK)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
