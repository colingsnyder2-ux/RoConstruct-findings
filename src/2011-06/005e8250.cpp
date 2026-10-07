// roc 2011-06 005e8250  unit: std::D::DU?$char_traits::V?$basic_ifstream::?$sp_counted_impl_p  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005e8250
//
// 005e8250  8bc1                 mov eax, ecx
// 005e8252  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005e8256  8b11                 mov edx, dword ptr [ecx]
// 005e8258  8910                 mov dword ptr [eax], edx
// 005e825a  8b4904               mov ecx, dword ptr [ecx + 4]
// 005e825d  894804               mov dword ptr [eax + 4], ecx
// 005e8260  85c9                 test ecx, ecx
// 005e8262  740c                 je 0x5e8270
// 005e8264  83c104               add ecx, 4
// 005e8267  ba01000000           mov edx, 1
// 005e826c  f00fc111             lock xadd dword ptr [ecx], edx
// 005e8270  c20400               ret 4
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??0?$shared_ptr@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
