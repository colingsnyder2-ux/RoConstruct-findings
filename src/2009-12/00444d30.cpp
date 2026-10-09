// roc 2009-12 00444d30  unit: G3D::VVector2int16::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00444d30
//
// 00444d30  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00444d34  85c9                 test ecx, ecx
// 00444d36  761a                 jbe 0x444d52
// 00444d38  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00444d3c  8b442404             mov eax, dword ptr [esp + 4]
// 00444d40  56                   push esi
// 00444d41  85c0                 test eax, eax
// 00444d43  7404                 je 0x444d49
// 00444d45  8b32                 mov esi, dword ptr [edx]
// 00444d47  8930                 mov dword ptr [eax], esi
// 00444d49  49                   dec ecx
// 00444d4a  83c004               add eax, 4
// 00444d4d  85c9                 test ecx, ecx
// 00444d4f  77f0                 ja 0x444d41
// 00444d51  5e                   pop esi
// 00444d52  c3                   ret 
// library rbxgs/v8datamodel\BrickColor.cpp (function ??$_Uninit_fill_n@PAVBrickColor@RBX@@IV12@V?$allocator@VBrickColor@RBX@@@std@@@std@@YAXPAVBrickColor@RBX@@IABV12@AAV?$allocator@VBrickColor@RBX@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/BrickColor.cpp
