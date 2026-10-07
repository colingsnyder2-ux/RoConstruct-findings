// roc 2009-06 00592580  unit: seg_00590000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00592580
//
// 00592580  53                   push ebx
// 00592581  56                   push esi
// 00592582  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00592586  e8b5fdffff           call 0x592340
// 0059258b  8bde                 mov ebx, esi
// 0059258d  e84effffff           call 0x5924e0
// 00592592  8b8698010000         mov eax, dword ptr [esi + 0x198]
// 00592598  8b08                 mov ecx, dword ptr [eax]
// 0059259a  56                   push esi
// 0059259b  ffd1                 call ecx
// 0059259d  8b9688010000         mov edx, dword ptr [esi + 0x188]
// 005925a3  8b02                 mov eax, dword ptr [edx]
// 005925a5  56                   push esi
// 005925a6  ffd0                 call eax
// 005925a8  8b8e88010000         mov ecx, dword ptr [esi + 0x188]
// 005925ae  8b9690010000         mov edx, dword ptr [esi + 0x190]
// 005925b4  8b4104               mov eax, dword ptr [ecx + 4]
// 005925b7  83c408               add esp, 8
// 005925ba  5e                   pop esi
// 005925bb  8902                 mov dword ptr [edx], eax
// 005925bd  5b                   pop ebx
// 005925be  c3                   ret 
// library jpeg-6b/jdinput.c (function _start_input_pass)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdinput.c
