// roc 2007-08 0073ae1e  unit: CSpinButtonCtrl  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0073ae1e
//
// 0073ae1e  8b542408             mov edx, dword ptr [esp + 8]
// 0073ae22  8d02                 lea eax, [edx]
// 0073ae24  8b4afc               mov ecx, dword ptr [edx - 4]
// 0073ae27  33c8                 xor ecx, eax
// 0073ae29  e8f05befff           call 0x630a1e
// 0073ae2e  b8fc1a8400           mov eax, 0x841afc
// 0073ae33  e9e05befff           jmp 0x630a18
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
