// from server: 100% by auto
// roc 2009-06 005a0390  unit: seg_005a0000  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005a0390
//
// 005a0390  56                   push esi
// 005a0391  57                   push edi
// 005a0392  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005a0396  8bb7a8010000         mov esi, dword ptr [edi + 0x1a8]
// 005a039c  8b4610               mov eax, dword ptr [esi + 0x10]
// 005a039f  894774               mov dword ptr [edi + 0x74], eax
// 005a03a2  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 005a03a5  51                   push ecx
// 005a03a6  e8c5f6ffff           call 0x59fa70
// 005a03ab  83c404               add esp, 4
// 005a03ae  5f                   pop edi
// 005a03af  c6461c01             mov byte ptr [esi + 0x1c], 1
// 005a03b3  5e                   pop esi
// 005a03b4  c3                   ret 
// library jpeg-6b/jquant2.c (function _finish_pass1)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
