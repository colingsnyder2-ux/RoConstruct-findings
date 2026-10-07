// roc 2007-08 0051f190  unit: seg_00510000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0051f190
//
// 0051f190  53                   push ebx
// 0051f191  56                   push esi
// 0051f192  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0051f196  e895fdffff           call 0x51ef30
// 0051f19b  8bde                 mov ebx, esi
// 0051f19d  e83effffff           call 0x51f0e0
// 0051f1a2  8b8698010000         mov eax, dword ptr [esi + 0x198]
// 0051f1a8  8b08                 mov ecx, dword ptr [eax]
// 0051f1aa  56                   push esi
// 0051f1ab  ffd1                 call ecx
// 0051f1ad  8b9688010000         mov edx, dword ptr [esi + 0x188]
// 0051f1b3  8b02                 mov eax, dword ptr [edx]
// 0051f1b5  56                   push esi
// 0051f1b6  ffd0                 call eax
// 0051f1b8  8b8e88010000         mov ecx, dword ptr [esi + 0x188]
// 0051f1be  8b9690010000         mov edx, dword ptr [esi + 0x190]
// 0051f1c4  8b4104               mov eax, dword ptr [ecx + 4]
// 0051f1c7  83c408               add esp, 8
// 0051f1ca  5e                   pop esi
// 0051f1cb  8902                 mov dword ptr [edx], eax
// 0051f1cd  5b                   pop ebx
// 0051f1ce  c3                   ret 
// library jpeg-6b/jdinput.c (function _start_input_pass)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdinput.c
