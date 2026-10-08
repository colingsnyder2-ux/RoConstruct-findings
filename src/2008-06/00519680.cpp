// from server: 100% by auto
// roc 2008-06 00519680  unit: G3D::_internal::DialogTemplate  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00519680
//
// 00519680  807c241400           cmp byte ptr [esp + 0x14], 0
// 00519685  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00519689  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0051968d  8b542404             mov edx, dword ptr [esp + 4]
// 00519691  50                   push eax
// 00519692  8b442414             mov eax, dword ptr [esp + 0x14]
// 00519696  51                   push ecx
// 00519697  52                   push edx
// 00519698  7409                 je 0x5196a3
// 0051969a  e891feffff           call 0x519530
// 0051969f  83c40c               add esp, 0xc
// 005196a2  c3                   ret 
// 005196a3  e868faffff           call 0x519110
// 005196a8  83c40c               add esp, 0xc
// 005196ab  c3                   ret 
// library g3d-6.09/G3Dcpp\prompt.cpp (function ?prompt@G3D@@YAHPBD0PAPBDH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/prompt.cpp
