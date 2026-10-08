// roc 2012-06 005479f0  unit: boost::X::V?$function0::?$thread_data  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005479f0
//
// 005479f0  56                   push esi
// 005479f1  8b742408             mov esi, dword ptr [esp + 8]
// 005479f5  85f6                 test esi, esi
// 005479f7  7441                 je 0x547a3a
// 005479f9  8b4604               mov eax, dword ptr [esi + 4]
// 005479fc  85c0                 test eax, eax
// 005479fe  741c                 je 0x547a1c
// 00547a00  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00547a04  8b5608               mov edx, dword ptr [esi + 8]
// 00547a07  51                   push ecx
// 00547a08  56                   push esi
// 00547a09  52                   push edx
// 00547a0a  50                   push eax
// 00547a0b  e82011fdff           call 0x518b30
// 00547a10  8b4604               mov eax, dword ptr [esi + 4]
// 00547a13  50                   push eax
// 00547a14  e8fba64300           call 0x982114
// 00547a19  83c414               add esp, 0x14
// 00547a1c  56                   push esi
// 00547a1d  c7460400000000       mov dword ptr [esi + 4], 0
// 00547a24  c7460800000000       mov dword ptr [esi + 8], 0
// 00547a2b  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 00547a32  e8dda64300           call 0x982114
// 00547a37  83c404               add esp, 4
// 00547a3a  5e                   pop esi
// 00547a3b  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??$checked_delete@V?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@YAXPAV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
