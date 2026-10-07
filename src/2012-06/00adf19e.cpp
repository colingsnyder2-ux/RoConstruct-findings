// roc 2012-06 00adf19e  unit: seg_00ad0000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00adf19e
//
// 00adf19e  8b542408             mov edx, dword ptr [esp + 8]
// 00adf1a2  8d02                 lea eax, [edx]
// 00adf1a4  8b4afc               mov ecx, dword ptr [edx - 4]
// 00adf1a7  33c8                 xor ecx, eax
// 00adf1a9  e88948eaff           call 0x983a37
// 00adf1ae  b8787bd300           mov eax, 0xd37b78
// 00adf1b3  e92e3feaff           jmp 0x9830e6
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
