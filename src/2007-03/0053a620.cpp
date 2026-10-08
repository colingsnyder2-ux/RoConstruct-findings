// roc 2007-03 0053a620  unit: seg_00530000  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0053a620
//
// 0053a620  64a100000000         mov eax, dword ptr fs:[0]
// 0053a626  6aff                 push -1
// 0053a628  68e8397500           push 0x7539e8
// 0053a62d  50                   push eax
// 0053a62e  64892500000000       mov dword ptr fs:[0], esp
// 0053a635  83ec08               sub esp, 8
// 0053a638  56                   push esi
// 0053a639  8b742420             mov esi, dword ptr [esp + 0x20]
// 0053a63d  57                   push edi
// 0053a63e  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0053a642  56                   push esi
// 0053a643  57                   push edi
// 0053a644  e8f7e50700           call 0x5b8c40
// 0053a649  83c408               add esp, 8
// 0053a64c  85c0                 test eax, eax
// 0053a64e  7537                 jne 0x53a687
// 0053a650  89442408             mov dword ptr [esp + 8], eax
// 0053a654  8944240c             mov dword ptr [esp + 0xc], eax
// 0053a658  89442418             mov dword ptr [esp + 0x18], eax
// 0053a65c  e81f2a0300           call 0x56d080
// 0053a661  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0053a665  8901                 mov dword ptr [ecx], eax
// 0053a667  8d442408             lea eax, [esp + 8]
// 0053a66b  50                   push eax
// 0053a66c  83c104               add ecx, 4
// 0053a66f  e80cb2f6ff           call 0x4a5880
// 0053a674  5f                   pop edi
// 0053a675  b001                 mov al, 1
// 0053a677  5e                   pop esi
// 0053a678  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0053a67c  64890d00000000       mov dword ptr fs:[0], ecx
// 0053a683  83c414               add esp, 0x14
// 0053a686  c3                   ret 
// 0053a687  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0053a68b  51                   push ecx
// 0053a68c  56                   push esi
// 0053a68d  57                   push edi
// 0053a68e  e8ddfcffff           call 0x53a370
// 0053a693  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0053a697  83c40c               add esp, 0xc
// 0053a69a  5f                   pop edi
// 0053a69b  5e                   pop esi
// 0053a69c  64890d00000000       mov dword ptr fs:[0], ecx
// 0053a6a3  83c414               add esp, 0x14
// 0053a6a6  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$getPtr@VValue@Reflection@RBX@@@?$SharedPtrBridge@VDescribedBase@Reflection@RBX@@@Lua@RBX@@SA_NPAUlua_State@@IAAVValue@Reflection@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
