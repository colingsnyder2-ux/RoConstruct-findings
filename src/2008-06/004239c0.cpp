// roc 2008-06 004239c0  unit: CSelectionTreeCtrl  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004239c0
//
// 004239c0  8b5118               mov edx, dword ptr [ecx + 0x18]
// 004239c3  8b4204               mov eax, dword ptr [edx + 4]
// 004239c6  80781500             cmp byte ptr [eax + 0x15], 0
// 004239ca  53                   push ebx
// 004239cb  55                   push ebp
// 004239cc  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 004239d0  56                   push esi
// 004239d1  8bda                 mov ebx, edx
// 004239d3  752e                 jne 0x423a03
// 004239d5  57                   push edi
// 004239d6  8b7d04               mov edi, dword ptr [ebp + 4]
// 004239d9  8da42400000000       lea esp, [esp]
// 004239e0  8b7010               mov esi, dword ptr [eax + 0x10]
// 004239e3  3bf7                 cmp esi, edi
// 004239e5  7305                 jae 0x4239ec
// 004239e7  8b4008               mov eax, dword ptr [eax + 8]
// 004239ea  eb10                 jmp 0x4239fc
// 004239ec  807a1500             cmp byte ptr [edx + 0x15], 0
// 004239f0  7406                 je 0x4239f8
// 004239f2  3bfe                 cmp edi, esi
// 004239f4  7302                 jae 0x4239f8
// 004239f6  8bd0                 mov edx, eax
// 004239f8  8bd8                 mov ebx, eax
// 004239fa  8b00                 mov eax, dword ptr [eax]
// 004239fc  80781500             cmp byte ptr [eax + 0x15], 0
// 00423a00  74de                 je 0x4239e0
// 00423a02  5f                   pop edi
// 00423a03  807a1500             cmp byte ptr [edx + 0x15], 0
// 00423a07  7408                 je 0x423a11
// 00423a09  8b4118               mov eax, dword ptr [ecx + 0x18]
// 00423a0c  8b4004               mov eax, dword ptr [eax + 4]
// 00423a0f  eb02                 jmp 0x423a13
// 00423a11  8b02                 mov eax, dword ptr [edx]
// 00423a13  80781500             cmp byte ptr [eax + 0x15], 0
// 00423a17  751b                 jne 0x423a34
// 00423a19  8b7504               mov esi, dword ptr [ebp + 4]
// 00423a1c  8d642400             lea esp, [esp]
// 00423a20  3b7010               cmp esi, dword ptr [eax + 0x10]
// 00423a23  7306                 jae 0x423a2b
// 00423a25  8bd0                 mov edx, eax
// 00423a27  8b00                 mov eax, dword ptr [eax]
// 00423a29  eb03                 jmp 0x423a2e
// 00423a2b  8b4008               mov eax, dword ptr [eax + 8]
// 00423a2e  80781500             cmp byte ptr [eax + 0x15], 0
// 00423a32  74ec                 je 0x423a20
// 00423a34  8b442410             mov eax, dword ptr [esp + 0x10]
// 00423a38  8b09                 mov ecx, dword ptr [ecx]
// 00423a3a  5e                   pop esi
// 00423a3b  5d                   pop ebp
// 00423a3c  895804               mov dword ptr [eax + 4], ebx
// 00423a3f  8908                 mov dword ptr [eax], ecx
// 00423a41  894808               mov dword ptr [eax + 8], ecx
// 00423a44  89500c               mov dword ptr [eax + 0xc], edx
// 00423a47  5b                   pop ebx
// 00423a48  c20800               ret 8
// library rbxgs-render/AggregatingSceneManager.cpp (function ?_Eqrange@?$_Tree@V?$_Tset_traits@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@U?$less@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@V?$allocator@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@4@$0A@@std@@@std@@IAE?AU?$pair@Viterator@?$_Tree@V?$_Tset_traits@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@U?$less@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@V?$allocator@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@4@$0A@@std@@@std@@V123@@2@ABV?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
