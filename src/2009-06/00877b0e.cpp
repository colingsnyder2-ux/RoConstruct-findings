// roc 2009-06 00877b0e  unit: seg_00870000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00877b0e
//
// 00877b0e  8b542408             mov edx, dword ptr [esp + 8]
// 00877b12  8d02                 lea eax, [edx]
// 00877b14  8b4afc               mov ecx, dword ptr [edx - 4]
// 00877b17  33c8                 xor ecx, eax
// 00877b19  e85c2aeaff           call 0x71a57a
// 00877b1e  b8d05b9b00           mov eax, 0x9b5bd0
// 00877b23  e9c41eeaff           jmp 0x7199ec
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
