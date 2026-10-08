// roc 2007-03 005f1df0  unit: seg_005f0000  size: 273 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005f1df0
//
// 005f1df0  83ec0c               sub esp, 0xc
// 005f1df3  53                   push ebx
// 005f1df4  55                   push ebp
// 005f1df5  8bd9                 mov ebx, ecx
// 005f1df7  8b4b04               mov ecx, dword ptr [ebx + 4]
// 005f1dfa  8b4104               mov eax, dword ptr [ecx + 4]
// 005f1dfd  80781500             cmp byte ptr [eax + 0x15], 0
// 005f1e01  56                   push esi
// 005f1e02  57                   push edi
// 005f1e03  8bf9                 mov edi, ecx
// 005f1e05  b101                 mov cl, 1
// 005f1e07  884c2410             mov byte ptr [esp + 0x10], cl
// 005f1e0b  751e                 jne 0x5f1e2b
// 005f1e0d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005f1e11  8b29                 mov ebp, dword ptr [ecx]
// 005f1e13  8b700c               mov esi, dword ptr [eax + 0xc]
// 005f1e16  3bee                 cmp ebp, esi
// 005f1e18  8bf8                 mov edi, eax
// 005f1e1a  7556                 jne 0x5f1e72
// 005f1e1c  32c9                 xor cl, cl
// 005f1e1e  884c2410             mov byte ptr [esp + 0x10], cl
// 005f1e22  8b4008               mov eax, dword ptr [eax + 8]
// 005f1e25  80781500             cmp byte ptr [eax + 0x15], 0
// 005f1e29  74e8                 je 0x5f1e13
// 005f1e2b  84c9                 test cl, cl
// 005f1e2d  8bd7                 mov edx, edi
// 005f1e2f  89542418             mov dword ptr [esp + 0x18], edx
// 005f1e33  895c2414             mov dword ptr [esp + 0x14], ebx
// 005f1e37  746a                 je 0x5f1ea3
// 005f1e39  8b4304               mov eax, dword ptr [ebx + 4]
// 005f1e3c  3b38                 cmp edi, dword ptr [eax]
// 005f1e3e  7556                 jne 0x5f1e96
// 005f1e40  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005f1e44  51                   push ecx
// 005f1e45  57                   push edi
// 005f1e46  6a01                 push 1
// 005f1e48  8d542420             lea edx, [esp + 0x20]
// 005f1e4c  52                   push edx
// 005f1e4d  8bcb                 mov ecx, ebx
// 005f1e4f  e87cd5ffff           call 0x5ef3d0
// 005f1e54  5f                   pop edi
// 005f1e55  8bc8                 mov ecx, eax
// 005f1e57  8b11                 mov edx, dword ptr [ecx]
// 005f1e59  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005f1e5d  8b4904               mov ecx, dword ptr [ecx + 4]
// 005f1e60  5e                   pop esi
// 005f1e61  5d                   pop ebp
// 005f1e62  8910                 mov dword ptr [eax], edx
// 005f1e64  894804               mov dword ptr [eax + 4], ecx
// 005f1e67  c6400801             mov byte ptr [eax + 8], 1
// 005f1e6b  5b                   pop ebx
// 005f1e6c  83c40c               add esp, 0xc
// 005f1e6f  c20800               ret 8
// 005f1e72  8b542424             mov edx, dword ptr [esp + 0x24]
// 005f1e76  8b4a04               mov ecx, dword ptr [edx + 4]
// 005f1e79  8b5010               mov edx, dword ptr [eax + 0x10]
// 005f1e7c  3bca                 cmp ecx, edx
// 005f1e7e  7507                 jne 0x5f1e87
// 005f1e80  3bee                 cmp ebp, esi
// 005f1e82  0f92c1               setb cl
// 005f1e85  eb03                 jmp 0x5f1e8a
// 005f1e87  0f9cc1               setl cl
// 005f1e8a  84c9                 test cl, cl
// 005f1e8c  884c2410             mov byte ptr [esp + 0x10], cl
// 005f1e90  7490                 je 0x5f1e22
// 005f1e92  8b00                 mov eax, dword ptr [eax]
// 005f1e94  eb8f                 jmp 0x5f1e25
// 005f1e96  8d4c2414             lea ecx, [esp + 0x14]
// 005f1e9a  e8e1dcf3ff           call 0x52fb80
// 005f1e9f  8b542418             mov edx, dword ptr [esp + 0x18]
// 005f1ea3  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005f1ea7  8b420c               mov eax, dword ptr [edx + 0xc]
// 005f1eaa  8b29                 mov ebp, dword ptr [ecx]
// 005f1eac  3bc5                 cmp eax, ebp
// 005f1eae  7436                 je 0x5f1ee6
// 005f1eb0  8b742424             mov esi, dword ptr [esp + 0x24]
// 005f1eb4  8b4a10               mov ecx, dword ptr [edx + 0x10]
// 005f1eb7  8b7604               mov esi, dword ptr [esi + 4]
// 005f1eba  3bce                 cmp ecx, esi
// 005f1ebc  7508                 jne 0x5f1ec6
// 005f1ebe  3bc5                 cmp eax, ebp
// 005f1ec0  1bc0                 sbb eax, eax
// 005f1ec2  f7d8                 neg eax
// 005f1ec4  eb07                 jmp 0x5f1ecd
// 005f1ec6  33c0                 xor eax, eax
// 005f1ec8  3bce                 cmp ecx, esi
// 005f1eca  0f9cc0               setl al
// 005f1ecd  84c0                 test al, al
// 005f1ecf  7415                 je 0x5f1ee6
// 005f1ed1  8b542424             mov edx, dword ptr [esp + 0x24]
// 005f1ed5  8b442410             mov eax, dword ptr [esp + 0x10]
// 005f1ed9  52                   push edx
// 005f1eda  57                   push edi
// 005f1edb  50                   push eax
// 005f1edc  8d4c2420             lea ecx, [esp + 0x20]
// 005f1ee0  51                   push ecx
// 005f1ee1  e967ffffff           jmp 0x5f1e4d
// 005f1ee6  8b442420             mov eax, dword ptr [esp + 0x20]
// 005f1eea  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005f1eee  5f                   pop edi
// 005f1eef  5e                   pop esi
// 005f1ef0  5d                   pop ebp
// 005f1ef1  8908                 mov dword ptr [eax], ecx
// 005f1ef3  895004               mov dword ptr [eax + 4], edx
// 005f1ef6  c6400800             mov byte ptr [eax + 8], 0
// 005f1efa  5b                   pop ebx
// 005f1efb  83c40c               add esp, 0xc
// 005f1efe  c20800               ret 8
// library rbxgs/v8world\ClumpStage.cpp (function ?insert@?$_Tree@V?$_Tset_traits@VAnchorEntry@RBX@@VAnchorSortCriterion@2@V?$allocator@VAnchorEntry@RBX@@@std@@$0A@@std@@@std@@QAE?AU?$pair@Viterator@?$_Tree@V?$_Tset_traits@VAnchorEntry@RBX@@VAnchorSortCriterion@2@V?$allocator@VAnchorEntry@RBX@@@std@@$0A@@std@@@std@@_N@2@ABVAnchorEntry@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/ClumpStage.cpp
