// from server: 100% by auto
// roc 2009-06 0057d020  unit: G3D::_internal::DialogTemplate  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0057d020
//
// 0057d020  807c241400           cmp byte ptr [esp + 0x14], 0
// 0057d025  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0057d029  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0057d02d  8b542404             mov edx, dword ptr [esp + 4]
// 0057d031  50                   push eax
// 0057d032  8b442414             mov eax, dword ptr [esp + 0x14]
// 0057d036  51                   push ecx
// 0057d037  52                   push edx
// 0057d038  7409                 je 0x57d043
// 0057d03a  e891feffff           call 0x57ced0
// 0057d03f  83c40c               add esp, 0xc
// 0057d042  c3                   ret 
// 0057d043  e868faffff           call 0x57cab0
// 0057d048  83c40c               add esp, 0xc
// 0057d04b  c3                   ret 
// library g3d-6.09/G3Dcpp\prompt.cpp (function ?prompt@G3D@@YAHPBD0PAPBDH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/prompt.cpp
