// roc 2007-03 005f1f10  unit: seg_005f0000  size: 300 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005f1f10
//
// 005f1f10  83ec0c               sub esp, 0xc
// 005f1f13  53                   push ebx
// 005f1f14  8bd9                 mov ebx, ecx
// 005f1f16  8b4b04               mov ecx, dword ptr [ebx + 4]
// 005f1f19  8b4104               mov eax, dword ptr [ecx + 4]
// 005f1f1c  80781900             cmp byte ptr [eax + 0x19], 0
// 005f1f20  55                   push ebp
// 005f1f21  56                   push esi
// 005f1f22  8be9                 mov ebp, ecx
// 005f1f24  b101                 mov cl, 1
// 005f1f26  57                   push edi
// 005f1f27  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 005f1f2b  884c2410             mov byte ptr [esp + 0x10], cl
// 005f1f2f  751a                 jne 0x5f1f4b
// 005f1f31  8b37                 mov esi, dword ptr [edi]
// 005f1f33  8b480c               mov ecx, dword ptr [eax + 0xc]
// 005f1f36  3bf1                 cmp esi, ecx
// 005f1f38  8be8                 mov ebp, eax
// 005f1f3a  7556                 jne 0x5f1f92
// 005f1f3c  32c9                 xor cl, cl
// 005f1f3e  884c2410             mov byte ptr [esp + 0x10], cl
// 005f1f42  8b4008               mov eax, dword ptr [eax + 8]
// 005f1f45  80781900             cmp byte ptr [eax + 0x19], 0
// 005f1f49  74e8                 je 0x5f1f33
// 005f1f4b  84c9                 test cl, cl
// 005f1f4d  8bf5                 mov esi, ebp
// 005f1f4f  89742418             mov dword ptr [esp + 0x18], esi
// 005f1f53  895c2414             mov dword ptr [esp + 0x14], ebx
// 005f1f57  0f8483000000         je 0x5f1fe0
// 005f1f5d  8b5304               mov edx, dword ptr [ebx + 4]
// 005f1f60  3b2a                 cmp ebp, dword ptr [edx]
// 005f1f62  756f                 jne 0x5f1fd3
// 005f1f64  57                   push edi
// 005f1f65  55                   push ebp
// 005f1f66  6a01                 push 1
// 005f1f68  8d442420             lea eax, [esp + 0x20]
// 005f1f6c  50                   push eax
// 005f1f6d  8bcb                 mov ecx, ebx
// 005f1f6f  e89cf8ffff           call 0x5f1810
// 005f1f74  5f                   pop edi
// 005f1f75  8bc8                 mov ecx, eax
// 005f1f77  8b11                 mov edx, dword ptr [ecx]
// 005f1f79  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005f1f7d  8b4904               mov ecx, dword ptr [ecx + 4]
// 005f1f80  5e                   pop esi
// 005f1f81  5d                   pop ebp
// 005f1f82  894804               mov dword ptr [eax + 4], ecx
// 005f1f85  c6400801             mov byte ptr [eax + 8], 1
// 005f1f89  8910                 mov dword ptr [eax], edx
// 005f1f8b  5b                   pop ebx
// 005f1f8c  83c40c               add esp, 0xc
// 005f1f8f  c20800               ret 8
// 005f1f92  8a5704               mov dl, byte ptr [edi + 4]
// 005f1f95  3a5010               cmp dl, byte ptr [eax + 0x10]
// 005f1f98  750f                 jne 0x5f1fa9
// 005f1f9a  8b5708               mov edx, dword ptr [edi + 8]
// 005f1f9d  3b5014               cmp edx, dword ptr [eax + 0x14]
// 005f1fa0  7507                 jne 0x5f1fa9
// 005f1fa2  3bf1                 cmp esi, ecx
// 005f1fa4  0f92c1               setb cl
// 005f1fa7  eb17                 jmp 0x5f1fc0
// 005f1fa9  8a4810               mov cl, byte ptr [eax + 0x10]
// 005f1fac  384f04               cmp byte ptr [edi + 4], cl
// 005f1faf  7405                 je 0x5f1fb6
// 005f1fb1  0fb6c9               movzx ecx, cl
// 005f1fb4  eb0a                 jmp 0x5f1fc0
// 005f1fb6  8b4f08               mov ecx, dword ptr [edi + 8]
// 005f1fb9  3b4814               cmp ecx, dword ptr [eax + 0x14]
// 005f1fbc  1bc9                 sbb ecx, ecx
// 005f1fbe  f7d9                 neg ecx
// 005f1fc0  84c9                 test cl, cl
// 005f1fc2  884c2410             mov byte ptr [esp + 0x10], cl
// 005f1fc6  0f8476ffffff         je 0x5f1f42
// 005f1fcc  8b00                 mov eax, dword ptr [eax]
// 005f1fce  e972ffffff           jmp 0x5f1f45
// 005f1fd3  8d4c2414             lea ecx, [esp + 0x14]
// 005f1fd7  e834efffff           call 0x5f0f10
// 005f1fdc  8b742418             mov esi, dword ptr [esp + 0x18]
// 005f1fe0  57                   push edi
// 005f1fe1  8d560c               lea edx, [esi + 0xc]
// 005f1fe4  52                   push edx
// 005f1fe5  8bcb                 mov ecx, ebx
// 005f1fe7  e8a4eeffff           call 0x5f0e90
// 005f1fec  84c0                 test al, al
// 005f1fee  7431                 je 0x5f2021
// 005f1ff0  8b442410             mov eax, dword ptr [esp + 0x10]
// 005f1ff4  57                   push edi
// 005f1ff5  55                   push ebp
// 005f1ff6  50                   push eax
// 005f1ff7  8d4c2420             lea ecx, [esp + 0x20]
// 005f1ffb  51                   push ecx
// 005f1ffc  8bcb                 mov ecx, ebx
// 005f1ffe  e80df8ffff           call 0x5f1810
// 005f2003  5f                   pop edi
// 005f2004  8bc8                 mov ecx, eax
// 005f2006  8b11                 mov edx, dword ptr [ecx]
// 005f2008  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005f200c  8b4904               mov ecx, dword ptr [ecx + 4]
// 005f200f  5e                   pop esi
// 005f2010  5d                   pop ebp
// 005f2011  894804               mov dword ptr [eax + 4], ecx
// 005f2014  c6400801             mov byte ptr [eax + 8], 1
// 005f2018  8910                 mov dword ptr [eax], edx
// 005f201a  5b                   pop ebx
// 005f201b  83c40c               add esp, 0xc
// 005f201e  c20800               ret 8
// 005f2021  8b442420             mov eax, dword ptr [esp + 0x20]
// 005f2025  8b542414             mov edx, dword ptr [esp + 0x14]
// 005f2029  5f                   pop edi
// 005f202a  897004               mov dword ptr [eax + 4], esi
// 005f202d  5e                   pop esi
// 005f202e  5d                   pop ebp
// 005f202f  c6400800             mov byte ptr [eax + 8], 0
// 005f2033  8910                 mov dword ptr [eax], edx
// 005f2035  5b                   pop ebx
// 005f2036  83c40c               add esp, 0xc
// 005f2039  c20800               ret 8
// library rbxgs/v8world\ClumpStage.cpp (function ?insert@?$_Tree@V?$_Tset_traits@VRigidEntry@RBX@@VRigidSortCriterion@2@V?$allocator@VRigidEntry@RBX@@@std@@$0A@@std@@@std@@QAE?AU?$pair@Viterator@?$_Tree@V?$_Tset_traits@VRigidEntry@RBX@@VRigidSortCriterion@2@V?$allocator@VRigidEntry@RBX@@@std@@$0A@@std@@@std@@_N@2@ABVRigidEntry@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/ClumpStage.cpp
