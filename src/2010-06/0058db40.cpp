// roc 2010-06 0058db40  unit: seg_00580000  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0058db40
//
// 0058db40  81ec98000000         sub esp, 0x98
// 0058db46  56                   push esi
// 0058db47  6890000000           push 0x90
// 0058db4c  8d442410             lea eax, [esp + 0x10]
// 0058db50  6a00                 push 0
// 0058db52  50                   push eax
// 0058db53  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0058db5b  e884b02100           call 0x7a8be4
// 0058db60  83c40c               add esp, 0xc
// 0058db63  8d4c2408             lea ecx, [esp + 8]
// 0058db67  51                   push ecx
// 0058db68  c744240c94000000     mov dword ptr [esp + 0xc], 0x94
// 0058db70  ff1554a39e00         call dword ptr [0x9ea354]
// 0058db76  8b542414             mov edx, dword ptr [esp + 0x14]
// 0058db7a  8b442410             mov eax, dword ptr [esp + 0x10]
// 0058db7e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0058db82  8bb424a0000000       mov esi, dword ptr [esp + 0xa0]
// 0058db89  52                   push edx
// 0058db8a  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0058db8e  50                   push eax
// 0058db8f  51                   push ecx
// 0058db90  52                   push edx
// 0058db91  68203ea100           push 0xa13e20
// 0058db96  56                   push esi
// 0058db97  e8847c2000           call 0x795820
// 0058db9c  83c418               add esp, 0x18
// 0058db9f  8bc6                 mov eax, esi
// 0058dba1  5e                   pop esi
// 0058dba2  81c498000000         add esp, 0x98
// 0058dba8  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?osVer@DebugSettings@RBX@@QBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
