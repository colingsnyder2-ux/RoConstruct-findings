// roc 2009-06 0087411e  unit: seg_00870000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0087411e
//
// 0087411e  8b542408             mov edx, dword ptr [esp + 8]
// 00874122  8d02                 lea eax, [edx]
// 00874124  8b4afc               mov ecx, dword ptr [edx - 4]
// 00874127  33c8                 xor ecx, eax
// 00874129  e84c64eaff           call 0x71a57a
// 0087412e  b864229b00           mov eax, 0x9b2264
// 00874133  e9b458eaff           jmp 0x7199ec
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
