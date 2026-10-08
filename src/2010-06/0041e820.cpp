// roc 2010-06 0041e820  unit: CSelectionTreeCtrl  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0041e820
//
// 0041e820  8b5118               mov edx, dword ptr [ecx + 0x18]
// 0041e823  8b4204               mov eax, dword ptr [edx + 4]
// 0041e826  80781500             cmp byte ptr [eax + 0x15], 0
// 0041e82a  53                   push ebx
// 0041e82b  55                   push ebp
// 0041e82c  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0041e830  56                   push esi
// 0041e831  8bda                 mov ebx, edx
// 0041e833  752e                 jne 0x41e863
// 0041e835  57                   push edi
// 0041e836  8b7d04               mov edi, dword ptr [ebp + 4]
// 0041e839  8da42400000000       lea esp, [esp]
// 0041e840  8b7010               mov esi, dword ptr [eax + 0x10]
// 0041e843  3bf7                 cmp esi, edi
// 0041e845  7305                 jae 0x41e84c
// 0041e847  8b4008               mov eax, dword ptr [eax + 8]
// 0041e84a  eb10                 jmp 0x41e85c
// 0041e84c  807a1500             cmp byte ptr [edx + 0x15], 0
// 0041e850  7406                 je 0x41e858
// 0041e852  3bfe                 cmp edi, esi
// 0041e854  7302                 jae 0x41e858
// 0041e856  8bd0                 mov edx, eax
// 0041e858  8bd8                 mov ebx, eax
// 0041e85a  8b00                 mov eax, dword ptr [eax]
// 0041e85c  80781500             cmp byte ptr [eax + 0x15], 0
// 0041e860  74de                 je 0x41e840
// 0041e862  5f                   pop edi
// 0041e863  807a1500             cmp byte ptr [edx + 0x15], 0
// 0041e867  7408                 je 0x41e871
// 0041e869  8b4118               mov eax, dword ptr [ecx + 0x18]
// 0041e86c  8b4004               mov eax, dword ptr [eax + 4]
// 0041e86f  eb02                 jmp 0x41e873
// 0041e871  8b02                 mov eax, dword ptr [edx]
// 0041e873  80781500             cmp byte ptr [eax + 0x15], 0
// 0041e877  751b                 jne 0x41e894
// 0041e879  8b7504               mov esi, dword ptr [ebp + 4]
// 0041e87c  8d642400             lea esp, [esp]
// 0041e880  3b7010               cmp esi, dword ptr [eax + 0x10]
// 0041e883  7306                 jae 0x41e88b
// 0041e885  8bd0                 mov edx, eax
// 0041e887  8b00                 mov eax, dword ptr [eax]
// 0041e889  eb03                 jmp 0x41e88e
// 0041e88b  8b4008               mov eax, dword ptr [eax + 8]
// 0041e88e  80781500             cmp byte ptr [eax + 0x15], 0
// 0041e892  74ec                 je 0x41e880
// 0041e894  8b442410             mov eax, dword ptr [esp + 0x10]
// 0041e898  8b09                 mov ecx, dword ptr [ecx]
// 0041e89a  5e                   pop esi
// 0041e89b  5d                   pop ebp
// 0041e89c  895804               mov dword ptr [eax + 4], ebx
// 0041e89f  8908                 mov dword ptr [eax], ecx
// 0041e8a1  894808               mov dword ptr [eax + 8], ecx
// 0041e8a4  89500c               mov dword ptr [eax + 0xc], edx
// 0041e8a7  5b                   pop ebx
// 0041e8a8  c20800               ret 8
// library rbxgs-render/AggregatingSceneManager.cpp (function ?_Eqrange@?$_Tree@V?$_Tset_traits@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@U?$less@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@V?$allocator@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@4@$0A@@std@@@std@@IAE?AU?$pair@Viterator@?$_Tree@V?$_Tset_traits@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@U?$less@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@V?$allocator@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@4@$0A@@std@@@std@@V123@@2@ABV?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
