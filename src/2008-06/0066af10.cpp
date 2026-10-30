// from server: 100% by auto
// roc 2008-06 0066af10  unit: RBX::GroupDragTool  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0066af10
//
// 0066af10  83ec10               sub esp, 0x10
// 0066af13  dd442418             fld qword ptr [esp + 0x18]
// 0066af17  8d0424               lea eax, [esp]
// 0066af1a  50                   push eax
// 0066af1b  dd5c2404             fstp qword ptr [esp + 4]
// 0066af1f  8bc8                 mov ecx, eax
// 0066af21  8b442418             mov eax, dword ptr [esp + 0x18]
// 0066af25  c744240c03000000     mov dword ptr [esp + 0xc], 3
// 0066af2d  e8cefeffff           call 0x66ae00
// 0066af32  83c414               add esp, 0x14
// 0066af35  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_numberK)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
