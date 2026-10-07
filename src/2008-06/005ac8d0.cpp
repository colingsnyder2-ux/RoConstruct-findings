// roc 2008-06 005ac8d0  unit: RBX::VScriptContext::?$FactoryProduct  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ac8d0
//
// 005ac8d0  64a100000000         mov eax, dword ptr fs:[0]
// 005ac8d6  6aff                 push -1
// 005ac8d8  6868917d00           push 0x7d9168
// 005ac8dd  50                   push eax
// 005ac8de  64892500000000       mov dword ptr fs:[0], esp
// 005ac8e5  83ec08               sub esp, 8
// 005ac8e8  56                   push esi
// 005ac8e9  8b742420             mov esi, dword ptr [esp + 0x20]
// 005ac8ed  57                   push edi
// 005ac8ee  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 005ac8f2  56                   push esi
// 005ac8f3  57                   push edi
// 005ac8f4  e807550600           call 0x611e00
// 005ac8f9  83c408               add esp, 8
// 005ac8fc  85c0                 test eax, eax
// 005ac8fe  7537                 jne 0x5ac937
// 005ac900  89442408             mov dword ptr [esp + 8], eax
// 005ac904  8944240c             mov dword ptr [esp + 0xc], eax
// 005ac908  89442418             mov dword ptr [esp + 0x18], eax
// 005ac90c  e85f01fcff           call 0x56ca70
// 005ac911  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005ac915  8901                 mov dword ptr [ecx], eax
// 005ac917  8d442408             lea eax, [esp + 8]
// 005ac91b  50                   push eax
// 005ac91c  83c104               add ecx, 4
// 005ac91f  e86c4eeeff           call 0x491790
// 005ac924  5f                   pop edi
// 005ac925  b001                 mov al, 1
// 005ac927  5e                   pop esi
// 005ac928  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005ac92c  64890d00000000       mov dword ptr fs:[0], ecx
// 005ac933  83c414               add esp, 0x14
// 005ac936  c3                   ret 
// 005ac937  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005ac93b  51                   push ecx
// 005ac93c  56                   push esi
// 005ac93d  57                   push edi
// 005ac93e  e81dfcffff           call 0x5ac560
// 005ac943  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005ac947  83c40c               add esp, 0xc
// 005ac94a  5f                   pop edi
// 005ac94b  5e                   pop esi
// 005ac94c  64890d00000000       mov dword ptr fs:[0], ecx
// 005ac953  83c414               add esp, 0x14
// 005ac956  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$getPtr@VValue@Reflection@RBX@@@?$SharedPtrBridge@VDescribedBase@Reflection@RBX@@@Lua@RBX@@SA_NPAUlua_State@@IAAVValue@Reflection@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
