// from server: 100% by auto
// roc 2008-06 006dd810  unit: CXTTreeBase  size: 179 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006dd810
//
// 006dd810  83ec10               sub esp, 0x10
// 006dd813  56                   push esi
// 006dd814  8bf1                 mov esi, ecx
// 006dd816  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 006dd819  e8ece70d00           call 0x7bc00a
// 006dd81e  a900020000           test eax, 0x200
// 006dd823  0f848b000000         je 0x6dd8b4
// 006dd829  837c241855           cmp dword ptr [esp + 0x18], 0x55
// 006dd82e  0f8580000000         jne 0x6dd8b4
// 006dd834  837e1400             cmp dword ptr [esi + 0x14], 0
// 006dd838  7464                 je 0x6dd89e
// 006dd83a  53                   push ebx
// 006dd83b  57                   push edi
// 006dd83c  ff15b42b8000         call dword ptr [0x802bb4]
// 006dd842  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 006dd845  8b5120               mov edx, dword ptr [ecx + 0x20]
// 006dd848  0fbff8               movsx edi, ax
// 006dd84b  c1e810               shr eax, 0x10
// 006dd84e  0fbfd8               movsx ebx, ax
// 006dd851  8d44240c             lea eax, [esp + 0xc]
// 006dd855  50                   push eax
// 006dd856  52                   push edx
// 006dd857  ff15342e8000         call dword ptr [0x802e34]
// 006dd85d  53                   push ebx
// 006dd85e  57                   push edi
// 006dd85f  8d442414             lea eax, [esp + 0x14]
// 006dd863  50                   push eax
// 006dd864  ff152c2d8000         call dword ptr [0x802d2c]
// 006dd86a  5f                   pop edi
// 006dd86b  5b                   pop ebx
// 006dd86c  85c0                 test eax, eax
// 006dd86e  754c                 jne 0x6dd8bc
// 006dd870  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 006dd873  8b5120               mov edx, dword ptr [ecx + 0x20]
// 006dd876  6a55                 push 0x55
// 006dd878  52                   push edx
// 006dd879  ff151c2e8000         call dword ptr [0x802e1c]
// 006dd87f  8b4634               mov eax, dword ptr [esi + 0x34]
// 006dd882  6a00                 push 0
// 006dd884  c7461400000000       mov dword ptr [esi + 0x14], 0
// 006dd88b  8b4820               mov ecx, dword ptr [eax + 0x20]
// 006dd88e  6a00                 push 0
// 006dd890  51                   push ecx
// 006dd891  ff15182e8000         call dword ptr [0x802e18]
// 006dd897  5e                   pop esi
// 006dd898  83c410               add esp, 0x10
// 006dd89b  c20400               ret 4
// 006dd89e  8b5634               mov edx, dword ptr [esi + 0x34]
// 006dd8a1  8b4220               mov eax, dword ptr [edx + 0x20]
// 006dd8a4  6a55                 push 0x55
// 006dd8a6  50                   push eax
// 006dd8a7  ff151c2e8000         call dword ptr [0x802e1c]
// 006dd8ad  5e                   pop esi
// 006dd8ae  83c410               add esp, 0x10
// 006dd8b1  c20400               ret 4
// 006dd8b4  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 006dd8b7  e8ac33fcff           call 0x6a0c68
// 006dd8bc  5e                   pop esi
// 006dd8bd  83c410               add esp, 0x10
// 006dd8c0  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTTreeBase.cpp (function ?OnTimer@CXTTreeBase@@IAEXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTTreeBase.cpp
