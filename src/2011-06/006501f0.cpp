// roc 2011-06 006501f0  unit: RBX::DropperTool  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006501f0
//
// 006501f0  83ec14               sub esp, 0x14
// 006501f3  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006501f7  8b08                 mov ecx, dword ptr [eax]
// 006501f9  56                   push esi
// 006501fa  51                   push ecx
// 006501fb  6804f4a700           push 0xa7f404
// 00650200  8d542410             lea edx, [esp + 0x10]
// 00650204  6a10                 push 0x10
// 00650206  52                   push edx
// 00650207  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0065020f  ff15b809a400         call dword ptr [0xa409b8]
// 00650215  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 00650219  83c410               add esp, 0x10
// 0065021c  8d442408             lea eax, [esp + 8]
// 00650220  50                   push eax
// 00650221  8bce                 mov ecx, esi
// 00650223  ff15c404a400         call dword ptr [0xa404c4]
// 00650229  8bc6                 mov eax, esi
// 0065022b  5e                   pop esi
// 0065022c  83c414               add esp, 0x14
// 0065022f  c3                   ret 
// library openrbx-client/App\util\Utilities.cpp (function ?convertToString@?$StringConverter@I@RBX@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/Utilities.cpp
