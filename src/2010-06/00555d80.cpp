// roc 2010-06 00555d80  unit: seg_00550000  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00555d80
//
// 00555d80  33c0                 xor eax, eax
// 00555d82  56                   push esi
// 00555d83  8bf1                 mov esi, ecx
// 00555d85  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00555d89  894604               mov dword ptr [esi + 4], eax
// 00555d8c  894608               mov dword ptr [esi + 8], eax
// 00555d8f  89460c               mov dword ptr [esi + 0xc], eax
// 00555d92  894610               mov dword ptr [esi + 0x10], eax
// 00555d95  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00555d99  50                   push eax
// 00555d9a  51                   push ecx
// 00555d9b  8bce                 mov ecx, esi
// 00555d9d  c7064832a100         mov dword ptr [esi], 0xa13248
// 00555da3  e8f8fdffff           call 0x555ba0
// 00555da8  8bc6                 mov eax, esi
// 00555daa  5e                   pop esi
// 00555dab  c20800               ret 8
// library g3d-6.09/G3Dcpp\GImage.cpp (function ??0GImage@G3D@@QAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Format@01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage.cpp
