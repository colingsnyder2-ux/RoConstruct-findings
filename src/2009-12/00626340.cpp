// roc 2009-12 00626340  unit: seg_00620000  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00626340
//
// 00626340  837c240800           cmp dword ptr [esp + 8], 0
// 00626345  56                   push esi
// 00626346  57                   push edi
// 00626347  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0062634b  8bb744010000         mov esi, dword ptr [edi + 0x144]
// 00626351  7413                 je 0x626366
// 00626353  8b07                 mov eax, dword ptr [edi]
// 00626355  c7401404000000       mov dword ptr [eax + 0x14], 4
// 0062635c  8b0f                 mov ecx, dword ptr [edi]
// 0062635e  8b11                 mov edx, dword ptr [ecx]
// 00626360  57                   push edi
// 00626361  ffd2                 call edx
// 00626363  83c404               add esp, 4
// 00626366  8b4720               mov eax, dword ptr [edi + 0x20]
// 00626369  894630               mov dword ptr [esi + 0x30], eax
// 0062636c  c7463400000000       mov dword ptr [esi + 0x34], 0
// 00626373  c7463800000000       mov dword ptr [esi + 0x38], 0
// 0062637a  8b8fdc000000         mov ecx, dword ptr [edi + 0xdc]
// 00626380  03c9                 add ecx, ecx
// 00626382  5f                   pop edi
// 00626383  894e3c               mov dword ptr [esi + 0x3c], ecx
// 00626386  5e                   pop esi
// 00626387  c3                   ret 
// library jpeg-6b/jcprepct.c (function _start_pass_prep)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcprepct.c
