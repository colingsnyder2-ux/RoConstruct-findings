// roc 2007-08 004f0680  unit: RBX::Render::AggregatingSceneManager  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004f0680
//
// 004f0680  83ec0c               sub esp, 0xc
// 004f0683  55                   push ebp
// 004f0684  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 004f0688  56                   push esi
// 004f0689  57                   push edi
// 004f068a  8bf9                 mov edi, ecx
// 004f068c  8b7704               mov esi, dword ptr [edi + 4]
// 004f068f  8b4604               mov eax, dword ptr [esi + 4]
// 004f0692  80781500             cmp byte ptr [eax + 0x15], 0
// 004f0696  b101                 mov cl, 1
// 004f0698  884c240c             mov byte ptr [esp + 0xc], cl
// 004f069c  7520                 jne 0x4f06be
// 004f069e  8b5504               mov edx, dword ptr [ebp + 4]
// 004f06a1  3b5010               cmp edx, dword ptr [eax + 0x10]
// 004f06a4  8bf0                 mov esi, eax
// 004f06a6  0f92c1               setb cl
// 004f06a9  84c9                 test cl, cl
// 004f06ab  884c240c             mov byte ptr [esp + 0xc], cl
// 004f06af  7404                 je 0x4f06b5
// 004f06b1  8b00                 mov eax, dword ptr [eax]
// 004f06b3  eb03                 jmp 0x4f06b8
// 004f06b5  8b4008               mov eax, dword ptr [eax + 8]
// 004f06b8  80781500             cmp byte ptr [eax + 0x15], 0
// 004f06bc  74e3                 je 0x4f06a1
// 004f06be  84c9                 test cl, cl
// 004f06c0  8bd6                 mov edx, esi
// 004f06c2  89542414             mov dword ptr [esp + 0x14], edx
// 004f06c6  897c2410             mov dword ptr [esp + 0x10], edi
// 004f06ca  743d                 je 0x4f0709
// 004f06cc  8b4704               mov eax, dword ptr [edi + 4]
// 004f06cf  3b30                 cmp esi, dword ptr [eax]
// 004f06d1  8d4c2410             lea ecx, [esp + 0x10]
// 004f06d5  7529                 jne 0x4f0700
// 004f06d7  55                   push ebp
// 004f06d8  56                   push esi
// 004f06d9  6a01                 push 1
// 004f06db  51                   push ecx
// 004f06dc  8bcf                 mov ecx, edi
// 004f06de  e80dfbffff           call 0x4f01f0
// 004f06e3  8bc8                 mov ecx, eax
// 004f06e5  8b11                 mov edx, dword ptr [ecx]
// 004f06e7  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004f06eb  8b4904               mov ecx, dword ptr [ecx + 4]
// 004f06ee  5f                   pop edi
// 004f06ef  5e                   pop esi
// 004f06f0  8910                 mov dword ptr [eax], edx
// 004f06f2  894804               mov dword ptr [eax + 4], ecx
// 004f06f5  c6400801             mov byte ptr [eax + 8], 1
// 004f06f9  5d                   pop ebp
// 004f06fa  83c40c               add esp, 0xc
// 004f06fd  c20800               ret 8
// 004f0700  e82bebffff           call 0x4ef230
// 004f0705  8b542414             mov edx, dword ptr [esp + 0x14]
// 004f0709  8b4210               mov eax, dword ptr [edx + 0x10]
// 004f070c  3b4504               cmp eax, dword ptr [ebp + 4]
// 004f070f  730e                 jae 0x4f071f
// 004f0711  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004f0715  55                   push ebp
// 004f0716  56                   push esi
// 004f0717  51                   push ecx
// 004f0718  8d54241c             lea edx, [esp + 0x1c]
// 004f071c  52                   push edx
// 004f071d  ebbd                 jmp 0x4f06dc
// 004f071f  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004f0723  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004f0727  5f                   pop edi
// 004f0728  5e                   pop esi
// 004f0729  8908                 mov dword ptr [eax], ecx
// 004f072b  895004               mov dword ptr [eax + 4], edx
// 004f072e  c6400800             mov byte ptr [eax + 8], 0
// 004f0732  5d                   pop ebp
// 004f0733  83c40c               add esp, 0xc
// 004f0736  c20800               ret 8
// library rbxgs-render/AggregatingSceneManager.cpp (function ?insert@?$_Tree@V?$_Tset_traits@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@U?$less@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@V?$allocator@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@4@$0A@@std@@@std@@QAE?AU?$pair@Viterator@?$_Tree@V?$_Tset_traits@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@U?$less@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@V?$allocator@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@4@$0A@@std@@@std@@_N@2@ABV?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
