// roc 2012-06 00845720  unit: RBX::Lua::VWaitScriptSlot::?$TGenericSlotWrapper  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00845720
//
// 00845720  64a100000000         mov eax, dword ptr fs:[0]
// 00845726  6aff                 push -1
// 00845728  6819e7ab00           push 0xabe719
// 0084572d  50                   push eax
// 0084572e  64892500000000       mov dword ptr fs:[0], esp
// 00845735  56                   push esi
// 00845736  8bf1                 mov esi, ecx
// 00845738  8d442414             lea eax, [esp + 0x14]
// 0084573c  50                   push eax
// 0084573d  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00845745  ff154426b200         call dword ptr [0xb22644]
// 0084574b  8d4c2414             lea ecx, [esp + 0x14]
// 0084574f  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 00845757  ff153c26b200         call dword ptr [0xb2263c]
// 0084575d  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00845761  8bc6                 mov eax, esi
// 00845763  64890d00000000       mov dword ptr fs:[0], ecx
// 0084576a  5e                   pop esi
// 0084576b  83c40c               add esp, 0xc
// 0084576e  c21c00               ret 0x1c
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$storage1@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@@_bi@boost@@QAE@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
