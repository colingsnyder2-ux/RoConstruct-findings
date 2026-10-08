// from server: 100% by auto
// roc 2007-08 006100d0  unit: RBX::Ball  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006100d0
//
// 006100d0  8b442404             mov eax, dword ptr [esp + 4]
// 006100d4  8b4808               mov ecx, dword ptr [eax + 8]
// 006100d7  83ec08               sub esp, 8
// 006100da  83f903               cmp ecx, 3
// 006100dd  7431                 je 0x610110
// 006100df  83f904               cmp ecx, 4
// 006100e2  752a                 jne 0x61010e
// 006100e4  8b10                 mov edx, dword ptr [eax]
// 006100e6  8d0c24               lea ecx, [esp]
// 006100e9  51                   push ecx
// 006100ea  83c210               add edx, 0x10
// 006100ed  52                   push edx
// 006100ee  e8ede9ffff           call 0x60eae0
// 006100f3  83c408               add esp, 8
// 006100f6  85c0                 test eax, eax
// 006100f8  7414                 je 0x61010e
// 006100fa  8b442410             mov eax, dword ptr [esp + 0x10]
// 006100fe  dd0424               fld qword ptr [esp]
// 00610101  dd18                 fstp qword ptr [eax]
// 00610103  c7400803000000       mov dword ptr [eax + 8], 3
// 0061010a  83c408               add esp, 8
// 0061010d  c3                   ret 
// 0061010e  33c0                 xor eax, eax
// 00610110  83c408               add esp, 8
// 00610113  c3                   ret 
// library lua-5.1.4/lvm.c (function _luaV_tonumber)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lvm.c
