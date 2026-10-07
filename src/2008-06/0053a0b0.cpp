// roc 2008-06 0053a0b0  unit: seg_00530000  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0053a0b0
//
// 0053a0b0  837c240800           cmp dword ptr [esp + 8], 0
// 0053a0b5  56                   push esi
// 0053a0b6  57                   push edi
// 0053a0b7  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0053a0bb  8bb744010000         mov esi, dword ptr [edi + 0x144]
// 0053a0c1  7413                 je 0x53a0d6
// 0053a0c3  8b07                 mov eax, dword ptr [edi]
// 0053a0c5  c7401404000000       mov dword ptr [eax + 0x14], 4
// 0053a0cc  8b0f                 mov ecx, dword ptr [edi]
// 0053a0ce  8b11                 mov edx, dword ptr [ecx]
// 0053a0d0  57                   push edi
// 0053a0d1  ffd2                 call edx
// 0053a0d3  83c404               add esp, 4
// 0053a0d6  8b4720               mov eax, dword ptr [edi + 0x20]
// 0053a0d9  894630               mov dword ptr [esi + 0x30], eax
// 0053a0dc  c7463400000000       mov dword ptr [esi + 0x34], 0
// 0053a0e3  c7463800000000       mov dword ptr [esi + 0x38], 0
// 0053a0ea  8b8fdc000000         mov ecx, dword ptr [edi + 0xdc]
// 0053a0f0  03c9                 add ecx, ecx
// 0053a0f2  5f                   pop edi
// 0053a0f3  894e3c               mov dword ptr [esi + 0x3c], ecx
// 0053a0f6  5e                   pop esi
// 0053a0f7  c3                   ret 
// library jpeg-6b/jcprepct.c (function _start_pass_prep)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcprepct.c
