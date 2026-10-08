// roc 2007-08 004219e0  unit: CSelectionTreeCtrl  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004219e0
//
// 004219e0  8b5104               mov edx, dword ptr [ecx + 4]
// 004219e3  8b4204               mov eax, dword ptr [edx + 4]
// 004219e6  80781500             cmp byte ptr [eax + 0x15], 0
// 004219ea  56                   push esi
// 004219eb  57                   push edi
// 004219ec  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004219f0  7517                 jne 0x421a09
// 004219f2  8b7704               mov esi, dword ptr [edi + 4]
// 004219f5  3b7010               cmp esi, dword ptr [eax + 0x10]
// 004219f8  7306                 jae 0x421a00
// 004219fa  8bd0                 mov edx, eax
// 004219fc  8b00                 mov eax, dword ptr [eax]
// 004219fe  eb03                 jmp 0x421a03
// 00421a00  8b4008               mov eax, dword ptr [eax + 8]
// 00421a03  80781500             cmp byte ptr [eax + 0x15], 0
// 00421a07  74ec                 je 0x4219f5
// 00421a09  8b7104               mov esi, dword ptr [ecx + 4]
// 00421a0c  8b4604               mov eax, dword ptr [esi + 4]
// 00421a0f  80781500             cmp byte ptr [eax + 0x15], 0
// 00421a13  7517                 jne 0x421a2c
// 00421a15  8b7f04               mov edi, dword ptr [edi + 4]
// 00421a18  397810               cmp dword ptr [eax + 0x10], edi
// 00421a1b  7305                 jae 0x421a22
// 00421a1d  8b4008               mov eax, dword ptr [eax + 8]
// 00421a20  eb04                 jmp 0x421a26
// 00421a22  8bf0                 mov esi, eax
// 00421a24  8b00                 mov eax, dword ptr [eax]
// 00421a26  80781500             cmp byte ptr [eax + 0x15], 0
// 00421a2a  74ec                 je 0x421a18
// 00421a2c  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00421a30  5f                   pop edi
// 00421a31  897004               mov dword ptr [eax + 4], esi
// 00421a34  8908                 mov dword ptr [eax], ecx
// 00421a36  894808               mov dword ptr [eax + 8], ecx
// 00421a39  89500c               mov dword ptr [eax + 0xc], edx
// 00421a3c  5e                   pop esi
// 00421a3d  c20800               ret 8
// library rbxgs-render/AggregatingSceneManager.cpp (function ?equal_range@?$_Tree@V?$_Tset_traits@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@U?$less@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@V?$allocator@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@4@$0A@@std@@@std@@QAE?AU?$pair@Viterator@?$_Tree@V?$_Tset_traits@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@U?$less@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@V?$allocator@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@4@$0A@@std@@@std@@V123@@2@ABV?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
