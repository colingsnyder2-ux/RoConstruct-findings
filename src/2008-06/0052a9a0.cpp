// roc 2008-06 0052a9a0  unit: seg_00520000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0052a9a0
//
// 0052a9a0  53                   push ebx
// 0052a9a1  56                   push esi
// 0052a9a2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0052a9a6  e8b5fdffff           call 0x52a760
// 0052a9ab  8bde                 mov ebx, esi
// 0052a9ad  e84effffff           call 0x52a900
// 0052a9b2  8b8698010000         mov eax, dword ptr [esi + 0x198]
// 0052a9b8  8b08                 mov ecx, dword ptr [eax]
// 0052a9ba  56                   push esi
// 0052a9bb  ffd1                 call ecx
// 0052a9bd  8b9688010000         mov edx, dword ptr [esi + 0x188]
// 0052a9c3  8b02                 mov eax, dword ptr [edx]
// 0052a9c5  56                   push esi
// 0052a9c6  ffd0                 call eax
// 0052a9c8  8b8e88010000         mov ecx, dword ptr [esi + 0x188]
// 0052a9ce  8b9690010000         mov edx, dword ptr [esi + 0x190]
// 0052a9d4  8b4104               mov eax, dword ptr [ecx + 4]
// 0052a9d7  83c408               add esp, 8
// 0052a9da  5e                   pop esi
// 0052a9db  8902                 mov dword ptr [edx], eax
// 0052a9dd  5b                   pop ebx
// 0052a9de  c3                   ret 
// library jpeg-6b/jdinput.c (function _start_input_pass)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdinput.c
