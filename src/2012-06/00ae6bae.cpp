// roc 2012-06 00ae6bae  unit: seg_00ae0000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00ae6bae
//
// 00ae6bae  8b542408             mov edx, dword ptr [esp + 8]
// 00ae6bb2  8d02                 lea eax, [edx]
// 00ae6bb4  8b4afc               mov ecx, dword ptr [edx - 4]
// 00ae6bb7  33c8                 xor ecx, eax
// 00ae6bb9  e879cee9ff           call 0x983a37
// 00ae6bbe  b860ead300           mov eax, 0xd3ea60
// 00ae6bc3  e91ec5e9ff           jmp 0x9830e6
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
