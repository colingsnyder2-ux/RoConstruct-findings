// roc 2009-12 00623180  unit: seg_00620000  size: 150 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00623180
//
// 00623180  56                   push esi
// 00623181  8b742408             mov esi, dword ptr [esp + 8]
// 00623185  8b4604               mov eax, dword ptr [esi + 4]
// 00623188  8b08                 mov ecx, dword ptr [eax]
// 0062318a  6a58                 push 0x58
// 0062318c  6a01                 push 1
// 0062318e  56                   push esi
// 0062318f  ffd1                 call ecx
// 00623191  8986a8010000         mov dword ptr [esi + 0x1a8], eax
// 00623197  33c9                 xor ecx, ecx
// 00623199  c70070306200         mov dword ptr [eax], 0x623070
// 0062319f  c74008904a8500       mov dword ptr [eax + 8], 0x854a90
// 006231a6  c7400c60316200       mov dword ptr [eax + 0xc], 0x623160
// 006231ad  894844               mov dword ptr [eax + 0x44], ecx
// 006231b0  894834               mov dword ptr [eax + 0x34], ecx
// 006231b3  b804000000           mov eax, 4
// 006231b8  83c40c               add esp, 0xc
// 006231bb  394664               cmp dword ptr [esi + 0x64], eax
// 006231be  7e18                 jle 0x6231d8
// 006231c0  8b16                 mov edx, dword ptr [esi]
// 006231c2  c7421437000000       mov dword ptr [edx + 0x14], 0x37
// 006231c9  8b0e                 mov ecx, dword ptr [esi]
// 006231cb  894118               mov dword ptr [ecx + 0x18], eax
// 006231ce  8b16                 mov edx, dword ptr [esi]
// 006231d0  8b02                 mov eax, dword ptr [edx]
// 006231d2  56                   push esi
// 006231d3  ffd0                 call eax
// 006231d5  83c404               add esp, 4
// 006231d8  b800010000           mov eax, 0x100
// 006231dd  394654               cmp dword ptr [esi + 0x54], eax
// 006231e0  7e18                 jle 0x6231fa
// 006231e2  8b0e                 mov ecx, dword ptr [esi]
// 006231e4  c7411439000000       mov dword ptr [ecx + 0x14], 0x39
// 006231eb  8b16                 mov edx, dword ptr [esi]
// 006231ed  894218               mov dword ptr [edx + 0x18], eax
// 006231f0  8b06                 mov eax, dword ptr [esi]
// 006231f2  8b08                 mov ecx, dword ptr [eax]
// 006231f4  56                   push esi
// 006231f5  ffd1                 call ecx
// 006231f7  83c404               add esp, 4
// 006231fa  56                   push esi
// 006231fb  e860f5ffff           call 0x622760
// 00623200  56                   push esi
// 00623201  e8caf6ffff           call 0x6228d0
// 00623206  83c408               add esp, 8
// 00623209  837e4c02             cmp dword ptr [esi + 0x4c], 2
// 0062320d  7505                 jne 0x623214
// 0062320f  e81cfeffff           call 0x623030
// 00623214  5e                   pop esi
// 00623215  c3                   ret 
// library jpeg-6b/jquant1.c (function _jinit_1pass_quantizer)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
