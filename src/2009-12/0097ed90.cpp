// roc 2009-12 0097ed90  unit: seg_00970000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0097ed90
//
// 0097ed90  b9f4cbb700           mov ecx, 0xb7cbf4
// 0097ed95  ff25ecbc9800         jmp dword ptr [0x98bcec]
// library g3d-6.09/G3Dcpp\System.cpp (function ??__F_cpuVendor@?1??cpuVendor@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
