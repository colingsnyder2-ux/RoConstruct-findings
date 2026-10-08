// roc 2007-03 004fb970  unit: seg_004f0000  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004fb970
//
// 004fb970  33c0                 xor eax, eax
// 004fb972  56                   push esi
// 004fb973  8bf1                 mov esi, ecx
// 004fb975  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004fb979  894604               mov dword ptr [esi + 4], eax
// 004fb97c  894608               mov dword ptr [esi + 8], eax
// 004fb97f  89460c               mov dword ptr [esi + 0xc], eax
// 004fb982  894610               mov dword ptr [esi + 0x10], eax
// 004fb985  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004fb989  50                   push eax
// 004fb98a  51                   push ecx
// 004fb98b  8bce                 mov ecx, esi
// 004fb98d  c706981f7900         mov dword ptr [esi], 0x791f98
// 004fb993  e8c8fdffff           call 0x4fb760
// 004fb998  8bc6                 mov eax, esi
// 004fb99a  5e                   pop esi
// 004fb99b  c20800               ret 8
// library rbxgs-g3d/G3Dcpp\GImage.cpp (function ??0GImage@G3D@@QAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Format@01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/GImage.cpp
