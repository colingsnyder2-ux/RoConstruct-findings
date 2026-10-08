// roc 2009-12 0098a660  unit: seg_00980000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0098a660
//
// 0098a660  b9e8aeb900           mov ecx, 0xb9aee8
// 0098a665  ff25c0de9800         jmp dword ptr [0x98dec0]
// library g3d-6.09/G3Dcpp\System.cpp (function ??__F_cpuVendor@?1??cpuVendor@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
