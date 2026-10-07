// roc 2012-06 00653bf0  unit: seg_00650000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00653bf0
//
// 00653bf0  53                   push ebx
// 00653bf1  56                   push esi
// 00653bf2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00653bf6  e8b5fdffff           call 0x6539b0
// 00653bfb  8bde                 mov ebx, esi
// 00653bfd  e84effffff           call 0x653b50
// 00653c02  8b8698010000         mov eax, dword ptr [esi + 0x198]
// 00653c08  8b08                 mov ecx, dword ptr [eax]
// 00653c0a  56                   push esi
// 00653c0b  ffd1                 call ecx
// 00653c0d  8b9688010000         mov edx, dword ptr [esi + 0x188]
// 00653c13  8b02                 mov eax, dword ptr [edx]
// 00653c15  56                   push esi
// 00653c16  ffd0                 call eax
// 00653c18  8b8e88010000         mov ecx, dword ptr [esi + 0x188]
// 00653c1e  8b9690010000         mov edx, dword ptr [esi + 0x190]
// 00653c24  8b4104               mov eax, dword ptr [ecx + 4]
// 00653c27  83c408               add esp, 8
// 00653c2a  5e                   pop esi
// 00653c2b  8902                 mov dword ptr [edx], eax
// 00653c2d  5b                   pop ebx
// 00653c2e  c3                   ret 
// library jpeg-6b/jdinput.c (function _start_input_pass)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdinput.c
