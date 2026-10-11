// roc 2012-06 00743fa0  unit: boost::bad_lexical_cast  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00743fa0
//
// 00743fa0  83ec14               sub esp, 0x14
// 00743fa3  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00743fa7  8b08                 mov ecx, dword ptr [eax]
// 00743fa9  56                   push esi
// 00743faa  51                   push ecx
// 00743fab  689808b800           push 0xb80898
// 00743fb0  8d542410             lea edx, [esp + 0x10]
// 00743fb4  6a10                 push 0x10
// 00743fb6  52                   push edx
// 00743fb7  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00743fbf  ff15482ab200         call dword ptr [0xb22a48]
// 00743fc5  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 00743fc9  83c410               add esp, 0x10
// 00743fcc  8d442408             lea eax, [esp + 8]
// 00743fd0  50                   push eax
// 00743fd1  8bce                 mov ecx, esi
// 00743fd3  ff154826b200         call dword ptr [0xb22648]
// 00743fd9  8bc6                 mov eax, esi
// 00743fdb  5e                   pop esi
// 00743fdc  83c414               add esp, 0x14
// 00743fdf  c3                   ret 
// library openrbx-client/App\util\Utilities.cpp (function ?convertToString@?$StringConverter@I@RBX@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/util/Utilities.cpp
