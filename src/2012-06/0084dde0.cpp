// roc 2012-06 0084dde0  unit: RBX::Lua::LuaArguments  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0084dde0
//
// 0084dde0  64a100000000         mov eax, dword ptr fs:[0]
// 0084dde6  6aff                 push -1
// 0084dde8  6808c8ac00           push 0xacc808
// 0084dded  50                   push eax
// 0084ddee  64892500000000       mov dword ptr fs:[0], esp
// 0084ddf5  83ec08               sub esp, 8
// 0084ddf8  56                   push esi
// 0084ddf9  8b742420             mov esi, dword ptr [esp + 0x20]
// 0084ddfd  57                   push edi
// 0084ddfe  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0084de02  56                   push esi
// 0084de03  57                   push edi
// 0084de04  e8d73efeff           call 0x831ce0
// 0084de09  83c408               add esp, 8
// 0084de0c  85c0                 test eax, eax
// 0084de0e  7537                 jne 0x84de47
// 0084de10  89442408             mov dword ptr [esp + 8], eax
// 0084de14  8944240c             mov dword ptr [esp + 0xc], eax
// 0084de18  89442418             mov dword ptr [esp + 0x18], eax
// 0084de1c  e87f33e7ff           call 0x6c11a0
// 0084de21  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0084de25  8901                 mov dword ptr [ecx], eax
// 0084de27  8d442408             lea eax, [esp + 8]
// 0084de2b  50                   push eax
// 0084de2c  83c104               add ecx, 4
// 0084de2f  e87cf5cdff           call 0x52d3b0
// 0084de34  5f                   pop edi
// 0084de35  b001                 mov al, 1
// 0084de37  5e                   pop esi
// 0084de38  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0084de3c  64890d00000000       mov dword ptr fs:[0], ecx
// 0084de43  83c414               add esp, 0x14
// 0084de46  c3                   ret 
// 0084de47  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0084de4b  51                   push ecx
// 0084de4c  56                   push esi
// 0084de4d  57                   push edi
// 0084de4e  e80dffffff           call 0x84dd60
// 0084de53  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0084de57  83c40c               add esp, 0xc
// 0084de5a  5f                   pop edi
// 0084de5b  5e                   pop esi
// 0084de5c  64890d00000000       mov dword ptr fs:[0], ecx
// 0084de63  83c414               add esp, 0x14
// 0084de66  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$getPtr@VValue@Reflection@RBX@@@?$SharedPtrBridge@VDescribedBase@Reflection@RBX@@@Lua@RBX@@SA_NPAUlua_State@@IAAVValue@Reflection@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
