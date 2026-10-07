// roc 2007-08 00760aee  unit: seg_00760000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00760aee
//
// 00760aee  8b542408             mov edx, dword ptr [esp + 8]
// 00760af2  8d02                 lea eax, [edx]
// 00760af4  8b4afc               mov ecx, dword ptr [edx - 4]
// 00760af7  33c8                 xor ecx, eax
// 00760af9  e820ffecff           call 0x630a1e
// 00760afe  b820ce8600           mov eax, 0x86ce20
// 00760b03  e910ffecff           jmp 0x630a18
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
