// roc 2007-03 0049e260  unit: seg_00490000  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0049e260
//
// 0049e260  8b5104               mov edx, dword ptr [ecx + 4]
// 0049e263  8b4204               mov eax, dword ptr [edx + 4]
// 0049e266  83ec10               sub esp, 0x10
// 0049e269  80781100             cmp byte ptr [eax + 0x11], 0
// 0049e26d  56                   push esi
// 0049e26e  57                   push edi
// 0049e26f  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0049e273  7516                 jne 0x49e28b
// 0049e275  8b37                 mov esi, dword ptr [edi]
// 0049e277  39700c               cmp dword ptr [eax + 0xc], esi
// 0049e27a  7305                 jae 0x49e281
// 0049e27c  8b4008               mov eax, dword ptr [eax + 8]
// 0049e27f  eb04                 jmp 0x49e285
// 0049e281  8bd0                 mov edx, eax
// 0049e283  8b00                 mov eax, dword ptr [eax]
// 0049e285  80781100             cmp byte ptr [eax + 0x11], 0
// 0049e289  74ec                 je 0x49e277
// 0049e28b  8b4104               mov eax, dword ptr [ecx + 4]
// 0049e28e  3bd0                 cmp edx, eax
// 0049e290  8954240c             mov dword ptr [esp + 0xc], edx
// 0049e294  894c2408             mov dword ptr [esp + 8], ecx
// 0049e298  740d                 je 0x49e2a7
// 0049e29a  8b37                 mov esi, dword ptr [edi]
// 0049e29c  3b720c               cmp esi, dword ptr [edx + 0xc]
// 0049e29f  7206                 jb 0x49e2a7
// 0049e2a1  8d4c2408             lea ecx, [esp + 8]
// 0049e2a5  eb0c                 jmp 0x49e2b3
// 0049e2a7  894c2410             mov dword ptr [esp + 0x10], ecx
// 0049e2ab  89442414             mov dword ptr [esp + 0x14], eax
// 0049e2af  8d4c2410             lea ecx, [esp + 0x10]
// 0049e2b3  8b11                 mov edx, dword ptr [ecx]
// 0049e2b5  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0049e2b9  8b4904               mov ecx, dword ptr [ecx + 4]
// 0049e2bc  5f                   pop edi
// 0049e2bd  8910                 mov dword ptr [eax], edx
// 0049e2bf  894804               mov dword ptr [eax + 4], ecx
// 0049e2c2  5e                   pop esi
// 0049e2c3  83c410               add esp, 0x10
// 0049e2c6  c20800               ret 8
// library rbxgs/v8world\Assembly.cpp (function ?find@?$_Tree@V?$_Tset_traits@PAVClump@RBX@@U?$less@PAVClump@RBX@@@std@@V?$allocator@PAVClump@RBX@@@4@$0A@@std@@@std@@QAE?AViterator@12@ABQAVClump@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
