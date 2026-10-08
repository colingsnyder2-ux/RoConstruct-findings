// from server: 100% by auto
// roc 2008-06 005360b0  unit: seg_00530000  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005360b0
//
// 005360b0  56                   push esi
// 005360b1  57                   push edi
// 005360b2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005360b6  8bb7a8010000         mov esi, dword ptr [edi + 0x1a8]
// 005360bc  8b4610               mov eax, dword ptr [esi + 0x10]
// 005360bf  894774               mov dword ptr [edi + 0x74], eax
// 005360c2  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 005360c5  51                   push ecx
// 005360c6  e8c5f6ffff           call 0x535790
// 005360cb  83c404               add esp, 4
// 005360ce  5f                   pop edi
// 005360cf  c6461c01             mov byte ptr [esi + 0x1c], 1
// 005360d3  5e                   pop esi
// 005360d4  c3                   ret 
// library jpeg-6b/jquant2.c (function _finish_pass1)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
