// roc 2009-06 0070afd0  unit: RBX::VCEvent::?$sp_counted_impl_p  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0070afd0
//
// 0070afd0  8b5118               mov edx, dword ptr [ecx + 0x18]
// 0070afd3  8b4204               mov eax, dword ptr [edx + 4]
// 0070afd6  80781500             cmp byte ptr [eax + 0x15], 0
// 0070afda  53                   push ebx
// 0070afdb  55                   push ebp
// 0070afdc  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0070afe0  56                   push esi
// 0070afe1  8bda                 mov ebx, edx
// 0070afe3  752e                 jne 0x70b013
// 0070afe5  57                   push edi
// 0070afe6  8b7d04               mov edi, dword ptr [ebp + 4]
// 0070afe9  8da42400000000       lea esp, [esp]
// 0070aff0  8b7010               mov esi, dword ptr [eax + 0x10]
// 0070aff3  3bf7                 cmp esi, edi
// 0070aff5  7305                 jae 0x70affc
// 0070aff7  8b4008               mov eax, dword ptr [eax + 8]
// 0070affa  eb10                 jmp 0x70b00c
// 0070affc  807a1500             cmp byte ptr [edx + 0x15], 0
// 0070b000  7406                 je 0x70b008
// 0070b002  3bfe                 cmp edi, esi
// 0070b004  7302                 jae 0x70b008
// 0070b006  8bd0                 mov edx, eax
// 0070b008  8bd8                 mov ebx, eax
// 0070b00a  8b00                 mov eax, dword ptr [eax]
// 0070b00c  80781500             cmp byte ptr [eax + 0x15], 0
// 0070b010  74de                 je 0x70aff0
// 0070b012  5f                   pop edi
// 0070b013  807a1500             cmp byte ptr [edx + 0x15], 0
// 0070b017  7408                 je 0x70b021
// 0070b019  8b4118               mov eax, dword ptr [ecx + 0x18]
// 0070b01c  8b4004               mov eax, dword ptr [eax + 4]
// 0070b01f  eb02                 jmp 0x70b023
// 0070b021  8b02                 mov eax, dword ptr [edx]
// 0070b023  80781500             cmp byte ptr [eax + 0x15], 0
// 0070b027  751b                 jne 0x70b044
// 0070b029  8b7504               mov esi, dword ptr [ebp + 4]
// 0070b02c  8d642400             lea esp, [esp]
// 0070b030  3b7010               cmp esi, dword ptr [eax + 0x10]
// 0070b033  7306                 jae 0x70b03b
// 0070b035  8bd0                 mov edx, eax
// 0070b037  8b00                 mov eax, dword ptr [eax]
// 0070b039  eb03                 jmp 0x70b03e
// 0070b03b  8b4008               mov eax, dword ptr [eax + 8]
// 0070b03e  80781500             cmp byte ptr [eax + 0x15], 0
// 0070b042  74ec                 je 0x70b030
// 0070b044  8b442410             mov eax, dword ptr [esp + 0x10]
// 0070b048  8b09                 mov ecx, dword ptr [ecx]
// 0070b04a  5e                   pop esi
// 0070b04b  5d                   pop ebp
// 0070b04c  895804               mov dword ptr [eax + 4], ebx
// 0070b04f  8908                 mov dword ptr [eax], ecx
// 0070b051  894808               mov dword ptr [eax + 8], ecx
// 0070b054  89500c               mov dword ptr [eax + 0xc], edx
// 0070b057  5b                   pop ebx
// 0070b058  c20800               ret 8
// library rbxgs-render/AggregatingSceneManager.cpp (function ?_Eqrange@?$_Tree@V?$_Tset_traits@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@U?$less@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@V?$allocator@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@4@$0A@@std@@@std@@IAE?AU?$pair@Viterator@?$_Tree@V?$_Tset_traits@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@U?$less@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@V?$allocator@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@4@$0A@@std@@@std@@V123@@2@ABV?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
