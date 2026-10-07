// roc 2007-08 007396ae  unit: CSpinButtonCtrl  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007396ae
//
// 007396ae  8b542408             mov edx, dword ptr [esp + 8]
// 007396b2  8d02                 lea eax, [edx]
// 007396b4  8b4afc               mov ecx, dword ptr [edx - 4]
// 007396b7  33c8                 xor ecx, eax
// 007396b9  e86073efff           call 0x630a1e
// 007396be  b8e0fc8300           mov eax, 0x83fce0
// 007396c3  e95073efff           jmp 0x630a18
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
