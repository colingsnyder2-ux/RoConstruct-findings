// roc 2009-12 009848c0  unit: seg_00980000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 009848c0
//
// 009848c0  b92c08b900           mov ecx, 0xb9082c
// 009848c5  ff25e4b69800         jmp dword ptr [0x98b6e4]
// library g3d-6.09/G3Dcpp\System.cpp (function ??__F_cpuVendor@?1??cpuVendor@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
