// roc 2007-03 00415570  unit: seg_00410000  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00415570
//
// 00415570  56                   push esi
// 00415571  8b710c               mov esi, dword ptr [ecx + 0xc]
// 00415574  85f6                 test esi, esi
// 00415576  742b                 je 0x4155a3
// 00415578  8d4604               lea eax, [esi + 4]
// 0041557b  83c9ff               or ecx, 0xffffffff
// 0041557e  f00fc108             lock xadd dword ptr [eax], ecx
// 00415582  751f                 jne 0x4155a3
// 00415584  8b16                 mov edx, dword ptr [esi]
// 00415586  8b4204               mov eax, dword ptr [edx + 4]
// 00415589  8bce                 mov ecx, esi
// 0041558b  ffd0                 call eax
// 0041558d  8d4e08               lea ecx, [esi + 8]
// 00415590  83caff               or edx, 0xffffffff
// 00415593  f00fc111             lock xadd dword ptr [ecx], edx
// 00415597  750a                 jne 0x4155a3
// 00415599  8b06                 mov eax, dword ptr [esi]
// 0041559b  8b5008               mov edx, dword ptr [eax + 8]
// 0041559e  8bce                 mov ecx, esi
// 004155a0  5e                   pop esi
// 004155a1  ffe2                 jmp edx
// 004155a3  5e                   pop esi
// 004155a4  c3                   ret 
// library rbxgs/v8xml\SerializerV2.cpp (function ??1IDREFItem@MergeBinder@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
