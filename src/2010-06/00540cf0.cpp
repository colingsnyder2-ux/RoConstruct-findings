// roc 2010-06 00540cf0  unit: RBX::AggregatingSceneManager  size: 241 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00540cf0
//
// 00540cf0  83ec0c               sub esp, 0xc
// 00540cf3  53                   push ebx
// 00540cf4  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00540cf8  55                   push ebp
// 00540cf9  56                   push esi
// 00540cfa  57                   push edi
// 00540cfb  8bf9                 mov edi, ecx
// 00540cfd  8b7718               mov esi, dword ptr [edi + 0x18]
// 00540d00  8b4604               mov eax, dword ptr [esi + 4]
// 00540d03  80781500             cmp byte ptr [eax + 0x15], 0
// 00540d07  b101                 mov cl, 1
// 00540d09  884c2410             mov byte ptr [esp + 0x10], cl
// 00540d0d  7520                 jne 0x540d2f
// 00540d0f  8b5304               mov edx, dword ptr [ebx + 4]
// 00540d12  3b5010               cmp edx, dword ptr [eax + 0x10]
// 00540d15  8bf0                 mov esi, eax
// 00540d17  0f92c1               setb cl
// 00540d1a  884c2410             mov byte ptr [esp + 0x10], cl
// 00540d1e  84c9                 test cl, cl
// 00540d20  7404                 je 0x540d26
// 00540d22  8b00                 mov eax, dword ptr [eax]
// 00540d24  eb03                 jmp 0x540d29
// 00540d26  8b4008               mov eax, dword ptr [eax + 8]
// 00540d29  80781500             cmp byte ptr [eax + 0x15], 0
// 00540d2d  74e3                 je 0x540d12
// 00540d2f  8b17                 mov edx, dword ptr [edi]
// 00540d31  8bee                 mov ebp, esi
// 00540d33  896c2418             mov dword ptr [esp + 0x18], ebp
// 00540d37  89542414             mov dword ptr [esp + 0x14], edx
// 00540d3b  84c9                 test cl, cl
// 00540d3d  7452                 je 0x540d91
// 00540d3f  8b4718               mov eax, dword ptr [edi + 0x18]
// 00540d42  8b28                 mov ebp, dword ptr [eax]
// 00540d44  85d2                 test edx, edx
// 00540d46  7404                 je 0x540d4c
// 00540d48  3bd2                 cmp edx, edx
// 00540d4a  7406                 je 0x540d52
// 00540d4c  ff150ca99e00         call dword ptr [0x9ea90c]
// 00540d52  8d4c2414             lea ecx, [esp + 0x14]
// 00540d56  3bf5                 cmp esi, ebp
// 00540d58  752a                 jne 0x540d84
// 00540d5a  53                   push ebx
// 00540d5b  56                   push esi
// 00540d5c  6a01                 push 1
// 00540d5e  51                   push ecx
// 00540d5f  8bcf                 mov ecx, edi
// 00540d61  e81afaffff           call 0x540780
// 00540d66  5f                   pop edi
// 00540d67  8bc8                 mov ecx, eax
// 00540d69  8b11                 mov edx, dword ptr [ecx]
// 00540d6b  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00540d6f  8b4904               mov ecx, dword ptr [ecx + 4]
// 00540d72  5e                   pop esi
// 00540d73  5d                   pop ebp
// 00540d74  894804               mov dword ptr [eax + 4], ecx
// 00540d77  c6400801             mov byte ptr [eax + 8], 1
// 00540d7b  8910                 mov dword ptr [eax], edx
// 00540d7d  5b                   pop ebx
// 00540d7e  83c40c               add esp, 0xc
// 00540d81  c20800               ret 8
// 00540d84  e8b78e1c00           call 0x709c40
// 00540d89  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00540d8d  8b542414             mov edx, dword ptr [esp + 0x14]
// 00540d91  8b4510               mov eax, dword ptr [ebp + 0x10]
// 00540d94  3b4304               cmp eax, dword ptr [ebx + 4]
// 00540d97  7331                 jae 0x540dca
// 00540d99  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00540d9d  53                   push ebx
// 00540d9e  56                   push esi
// 00540d9f  51                   push ecx
// 00540da0  8d542420             lea edx, [esp + 0x20]
// 00540da4  52                   push edx
// 00540da5  8bcf                 mov ecx, edi
// 00540da7  e8d4f9ffff           call 0x540780
// 00540dac  5f                   pop edi
// 00540dad  8bc8                 mov ecx, eax
// 00540daf  8b11                 mov edx, dword ptr [ecx]
// 00540db1  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00540db5  8b4904               mov ecx, dword ptr [ecx + 4]
// 00540db8  5e                   pop esi
// 00540db9  5d                   pop ebp
// 00540dba  894804               mov dword ptr [eax + 4], ecx
// 00540dbd  c6400801             mov byte ptr [eax + 8], 1
// 00540dc1  8910                 mov dword ptr [eax], edx
// 00540dc3  5b                   pop ebx
// 00540dc4  83c40c               add esp, 0xc
// 00540dc7  c20800               ret 8
// 00540dca  8b442420             mov eax, dword ptr [esp + 0x20]
// 00540dce  5f                   pop edi
// 00540dcf  5e                   pop esi
// 00540dd0  896804               mov dword ptr [eax + 4], ebp
// 00540dd3  5d                   pop ebp
// 00540dd4  c6400800             mov byte ptr [eax + 8], 0
// 00540dd8  8910                 mov dword ptr [eax], edx
// 00540dda  5b                   pop ebx
// 00540ddb  83c40c               add esp, 0xc
// 00540dde  c20800               ret 8
// library rbxgs-render/AggregatingSceneManager.cpp (function ?insert@?$_Tree@V?$_Tset_traits@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@U?$less@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@V?$allocator@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@4@$0A@@std@@@std@@QAE?AU?$pair@Viterator@?$_Tree@V?$_Tset_traits@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@U?$less@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@V?$allocator@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@4@$0A@@std@@@std@@_N@2@ABV?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
