// roc 2009-06 005c8ca0  unit: seg_005c0000  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c8ca0
//
// 005c8ca0  81ec98000000         sub esp, 0x98
// 005c8ca6  56                   push esi
// 005c8ca7  6890000000           push 0x90
// 005c8cac  8d442410             lea eax, [esp + 0x10]
// 005c8cb0  6a00                 push 0
// 005c8cb2  50                   push eax
// 005c8cb3  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005c8cbb  e8b40f1500           call 0x719c74
// 005c8cc0  83c40c               add esp, 0xc
// 005c8cc3  8d4c2408             lea ecx, [esp + 8]
// 005c8cc7  51                   push ecx
// 005c8cc8  c744240c94000000     mov dword ptr [esp + 0xc], 0x94
// 005c8cd0  ff15c8e18900         call dword ptr [0x89e1c8]
// 005c8cd6  8b542414             mov edx, dword ptr [esp + 0x14]
// 005c8cda  8b442410             mov eax, dword ptr [esp + 0x10]
// 005c8cde  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005c8ce2  8bb424a0000000       mov esi, dword ptr [esp + 0xa0]
// 005c8ce9  52                   push edx
// 005c8cea  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005c8cee  50                   push eax
// 005c8cef  51                   push ecx
// 005c8cf0  52                   push edx
// 005c8cf1  68c80d8c00           push 0x8c0dc8
// 005c8cf6  56                   push esi
// 005c8cf7  e894c81300           call 0x705590
// 005c8cfc  83c418               add esp, 0x18
// 005c8cff  8bc6                 mov eax, esi
// 005c8d01  5e                   pop esi
// 005c8d02  81c498000000         add esp, 0x98
// 005c8d08  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?osVer@DebugSettings@RBX@@QBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
