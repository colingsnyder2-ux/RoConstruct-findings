// roc 2007-08 00538d90  unit: RBX::VScriptContext::?$FactoryProduct  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00538d90
//
// 00538d90  64a100000000         mov eax, dword ptr fs:[0]
// 00538d96  6aff                 push -1
// 00538d98  68d8bc7500           push 0x75bcd8
// 00538d9d  50                   push eax
// 00538d9e  64892500000000       mov dword ptr fs:[0], esp
// 00538da5  83ec08               sub esp, 8
// 00538da8  56                   push esi
// 00538da9  8b742420             mov esi, dword ptr [esp + 0x20]
// 00538dad  57                   push edi
// 00538dae  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00538db2  56                   push esi
// 00538db3  57                   push edi
// 00538db4  e8b7490800           call 0x5bd770
// 00538db9  83c408               add esp, 8
// 00538dbc  85c0                 test eax, eax
// 00538dbe  7537                 jne 0x538df7
// 00538dc0  89442408             mov dword ptr [esp + 8], eax
// 00538dc4  8944240c             mov dword ptr [esp + 0xc], eax
// 00538dc8  89442418             mov dword ptr [esp + 0x18], eax
// 00538dcc  e8af480300           call 0x56d680
// 00538dd1  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00538dd5  8901                 mov dword ptr [ecx], eax
// 00538dd7  8d442408             lea eax, [esp + 8]
// 00538ddb  50                   push eax
// 00538ddc  83c104               add ecx, 4
// 00538ddf  e87c84f7ff           call 0x4b1260
// 00538de4  5f                   pop edi
// 00538de5  b001                 mov al, 1
// 00538de7  5e                   pop esi
// 00538de8  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00538dec  64890d00000000       mov dword ptr fs:[0], ecx
// 00538df3  83c414               add esp, 0x14
// 00538df6  c3                   ret 
// 00538df7  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00538dfb  51                   push ecx
// 00538dfc  56                   push esi
// 00538dfd  57                   push edi
// 00538dfe  e81dfbffff           call 0x538920
// 00538e03  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00538e07  83c40c               add esp, 0xc
// 00538e0a  5f                   pop edi
// 00538e0b  5e                   pop esi
// 00538e0c  64890d00000000       mov dword ptr fs:[0], ecx
// 00538e13  83c414               add esp, 0x14
// 00538e16  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$getPtr@VValue@Reflection@RBX@@@?$SharedPtrBridge@VDescribedBase@Reflection@RBX@@@Lua@RBX@@SA_NPAUlua_State@@IAAVValue@Reflection@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
