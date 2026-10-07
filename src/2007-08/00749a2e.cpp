// roc 2007-08 00749a2e  unit: seg_00740000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00749a2e
//
// 00749a2e  8b542408             mov edx, dword ptr [esp + 8]
// 00749a32  8d02                 lea eax, [edx]
// 00749a34  8b4afc               mov ecx, dword ptr [edx - 4]
// 00749a37  33c8                 xor ecx, eax
// 00749a39  e8e06feeff           call 0x630a1e
// 00749a3e  b834048500           mov eax, 0x850434
// 00749a43  e9d06feeff           jmp 0x630a18
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
