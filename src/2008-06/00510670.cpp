// from server: 100% by auto
// roc 2008-06 00510670  unit: seg_00510000  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00510670
//
// 00510670  33c0                 xor eax, eax
// 00510672  56                   push esi
// 00510673  8bf1                 mov esi, ecx
// 00510675  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00510679  894604               mov dword ptr [esi + 4], eax
// 0051067c  894608               mov dword ptr [esi + 8], eax
// 0051067f  89460c               mov dword ptr [esi + 0xc], eax
// 00510682  894610               mov dword ptr [esi + 0x10], eax
// 00510685  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00510689  50                   push eax
// 0051068a  51                   push ecx
// 0051068b  8bce                 mov ecx, esi
// 0051068d  c7065c978100         mov dword ptr [esi], 0x81975c
// 00510693  e8f8fdffff           call 0x510490
// 00510698  8bc6                 mov eax, esi
// 0051069a  5e                   pop esi
// 0051069b  c20800               ret 8
// library g3d-6.09/G3Dcpp\GImage.cpp (function ??0GImage@G3D@@QAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Format@01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage.cpp
