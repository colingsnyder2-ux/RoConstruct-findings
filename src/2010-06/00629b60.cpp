// roc 2010-06 00629b60  unit: RBX::VTexture::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00629b60
//
// 00629b60  51                   push ecx
// 00629b61  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00629b65  803800               cmp byte ptr [eax], 0
// 00629b68  c7042400000000       mov dword ptr [esp], 0
// 00629b6f  b8c408a200           mov eax, 0xa208c4
// 00629b74  7505                 jne 0x629b7b
// 00629b76  b8a432a100           mov eax, 0xa132a4
// 00629b7b  56                   push esi
// 00629b7c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00629b80  50                   push eax
// 00629b81  8bce                 mov ecx, esi
// 00629b83  ff1510a49e00         call dword ptr [0x9ea410]
// 00629b89  8bc6                 mov eax, esi
// 00629b8b  5e                   pop esi
// 00629b8c  59                   pop ecx
// 00629b8d  c3                   ret 
// library openrbx-client/App\util\Utilities.cpp (function ?convertToString@?$StringConverter@_N@RBX@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AB_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/util/Utilities.cpp
