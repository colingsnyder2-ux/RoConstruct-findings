// roc 2012-06 00639420  unit: G3D::_internal::DialogTemplate  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00639420
//
// 00639420  807c241400           cmp byte ptr [esp + 0x14], 0
// 00639425  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00639429  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0063942d  8b542404             mov edx, dword ptr [esp + 4]
// 00639431  50                   push eax
// 00639432  8b442414             mov eax, dword ptr [esp + 0x14]
// 00639436  51                   push ecx
// 00639437  52                   push edx
// 00639438  7409                 je 0x639443
// 0063943a  e891feffff           call 0x6392d0
// 0063943f  83c40c               add esp, 0xc
// 00639442  c3                   ret 
// 00639443  e868faffff           call 0x638eb0
// 00639448  83c40c               add esp, 0xc
// 0063944b  c3                   ret 
// library g3d-6.09/G3Dcpp\prompt.cpp (function ?prompt@G3D@@YAHPBD0PAPBDH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/prompt.cpp
