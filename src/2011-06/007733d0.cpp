// roc 2011-06 007733d0  unit: RBX::Lua::VWaitScriptSlot::?$TGenericSlotWrapper  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007733d0
//
// 007733d0  64a100000000         mov eax, dword ptr fs:[0]
// 007733d6  6aff                 push -1
// 007733d8  68e9819e00           push 0x9e81e9
// 007733dd  50                   push eax
// 007733de  64892500000000       mov dword ptr fs:[0], esp
// 007733e5  56                   push esi
// 007733e6  8bf1                 mov esi, ecx
// 007733e8  8d442414             lea eax, [esp + 0x14]
// 007733ec  50                   push eax
// 007733ed  c744241000000000     mov dword ptr [esp + 0x10], 0
// 007733f5  ff15c804a400         call dword ptr [0xa404c8]
// 007733fb  8d4c2414             lea ecx, [esp + 0x14]
// 007733ff  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 00773407  ff15d004a400         call dword ptr [0xa404d0]
// 0077340d  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00773411  8bc6                 mov eax, esi
// 00773413  64890d00000000       mov dword ptr fs:[0], ecx
// 0077341a  5e                   pop esi
// 0077341b  83c40c               add esp, 0xc
// 0077341e  c21c00               ret 0x1c
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$storage1@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@@_bi@boost@@QAE@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
