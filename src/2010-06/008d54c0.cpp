// from server: 100% by auto
// roc 2010-06 008d54c0  unit: Ogre::VertexStreamer  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008d54c0
//
// 008d54c0  8bc1                 mov eax, ecx
// 008d54c2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 008d54c6  8b11                 mov edx, dword ptr [ecx]
// 008d54c8  8910                 mov dword ptr [eax], edx
// 008d54ca  8b4904               mov ecx, dword ptr [ecx + 4]
// 008d54cd  894804               mov dword ptr [eax + 4], ecx
// 008d54d0  85c9                 test ecx, ecx
// 008d54d2  740c                 je 0x8d54e0
// 008d54d4  83c104               add ecx, 4
// 008d54d7  ba01000000           mov edx, 1
// 008d54dc  f00fc111             lock xadd dword ptr [ecx], edx
// 008d54e0  c20400               ret 4
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??0?$shared_ptr@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
