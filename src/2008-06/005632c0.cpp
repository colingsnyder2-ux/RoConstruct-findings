// roc 2008-06 005632c0  unit: RBX::ContentProvider  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005632c0
//
// 005632c0  81ec98000000         sub esp, 0x98
// 005632c6  56                   push esi
// 005632c7  6890000000           push 0x90
// 005632cc  8d442410             lea eax, [esp + 0x10]
// 005632d0  6a00                 push 0
// 005632d2  50                   push eax
// 005632d3  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005632db  e824e41300           call 0x6a1704
// 005632e0  83c40c               add esp, 0xc
// 005632e3  8d4c2408             lea ecx, [esp + 8]
// 005632e7  51                   push ecx
// 005632e8  c744240c94000000     mov dword ptr [esp + 0xc], 0x94
// 005632f0  ff159c218000         call dword ptr [0x80219c]
// 005632f6  8b542414             mov edx, dword ptr [esp + 0x14]
// 005632fa  8b442410             mov eax, dword ptr [esp + 0x10]
// 005632fe  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00563302  8bb424a0000000       mov esi, dword ptr [esp + 0xa0]
// 00563309  52                   push edx
// 0056330a  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0056330e  50                   push eax
// 0056330f  51                   push ecx
// 00563310  52                   push edx
// 00563311  6830cf8100           push 0x81cf30
// 00563316  56                   push esi
// 00563317  e8f467faff           call 0x509b10
// 0056331c  83c418               add esp, 0x18
// 0056331f  8bc6                 mov eax, esi
// 00563321  5e                   pop esi
// 00563322  81c498000000         add esp, 0x98
// 00563328  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?osVer@DebugSettings@RBX@@QBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
