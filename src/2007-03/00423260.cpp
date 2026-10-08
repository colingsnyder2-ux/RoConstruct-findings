// roc 2007-03 00423260  unit: seg_00420000  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00423260
//
// 00423260  83ec0c               sub esp, 0xc
// 00423263  55                   push ebp
// 00423264  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00423268  56                   push esi
// 00423269  57                   push edi
// 0042326a  8bf9                 mov edi, ecx
// 0042326c  8b7704               mov esi, dword ptr [edi + 4]
// 0042326f  8b4604               mov eax, dword ptr [esi + 4]
// 00423272  80781500             cmp byte ptr [eax + 0x15], 0
// 00423276  b101                 mov cl, 1
// 00423278  884c240c             mov byte ptr [esp + 0xc], cl
// 0042327c  7520                 jne 0x42329e
// 0042327e  8b5504               mov edx, dword ptr [ebp + 4]
// 00423281  3b5010               cmp edx, dword ptr [eax + 0x10]
// 00423284  8bf0                 mov esi, eax
// 00423286  0f92c1               setb cl
// 00423289  84c9                 test cl, cl
// 0042328b  884c240c             mov byte ptr [esp + 0xc], cl
// 0042328f  7404                 je 0x423295
// 00423291  8b00                 mov eax, dword ptr [eax]
// 00423293  eb03                 jmp 0x423298
// 00423295  8b4008               mov eax, dword ptr [eax + 8]
// 00423298  80781500             cmp byte ptr [eax + 0x15], 0
// 0042329c  74e3                 je 0x423281
// 0042329e  84c9                 test cl, cl
// 004232a0  8bd6                 mov edx, esi
// 004232a2  89542414             mov dword ptr [esp + 0x14], edx
// 004232a6  897c2410             mov dword ptr [esp + 0x10], edi
// 004232aa  743d                 je 0x4232e9
// 004232ac  8b4704               mov eax, dword ptr [edi + 4]
// 004232af  3b30                 cmp esi, dword ptr [eax]
// 004232b1  8d4c2410             lea ecx, [esp + 0x10]
// 004232b5  7529                 jne 0x4232e0
// 004232b7  55                   push ebp
// 004232b8  56                   push esi
// 004232b9  6a01                 push 1
// 004232bb  51                   push ecx
// 004232bc  8bcf                 mov ecx, edi
// 004232be  e8cdfaffff           call 0x422d90
// 004232c3  8bc8                 mov ecx, eax
// 004232c5  8b11                 mov edx, dword ptr [ecx]
// 004232c7  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004232cb  8b4904               mov ecx, dword ptr [ecx + 4]
// 004232ce  5f                   pop edi
// 004232cf  5e                   pop esi
// 004232d0  8910                 mov dword ptr [eax], edx
// 004232d2  894804               mov dword ptr [eax + 4], ecx
// 004232d5  c6400801             mov byte ptr [eax + 8], 1
// 004232d9  5d                   pop ebp
// 004232da  83c40c               add esp, 0xc
// 004232dd  c20800               ret 8
// 004232e0  e89bc81000           call 0x52fb80
// 004232e5  8b542414             mov edx, dword ptr [esp + 0x14]
// 004232e9  8b4210               mov eax, dword ptr [edx + 0x10]
// 004232ec  3b4504               cmp eax, dword ptr [ebp + 4]
// 004232ef  730e                 jae 0x4232ff
// 004232f1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004232f5  55                   push ebp
// 004232f6  56                   push esi
// 004232f7  51                   push ecx
// 004232f8  8d54241c             lea edx, [esp + 0x1c]
// 004232fc  52                   push edx
// 004232fd  ebbd                 jmp 0x4232bc
// 004232ff  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00423303  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00423307  5f                   pop edi
// 00423308  5e                   pop esi
// 00423309  8908                 mov dword ptr [eax], ecx
// 0042330b  895004               mov dword ptr [eax + 4], edx
// 0042330e  c6400800             mov byte ptr [eax + 8], 0
// 00423312  5d                   pop ebp
// 00423313  83c40c               add esp, 0xc
// 00423316  c20800               ret 8
// library rbxgs-render/AggregatingSceneManager.cpp (function ?insert@?$_Tree@V?$_Tset_traits@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@U?$less@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@V?$allocator@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@4@$0A@@std@@@std@@QAE?AU?$pair@Viterator@?$_Tree@V?$_Tset_traits@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@U?$less@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@V?$allocator@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@4@$0A@@std@@@std@@_N@2@ABV?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
