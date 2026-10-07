// roc 2012-06 00add3be  unit: seg_00ad0000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00add3be
//
// 00add3be  8b542408             mov edx, dword ptr [esp + 8]
// 00add3c2  8d02                 lea eax, [edx]
// 00add3c4  8b4afc               mov ecx, dword ptr [edx - 4]
// 00add3c7  33c8                 xor ecx, eax
// 00add3c9  e86966eaff           call 0x983a37
// 00add3ce  b8c45dd300           mov eax, 0xd35dc4
// 00add3d3  e90e5deaff           jmp 0x9830e6
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
