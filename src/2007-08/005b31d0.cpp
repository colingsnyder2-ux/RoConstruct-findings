// roc 2007-08 005b31d0  unit: RBX::Assembly  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b31d0
//
// 005b31d0  51                   push ecx
// 005b31d1  803dad5e8c0000       cmp byte ptr [0x8c5ead], 0
// 005b31d8  7521                 jne 0x5b31fb
// 005b31da  8b4108               mov eax, dword ptr [ecx + 8]
// 005b31dd  80782c00             cmp byte ptr [eax + 0x2c], 0
// 005b31e1  7418                 je 0x5b31fb
// 005b31e3  8b4134               mov eax, dword ptr [ecx + 0x34]
// 005b31e6  85c0                 test eax, eax
// 005b31e8  740a                 je 0x5b31f4
// 005b31ea  8b4938               mov ecx, dword ptr [ecx + 0x38]
// 005b31ed  2bc8                 sub ecx, eax
// 005b31ef  c1f902               sar ecx, 2
// 005b31f2  7507                 jne 0x5b31fb
// 005b31f4  b801000000           mov eax, 1
// 005b31f9  59                   pop ecx
// 005b31fa  c3                   ret 
// 005b31fb  33c0                 xor eax, eax
// 005b31fd  59                   pop ecx
// 005b31fe  c3                   ret 
// library rbxgs/v8world\Assembly.cpp (function ?getCanSleep@Assembly@RBX@@QAE_NXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
