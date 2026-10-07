// roc 2008-06 004116f0  unit: CBrush  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004116f0
//
// 004116f0  8bc1                 mov eax, ecx
// 004116f2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004116f6  8b11                 mov edx, dword ptr [ecx]
// 004116f8  8910                 mov dword ptr [eax], edx
// 004116fa  8b4904               mov ecx, dword ptr [ecx + 4]
// 004116fd  894804               mov dword ptr [eax + 4], ecx
// 00411700  85c9                 test ecx, ecx
// 00411702  740c                 je 0x411710
// 00411704  83c104               add ecx, 4
// 00411707  ba01000000           mov edx, 1
// 0041170c  f00fc111             lock xadd dword ptr [ecx], edx
// 00411710  c20400               ret 4
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??0?$shared_ptr@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
