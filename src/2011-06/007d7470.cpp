// roc 2011-06 007d7470  unit: RBX::EquationDisplay  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007d7470
//
// 007d7470  8b442404             mov eax, dword ptr [esp + 4]
// 007d7474  8b4808               mov ecx, dword ptr [eax + 8]
// 007d7477  83ec08               sub esp, 8
// 007d747a  83f903               cmp ecx, 3
// 007d747d  7431                 je 0x7d74b0
// 007d747f  83f904               cmp ecx, 4
// 007d7482  752a                 jne 0x7d74ae
// 007d7484  8b10                 mov edx, dword ptr [eax]
// 007d7486  8d0c24               lea ecx, [esp]
// 007d7489  51                   push ecx
// 007d748a  83c210               add edx, 0x10
// 007d748d  52                   push edx
// 007d748e  e89d55faff           call 0x77ca30
// 007d7493  83c408               add esp, 8
// 007d7496  85c0                 test eax, eax
// 007d7498  7414                 je 0x7d74ae
// 007d749a  8b442410             mov eax, dword ptr [esp + 0x10]
// 007d749e  dd0424               fld qword ptr [esp]
// 007d74a1  dd18                 fstp qword ptr [eax]
// 007d74a3  c7400803000000       mov dword ptr [eax + 8], 3
// 007d74aa  83c408               add esp, 8
// 007d74ad  c3                   ret 
// 007d74ae  33c0                 xor eax, eax
// 007d74b0  83c408               add esp, 8
// 007d74b3  c3                   ret 
// library lua-5.1.4/lvm.c (function _luaV_tonumber)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lvm.c
