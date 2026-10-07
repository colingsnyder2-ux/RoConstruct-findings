// roc 2007-08 0074137e  unit: seg_00740000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0074137e
//
// 0074137e  8b542408             mov edx, dword ptr [esp + 8]
// 00741382  8d02                 lea eax, [edx]
// 00741384  8b4afc               mov ecx, dword ptr [edx - 4]
// 00741387  33c8                 xor ecx, eax
// 00741389  e890f6eeff           call 0x630a1e
// 0074138e  b8fc838400           mov eax, 0x8483fc
// 00741393  e980f6eeff           jmp 0x630a18
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
