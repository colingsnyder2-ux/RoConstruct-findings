// roc 2007-08 0074ec4e  unit: seg_00740000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0074ec4e
//
// 0074ec4e  8b542408             mov edx, dword ptr [esp + 8]
// 0074ec52  8d02                 lea eax, [edx]
// 0074ec54  8b4afc               mov ecx, dword ptr [edx - 4]
// 0074ec57  33c8                 xor ecx, eax
// 0074ec59  e8c01deeff           call 0x630a1e
// 0074ec5e  b8485a8500           mov eax, 0x855a48
// 0074ec63  e9b01deeff           jmp 0x630a18
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
