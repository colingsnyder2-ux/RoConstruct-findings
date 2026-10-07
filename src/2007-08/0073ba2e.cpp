// roc 2007-08 0073ba2e  unit: CSpinButtonCtrl  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0073ba2e
//
// 0073ba2e  8b542408             mov edx, dword ptr [esp + 8]
// 0073ba32  8d02                 lea eax, [edx]
// 0073ba34  8b4afc               mov ecx, dword ptr [edx - 4]
// 0073ba37  33c8                 xor ecx, eax
// 0073ba39  e8e04fefff           call 0x630a1e
// 0073ba3e  b85c288400           mov eax, 0x84285c
// 0073ba43  e9d04fefff           jmp 0x630a18
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
