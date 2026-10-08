// from server: 100% by auto
// roc 2011-06 0057e150  unit: seg_00570000  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0057e150
//
// 0057e150  837c240800           cmp dword ptr [esp + 8], 0
// 0057e155  56                   push esi
// 0057e156  57                   push edi
// 0057e157  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0057e15b  8bb744010000         mov esi, dword ptr [edi + 0x144]
// 0057e161  7413                 je 0x57e176
// 0057e163  8b07                 mov eax, dword ptr [edi]
// 0057e165  c7401404000000       mov dword ptr [eax + 0x14], 4
// 0057e16c  8b0f                 mov ecx, dword ptr [edi]
// 0057e16e  8b11                 mov edx, dword ptr [ecx]
// 0057e170  57                   push edi
// 0057e171  ffd2                 call edx
// 0057e173  83c404               add esp, 4
// 0057e176  8b4720               mov eax, dword ptr [edi + 0x20]
// 0057e179  894630               mov dword ptr [esi + 0x30], eax
// 0057e17c  c7463400000000       mov dword ptr [esi + 0x34], 0
// 0057e183  c7463800000000       mov dword ptr [esi + 0x38], 0
// 0057e18a  8b8fdc000000         mov ecx, dword ptr [edi + 0xdc]
// 0057e190  03c9                 add ecx, ecx
// 0057e192  5f                   pop edi
// 0057e193  894e3c               mov dword ptr [esi + 0x3c], ecx
// 0057e196  5e                   pop esi
// 0057e197  c3                   ret 
// library jpeg-6b/jcprepct.c (function _start_pass_prep)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcprepct.c
