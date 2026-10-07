// roc 2007-08 00511dd0  unit: G3D::_internal::DialogTemplate  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00511dd0
//
// 00511dd0  807c241400           cmp byte ptr [esp + 0x14], 0
// 00511dd5  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00511dd9  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00511ddd  8b542404             mov edx, dword ptr [esp + 4]
// 00511de1  50                   push eax
// 00511de2  8b442414             mov eax, dword ptr [esp + 0x14]
// 00511de6  51                   push ecx
// 00511de7  52                   push edx
// 00511de8  7409                 je 0x511df3
// 00511dea  e881feffff           call 0x511c70
// 00511def  83c40c               add esp, 0xc
// 00511df2  c3                   ret 
// 00511df3  e848faffff           call 0x511840
// 00511df8  83c40c               add esp, 0xc
// 00511dfb  c3                   ret 
// library g3d-6.09/G3Dcpp\prompt.cpp (function ?prompt@G3D@@YAHPBD0PAPBDH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/prompt.cpp
