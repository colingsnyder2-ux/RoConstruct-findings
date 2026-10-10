// from server: 100% by tester
// roc 2008-06 005cd0d0  unit: RBX::P8Camera::?$GetSetImpl  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005cd0d0
//
// 005cd0d0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005cd0d4  85c9                 test ecx, ecx
// 005cd0d6  761a                 jbe 0x5cd0f2
// 005cd0d8  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005cd0dc  8b442404             mov eax, dword ptr [esp + 4]
// 005cd0e0  56                   push esi
// 005cd0e1  85c0                 test eax, eax
// 005cd0e3  7404                 je 0x5cd0e9
// 005cd0e5  8b32                 mov esi, dword ptr [edx]
// 005cd0e7  8930                 mov dword ptr [eax], esi
// 005cd0e9  49                   dec ecx
// 005cd0ea  83c004               add eax, 4
// 005cd0ed  85c9                 test ecx, ecx
// 005cd0ef  77f0                 ja 0x5cd0e1
// 005cd0f1  5e                   pop esi
// 005cd0f2  c3                   ret 
// library rbxgs/v8datamodel\BrickColor.cpp (function ??$_Uninit_fill_n@PAVBrickColor@RBX@@IV12@V?$allocator@VBrickColor@RBX@@@std@@@std@@YAXPAVBrickColor@RBX@@IABV12@AAV?$allocator@VBrickColor@RBX@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/BrickColor.cpp
