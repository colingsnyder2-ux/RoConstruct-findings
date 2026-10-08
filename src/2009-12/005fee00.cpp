// roc 2009-12 005fee00  unit: G3D::_internal::DialogTemplate  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005fee00
//
// 005fee00  807c241400           cmp byte ptr [esp + 0x14], 0
// 005fee05  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005fee09  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005fee0d  8b542404             mov edx, dword ptr [esp + 4]
// 005fee11  50                   push eax
// 005fee12  8b442414             mov eax, dword ptr [esp + 0x14]
// 005fee16  51                   push ecx
// 005fee17  52                   push edx
// 005fee18  7409                 je 0x5fee23
// 005fee1a  e891feffff           call 0x5fecb0
// 005fee1f  83c40c               add esp, 0xc
// 005fee22  c3                   ret 
// 005fee23  e868faffff           call 0x5fe890
// 005fee28  83c40c               add esp, 0xc
// 005fee2b  c3                   ret 
// library g3d-6.09/G3Dcpp\prompt.cpp (function ?prompt@G3D@@YAHPBD0PAPBDH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/prompt.cpp
