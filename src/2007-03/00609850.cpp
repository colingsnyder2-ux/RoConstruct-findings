// roc 2007-03 00609850  unit: seg_00600000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00609850
//
// 00609850  51                   push ecx
// 00609851  8b542410             mov edx, dword ptr [esp + 0x10]
// 00609855  c6042400             mov byte ptr [esp], 0
// 00609859  8b0424               mov eax, dword ptr [esp]
// 0060985c  50                   push eax
// 0060985d  8b442414             mov eax, dword ptr [esp + 0x14]
// 00609861  52                   push edx
// 00609862  8b542410             mov edx, dword ptr [esp + 0x10]
// 00609866  51                   push ecx
// 00609867  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0060986b  50                   push eax
// 0060986c  51                   push ecx
// 0060986d  52                   push edx
// 0060986e  e8bdf5ffff           call 0x608e30
// 00609873  83c41c               add esp, 0x1c
// 00609876  c20c00               ret 0xc
// library rbxgs/script\ScriptContext.cpp (function ??$_Umove@PAV?$shared_ptr@VScript@RBX@@@boost@@@?$vector@V?$shared_ptr@VScript@RBX@@@boost@@V?$allocator@V?$shared_ptr@VScript@RBX@@@boost@@@std@@@std@@IAEPAV?$shared_ptr@VScript@RBX@@@boost@@PAV23@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
