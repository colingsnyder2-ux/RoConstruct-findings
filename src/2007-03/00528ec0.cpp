// roc 2007-03 00528ec0  unit: seg_00520000  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00528ec0
//
// 00528ec0  837c240800           cmp dword ptr [esp + 8], 0
// 00528ec5  56                   push esi
// 00528ec6  57                   push edi
// 00528ec7  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00528ecb  8bb744010000         mov esi, dword ptr [edi + 0x144]
// 00528ed1  7413                 je 0x528ee6
// 00528ed3  8b07                 mov eax, dword ptr [edi]
// 00528ed5  c7401404000000       mov dword ptr [eax + 0x14], 4
// 00528edc  8b0f                 mov ecx, dword ptr [edi]
// 00528ede  8b11                 mov edx, dword ptr [ecx]
// 00528ee0  57                   push edi
// 00528ee1  ffd2                 call edx
// 00528ee3  83c404               add esp, 4
// 00528ee6  8b4720               mov eax, dword ptr [edi + 0x20]
// 00528ee9  894630               mov dword ptr [esi + 0x30], eax
// 00528eec  c7463400000000       mov dword ptr [esi + 0x34], 0
// 00528ef3  c7463800000000       mov dword ptr [esi + 0x38], 0
// 00528efa  8b8fdc000000         mov ecx, dword ptr [edi + 0xdc]
// 00528f00  03c9                 add ecx, ecx
// 00528f02  5f                   pop edi
// 00528f03  894e3c               mov dword ptr [esi + 0x3c], ecx
// 00528f06  5e                   pop esi
// 00528f07  c3                   ret 
// library jpeg-6b/jcprepct.c (function _start_pass_prep)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcprepct.c
