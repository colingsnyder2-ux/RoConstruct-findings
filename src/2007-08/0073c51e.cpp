// roc 2007-08 0073c51e  unit: CSpinButtonCtrl  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0073c51e
//
// 0073c51e  8b542408             mov edx, dword ptr [esp + 8]
// 0073c522  8d02                 lea eax, [edx]
// 0073c524  8b4afc               mov ecx, dword ptr [edx - 4]
// 0073c527  33c8                 xor ecx, eax
// 0073c529  e8f044efff           call 0x630a1e
// 0073c52e  b8b0348400           mov eax, 0x8434b0
// 0073c533  e9e044efff           jmp 0x630a18
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
