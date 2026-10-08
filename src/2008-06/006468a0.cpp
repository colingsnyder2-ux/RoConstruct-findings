// roc 2008-06 006468a0  unit: RBX::RotatePJoint  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006468a0
//
// 006468a0  8b442404             mov eax, dword ptr [esp + 4]
// 006468a4  8981bc000000         mov dword ptr [ecx + 0xbc], eax
// 006468aa  33c0                 xor eax, eax
// 006468ac  898188000000         mov dword ptr [ecx + 0x88], eax
// 006468b2  89818c000000         mov dword ptr [ecx + 0x8c], eax
// 006468b8  898190000000         mov dword ptr [ecx + 0x90], eax
// 006468be  8981ac000000         mov dword ptr [ecx + 0xac], eax
// 006468c4  898194000000         mov dword ptr [ecx + 0x94], eax
// 006468ca  898198000000         mov dword ptr [ecx + 0x98], eax
// 006468d0  8981b0000000         mov dword ptr [ecx + 0xb0], eax
// 006468d6  89819c000000         mov dword ptr [ecx + 0x9c], eax
// 006468dc  8981a0000000         mov dword ptr [ecx + 0xa0], eax
// 006468e2  8981b4000000         mov dword ptr [ecx + 0xb4], eax
// 006468e8  8981a4000000         mov dword ptr [ecx + 0xa4], eax
// 006468ee  8981a8000000         mov dword ptr [ecx + 0xa8], eax
// 006468f4  8981b8000000         mov dword ptr [ecx + 0xb8], eax
// 006468fa  c20400               ret 4
// library rbxgs/v8world\MutilJoint.cpp (function ?init@MultiJoint@RBX@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/MutilJoint.cpp
