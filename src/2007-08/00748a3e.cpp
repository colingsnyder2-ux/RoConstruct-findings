// roc 2007-08 00748a3e  unit: seg_00740000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00748a3e
//
// 00748a3e  8b542408             mov edx, dword ptr [esp + 8]
// 00748a42  8d02                 lea eax, [edx]
// 00748a44  8b4afc               mov ecx, dword ptr [edx - 4]
// 00748a47  33c8                 xor ecx, eax
// 00748a49  e8d07feeff           call 0x630a1e
// 00748a4e  b8bcf28400           mov eax, 0x84f2bc
// 00748a53  e9c07feeff           jmp 0x630a18
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
