// roc 2007-08 0076a5de  unit: seg_00760000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076a5de
//
// 0076a5de  8b542408             mov edx, dword ptr [esp + 8]
// 0076a5e2  8d02                 lea eax, [edx]
// 0076a5e4  8b4afc               mov ecx, dword ptr [edx - 4]
// 0076a5e7  33c8                 xor ecx, eax
// 0076a5e9  e83064ecff           call 0x630a1e
// 0076a5ee  b8fc588700           mov eax, 0x8758fc
// 0076a5f3  e92064ecff           jmp 0x630a18
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
