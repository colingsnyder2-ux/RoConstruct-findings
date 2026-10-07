// roc 2007-08 0074990e  unit: seg_00740000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0074990e
//
// 0074990e  8b542408             mov edx, dword ptr [esp + 8]
// 00749912  8d02                 lea eax, [edx]
// 00749914  8b4afc               mov ecx, dword ptr [edx - 4]
// 00749917  33c8                 xor ecx, eax
// 00749919  e80071eeff           call 0x630a1e
// 0074991e  b82c038500           mov eax, 0x85032c
// 00749923  e9f070eeff           jmp 0x630a18
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
