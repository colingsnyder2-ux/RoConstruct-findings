// from server: 100% by auto
// roc 2012-06 00933580  unit: RBX::BallCellContact  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00933580
//
// 00933580  8b442404             mov eax, dword ptr [esp + 4]
// 00933584  8b4808               mov ecx, dword ptr [eax + 8]
// 00933587  83ec08               sub esp, 8
// 0093358a  83f903               cmp ecx, 3
// 0093358d  7431                 je 0x9335c0
// 0093358f  83f904               cmp ecx, 4
// 00933592  752a                 jne 0x9335be
// 00933594  8b10                 mov edx, dword ptr [eax]
// 00933596  8d0c24               lea ecx, [esp]
// 00933599  51                   push ecx
// 0093359a  83c210               add edx, 0x10
// 0093359d  52                   push edx
// 0093359e  e8adc7f1ff           call 0x84fd50
// 009335a3  83c408               add esp, 8
// 009335a6  85c0                 test eax, eax
// 009335a8  7414                 je 0x9335be
// 009335aa  8b442410             mov eax, dword ptr [esp + 0x10]
// 009335ae  dd0424               fld qword ptr [esp]
// 009335b1  dd18                 fstp qword ptr [eax]
// 009335b3  c7400803000000       mov dword ptr [eax + 8], 3
// 009335ba  83c408               add esp, 8
// 009335bd  c3                   ret 
// 009335be  33c0                 xor eax, eax
// 009335c0  83c408               add esp, 8
// 009335c3  c3                   ret 
// library lua-5.1.4/lvm.c (function _luaV_tonumber)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lvm.c
