// roc 2007-03 00485e00  unit: seg_00480000  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00485e00
//
// 00485e00  c70100000000         mov dword ptr [ecx], 0
// 00485e06  56                   push esi
// 00485e07  8b7104               mov esi, dword ptr [ecx + 4]
// 00485e0a  85f6                 test esi, esi
// 00485e0c  c7410400000000       mov dword ptr [ecx + 4], 0
// 00485e13  742b                 je 0x485e40
// 00485e15  8d4604               lea eax, [esi + 4]
// 00485e18  83c9ff               or ecx, 0xffffffff
// 00485e1b  f00fc108             lock xadd dword ptr [eax], ecx
// 00485e1f  751f                 jne 0x485e40
// 00485e21  8b16                 mov edx, dword ptr [esi]
// 00485e23  8b4204               mov eax, dword ptr [edx + 4]
// 00485e26  8bce                 mov ecx, esi
// 00485e28  ffd0                 call eax
// 00485e2a  8d4e08               lea ecx, [esi + 8]
// 00485e2d  83caff               or edx, 0xffffffff
// 00485e30  f00fc111             lock xadd dword ptr [ecx], edx
// 00485e34  750a                 jne 0x485e40
// 00485e36  8b06                 mov eax, dword ptr [esi]
// 00485e38  8b5008               mov edx, dword ptr [eax + 8]
// 00485e3b  8bce                 mov ecx, esi
// 00485e3d  5e                   pop esi
// 00485e3e  ffe2                 jmp edx
// 00485e40  5e                   pop esi
// 00485e41  c3                   ret 
// library rbxgs/gui\GUI.cpp (function ?reset@?$shared_ptr@VGuiItem@RBX@@@boost@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
