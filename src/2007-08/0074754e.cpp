// roc 2007-08 0074754e  unit: seg_00740000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0074754e
//
// 0074754e  8b542408             mov edx, dword ptr [esp + 8]
// 00747552  8d02                 lea eax, [edx]
// 00747554  8b4afc               mov ecx, dword ptr [edx - 4]
// 00747557  33c8                 xor ecx, eax
// 00747559  e8c094eeff           call 0x630a1e
// 0074755e  b82cdd8400           mov eax, 0x84dd2c
// 00747563  e9b094eeff           jmp 0x630a18
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
