// roc 2009-12 00961149  unit: seg_00960000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00961149
//
// 00961149  8b542408             mov edx, dword ptr [esp + 8]
// 0096114d  8d02                 lea eax, [edx]
// 0096114f  8b4afc               mov ecx, dword ptr [edx - 4]
// 00961152  33c8                 xor ecx, eax
// 00961154  e84142e9ff           call 0x7f539a
// 00961159  b8e4ddad00           mov eax, 0xaddde4
// 0096115e  e9b736e9ff           jmp 0x7f481a
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
