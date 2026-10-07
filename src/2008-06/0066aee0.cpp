// roc 2008-06 0066aee0  unit: RBX::GroupDragTool  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0066aee0
//
// 0066aee0  83ec10               sub esp, 0x10
// 0066aee3  8b442418             mov eax, dword ptr [esp + 0x18]
// 0066aee7  8d0c24               lea ecx, [esp]
// 0066aeea  890424               mov dword ptr [esp], eax
// 0066aeed  8b442414             mov eax, dword ptr [esp + 0x14]
// 0066aef1  51                   push ecx
// 0066aef2  c744240c04000000     mov dword ptr [esp + 0xc], 4
// 0066aefa  e801ffffff           call 0x66ae00
// 0066aeff  83c414               add esp, 0x14
// 0066af02  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_stringK)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
