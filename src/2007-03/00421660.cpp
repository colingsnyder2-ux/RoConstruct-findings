// roc 2007-03 00421660  unit: seg_00420000  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00421660
//
// 00421660  8b442410             mov eax, dword ptr [esp + 0x10]
// 00421664  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00421668  50                   push eax
// 00421669  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0042166d  52                   push edx
// 0042166e  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00421672  50                   push eax
// 00421673  52                   push edx
// 00421674  e847fc2200           call 0x6512c0
// 00421679  c21000               ret 0x10
// library boost-1.34.1/libs\regex\src\instances.cpp (function ?insert@?$vector@U?$sub_match@PBD@boost@@V?$allocator@U?$sub_match@PBD@boost@@@std@@@std@@QAEXV?$_Vector_const_iterator@U?$sub_match@PBD@boost@@V?$allocator@U?$sub_match@PBD@boost@@@std@@@2@IABU?$sub_match@PBD@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
