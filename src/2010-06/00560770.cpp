// roc 2010-06 00560770  unit: G3D::_internal::DialogTemplate  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00560770
//
// 00560770  807c241400           cmp byte ptr [esp + 0x14], 0
// 00560775  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00560779  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0056077d  8b542404             mov edx, dword ptr [esp + 4]
// 00560781  50                   push eax
// 00560782  8b442414             mov eax, dword ptr [esp + 0x14]
// 00560786  51                   push ecx
// 00560787  52                   push edx
// 00560788  7409                 je 0x560793
// 0056078a  e891feffff           call 0x560620
// 0056078f  83c40c               add esp, 0xc
// 00560792  c3                   ret 
// 00560793  e868faffff           call 0x560200
// 00560798  83c40c               add esp, 0xc
// 0056079b  c3                   ret 
// library g3d-6.09/G3Dcpp\prompt.cpp (function ?prompt@G3D@@YAHPBD0PAPBDH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/prompt.cpp
