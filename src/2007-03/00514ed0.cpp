// roc 2007-03 00514ed0  unit: seg_00510000  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00514ed0
//
// 00514ed0  56                   push esi
// 00514ed1  8b742408             mov esi, dword ptr [esp + 8]
// 00514ed5  8b4604               mov eax, dword ptr [esi + 4]
// 00514ed8  57                   push edi
// 00514ed9  33ff                 xor edi, edi
// 00514edb  3bc7                 cmp eax, edi
// 00514edd  7409                 je 0x514ee8
// 00514edf  8b4028               mov eax, dword ptr [eax + 0x28]
// 00514ee2  56                   push esi
// 00514ee3  ffd0                 call eax
// 00514ee5  83c404               add esp, 4
// 00514ee8  897e14               mov dword ptr [esi + 0x14], edi
// 00514eeb  897e04               mov dword ptr [esi + 4], edi
// 00514eee  5f                   pop edi
// 00514eef  5e                   pop esi
// 00514ef0  c3                   ret 
// library jpeg-6b/jcomapi.c (function _jpeg_destroy)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcomapi.c
