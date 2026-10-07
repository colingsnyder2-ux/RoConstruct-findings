// roc 2010-06 00575eb0  unit: seg_00570000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00575eb0
//
// 00575eb0  53                   push ebx
// 00575eb1  56                   push esi
// 00575eb2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00575eb6  e8b5fdffff           call 0x575c70
// 00575ebb  8bde                 mov ebx, esi
// 00575ebd  e84effffff           call 0x575e10
// 00575ec2  8b8698010000         mov eax, dword ptr [esi + 0x198]
// 00575ec8  8b08                 mov ecx, dword ptr [eax]
// 00575eca  56                   push esi
// 00575ecb  ffd1                 call ecx
// 00575ecd  8b9688010000         mov edx, dword ptr [esi + 0x188]
// 00575ed3  8b02                 mov eax, dword ptr [edx]
// 00575ed5  56                   push esi
// 00575ed6  ffd0                 call eax
// 00575ed8  8b8e88010000         mov ecx, dword ptr [esi + 0x188]
// 00575ede  8b9690010000         mov edx, dword ptr [esi + 0x190]
// 00575ee4  8b4104               mov eax, dword ptr [ecx + 4]
// 00575ee7  83c408               add esp, 8
// 00575eea  5e                   pop esi
// 00575eeb  8902                 mov dword ptr [edx], eax
// 00575eed  5b                   pop ebx
// 00575eee  c3                   ret 
// library jpeg-6b/jdinput.c (function _start_input_pass)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdinput.c
