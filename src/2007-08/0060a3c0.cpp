// roc 2007-08 0060a3c0  unit: RBX::RotatePJoint  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0060a3c0
//
// 0060a3c0  8b442404             mov eax, dword ptr [esp + 4]
// 0060a3c4  8981bc000000         mov dword ptr [ecx + 0xbc], eax
// 0060a3ca  33c0                 xor eax, eax
// 0060a3cc  898188000000         mov dword ptr [ecx + 0x88], eax
// 0060a3d2  89818c000000         mov dword ptr [ecx + 0x8c], eax
// 0060a3d8  898190000000         mov dword ptr [ecx + 0x90], eax
// 0060a3de  8981ac000000         mov dword ptr [ecx + 0xac], eax
// 0060a3e4  898194000000         mov dword ptr [ecx + 0x94], eax
// 0060a3ea  898198000000         mov dword ptr [ecx + 0x98], eax
// 0060a3f0  8981b0000000         mov dword ptr [ecx + 0xb0], eax
// 0060a3f6  89819c000000         mov dword ptr [ecx + 0x9c], eax
// 0060a3fc  8981a0000000         mov dword ptr [ecx + 0xa0], eax
// 0060a402  8981b4000000         mov dword ptr [ecx + 0xb4], eax
// 0060a408  8981a4000000         mov dword ptr [ecx + 0xa4], eax
// 0060a40e  8981a8000000         mov dword ptr [ecx + 0xa8], eax
// 0060a414  8981b8000000         mov dword ptr [ecx + 0xb8], eax
// 0060a41a  c20400               ret 4
// library rbxgs/v8world\MutilJoint.cpp (function ?init@MultiJoint@RBX@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/MutilJoint.cpp
