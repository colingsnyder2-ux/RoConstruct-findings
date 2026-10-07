// roc 2012-06 00ae3dc9  unit: seg_00ae0000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00ae3dc9
//
// 00ae3dc9  8b542408             mov edx, dword ptr [esp + 8]
// 00ae3dcd  8d02                 lea eax, [edx]
// 00ae3dcf  8b4afc               mov ecx, dword ptr [edx - 4]
// 00ae3dd2  33c8                 xor ecx, eax
// 00ae3dd4  e85efce9ff           call 0x983a37
// 00ae3dd9  b850c1d300           mov eax, 0xd3c150
// 00ae3dde  e903f3e9ff           jmp 0x9830e6
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
