// from server: 100% by auto
// roc 2009-06 005a4390  unit: seg_005a0000  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005a4390
//
// 005a4390  837c240800           cmp dword ptr [esp + 8], 0
// 005a4395  56                   push esi
// 005a4396  57                   push edi
// 005a4397  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005a439b  8bb744010000         mov esi, dword ptr [edi + 0x144]
// 005a43a1  7413                 je 0x5a43b6
// 005a43a3  8b07                 mov eax, dword ptr [edi]
// 005a43a5  c7401404000000       mov dword ptr [eax + 0x14], 4
// 005a43ac  8b0f                 mov ecx, dword ptr [edi]
// 005a43ae  8b11                 mov edx, dword ptr [ecx]
// 005a43b0  57                   push edi
// 005a43b1  ffd2                 call edx
// 005a43b3  83c404               add esp, 4
// 005a43b6  8b4720               mov eax, dword ptr [edi + 0x20]
// 005a43b9  894630               mov dword ptr [esi + 0x30], eax
// 005a43bc  c7463400000000       mov dword ptr [esi + 0x34], 0
// 005a43c3  c7463800000000       mov dword ptr [esi + 0x38], 0
// 005a43ca  8b8fdc000000         mov ecx, dword ptr [edi + 0xdc]
// 005a43d0  03c9                 add ecx, ecx
// 005a43d2  5f                   pop edi
// 005a43d3  894e3c               mov dword ptr [esi + 0x3c], ecx
// 005a43d6  5e                   pop esi
// 005a43d7  c3                   ret 
// library jpeg-6b/jcprepct.c (function _start_pass_prep)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcprepct.c
