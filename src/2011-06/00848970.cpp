// from server: 100% by auto
// roc 2011-06 00848970  unit: CXTTreeBase  size: 179 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00848970
//
// 00848970  83ec10               sub esp, 0x10
// 00848973  56                   push esi
// 00848974  8bf1                 mov esi, ecx
// 00848976  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00848979  e89a3c1800           call 0x9cc618
// 0084897e  a900020000           test eax, 0x200
// 00848983  0f848b000000         je 0x848a14
// 00848989  837c241855           cmp dword ptr [esp + 0x18], 0x55
// 0084898e  0f8580000000         jne 0x848a14
// 00848994  837e1400             cmp dword ptr [esi + 0x14], 0
// 00848998  7464                 je 0x8489fe
// 0084899a  53                   push ebx
// 0084899b  57                   push edi
// 0084899c  ff15f81ba400         call dword ptr [0xa41bf8]
// 008489a2  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 008489a5  8b5120               mov edx, dword ptr [ecx + 0x20]
// 008489a8  0fbff8               movsx edi, ax
// 008489ab  c1e810               shr eax, 0x10
// 008489ae  0fbfd8               movsx ebx, ax
// 008489b1  8d44240c             lea eax, [esp + 0xc]
// 008489b5  50                   push eax
// 008489b6  52                   push edx
// 008489b7  ff155c1ca400         call dword ptr [0xa41c5c]
// 008489bd  53                   push ebx
// 008489be  57                   push edi
// 008489bf  8d442414             lea eax, [esp + 0x14]
// 008489c3  50                   push eax
// 008489c4  ff15101ca400         call dword ptr [0xa41c10]
// 008489ca  5f                   pop edi
// 008489cb  5b                   pop ebx
// 008489cc  85c0                 test eax, eax
// 008489ce  754c                 jne 0x848a1c
// 008489d0  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 008489d3  8b5120               mov edx, dword ptr [ecx + 0x20]
// 008489d6  6a55                 push 0x55
// 008489d8  52                   push edx
// 008489d9  ff15d019a400         call dword ptr [0xa419d0]
// 008489df  8b4634               mov eax, dword ptr [esi + 0x34]
// 008489e2  6a00                 push 0
// 008489e4  c7461400000000       mov dword ptr [esi + 0x14], 0
// 008489eb  8b4820               mov ecx, dword ptr [eax + 0x20]
// 008489ee  6a00                 push 0
// 008489f0  51                   push ecx
// 008489f1  ff15ec19a400         call dword ptr [0xa419ec]
// 008489f7  5e                   pop esi
// 008489f8  83c410               add esp, 0x10
// 008489fb  c20400               ret 4
// 008489fe  8b5634               mov edx, dword ptr [esi + 0x34]
// 00848a01  8b4220               mov eax, dword ptr [edx + 0x20]
// 00848a04  6a55                 push 0x55
// 00848a06  50                   push eax
// 00848a07  ff15d019a400         call dword ptr [0xa419d0]
// 00848a0d  5e                   pop esi
// 00848a0e  83c410               add esp, 0x10
// 00848a11  c20400               ret 4
// 00848a14  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00848a17  e8121cfcff           call 0x80a62e
// 00848a1c  5e                   pop esi
// 00848a1d  83c410               add esp, 0x10
// 00848a20  c20400               ret 4
// library xtp-15.2.1/Source\Controls\Tree\XTPTreeBase.cpp (function ?OnTimer@CXTPTreeBase@@IAEXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPTreeBase.cpp
