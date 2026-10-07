// roc 2007-08 0073f81e  unit: seg_00730000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0073f81e
//
// 0073f81e  8b542408             mov edx, dword ptr [esp + 8]
// 0073f822  8d02                 lea eax, [edx]
// 0073f824  8b4afc               mov ecx, dword ptr [edx - 4]
// 0073f827  33c8                 xor ecx, eax
// 0073f829  e8f011efff           call 0x630a1e
// 0073f82e  b854688400           mov eax, 0x846854
// 0073f833  e9e011efff           jmp 0x630a18
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
