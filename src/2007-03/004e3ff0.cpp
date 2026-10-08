// roc 2007-03 004e3ff0  unit: seg_004e0000  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004e3ff0
//
// 004e3ff0  83ec0c               sub esp, 0xc
// 004e3ff3  55                   push ebp
// 004e3ff4  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 004e3ff8  56                   push esi
// 004e3ff9  57                   push edi
// 004e3ffa  8bf9                 mov edi, ecx
// 004e3ffc  8b7704               mov esi, dword ptr [edi + 4]
// 004e3fff  8b4604               mov eax, dword ptr [esi + 4]
// 004e4002  80781500             cmp byte ptr [eax + 0x15], 0
// 004e4006  b101                 mov cl, 1
// 004e4008  884c240c             mov byte ptr [esp + 0xc], cl
// 004e400c  7520                 jne 0x4e402e
// 004e400e  8b5504               mov edx, dword ptr [ebp + 4]
// 004e4011  3b5010               cmp edx, dword ptr [eax + 0x10]
// 004e4014  8bf0                 mov esi, eax
// 004e4016  0f92c1               setb cl
// 004e4019  84c9                 test cl, cl
// 004e401b  884c240c             mov byte ptr [esp + 0xc], cl
// 004e401f  7404                 je 0x4e4025
// 004e4021  8b00                 mov eax, dword ptr [eax]
// 004e4023  eb03                 jmp 0x4e4028
// 004e4025  8b4008               mov eax, dword ptr [eax + 8]
// 004e4028  80781500             cmp byte ptr [eax + 0x15], 0
// 004e402c  74e3                 je 0x4e4011
// 004e402e  84c9                 test cl, cl
// 004e4030  8bd6                 mov edx, esi
// 004e4032  89542414             mov dword ptr [esp + 0x14], edx
// 004e4036  897c2410             mov dword ptr [esp + 0x10], edi
// 004e403a  743d                 je 0x4e4079
// 004e403c  8b4704               mov eax, dword ptr [edi + 4]
// 004e403f  3b30                 cmp esi, dword ptr [eax]
// 004e4041  8d4c2410             lea ecx, [esp + 0x10]
// 004e4045  7529                 jne 0x4e4070
// 004e4047  55                   push ebp
// 004e4048  56                   push esi
// 004e4049  6a01                 push 1
// 004e404b  51                   push ecx
// 004e404c  8bcf                 mov ecx, edi
// 004e404e  e80dfbffff           call 0x4e3b60
// 004e4053  8bc8                 mov ecx, eax
// 004e4055  8b11                 mov edx, dword ptr [ecx]
// 004e4057  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004e405b  8b4904               mov ecx, dword ptr [ecx + 4]
// 004e405e  5f                   pop edi
// 004e405f  5e                   pop esi
// 004e4060  8910                 mov dword ptr [eax], edx
// 004e4062  894804               mov dword ptr [eax + 4], ecx
// 004e4065  c6400801             mov byte ptr [eax + 8], 1
// 004e4069  5d                   pop ebp
// 004e406a  83c40c               add esp, 0xc
// 004e406d  c20800               ret 8
// 004e4070  e80bbb0400           call 0x52fb80
// 004e4075  8b542414             mov edx, dword ptr [esp + 0x14]
// 004e4079  8b4210               mov eax, dword ptr [edx + 0x10]
// 004e407c  3b4504               cmp eax, dword ptr [ebp + 4]
// 004e407f  730e                 jae 0x4e408f
// 004e4081  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004e4085  55                   push ebp
// 004e4086  56                   push esi
// 004e4087  51                   push ecx
// 004e4088  8d54241c             lea edx, [esp + 0x1c]
// 004e408c  52                   push edx
// 004e408d  ebbd                 jmp 0x4e404c
// 004e408f  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004e4093  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004e4097  5f                   pop edi
// 004e4098  5e                   pop esi
// 004e4099  8908                 mov dword ptr [eax], ecx
// 004e409b  895004               mov dword ptr [eax + 4], edx
// 004e409e  c6400800             mov byte ptr [eax + 8], 0
// 004e40a2  5d                   pop ebp
// 004e40a3  83c40c               add esp, 0xc
// 004e40a6  c20800               ret 8
// library rbxgs-render/AggregatingSceneManager.cpp (function ?insert@?$_Tree@V?$_Tset_traits@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@U?$less@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@V?$allocator@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@4@$0A@@std@@@std@@QAE?AU?$pair@Viterator@?$_Tree@V?$_Tset_traits@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@U?$less@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@V?$allocator@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@4@$0A@@std@@@std@@_N@2@ABV?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
