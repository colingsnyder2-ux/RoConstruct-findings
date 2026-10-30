// from server: 100% by auto
// roc 2008-06 0065c660  unit: RBX::BallBallContact  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0065c660
//
// 0065c660  8b442404             mov eax, dword ptr [esp + 4]
// 0065c664  8b4808               mov ecx, dword ptr [eax + 8]
// 0065c667  83ec08               sub esp, 8
// 0065c66a  83f903               cmp ecx, 3
// 0065c66d  7431                 je 0x65c6a0
// 0065c66f  83f904               cmp ecx, 4
// 0065c672  752a                 jne 0x65c69e
// 0065c674  8b10                 mov edx, dword ptr [eax]
// 0065c676  8d0c24               lea ecx, [esp]
// 0065c679  51                   push ecx
// 0065c67a  83c210               add edx, 0x10
// 0065c67d  52                   push edx
// 0065c67e  e84d60fcff           call 0x6226d0
// 0065c683  83c408               add esp, 8
// 0065c686  85c0                 test eax, eax
// 0065c688  7414                 je 0x65c69e
// 0065c68a  8b442410             mov eax, dword ptr [esp + 0x10]
// 0065c68e  dd0424               fld qword ptr [esp]
// 0065c691  dd18                 fstp qword ptr [eax]
// 0065c693  c7400803000000       mov dword ptr [eax + 8], 3
// 0065c69a  83c408               add esp, 8
// 0065c69d  c3                   ret 
// 0065c69e  33c0                 xor eax, eax
// 0065c6a0  83c408               add esp, 8
// 0065c6a3  c3                   ret 
// library lua-5.1.4/lvm.c (function _luaV_tonumber)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lvm.c
