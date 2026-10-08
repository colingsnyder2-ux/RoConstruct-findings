// roc 2010-06 0070a210  unit: RBX::Joint  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0070a210
//
// 0070a210  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0070a214  85c9                 test ecx, ecx
// 0070a216  761a                 jbe 0x70a232
// 0070a218  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0070a21c  8b442404             mov eax, dword ptr [esp + 4]
// 0070a220  56                   push esi
// 0070a221  85c0                 test eax, eax
// 0070a223  7404                 je 0x70a229
// 0070a225  8b32                 mov esi, dword ptr [edx]
// 0070a227  8930                 mov dword ptr [eax], esi
// 0070a229  49                   dec ecx
// 0070a22a  83c004               add eax, 4
// 0070a22d  85c9                 test ecx, ecx
// 0070a22f  77f0                 ja 0x70a221
// 0070a231  5e                   pop esi
// 0070a232  c3                   ret 
// library rbxgs/v8datamodel\BrickColor.cpp (function ??$_Uninit_fill_n@PAVBrickColor@RBX@@IV12@V?$allocator@VBrickColor@RBX@@@std@@@std@@YAXPAVBrickColor@RBX@@IABV12@AAV?$allocator@VBrickColor@RBX@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/BrickColor.cpp
