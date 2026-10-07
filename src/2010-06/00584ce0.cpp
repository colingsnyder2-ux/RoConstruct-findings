// roc 2010-06 00584ce0  unit: seg_00580000  size: 150 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00584ce0
//
// 00584ce0  56                   push esi
// 00584ce1  8b742408             mov esi, dword ptr [esp + 8]
// 00584ce5  8b4604               mov eax, dword ptr [esi + 4]
// 00584ce8  8b08                 mov ecx, dword ptr [eax]
// 00584cea  6a58                 push 0x58
// 00584cec  6a01                 push 1
// 00584cee  56                   push esi
// 00584cef  ffd1                 call ecx
// 00584cf1  8986a8010000         mov dword ptr [esi + 0x1a8], eax
// 00584cf7  33c9                 xor ecx, ecx
// 00584cf9  c700d04b5800         mov dword ptr [eax], 0x584bd0
// 00584cff  c74008b0454500       mov dword ptr [eax + 8], 0x4545b0
// 00584d06  c7400cc04c5800       mov dword ptr [eax + 0xc], 0x584cc0
// 00584d0d  894844               mov dword ptr [eax + 0x44], ecx
// 00584d10  894834               mov dword ptr [eax + 0x34], ecx
// 00584d13  b804000000           mov eax, 4
// 00584d18  83c40c               add esp, 0xc
// 00584d1b  394664               cmp dword ptr [esi + 0x64], eax
// 00584d1e  7e18                 jle 0x584d38
// 00584d20  8b16                 mov edx, dword ptr [esi]
// 00584d22  c7421437000000       mov dword ptr [edx + 0x14], 0x37
// 00584d29  8b0e                 mov ecx, dword ptr [esi]
// 00584d2b  894118               mov dword ptr [ecx + 0x18], eax
// 00584d2e  8b16                 mov edx, dword ptr [esi]
// 00584d30  8b02                 mov eax, dword ptr [edx]
// 00584d32  56                   push esi
// 00584d33  ffd0                 call eax
// 00584d35  83c404               add esp, 4
// 00584d38  b800010000           mov eax, 0x100
// 00584d3d  394654               cmp dword ptr [esi + 0x54], eax
// 00584d40  7e18                 jle 0x584d5a
// 00584d42  8b0e                 mov ecx, dword ptr [esi]
// 00584d44  c7411439000000       mov dword ptr [ecx + 0x14], 0x39
// 00584d4b  8b16                 mov edx, dword ptr [esi]
// 00584d4d  894218               mov dword ptr [edx + 0x18], eax
// 00584d50  8b06                 mov eax, dword ptr [esi]
// 00584d52  8b08                 mov ecx, dword ptr [eax]
// 00584d54  56                   push esi
// 00584d55  ffd1                 call ecx
// 00584d57  83c404               add esp, 4
// 00584d5a  56                   push esi
// 00584d5b  e860f5ffff           call 0x5842c0
// 00584d60  56                   push esi
// 00584d61  e8caf6ffff           call 0x584430
// 00584d66  83c408               add esp, 8
// 00584d69  837e4c02             cmp dword ptr [esi + 0x4c], 2
// 00584d6d  7505                 jne 0x584d74
// 00584d6f  e81cfeffff           call 0x584b90
// 00584d74  5e                   pop esi
// 00584d75  c3                   ret 
// library jpeg-6b/jquant1.c (function _jinit_1pass_quantizer)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
