// roc 2012-06 00465640  unit: VCRenderSettingsItem::?$FactoryProduct  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00465640
//
// 00465640  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00465644  85c9                 test ecx, ecx
// 00465646  761a                 jbe 0x465662
// 00465648  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0046564c  8b442404             mov eax, dword ptr [esp + 4]
// 00465650  56                   push esi
// 00465651  85c0                 test eax, eax
// 00465653  7404                 je 0x465659
// 00465655  8b32                 mov esi, dword ptr [edx]
// 00465657  8930                 mov dword ptr [eax], esi
// 00465659  49                   dec ecx
// 0046565a  83c004               add eax, 4
// 0046565d  85c9                 test ecx, ecx
// 0046565f  77f0                 ja 0x465651
// 00465661  5e                   pop esi
// 00465662  c3                   ret 
// library rbxgs/v8datamodel\BrickColor.cpp (function ??$_Uninit_fill_n@PAVBrickColor@RBX@@IV12@V?$allocator@VBrickColor@RBX@@@std@@@std@@YAXPAVBrickColor@RBX@@IABV12@AAV?$allocator@VBrickColor@RBX@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/BrickColor.cpp
