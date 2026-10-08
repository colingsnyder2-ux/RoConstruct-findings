// roc 2007-03 00578310  unit: seg_00570000  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00578310
//
// 00578310  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00578314  85c9                 test ecx, ecx
// 00578316  761c                 jbe 0x578334
// 00578318  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0057831c  8b442404             mov eax, dword ptr [esp + 4]
// 00578320  56                   push esi
// 00578321  85c0                 test eax, eax
// 00578323  7404                 je 0x578329
// 00578325  8b32                 mov esi, dword ptr [edx]
// 00578327  8930                 mov dword ptr [eax], esi
// 00578329  83e901               sub ecx, 1
// 0057832c  83c004               add eax, 4
// 0057832f  85c9                 test ecx, ecx
// 00578331  77ee                 ja 0x578321
// 00578333  5e                   pop esi
// 00578334  c3                   ret 
// library rbxgs/v8datamodel\BrickColor.cpp (function ??$_Uninit_fill_n@PAVBrickColor@RBX@@IV12@V?$allocator@VBrickColor@RBX@@@std@@@std@@YAXPAVBrickColor@RBX@@IABV12@AAV?$allocator@VBrickColor@RBX@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/BrickColor.cpp
