// from server: 100% by auto
// roc 2012-06 00749030  unit: CPropGrid::UpdateItemsJob  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00749030
//
// 00749030  8bc1                 mov eax, ecx
// 00749032  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00749036  8b11                 mov edx, dword ptr [ecx]
// 00749038  8910                 mov dword ptr [eax], edx
// 0074903a  8b4904               mov ecx, dword ptr [ecx + 4]
// 0074903d  894804               mov dword ptr [eax + 4], ecx
// 00749040  85c9                 test ecx, ecx
// 00749042  740c                 je 0x749050
// 00749044  83c104               add ecx, 4
// 00749047  ba01000000           mov edx, 1
// 0074904c  f00fc111             lock xadd dword ptr [ecx], edx
// 00749050  c20400               ret 4
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??0?$shared_ptr@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
