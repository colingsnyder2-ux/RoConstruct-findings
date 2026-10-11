// roc 2010-06 00629cf0  unit: RBX::VTexture::?$FactoryProduct  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00629cf0
//
// 00629cf0  83ec14               sub esp, 0x14
// 00629cf3  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00629cf7  8b08                 mov ecx, dword ptr [eax]
// 00629cf9  56                   push esi
// 00629cfa  51                   push ecx
// 00629cfb  6814e6a100           push 0xa1e614
// 00629d00  8d542410             lea edx, [esp + 0x10]
// 00629d04  6a10                 push 0x10
// 00629d06  52                   push edx
// 00629d07  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00629d0f  ff15f8a79e00         call dword ptr [0x9ea7f8]
// 00629d15  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 00629d19  83c410               add esp, 0x10
// 00629d1c  8d442408             lea eax, [esp + 8]
// 00629d20  50                   push eax
// 00629d21  8bce                 mov ecx, esi
// 00629d23  ff1510a49e00         call dword ptr [0x9ea410]
// 00629d29  8bc6                 mov eax, esi
// 00629d2b  5e                   pop esi
// 00629d2c  83c414               add esp, 0x14
// 00629d2f  c3                   ret 
// library openrbx-client/App\util\Utilities.cpp (function ?convertToString@?$StringConverter@I@RBX@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/Utilities.cpp
