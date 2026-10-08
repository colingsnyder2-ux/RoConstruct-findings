// from server: 100% by auto
// roc 2007-08 004a6c60  unit: RBX::Network::Replicator  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a6c60
//
// 004a6c60  8bc1                 mov eax, ecx
// 004a6c62  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004a6c66  8b11                 mov edx, dword ptr [ecx]
// 004a6c68  8910                 mov dword ptr [eax], edx
// 004a6c6a  8b4904               mov ecx, dword ptr [ecx + 4]
// 004a6c6d  85c9                 test ecx, ecx
// 004a6c6f  894804               mov dword ptr [eax + 4], ecx
// 004a6c72  740c                 je 0x4a6c80
// 004a6c74  83c104               add ecx, 4
// 004a6c77  ba01000000           mov edx, 1
// 004a6c7c  f00fc111             lock xadd dword ptr [ecx], edx
// 004a6c80  c20400               ret 4
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??0?$shared_ptr@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
