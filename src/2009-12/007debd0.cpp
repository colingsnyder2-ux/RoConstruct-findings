// roc 2009-12 007debd0  unit: RBX::ContactStage  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007debd0
//
// 007debd0  807c240800           cmp byte ptr [esp + 8], 0
// 007debd5  8b09                 mov ecx, dword ptr [ecx]
// 007debd7  51                   push ecx
// 007debd8  741d                 je 0x7debf7
// 007debda  807c240800           cmp byte ptr [esp + 8], 0
// 007debdf  740b                 je 0x7debec
// 007debe1  e82a38e3ff           call 0x612410
// 007debe6  83c404               add esp, 4
// 007debe9  c20800               ret 8
// 007debec  e8cf3de3ff           call 0x6129c0
// 007debf1  83c404               add esp, 4
// 007debf4  c20800               ret 8
// 007debf7  807c240800           cmp byte ptr [esp + 8], 0
// 007debfc  740b                 je 0x7dec09
// 007debfe  e89d29e3ff           call 0x6115a0
// 007dec03  83c404               add esp, 4
// 007dec06  c20800               ret 8
// 007dec09  e8f254e3ff           call 0x614100
// 007dec0e  59                   pop ecx
// 007dec0f  c20800               ret 8
// library boost-1.34.1/libs\iostreams\src\zlib.cpp (function ?reset@zlib_base@detail@iostreams@boost@@IAEX_N0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/iostreams/src/zlib.cpp
