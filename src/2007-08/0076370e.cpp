// roc 2007-08 0076370e  unit: seg_00760000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076370e
//
// 0076370e  8b542408             mov edx, dword ptr [esp + 8]
// 00763712  8d02                 lea eax, [edx]
// 00763714  8b4afc               mov ecx, dword ptr [edx - 4]
// 00763717  33c8                 xor ecx, eax
// 00763719  e800d3ecff           call 0x630a1e
// 0076371e  b8fcf58600           mov eax, 0x86f5fc
// 00763723  e9f0d2ecff           jmp 0x630a18
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
