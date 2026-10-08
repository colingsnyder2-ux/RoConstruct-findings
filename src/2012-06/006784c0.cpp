// roc 2012-06 006784c0  unit: DummyArbiter  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006784c0
//
// 006784c0  81ec98000000         sub esp, 0x98
// 006784c6  56                   push esi
// 006784c7  6890000000           push 0x90
// 006784cc  8d442410             lea eax, [esp + 0x10]
// 006784d0  6a00                 push 0
// 006784d2  50                   push eax
// 006784d3  c744241000000000     mov dword ptr [esp + 0x10], 0
// 006784db  e894ae3000           call 0x983374
// 006784e0  83c40c               add esp, 0xc
// 006784e3  8d4c2408             lea ecx, [esp + 8]
// 006784e7  51                   push ecx
// 006784e8  c744240c94000000     mov dword ptr [esp + 0xc], 0x94
// 006784f0  ff15fc21b200         call dword ptr [0xb221fc]
// 006784f6  8b542414             mov edx, dword ptr [esp + 0x14]
// 006784fa  8b442410             mov eax, dword ptr [esp + 0x10]
// 006784fe  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00678502  8bb424a0000000       mov esi, dword ptr [esp + 0xa0]
// 00678509  52                   push edx
// 0067850a  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0067850e  50                   push eax
// 0067850f  51                   push ecx
// 00678510  52                   push edx
// 00678511  6854dcb800           push 0xb8dc54
// 00678516  56                   push esi
// 00678517  e8d4a82f00           call 0x972df0
// 0067851c  83c418               add esp, 0x18
// 0067851f  8bc6                 mov eax, esi
// 00678521  5e                   pop esi
// 00678522  81c498000000         add esp, 0x98
// 00678528  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?osVer@DebugSettings@RBX@@QBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
