// roc 2007-03 0042a680  unit: seg_00420000  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0042a680
//
// 0042a680  56                   push esi
// 0042a681  33c0                 xor eax, eax
// 0042a683  57                   push edi
// 0042a684  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0042a688  3bf8                 cmp edi, eax
// 0042a68a  8bf1                 mov esi, ecx
// 0042a68c  894604               mov dword ptr [esi + 4], eax
// 0042a68f  894608               mov dword ptr [esi + 8], eax
// 0042a692  89460c               mov dword ptr [esi + 0xc], eax
// 0042a695  7507                 jne 0x42a69e
// 0042a697  5f                   pop edi
// 0042a698  32c0                 xor al, al
// 0042a69a  5e                   pop esi
// 0042a69b  c20400               ret 4
// 0042a69e  81ff49922409         cmp edi, 0x9249249
// 0042a6a4  7605                 jbe 0x42a6ab
// 0042a6a6  e865020200           call 0x44a910
// 0042a6ab  50                   push eax
// 0042a6ac  57                   push edi
// 0042a6ad  e87ee7fdff           call 0x408e30
// 0042a6b2  8d0cfd00000000       lea ecx, [edi*8]
// 0042a6b9  2bcf                 sub ecx, edi
// 0042a6bb  83c408               add esp, 8
// 0042a6be  8d1488               lea edx, [eax + ecx*4]
// 0042a6c1  894604               mov dword ptr [esi + 4], eax
// 0042a6c4  894608               mov dword ptr [esi + 8], eax
// 0042a6c7  5f                   pop edi
// 0042a6c8  89560c               mov dword ptr [esi + 0xc], edx
// 0042a6cb  b001                 mov al, 1
// 0042a6cd  5e                   pop esi
// 0042a6ce  c20400               ret 4
// library rbxgs/v8datamodel\Camera.cpp (function ?_Buy@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAE_NI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
