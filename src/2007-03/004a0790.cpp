// roc 2007-03 004a0790  unit: seg_004a0000  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004a0790
//
// 004a0790  83ec0c               sub esp, 0xc
// 004a0793  55                   push ebp
// 004a0794  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 004a0798  56                   push esi
// 004a0799  57                   push edi
// 004a079a  8bf9                 mov edi, ecx
// 004a079c  8b7704               mov esi, dword ptr [edi + 4]
// 004a079f  8b4604               mov eax, dword ptr [esi + 4]
// 004a07a2  80781900             cmp byte ptr [eax + 0x19], 0
// 004a07a6  b101                 mov cl, 1
// 004a07a8  884c240c             mov byte ptr [esp + 0xc], cl
// 004a07ac  7520                 jne 0x4a07ce
// 004a07ae  8b5500               mov edx, dword ptr [ebp]
// 004a07b1  3b500c               cmp edx, dword ptr [eax + 0xc]
// 004a07b4  8bf0                 mov esi, eax
// 004a07b6  0f92c1               setb cl
// 004a07b9  84c9                 test cl, cl
// 004a07bb  884c240c             mov byte ptr [esp + 0xc], cl
// 004a07bf  7404                 je 0x4a07c5
// 004a07c1  8b00                 mov eax, dword ptr [eax]
// 004a07c3  eb03                 jmp 0x4a07c8
// 004a07c5  8b4008               mov eax, dword ptr [eax + 8]
// 004a07c8  80781900             cmp byte ptr [eax + 0x19], 0
// 004a07cc  74e3                 je 0x4a07b1
// 004a07ce  84c9                 test cl, cl
// 004a07d0  8bd6                 mov edx, esi
// 004a07d2  89542414             mov dword ptr [esp + 0x14], edx
// 004a07d6  897c2410             mov dword ptr [esp + 0x10], edi
// 004a07da  743d                 je 0x4a0819
// 004a07dc  8b4704               mov eax, dword ptr [edi + 4]
// 004a07df  3b30                 cmp esi, dword ptr [eax]
// 004a07e1  8d4c2410             lea ecx, [esp + 0x10]
// 004a07e5  7529                 jne 0x4a0810
// 004a07e7  55                   push ebp
// 004a07e8  56                   push esi
// 004a07e9  6a01                 push 1
// 004a07eb  51                   push ecx
// 004a07ec  8bcf                 mov ecx, edi
// 004a07ee  e8edecffff           call 0x49f4e0
// 004a07f3  8bc8                 mov ecx, eax
// 004a07f5  8b11                 mov edx, dword ptr [ecx]
// 004a07f7  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004a07fb  8b4904               mov ecx, dword ptr [ecx + 4]
// 004a07fe  5f                   pop edi
// 004a07ff  5e                   pop esi
// 004a0800  8910                 mov dword ptr [eax], edx
// 004a0802  894804               mov dword ptr [eax + 4], ecx
// 004a0805  c6400801             mov byte ptr [eax + 8], 1
// 004a0809  5d                   pop ebp
// 004a080a  83c40c               add esp, 0xc
// 004a080d  c20800               ret 8
// 004a0810  e8fb061500           call 0x5f0f10
// 004a0815  8b542414             mov edx, dword ptr [esp + 0x14]
// 004a0819  8b420c               mov eax, dword ptr [edx + 0xc]
// 004a081c  3b4500               cmp eax, dword ptr [ebp]
// 004a081f  730e                 jae 0x4a082f
// 004a0821  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004a0825  55                   push ebp
// 004a0826  56                   push esi
// 004a0827  51                   push ecx
// 004a0828  8d54241c             lea edx, [esp + 0x1c]
// 004a082c  52                   push edx
// 004a082d  ebbd                 jmp 0x4a07ec
// 004a082f  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004a0833  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004a0837  5f                   pop edi
// 004a0838  5e                   pop esi
// 004a0839  8908                 mov dword ptr [eax], ecx
// 004a083b  895004               mov dword ptr [eax + 4], edx
// 004a083e  c6400800             mov byte ptr [eax + 8], 0
// 004a0842  5d                   pop ebp
// 004a0843  83c40c               add esp, 0xc
// 004a0846  c20800               ret 8
// library rbxgs/reflection\signal.cpp (function ?insert@?$_Tree@V?$_Tmap_traits@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@$0A@@std@@@std@@QAE?AU?$pair@Viterator@?$_Tree@V?$_Tmap_traits@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@$0A@@std@@@std@@_N@2@ABU?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/signal.cpp
