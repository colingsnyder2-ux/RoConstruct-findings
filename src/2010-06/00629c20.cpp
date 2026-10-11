// roc 2010-06 00629c20  unit: RBX::VTexture::?$FactoryProduct  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00629c20
//
// 00629c20  83ec14               sub esp, 0x14
// 00629c23  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00629c27  8b08                 mov ecx, dword ptr [eax]
// 00629c29  56                   push esi
// 00629c2a  51                   push ecx
// 00629c2b  687476a000           push 0xa07674
// 00629c30  8d542410             lea edx, [esp + 0x10]
// 00629c34  6a10                 push 0x10
// 00629c36  52                   push edx
// 00629c37  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00629c3f  ff15f8a79e00         call dword ptr [0x9ea7f8]
// 00629c45  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 00629c49  83c410               add esp, 0x10
// 00629c4c  8d442408             lea eax, [esp + 8]
// 00629c50  50                   push eax
// 00629c51  8bce                 mov ecx, esi
// 00629c53  ff1510a49e00         call dword ptr [0x9ea410]
// 00629c59  8bc6                 mov eax, esi
// 00629c5b  5e                   pop esi
// 00629c5c  83c414               add esp, 0x14
// 00629c5f  c3                   ret 
// library openrbx-client/App\util\Utilities.cpp (function ?convertToString@?$StringConverter@H@RBX@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/util/Utilities.cpp
