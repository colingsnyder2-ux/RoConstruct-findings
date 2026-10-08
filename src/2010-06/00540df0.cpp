// roc 2010-06 00540df0  unit: RBX::AggregatingSceneManager  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00540df0
//
// 00540df0  83ec08               sub esp, 8
// 00540df3  53                   push ebx
// 00540df4  55                   push ebp
// 00540df5  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00540df9  56                   push esi
// 00540dfa  8bf1                 mov esi, ecx
// 00540dfc  57                   push edi
// 00540dfd  8b3d0ca99e00         mov edi, dword ptr [0x9ea90c]
// 00540e03  c7450000000000       mov dword ptr [ebp], 0
// 00540e0a  85f6                 test esi, esi
// 00540e0c  740e                 je 0x540e1c
// 00540e0e  8b442424             mov eax, dword ptr [esp + 0x24]
// 00540e12  39460c               cmp dword ptr [esi + 0xc], eax
// 00540e15  7705                 ja 0x540e1c
// 00540e17  3b4610               cmp eax, dword ptr [esi + 0x10]
// 00540e1a  7606                 jbe 0x540e22
// 00540e1c  ffd7                 call edi
// 00540e1e  8b442424             mov eax, dword ptr [esp + 0x24]
// 00540e22  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 00540e26  8b0e                 mov ecx, dword ptr [esi]
// 00540e28  894d00               mov dword ptr [ebp], ecx
// 00540e2b  894504               mov dword ptr [ebp + 4], eax
// 00540e2e  395e0c               cmp dword ptr [esi + 0xc], ebx
// 00540e31  7705                 ja 0x540e38
// 00540e33  3b5e10               cmp ebx, dword ptr [esi + 0x10]
// 00540e36  7606                 jbe 0x540e3e
// 00540e38  ffd7                 call edi
// 00540e3a  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 00540e3e  8b4500               mov eax, dword ptr [ebp]
// 00540e41  8b0e                 mov ecx, dword ptr [esi]
// 00540e43  85c0                 test eax, eax
// 00540e45  7404                 je 0x540e4b
// 00540e47  3bc1                 cmp eax, ecx
// 00540e49  7402                 je 0x540e4d
// 00540e4b  ffd7                 call edi
// 00540e4d  8b4504               mov eax, dword ptr [ebp + 4]
// 00540e50  89442414             mov dword ptr [esp + 0x14], eax
// 00540e54  3bc3                 cmp eax, ebx
// 00540e56  7449                 je 0x540ea1
// 00540e58  8b7e10               mov edi, dword ptr [esi + 0x10]
// 00540e5b  c644241c00           mov byte ptr [esp + 0x1c], 0
// 00540e60  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00540e64  52                   push edx
// 00540e65  8b542420             mov edx, dword ptr [esp + 0x20]
// 00540e69  c644241400           mov byte ptr [esp + 0x14], 0
// 00540e6e  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00540e72  51                   push ecx
// 00540e73  52                   push edx
// 00540e74  50                   push eax
// 00540e75  57                   push edi
// 00540e76  53                   push ebx
// 00540e77  e8f4e9ffff           call 0x53f870
// 00540e7c  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00540e80  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00540e84  2bfb                 sub edi, ebx
// 00540e86  51                   push ecx
// 00540e87  c1ff02               sar edi, 2
// 00540e8a  8d3cb8               lea edi, [eax + edi*4]
// 00540e8d  8b4610               mov eax, dword ptr [esi + 0x10]
// 00540e90  8d5608               lea edx, [esi + 8]
// 00540e93  52                   push edx
// 00540e94  50                   push eax
// 00540e95  57                   push edi
// 00540e96  e885f4ffff           call 0x540320
// 00540e9b  83c428               add esp, 0x28
// 00540e9e  897e10               mov dword ptr [esi + 0x10], edi
// 00540ea1  5f                   pop edi
// 00540ea2  5e                   pop esi
// 00540ea3  8bc5                 mov eax, ebp
// 00540ea5  5d                   pop ebp
// 00540ea6  5b                   pop ebx
// 00540ea7  83c408               add esp, 8
// 00540eaa  c21400               ret 0x14
// library rbxgs-render/AggregatingSceneManager.cpp (function ?erase@?$vector@V?$ReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@V?$allocator@V?$ReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@@std@@QAE?AV?$_Vector_iterator@V?$ReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@V?$allocator@V?$ReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@@2@V?$_Vector_const_iterator@V?$ReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@V?$allocator@V?$ReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@@2@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
