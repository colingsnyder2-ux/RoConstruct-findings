// roc 2007-08 0073b9ce  unit: CSpinButtonCtrl  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0073b9ce
//
// 0073b9ce  8b542408             mov edx, dword ptr [esp + 8]
// 0073b9d2  8d02                 lea eax, [edx]
// 0073b9d4  8b4afc               mov ecx, dword ptr [edx - 4]
// 0073b9d7  33c8                 xor ecx, eax
// 0073b9d9  e84050efff           call 0x630a1e
// 0073b9de  b804288400           mov eax, 0x842804
// 0073b9e3  e93050efff           jmp 0x630a18
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
