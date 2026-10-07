// roc 2012-06 00669860  unit: seg_00660000  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00669860
//
// 00669860  837c240800           cmp dword ptr [esp + 8], 0
// 00669865  56                   push esi
// 00669866  57                   push edi
// 00669867  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0066986b  8bb744010000         mov esi, dword ptr [edi + 0x144]
// 00669871  7413                 je 0x669886
// 00669873  8b07                 mov eax, dword ptr [edi]
// 00669875  c7401404000000       mov dword ptr [eax + 0x14], 4
// 0066987c  8b0f                 mov ecx, dword ptr [edi]
// 0066987e  8b11                 mov edx, dword ptr [ecx]
// 00669880  57                   push edi
// 00669881  ffd2                 call edx
// 00669883  83c404               add esp, 4
// 00669886  8b4720               mov eax, dword ptr [edi + 0x20]
// 00669889  894630               mov dword ptr [esi + 0x30], eax
// 0066988c  c7463400000000       mov dword ptr [esi + 0x34], 0
// 00669893  c7463800000000       mov dword ptr [esi + 0x38], 0
// 0066989a  8b8fdc000000         mov ecx, dword ptr [edi + 0xdc]
// 006698a0  03c9                 add ecx, ecx
// 006698a2  5f                   pop edi
// 006698a3  894e3c               mov dword ptr [esi + 0x3c], ecx
// 006698a6  5e                   pop esi
// 006698a7  c3                   ret 
// library jpeg-6b/jcprepct.c (function _start_pass_prep)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcprepct.c
