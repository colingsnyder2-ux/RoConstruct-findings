// roc 2012-06 00ae835e  unit: seg_00ae0000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00ae835e
//
// 00ae835e  8b542408             mov edx, dword ptr [esp + 8]
// 00ae8362  8d02                 lea eax, [edx]
// 00ae8364  8b4afc               mov ecx, dword ptr [edx - 4]
// 00ae8367  33c8                 xor ecx, eax
// 00ae8369  e8c9b6e9ff           call 0x983a37
// 00ae836e  b8e0fed300           mov eax, 0xd3fee0
// 00ae8373  e96eade9ff           jmp 0x9830e6
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
