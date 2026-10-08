// roc 2009-06 007e2100  unit: CXTPDockingPaneContext  size: 229 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007e2100
//
// 007e2100  83ec1c               sub esp, 0x1c
// 007e2103  53                   push ebx
// 007e2104  56                   push esi
// 007e2105  8bf1                 mov esi, ecx
// 007e2107  57                   push edi
// 007e2108  8b3dc8ee8900         mov edi, dword ptr [0x89eec8]
// 007e210e  8d8650010000         lea eax, [esi + 0x150]
// 007e2114  50                   push eax
// 007e2115  ffd7                 call edi
// 007e2117  33db                 xor ebx, ebx
// 007e2119  8d8eb8000000         lea ecx, [esi + 0xb8]
// 007e211f  51                   push ecx
// 007e2120  899e64010000         mov dword ptr [esi + 0x164], ebx
// 007e2126  899e60010000         mov dword ptr [esi + 0x160], ebx
// 007e212c  899e68010000         mov dword ptr [esi + 0x168], ebx
// 007e2132  ffd7                 call edi
// 007e2134  899ec8000000         mov dword ptr [esi + 0xc8], ebx
// 007e213a  899ecc000000         mov dword ptr [esi + 0xcc], ebx
// 007e2140  899e28010000         mov dword ptr [esi + 0x128], ebx
// 007e2146  399eb4000000         cmp dword ptr [esi + 0xb4], ebx
// 007e214c  0f858c000000         jne 0x7e21de
// 007e2152  8b3d40ee8900         mov edi, dword ptr [0x89ee40]
// 007e2158  55                   push ebp
// 007e2159  53                   push ebx
// 007e215a  6a0f                 push 0xf
// 007e215c  6a0f                 push 0xf
// 007e215e  53                   push ebx
// 007e215f  8d542420             lea edx, [esp + 0x20]
// 007e2163  52                   push edx
// 007e2164  ffd7                 call edi
// 007e2166  85c0                 test eax, eax
// 007e2168  7432                 je 0x7e219c
// 007e216a  8b2d4ced8900         mov ebp, dword ptr [0x89ed4c]
// 007e2170  6a0f                 push 0xf
// 007e2172  6a0f                 push 0xf
// 007e2174  53                   push ebx
// 007e2175  8d44241c             lea eax, [esp + 0x1c]
// 007e2179  50                   push eax
// 007e217a  ff15d8ee8900         call dword ptr [0x89eed8]
// 007e2180  85c0                 test eax, eax
// 007e2182  7459                 je 0x7e21dd
// 007e2184  8d4c2410             lea ecx, [esp + 0x10]
// 007e2188  51                   push ecx
// 007e2189  ffd5                 call ebp
// 007e218b  53                   push ebx
// 007e218c  6a0f                 push 0xf
// 007e218e  6a0f                 push 0xf
// 007e2190  53                   push ebx
// 007e2191  8d542420             lea edx, [esp + 0x20]
// 007e2195  52                   push edx
// 007e2196  ffd7                 call edi
// 007e2198  85c0                 test eax, eax
// 007e219a  75d4                 jne 0x7e2170
// 007e219c  ff15e8ec8900         call dword ptr [0x89ece8]
// 007e21a2  50                   push eax
// 007e21a3  e85a6bf3ff           call 0x718d02
// 007e21a8  8bf8                 mov edi, eax
// 007e21aa  8b4720               mov eax, dword ptr [edi + 0x20]
// 007e21ad  50                   push eax
// 007e21ae  ff15d4ee8900         call dword ptr [0x89eed4]
// 007e21b4  85c0                 test eax, eax
// 007e21b6  740c                 je 0x7e21c4
// 007e21b8  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 007e21bb  6803040000           push 0x403
// 007e21c0  53                   push ebx
// 007e21c1  51                   push ecx
// 007e21c2  eb07                 jmp 0x7e21cb
// 007e21c4  8b5720               mov edx, dword ptr [edi + 0x20]
// 007e21c7  6a03                 push 3
// 007e21c9  53                   push ebx
// 007e21ca  52                   push edx
// 007e21cb  ff15d0ee8900         call dword ptr [0x89eed0]
// 007e21d1  50                   push eax
// 007e21d2  e8359d0600           call 0x84bf0c
// 007e21d7  89868c010000         mov dword ptr [esi + 0x18c], eax
// 007e21dd  5d                   pop ebp
// 007e21de  5f                   pop edi
// 007e21df  5e                   pop esi
// 007e21e0  5b                   pop ebx
// 007e21e1  83c41c               add esp, 0x1c
// 007e21e4  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneContext.cpp (function ?InitLoop@CXTPDockingPaneContext@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneContext.cpp
