// from server: 100% by auto
// roc 2007-08 0052ade0  unit: seg_00520000  size: 150 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0052ade0
//
// 0052ade0  56                   push esi
// 0052ade1  8b742408             mov esi, dword ptr [esp + 8]
// 0052ade5  8b4604               mov eax, dword ptr [esi + 4]
// 0052ade8  8b08                 mov ecx, dword ptr [eax]
// 0052adea  6a58                 push 0x58
// 0052adec  6a01                 push 1
// 0052adee  56                   push esi
// 0052adef  ffd1                 call ecx
// 0052adf1  8986a8010000         mov dword ptr [esi + 0x1a8], eax
// 0052adf7  33c9                 xor ecx, ecx
// 0052adf9  c700d0ac5200         mov dword ptr [eax], 0x52acd0
// 0052adff  c7400820cc4000       mov dword ptr [eax + 8], 0x40cc20
// 0052ae06  c7400cc0ad5200       mov dword ptr [eax + 0xc], 0x52adc0
// 0052ae0d  894844               mov dword ptr [eax + 0x44], ecx
// 0052ae10  894834               mov dword ptr [eax + 0x34], ecx
// 0052ae13  b804000000           mov eax, 4
// 0052ae18  83c40c               add esp, 0xc
// 0052ae1b  394664               cmp dword ptr [esi + 0x64], eax
// 0052ae1e  7e18                 jle 0x52ae38
// 0052ae20  8b16                 mov edx, dword ptr [esi]
// 0052ae22  c7421437000000       mov dword ptr [edx + 0x14], 0x37
// 0052ae29  8b0e                 mov ecx, dword ptr [esi]
// 0052ae2b  894118               mov dword ptr [ecx + 0x18], eax
// 0052ae2e  8b16                 mov edx, dword ptr [esi]
// 0052ae30  8b02                 mov eax, dword ptr [edx]
// 0052ae32  56                   push esi
// 0052ae33  ffd0                 call eax
// 0052ae35  83c404               add esp, 4
// 0052ae38  b800010000           mov eax, 0x100
// 0052ae3d  394654               cmp dword ptr [esi + 0x54], eax
// 0052ae40  7e18                 jle 0x52ae5a
// 0052ae42  8b0e                 mov ecx, dword ptr [esi]
// 0052ae44  c7411439000000       mov dword ptr [ecx + 0x14], 0x39
// 0052ae4b  8b16                 mov edx, dword ptr [esi]
// 0052ae4d  894218               mov dword ptr [edx + 0x18], eax
// 0052ae50  8b06                 mov eax, dword ptr [esi]
// 0052ae52  8b08                 mov ecx, dword ptr [eax]
// 0052ae54  56                   push esi
// 0052ae55  ffd1                 call ecx
// 0052ae57  83c404               add esp, 4
// 0052ae5a  56                   push esi
// 0052ae5b  e830f5ffff           call 0x52a390
// 0052ae60  56                   push esi
// 0052ae61  e89af6ffff           call 0x52a500
// 0052ae66  83c408               add esp, 8
// 0052ae69  837e4c02             cmp dword ptr [esi + 0x4c], 2
// 0052ae6d  7505                 jne 0x52ae74
// 0052ae6f  e81cfeffff           call 0x52ac90
// 0052ae74  5e                   pop esi
// 0052ae75  c3                   ret 
// library jpeg-6b/jquant1.c (function _jinit_1pass_quantizer)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
