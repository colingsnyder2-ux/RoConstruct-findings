// roc 2007-03 0057f510  unit: seg_00570000  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0057f510
//
// 0057f510  51                   push ecx
// 0057f511  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0057f515  803800               cmp byte ptr [eax], 0
// 0057f518  c7042400000000       mov dword ptr [esp], 0
// 0057f51f  b8004f7900           mov eax, 0x794f00
// 0057f524  7505                 jne 0x57f52b
// 0057f526  b8f84e7900           mov eax, 0x794ef8
// 0057f52b  56                   push esi
// 0057f52c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0057f530  50                   push eax
// 0057f531  8bce                 mov ecx, esi
// 0057f533  ff1578e77700         call dword ptr [0x77e778]
// 0057f539  8bc6                 mov eax, esi
// 0057f53b  5e                   pop esi
// 0057f53c  59                   pop ecx
// 0057f53d  c3                   ret 
// library openrbx-client/App\util\Utilities.cpp (function ?convertToString@?$StringConverter@_N@RBX@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AB_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/util/Utilities.cpp
