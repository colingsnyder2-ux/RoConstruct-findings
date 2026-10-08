// from server: 100% by auto
// roc 2009-06 006f9eb0  unit: RBX::GroupDragTool  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006f9eb0
//
// 006f9eb0  83ec10               sub esp, 0x10
// 006f9eb3  dd442418             fld qword ptr [esp + 0x18]
// 006f9eb7  8d0424               lea eax, [esp]
// 006f9eba  50                   push eax
// 006f9ebb  dd5c2404             fstp qword ptr [esp + 4]
// 006f9ebf  8bc8                 mov ecx, eax
// 006f9ec1  8b442418             mov eax, dword ptr [esp + 0x18]
// 006f9ec5  c744240c03000000     mov dword ptr [esp + 0xc], 3
// 006f9ecd  e8cefeffff           call 0x6f9da0
// 006f9ed2  83c414               add esp, 0x14
// 006f9ed5  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_numberK)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
