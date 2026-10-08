// roc 2009-12 005f1e80  unit: seg_005f0000  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f1e80
//
// 005f1e80  33c0                 xor eax, eax
// 005f1e82  56                   push esi
// 005f1e83  8bf1                 mov esi, ecx
// 005f1e85  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005f1e89  894604               mov dword ptr [esi + 4], eax
// 005f1e8c  894608               mov dword ptr [esi + 8], eax
// 005f1e8f  89460c               mov dword ptr [esi + 0xc], eax
// 005f1e92  894610               mov dword ptr [esi + 0x10], eax
// 005f1e95  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005f1e99  50                   push eax
// 005f1e9a  51                   push ecx
// 005f1e9b  8bce                 mov ecx, esi
// 005f1e9d  c70698559b00         mov dword ptr [esi], 0x9b5598
// 005f1ea3  e8f8fdffff           call 0x5f1ca0
// 005f1ea8  8bc6                 mov eax, esi
// 005f1eaa  5e                   pop esi
// 005f1eab  c20800               ret 8
// library g3d-6.09/G3Dcpp\GImage.cpp (function ??0GImage@G3D@@QAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Format@01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage.cpp
