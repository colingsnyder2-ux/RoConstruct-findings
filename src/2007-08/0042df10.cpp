// roc 2007-08 0042df10  unit: boost::any::_N::?$holder  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0042df10
//
// 0042df10  56                   push esi
// 0042df11  8b31                 mov esi, dword ptr [ecx]
// 0042df13  85f6                 test esi, esi
// 0042df15  743d                 je 0x42df54
// 0042df17  8b4604               mov eax, dword ptr [esi + 4]
// 0042df1a  85c0                 test eax, eax
// 0042df1c  7418                 je 0x42df36
// 0042df1e  8b4e08               mov ecx, dword ptr [esi + 8]
// 0042df21  51                   push ecx
// 0042df22  50                   push eax
// 0042df23  8bce                 mov ecx, esi
// 0042df25  e826fcffff           call 0x42db50
// 0042df2a  8b5604               mov edx, dword ptr [esi + 4]
// 0042df2d  52                   push edx
// 0042df2e  e82f1d2000           call 0x62fc62
// 0042df33  83c404               add esp, 4
// 0042df36  56                   push esi
// 0042df37  c7460400000000       mov dword ptr [esi + 4], 0
// 0042df3e  c7460800000000       mov dword ptr [esi + 8], 0
// 0042df45  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0042df4c  e8111d2000           call 0x62fc62
// 0042df51  83c404               add esp, 4
// 0042df54  5e                   pop esi
// 0042df55  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ??1?$auto_ptr@V?$vector@VValue@Reflection@RBX@@V?$allocator@VValue@Reflection@RBX@@@std@@@std@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
