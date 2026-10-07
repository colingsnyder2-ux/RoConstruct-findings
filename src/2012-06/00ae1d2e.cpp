// roc 2012-06 00ae1d2e  unit: seg_00ae0000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00ae1d2e
//
// 00ae1d2e  8b542408             mov edx, dword ptr [esp + 8]
// 00ae1d32  8d02                 lea eax, [edx]
// 00ae1d34  8b4afc               mov ecx, dword ptr [edx - 4]
// 00ae1d37  33c8                 xor ecx, eax
// 00ae1d39  e8f91ceaff           call 0x983a37
// 00ae1d3e  b860a3d300           mov eax, 0xd3a360
// 00ae1d43  e99e13eaff           jmp 0x9830e6
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
