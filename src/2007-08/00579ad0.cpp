// roc 2007-08 00579ad0  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00579ad0
//
// 00579ad0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00579ad4  85c9                 test ecx, ecx
// 00579ad6  761c                 jbe 0x579af4
// 00579ad8  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00579adc  8b442404             mov eax, dword ptr [esp + 4]
// 00579ae0  56                   push esi
// 00579ae1  85c0                 test eax, eax
// 00579ae3  7404                 je 0x579ae9
// 00579ae5  8b32                 mov esi, dword ptr [edx]
// 00579ae7  8930                 mov dword ptr [eax], esi
// 00579ae9  83e901               sub ecx, 1
// 00579aec  83c004               add eax, 4
// 00579aef  85c9                 test ecx, ecx
// 00579af1  77ee                 ja 0x579ae1
// 00579af3  5e                   pop esi
// 00579af4  c3                   ret 
// library rbxgs/v8datamodel\BrickColor.cpp (function ??$_Uninit_fill_n@PAVBrickColor@RBX@@IV12@V?$allocator@VBrickColor@RBX@@@std@@@std@@YAXPAVBrickColor@RBX@@IABV12@AAV?$allocator@VBrickColor@RBX@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/BrickColor.cpp
