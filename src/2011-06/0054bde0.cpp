// roc 2011-06 0054bde0  unit: G3D::_internal::DialogTemplate  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0054bde0
//
// 0054bde0  807c241400           cmp byte ptr [esp + 0x14], 0
// 0054bde5  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0054bde9  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0054bded  8b542404             mov edx, dword ptr [esp + 4]
// 0054bdf1  50                   push eax
// 0054bdf2  8b442414             mov eax, dword ptr [esp + 0x14]
// 0054bdf6  51                   push ecx
// 0054bdf7  52                   push edx
// 0054bdf8  7409                 je 0x54be03
// 0054bdfa  e891feffff           call 0x54bc90
// 0054bdff  83c40c               add esp, 0xc
// 0054be02  c3                   ret 
// 0054be03  e868faffff           call 0x54b870
// 0054be08  83c40c               add esp, 0xc
// 0054be0b  c3                   ret 
// library g3d-6.09/G3Dcpp\prompt.cpp (function ?prompt@G3D@@YAHPBD0PAPBDH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/prompt.cpp
