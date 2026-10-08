// roc 2009-12 00965cde  unit: seg_00960000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00965cde
//
// 00965cde  8b542408             mov edx, dword ptr [esp + 8]
// 00965ce2  8d02                 lea eax, [edx]
// 00965ce4  8b4afc               mov ecx, dword ptr [edx - 4]
// 00965ce7  33c8                 xor ecx, eax
// 00965ce9  e8acf6e8ff           call 0x7f539a
// 00965cee  b89c20ae00           mov eax, 0xae209c
// 00965cf3  e922ebe8ff           jmp 0x7f481a
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
