// roc 2007-08 0074a76e  unit: seg_00740000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0074a76e
//
// 0074a76e  8b542408             mov edx, dword ptr [esp + 8]
// 0074a772  8d02                 lea eax, [edx]
// 0074a774  8b4afc               mov ecx, dword ptr [edx - 4]
// 0074a777  33c8                 xor ecx, eax
// 0074a779  e8a062eeff           call 0x630a1e
// 0074a77e  b8ec148500           mov eax, 0x8514ec
// 0074a783  e99062eeff           jmp 0x630a18
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
