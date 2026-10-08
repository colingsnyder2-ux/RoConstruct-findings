// from server: 100% by auto
// roc 2010-06 00792190  unit: RBX::ContactStage  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00792190
//
// 00792190  807c240800           cmp byte ptr [esp + 8], 0
// 00792195  8b09                 mov ecx, dword ptr [ecx]
// 00792197  51                   push ecx
// 00792198  741d                 je 0x7921b7
// 0079219a  807c240800           cmp byte ptr [esp + 8], 0
// 0079219f  740b                 je 0x7921ac
// 007921a1  e88a1bdeff           call 0x573d30
// 007921a6  83c404               add esp, 4
// 007921a9  c20800               ret 8
// 007921ac  e82f21deff           call 0x5742e0
// 007921b1  83c404               add esp, 4
// 007921b4  c20800               ret 8
// 007921b7  807c240800           cmp byte ptr [esp + 8], 0
// 007921bc  740b                 je 0x7921c9
// 007921be  e8fd0cdeff           call 0x572ec0
// 007921c3  83c404               add esp, 4
// 007921c6  c20800               ret 8
// 007921c9  e85238deff           call 0x575a20
// 007921ce  59                   pop ecx
// 007921cf  c20800               ret 8
// library boost-1.34.1/libs\iostreams\src\zlib.cpp (function ?reset@zlib_base@detail@iostreams@boost@@IAEX_N0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/iostreams/src/zlib.cpp
