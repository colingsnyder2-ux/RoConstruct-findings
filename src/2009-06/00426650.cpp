// roc 2009-06 00426650  unit: boost::any::H::?$holder  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00426650
//
// 00426650  56                   push esi
// 00426651  8bf1                 mov esi, ecx
// 00426653  8b460c               mov eax, dword ptr [esi + 0xc]
// 00426656  85c0                 test eax, eax
// 00426658  7418                 je 0x426672
// 0042665a  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0042665d  51                   push ecx
// 0042665e  50                   push eax
// 0042665f  8bce                 mov ecx, esi
// 00426661  e8baffffff           call 0x426620
// 00426666  8b560c               mov edx, dword ptr [esi + 0xc]
// 00426669  52                   push edx
// 0042666a  e8c3232f00           call 0x718a32
// 0042666f  83c404               add esp, 4
// 00426672  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 00426679  c7461000000000       mov dword ptr [esi + 0x10], 0
// 00426680  c7461400000000       mov dword ptr [esi + 0x14], 0
// 00426687  5e                   pop esi
// 00426688  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?_Tidy@?$vector@VValue@Reflection@RBX@@V?$allocator@VValue@Reflection@RBX@@@std@@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
