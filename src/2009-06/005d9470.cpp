// roc 2009-06 005d9470  unit: VAuthoringSettings::?$BoundPropGetSet  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005d9470
//
// 005d9470  8bc1                 mov eax, ecx
// 005d9472  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005d9476  8b11                 mov edx, dword ptr [ecx]
// 005d9478  8910                 mov dword ptr [eax], edx
// 005d947a  8b4904               mov ecx, dword ptr [ecx + 4]
// 005d947d  894804               mov dword ptr [eax + 4], ecx
// 005d9480  85c9                 test ecx, ecx
// 005d9482  740c                 je 0x5d9490
// 005d9484  83c104               add ecx, 4
// 005d9487  ba01000000           mov edx, 1
// 005d948c  f00fc111             lock xadd dword ptr [ecx], edx
// 005d9490  c20400               ret 4
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??0?$shared_ptr@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
