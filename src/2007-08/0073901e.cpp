// roc 2007-08 0073901e  unit: CSpinButtonCtrl  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0073901e
//
// 0073901e  8b542408             mov edx, dword ptr [esp + 8]
// 00739022  8d02                 lea eax, [edx]
// 00739024  8b4afc               mov ecx, dword ptr [edx - 4]
// 00739027  33c8                 xor ecx, eax
// 00739029  e8f079efff           call 0x630a1e
// 0073902e  b800f18300           mov eax, 0x83f100
// 00739033  e9e079efff           jmp 0x630a18
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
