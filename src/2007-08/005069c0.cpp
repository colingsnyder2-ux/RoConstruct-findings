// from server: 100% by auto
// roc 2007-08 005069c0  unit: seg_00500000  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005069c0
//
// 005069c0  33c0                 xor eax, eax
// 005069c2  56                   push esi
// 005069c3  8bf1                 mov esi, ecx
// 005069c5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005069c9  894604               mov dword ptr [esi + 4], eax
// 005069cc  894608               mov dword ptr [esi + 8], eax
// 005069cf  89460c               mov dword ptr [esi + 0xc], eax
// 005069d2  894610               mov dword ptr [esi + 0x10], eax
// 005069d5  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005069d9  50                   push eax
// 005069da  51                   push ecx
// 005069db  8bce                 mov ecx, esi
// 005069dd  c70684317900         mov dword ptr [esi], 0x793184
// 005069e3  e8c8fdffff           call 0x5067b0
// 005069e8  8bc6                 mov eax, esi
// 005069ea  5e                   pop esi
// 005069eb  c20800               ret 8
// library g3d-6.09/G3Dcpp\GImage.cpp (function ??0GImage@G3D@@QAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Format@01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage.cpp
