// roc 2007-03 005d3570  unit: seg_005d0000  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005d3570
//
// 005d3570  56                   push esi
// 005d3571  8b7104               mov esi, dword ptr [ecx + 4]
// 005d3574  85f6                 test esi, esi
// 005d3576  742b                 je 0x5d35a3
// 005d3578  8d4604               lea eax, [esi + 4]
// 005d357b  83c9ff               or ecx, 0xffffffff
// 005d357e  f00fc108             lock xadd dword ptr [eax], ecx
// 005d3582  751f                 jne 0x5d35a3
// 005d3584  8b16                 mov edx, dword ptr [esi]
// 005d3586  8b4204               mov eax, dword ptr [edx + 4]
// 005d3589  8bce                 mov ecx, esi
// 005d358b  ffd0                 call eax
// 005d358d  8d4e08               lea ecx, [esi + 8]
// 005d3590  83caff               or edx, 0xffffffff
// 005d3593  f00fc111             lock xadd dword ptr [ecx], edx
// 005d3597  750a                 jne 0x5d35a3
// 005d3599  8b06                 mov eax, dword ptr [esi]
// 005d359b  8b5008               mov edx, dword ptr [eax + 8]
// 005d359e  8bce                 mov ecx, esi
// 005d35a0  5e                   pop esi
// 005d35a1  ffe2                 jmp edx
// 005d35a3  5e                   pop esi
// 005d35a4  c3                   ret 
// library rbxgs/gui\GUI.cpp (function ??1?$shared_ptr@VInstance@RBX@@@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
