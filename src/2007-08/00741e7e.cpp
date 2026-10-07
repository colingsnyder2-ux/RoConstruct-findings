// roc 2007-08 00741e7e  unit: seg_00740000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00741e7e
//
// 00741e7e  8b542408             mov edx, dword ptr [esp + 8]
// 00741e82  8d02                 lea eax, [edx]
// 00741e84  8b4afc               mov ecx, dword ptr [edx - 4]
// 00741e87  33c8                 xor ecx, eax
// 00741e89  e890ebeeff           call 0x630a1e
// 00741e8e  b8708d8400           mov eax, 0x848d70
// 00741e93  e980ebeeff           jmp 0x630a18
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
