// roc 2012-06 00743e60  unit: boost::bad_lexical_cast  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00743e60
//
// 00743e60  83ec14               sub esp, 0x14
// 00743e63  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00743e67  8b08                 mov ecx, dword ptr [eax]
// 00743e69  56                   push esi
// 00743e6a  51                   push ecx
// 00743e6b  689c0db500           push 0xb50d9c
// 00743e70  8d542410             lea edx, [esp + 0x10]
// 00743e74  6a10                 push 0x10
// 00743e76  52                   push edx
// 00743e77  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00743e7f  ff15482ab200         call dword ptr [0xb22a48]
// 00743e85  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 00743e89  83c410               add esp, 0x10
// 00743e8c  8d442408             lea eax, [esp + 8]
// 00743e90  50                   push eax
// 00743e91  8bce                 mov ecx, esi
// 00743e93  ff154826b200         call dword ptr [0xb22648]
// 00743e99  8bc6                 mov eax, esi
// 00743e9b  5e                   pop esi
// 00743e9c  83c414               add esp, 0x14
// 00743e9f  c3                   ret 
// library openrbx-client/App\util\Utilities.cpp (function ?convertToString@?$StringConverter@H@RBX@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/Utilities.cpp
