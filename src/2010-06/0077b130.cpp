// roc 2010-06 0077b130  unit: RBX::PartDropTool  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0077b130
//
// 0077b130  8b442404             mov eax, dword ptr [esp + 4]
// 0077b134  8b4808               mov ecx, dword ptr [eax + 8]
// 0077b137  83ec08               sub esp, 8
// 0077b13a  83f903               cmp ecx, 3
// 0077b13d  7431                 je 0x77b170
// 0077b13f  83f904               cmp ecx, 4
// 0077b142  752a                 jne 0x77b16e
// 0077b144  8b10                 mov edx, dword ptr [eax]
// 0077b146  8d0c24               lea ecx, [esp]
// 0077b149  51                   push ecx
// 0077b14a  83c210               add edx, 0x10
// 0077b14d  52                   push edx
// 0077b14e  e89d78fbff           call 0x7329f0
// 0077b153  83c408               add esp, 8
// 0077b156  85c0                 test eax, eax
// 0077b158  7414                 je 0x77b16e
// 0077b15a  8b442410             mov eax, dword ptr [esp + 0x10]
// 0077b15e  dd0424               fld qword ptr [esp]
// 0077b161  dd18                 fstp qword ptr [eax]
// 0077b163  c7400803000000       mov dword ptr [eax + 8], 3
// 0077b16a  83c408               add esp, 8
// 0077b16d  c3                   ret 
// 0077b16e  33c0                 xor eax, eax
// 0077b170  83c408               add esp, 8
// 0077b173  c3                   ret 
// library lua-5.1.4/lvm.c (function _luaV_tonumber)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lvm.c
