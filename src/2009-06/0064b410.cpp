// roc 2009-06 0064b410  unit: RBX::DataModel  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0064b410
//
// 0064b410  83ec14               sub esp, 0x14
// 0064b413  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0064b417  8b08                 mov ecx, dword ptr [eax]
// 0064b419  56                   push esi
// 0064b41a  51                   push ecx
// 0064b41b  6874998c00           push 0x8c9974
// 0064b420  8d542410             lea edx, [esp + 0x10]
// 0064b424  6a10                 push 0x10
// 0064b426  52                   push edx
// 0064b427  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0064b42f  ff15e0e88900         call dword ptr [0x89e8e0]
// 0064b435  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 0064b439  83c410               add esp, 0x10
// 0064b43c  8d442408             lea eax, [esp + 8]
// 0064b440  50                   push eax
// 0064b441  8bce                 mov ecx, esi
// 0064b443  ff15b4e48900         call dword ptr [0x89e4b4]
// 0064b449  8bc6                 mov eax, esi
// 0064b44b  5e                   pop esi
// 0064b44c  83c414               add esp, 0x14
// 0064b44f  c3                   ret 
// library openrbx-client/App\util\Utilities.cpp (function ?convertToString@?$StringConverter@I@RBX@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/util/Utilities.cpp
