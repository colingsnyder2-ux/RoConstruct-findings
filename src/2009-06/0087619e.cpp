// roc 2009-06 0087619e  unit: seg_00870000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0087619e
//
// 0087619e  8b542408             mov edx, dword ptr [esp + 8]
// 008761a2  8d02                 lea eax, [edx]
// 008761a4  8b4afc               mov ecx, dword ptr [edx - 4]
// 008761a7  33c8                 xor ecx, eax
// 008761a9  e8cc43eaff           call 0x71a57a
// 008761ae  b8e8419b00           mov eax, 0x9b41e8
// 008761b3  e93438eaff           jmp 0x7199ec
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
