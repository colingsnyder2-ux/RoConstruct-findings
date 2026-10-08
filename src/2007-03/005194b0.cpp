// roc 2007-03 005194b0  unit: seg_00510000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005194b0
//
// 005194b0  53                   push ebx
// 005194b1  56                   push esi
// 005194b2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005194b6  e895fdffff           call 0x519250
// 005194bb  8bde                 mov ebx, esi
// 005194bd  e83effffff           call 0x519400
// 005194c2  8b8698010000         mov eax, dword ptr [esi + 0x198]
// 005194c8  8b08                 mov ecx, dword ptr [eax]
// 005194ca  56                   push esi
// 005194cb  ffd1                 call ecx
// 005194cd  8b9688010000         mov edx, dword ptr [esi + 0x188]
// 005194d3  8b02                 mov eax, dword ptr [edx]
// 005194d5  56                   push esi
// 005194d6  ffd0                 call eax
// 005194d8  8b8e88010000         mov ecx, dword ptr [esi + 0x188]
// 005194de  8b9690010000         mov edx, dword ptr [esi + 0x190]
// 005194e4  8b4104               mov eax, dword ptr [ecx + 4]
// 005194e7  83c408               add esp, 8
// 005194ea  5e                   pop esi
// 005194eb  8902                 mov dword ptr [edx], eax
// 005194ed  5b                   pop ebx
// 005194ee  c3                   ret 
// library jpeg-6b/jdinput.c (function _start_input_pass)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdinput.c
