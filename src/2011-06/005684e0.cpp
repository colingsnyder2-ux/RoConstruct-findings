// roc 2011-06 005684e0  unit: seg_00560000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005684e0
//
// 005684e0  53                   push ebx
// 005684e1  56                   push esi
// 005684e2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005684e6  e8b5fdffff           call 0x5682a0
// 005684eb  8bde                 mov ebx, esi
// 005684ed  e84effffff           call 0x568440
// 005684f2  8b8698010000         mov eax, dword ptr [esi + 0x198]
// 005684f8  8b08                 mov ecx, dword ptr [eax]
// 005684fa  56                   push esi
// 005684fb  ffd1                 call ecx
// 005684fd  8b9688010000         mov edx, dword ptr [esi + 0x188]
// 00568503  8b02                 mov eax, dword ptr [edx]
// 00568505  56                   push esi
// 00568506  ffd0                 call eax
// 00568508  8b8e88010000         mov ecx, dword ptr [esi + 0x188]
// 0056850e  8b9690010000         mov edx, dword ptr [esi + 0x190]
// 00568514  8b4104               mov eax, dword ptr [ecx + 4]
// 00568517  83c408               add esp, 8
// 0056851a  5e                   pop esi
// 0056851b  8902                 mov dword ptr [edx], eax
// 0056851d  5b                   pop ebx
// 0056851e  c3                   ret 
// library jpeg-6b/jdinput.c (function _start_input_pass)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdinput.c
