// from server: 100% by auto
// roc 2009-06 005a1150  unit: seg_005a0000  size: 150 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005a1150
//
// 005a1150  56                   push esi
// 005a1151  8b742408             mov esi, dword ptr [esp + 8]
// 005a1155  8b4604               mov eax, dword ptr [esi + 4]
// 005a1158  8b08                 mov ecx, dword ptr [eax]
// 005a115a  6a58                 push 0x58
// 005a115c  6a01                 push 1
// 005a115e  56                   push esi
// 005a115f  ffd1                 call ecx
// 005a1161  8986a8010000         mov dword ptr [esi + 0x1a8], eax
// 005a1167  33c9                 xor ecx, ecx
// 005a1169  c70040105a00         mov dword ptr [eax], 0x5a1040
// 005a116f  c74008e0496700       mov dword ptr [eax + 8], 0x6749e0
// 005a1176  c7400c30115a00       mov dword ptr [eax + 0xc], 0x5a1130
// 005a117d  894844               mov dword ptr [eax + 0x44], ecx
// 005a1180  894834               mov dword ptr [eax + 0x34], ecx
// 005a1183  b804000000           mov eax, 4
// 005a1188  83c40c               add esp, 0xc
// 005a118b  394664               cmp dword ptr [esi + 0x64], eax
// 005a118e  7e18                 jle 0x5a11a8
// 005a1190  8b16                 mov edx, dword ptr [esi]
// 005a1192  c7421437000000       mov dword ptr [edx + 0x14], 0x37
// 005a1199  8b0e                 mov ecx, dword ptr [esi]
// 005a119b  894118               mov dword ptr [ecx + 0x18], eax
// 005a119e  8b16                 mov edx, dword ptr [esi]
// 005a11a0  8b02                 mov eax, dword ptr [edx]
// 005a11a2  56                   push esi
// 005a11a3  ffd0                 call eax
// 005a11a5  83c404               add esp, 4
// 005a11a8  b800010000           mov eax, 0x100
// 005a11ad  394654               cmp dword ptr [esi + 0x54], eax
// 005a11b0  7e18                 jle 0x5a11ca
// 005a11b2  8b0e                 mov ecx, dword ptr [esi]
// 005a11b4  c7411439000000       mov dword ptr [ecx + 0x14], 0x39
// 005a11bb  8b16                 mov edx, dword ptr [esi]
// 005a11bd  894218               mov dword ptr [edx + 0x18], eax
// 005a11c0  8b06                 mov eax, dword ptr [esi]
// 005a11c2  8b08                 mov ecx, dword ptr [eax]
// 005a11c4  56                   push esi
// 005a11c5  ffd1                 call ecx
// 005a11c7  83c404               add esp, 4
// 005a11ca  56                   push esi
// 005a11cb  e860f5ffff           call 0x5a0730
// 005a11d0  56                   push esi
// 005a11d1  e8caf6ffff           call 0x5a08a0
// 005a11d6  83c408               add esp, 8
// 005a11d9  837e4c02             cmp dword ptr [esi + 0x4c], 2
// 005a11dd  7505                 jne 0x5a11e4
// 005a11df  e81cfeffff           call 0x5a1000
// 005a11e4  5e                   pop esi
// 005a11e5  c3                   ret 
// library jpeg-6b/jquant1.c (function _jinit_1pass_quantizer)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
