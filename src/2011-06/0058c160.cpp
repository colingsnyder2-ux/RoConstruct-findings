// roc 2011-06 0058c160  unit: std::Vlength_error::U?$error_info_injector::?$clone_impl  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0058c160
//
// 0058c160  81ec98000000         sub esp, 0x98
// 0058c166  56                   push esi
// 0058c167  6890000000           push 0x90
// 0058c16c  8d442410             lea eax, [esp + 0x10]
// 0058c170  6a00                 push 0
// 0058c172  50                   push eax
// 0058c173  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0058c17b  e864f12700           call 0x80b2e4
// 0058c180  83c40c               add esp, 0xc
// 0058c183  8d4c2408             lea ecx, [esp + 8]
// 0058c187  51                   push ecx
// 0058c188  c744240c94000000     mov dword ptr [esp + 0xc], 0x94
// 0058c190  ff153003a400         call dword ptr [0xa40330]
// 0058c196  8b542414             mov edx, dword ptr [esp + 0x14]
// 0058c19a  8b442410             mov eax, dword ptr [esp + 0x10]
// 0058c19e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0058c1a2  8bb424a0000000       mov esi, dword ptr [esp + 0xa0]
// 0058c1a9  52                   push edx
// 0058c1aa  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0058c1ae  50                   push eax
// 0058c1af  51                   push ecx
// 0058c1b0  52                   push edx
// 0058c1b1  68b88aa800           push 0xa88ab8
// 0058c1b6  56                   push esi
// 0058c1b7  e8f4ce2600           call 0x7f90b0
// 0058c1bc  83c418               add esp, 0x18
// 0058c1bf  8bc6                 mov eax, esi
// 0058c1c1  5e                   pop esi
// 0058c1c2  81c498000000         add esp, 0x98
// 0058c1c8  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?osVer@DebugSettings@RBX@@QBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
