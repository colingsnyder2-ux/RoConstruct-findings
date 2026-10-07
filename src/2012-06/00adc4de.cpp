// roc 2012-06 00adc4de  unit: seg_00ad0000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00adc4de
//
// 00adc4de  8b542408             mov edx, dword ptr [esp + 8]
// 00adc4e2  8d02                 lea eax, [edx]
// 00adc4e4  8b4afc               mov ecx, dword ptr [edx - 4]
// 00adc4e7  33c8                 xor ecx, eax
// 00adc4e9  e84975eaff           call 0x983a37
// 00adc4ee  b8544fd300           mov eax, 0xd34f54
// 00adc4f3  e9ee6beaff           jmp 0x9830e6
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
