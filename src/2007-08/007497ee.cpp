// roc 2007-08 007497ee  unit: seg_00740000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007497ee
//
// 007497ee  8b542408             mov edx, dword ptr [esp + 8]
// 007497f2  8d02                 lea eax, [edx]
// 007497f4  8b4afc               mov ecx, dword ptr [edx - 4]
// 007497f7  33c8                 xor ecx, eax
// 007497f9  e82072eeff           call 0x630a1e
// 007497fe  b814028500           mov eax, 0x850214
// 00749803  e91072eeff           jmp 0x630a18
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
