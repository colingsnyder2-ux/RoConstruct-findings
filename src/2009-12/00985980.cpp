// roc 2009-12 00985980  unit: seg_00980000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00985980
//
// 00985980  b99821b900           mov ecx, 0xb92198
// 00985985  ff25e4b69800         jmp dword ptr [0x98b6e4]
// library g3d-6.09/G3Dcpp\System.cpp (function ??__F_cpuVendor@?1??cpuVendor@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
