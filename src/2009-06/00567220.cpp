// roc 2009-06 00567220  unit: RBX::RbxG3D::RenderScene  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00567220
//
// 00567220  6aff                 push -1
// 00567222  68def78500           push 0x85f7de
// 00567227  64a100000000         mov eax, dword ptr fs:[0]
// 0056722d  50                   push eax
// 0056722e  64892500000000       mov dword ptr fs:[0], esp
// 00567235  51                   push ecx
// 00567236  53                   push ebx
// 00567237  56                   push esi
// 00567238  8bf1                 mov esi, ecx
// 0056723a  89742408             mov dword ptr [esp + 8], esi
// 0056723e  8b464c               mov eax, dword ptr [esi + 0x4c]
// 00567241  50                   push eax
// 00567242  c744241802000000     mov dword ptr [esp + 0x18], 2
// 0056724a  e841400000           call 0x56b290
// 0056724f  33db                 xor ebx, ebx
// 00567251  895e4c               mov dword ptr [esi + 0x4c], ebx
// 00567254  895e50               mov dword ptr [esi + 0x50], ebx
// 00567257  895e54               mov dword ptr [esi + 0x54], ebx
// 0056725a  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 0056725d  51                   push ecx
// 0056725e  c644241c01           mov byte ptr [esp + 0x1c], 1
// 00567263  e828400000           call 0x56b290
// 00567268  895e40               mov dword ptr [esi + 0x40], ebx
// 0056726b  895e44               mov dword ptr [esi + 0x44], ebx
// 0056726e  895e48               mov dword ptr [esi + 0x48], ebx
// 00567271  8b4630               mov eax, dword ptr [esi + 0x30]
// 00567274  83c408               add esp, 8
// 00567277  885c2414             mov byte ptr [esp + 0x14], bl
// 0056727b  3bc3                 cmp eax, ebx
// 0056727d  7428                 je 0x5672a7
// 0056727f  83c004               add eax, 4
// 00567282  50                   push eax
// 00567283  ff15a4e18900         call dword ptr [0x89e1a4]
// 00567289  85c0                 test eax, eax
// 0056728b  7517                 jne 0x5672a4
// 0056728d  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 00567290  e8ebdaedff           call 0x444d80
// 00567295  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 00567298  3bcb                 cmp ecx, ebx
// 0056729a  7408                 je 0x5672a4
// 0056729c  8b11                 mov edx, dword ptr [ecx]
// 0056729e  8b02                 mov eax, dword ptr [edx]
// 005672a0  6a01                 push 1
// 005672a2  ffd0                 call eax
// 005672a4  895e30               mov dword ptr [esi + 0x30], ebx
// 005672a7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005672ab  c706a8fc8b00         mov dword ptr [esi], 0x8bfca8
// 005672b1  5e                   pop esi
// 005672b2  5b                   pop ebx
// 005672b3  64890d00000000       mov dword ptr fs:[0], ecx
// 005672ba  83c410               add esp, 0x10
// 005672bd  c3                   ret 
// library rbxgs-render/RenderScene.cpp (function ??1Lighting@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderScene.cpp
