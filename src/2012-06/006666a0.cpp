// roc 2012-06 006666a0  unit: seg_00660000  size: 150 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006666a0
//
// 006666a0  56                   push esi
// 006666a1  8b742408             mov esi, dword ptr [esp + 8]
// 006666a5  8b4604               mov eax, dword ptr [esi + 4]
// 006666a8  8b08                 mov ecx, dword ptr [eax]
// 006666aa  6a58                 push 0x58
// 006666ac  6a01                 push 1
// 006666ae  56                   push esi
// 006666af  ffd1                 call ecx
// 006666b1  8986a8010000         mov dword ptr [esi + 0x1a8], eax
// 006666b7  33c9                 xor ecx, ecx
// 006666b9  c70090656600         mov dword ptr [eax], 0x666590
// 006666bf  c7400890a75900       mov dword ptr [eax + 8], 0x59a790
// 006666c6  c7400c80666600       mov dword ptr [eax + 0xc], 0x666680
// 006666cd  894844               mov dword ptr [eax + 0x44], ecx
// 006666d0  894834               mov dword ptr [eax + 0x34], ecx
// 006666d3  b804000000           mov eax, 4
// 006666d8  83c40c               add esp, 0xc
// 006666db  394664               cmp dword ptr [esi + 0x64], eax
// 006666de  7e18                 jle 0x6666f8
// 006666e0  8b16                 mov edx, dword ptr [esi]
// 006666e2  c7421437000000       mov dword ptr [edx + 0x14], 0x37
// 006666e9  8b0e                 mov ecx, dword ptr [esi]
// 006666eb  894118               mov dword ptr [ecx + 0x18], eax
// 006666ee  8b16                 mov edx, dword ptr [esi]
// 006666f0  8b02                 mov eax, dword ptr [edx]
// 006666f2  56                   push esi
// 006666f3  ffd0                 call eax
// 006666f5  83c404               add esp, 4
// 006666f8  b800010000           mov eax, 0x100
// 006666fd  394654               cmp dword ptr [esi + 0x54], eax
// 00666700  7e18                 jle 0x66671a
// 00666702  8b0e                 mov ecx, dword ptr [esi]
// 00666704  c7411439000000       mov dword ptr [ecx + 0x14], 0x39
// 0066670b  8b16                 mov edx, dword ptr [esi]
// 0066670d  894218               mov dword ptr [edx + 0x18], eax
// 00666710  8b06                 mov eax, dword ptr [esi]
// 00666712  8b08                 mov ecx, dword ptr [eax]
// 00666714  56                   push esi
// 00666715  ffd1                 call ecx
// 00666717  83c404               add esp, 4
// 0066671a  56                   push esi
// 0066671b  e860f5ffff           call 0x665c80
// 00666720  56                   push esi
// 00666721  e8caf6ffff           call 0x665df0
// 00666726  83c408               add esp, 8
// 00666729  837e4c02             cmp dword ptr [esi + 0x4c], 2
// 0066672d  7505                 jne 0x666734
// 0066672f  e81cfeffff           call 0x666550
// 00666734  5e                   pop esi
// 00666735  c3                   ret 
// library jpeg-6b/jquant1.c (function _jinit_1pass_quantizer)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
