// roc 2007-08 00741eae  unit: seg_00740000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00741eae
//
// 00741eae  8b542408             mov edx, dword ptr [esp + 8]
// 00741eb2  8d02                 lea eax, [edx]
// 00741eb4  8b4afc               mov ecx, dword ptr [edx - 4]
// 00741eb7  33c8                 xor ecx, eax
// 00741eb9  e860ebeeff           call 0x630a1e
// 00741ebe  b89c8d8400           mov eax, 0x848d9c
// 00741ec3  e950ebeeff           jmp 0x630a18
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
