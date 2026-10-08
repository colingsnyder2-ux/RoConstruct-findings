// roc 2011-06 00452090  unit: VCRenderSettingsItem::?$FactoryProduct  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00452090
//
// 00452090  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00452094  85c9                 test ecx, ecx
// 00452096  761a                 jbe 0x4520b2
// 00452098  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0045209c  8b442404             mov eax, dword ptr [esp + 4]
// 004520a0  56                   push esi
// 004520a1  85c0                 test eax, eax
// 004520a3  7404                 je 0x4520a9
// 004520a5  8b32                 mov esi, dword ptr [edx]
// 004520a7  8930                 mov dword ptr [eax], esi
// 004520a9  49                   dec ecx
// 004520aa  83c004               add eax, 4
// 004520ad  85c9                 test ecx, ecx
// 004520af  77f0                 ja 0x4520a1
// 004520b1  5e                   pop esi
// 004520b2  c3                   ret 
// library rbxgs/v8datamodel\BrickColor.cpp (function ??$_Uninit_fill_n@PAVBrickColor@RBX@@IV12@V?$allocator@VBrickColor@RBX@@@std@@@std@@YAXPAVBrickColor@RBX@@IABV12@AAV?$allocator@VBrickColor@RBX@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/BrickColor.cpp
