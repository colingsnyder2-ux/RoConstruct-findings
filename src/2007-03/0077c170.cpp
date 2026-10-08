// roc 2007-03 0077c170  unit: seg_00770000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0077c170
//
// 0077c170  b93c238c00           mov ecx, 0x8c233c
// 0077c175  ff2578dd7700         jmp dword ptr [0x77dd78]
// library rbxgs-g3d/G3Dcpp\System.cpp (function ??__F_cpuVendor@?1??cpuVendor@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/System.cpp
