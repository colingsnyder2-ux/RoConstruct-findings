// roc 2010-06 0078f830  unit: RBX::GroupDragTool  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0078f830
//
// 0078f830  83ec10               sub esp, 0x10
// 0078f833  dd442418             fld qword ptr [esp + 0x18]
// 0078f837  8d0424               lea eax, [esp]
// 0078f83a  50                   push eax
// 0078f83b  dd5c2404             fstp qword ptr [esp + 4]
// 0078f83f  8bc8                 mov ecx, eax
// 0078f841  8b442418             mov eax, dword ptr [esp + 0x18]
// 0078f845  c744240c03000000     mov dword ptr [esp + 0xc], 3
// 0078f84d  e8cefeffff           call 0x78f720
// 0078f852  83c414               add esp, 0x14
// 0078f855  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_numberK)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
