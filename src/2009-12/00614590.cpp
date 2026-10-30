// roc 2009-12 00614590  unit: seg_00610000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00614590
//
// 00614590  53                   push ebx
// 00614591  56                   push esi
// 00614592  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00614596  e8b5fdffff           call 0x614350
// 0061459b  8bde                 mov ebx, esi
// 0061459d  e84effffff           call 0x6144f0
// 006145a2  8b8698010000         mov eax, dword ptr [esi + 0x198]
// 006145a8  8b08                 mov ecx, dword ptr [eax]
// 006145aa  56                   push esi
// 006145ab  ffd1                 call ecx
// 006145ad  8b9688010000         mov edx, dword ptr [esi + 0x188]
// 006145b3  8b02                 mov eax, dword ptr [edx]
// 006145b5  56                   push esi
// 006145b6  ffd0                 call eax
// 006145b8  8b8e88010000         mov ecx, dword ptr [esi + 0x188]
// 006145be  8b9690010000         mov edx, dword ptr [esi + 0x190]
// 006145c4  8b4104               mov eax, dword ptr [ecx + 4]
// 006145c7  83c408               add esp, 8
// 006145ca  5e                   pop esi
// 006145cb  8902                 mov dword ptr [edx], eax
// 006145cd  5b                   pop ebx
// 006145ce  c3                   ret 
// library jpeg-6b/jdinput.c (function _start_input_pass)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdinput.c
