// from server: 100% by auto
// roc 2009-06 00572d90  unit: seg_00570000  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00572d90
//
// 00572d90  33c0                 xor eax, eax
// 00572d92  56                   push esi
// 00572d93  8bf1                 mov esi, ecx
// 00572d95  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00572d99  894604               mov dword ptr [esi + 4], eax
// 00572d9c  894608               mov dword ptr [esi + 8], eax
// 00572d9f  89460c               mov dword ptr [esi + 0xc], eax
// 00572da2  894610               mov dword ptr [esi + 0x10], eax
// 00572da5  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00572da9  50                   push eax
// 00572daa  51                   push ecx
// 00572dab  8bce                 mov ecx, esi
// 00572dad  c706a0fc8b00         mov dword ptr [esi], 0x8bfca0
// 00572db3  e8f8fdffff           call 0x572bb0
// 00572db8  8bc6                 mov eax, esi
// 00572dba  5e                   pop esi
// 00572dbb  c20800               ret 8
// library g3d-6.09/G3Dcpp\GImage.cpp (function ??0GImage@G3D@@QAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Format@01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage.cpp
