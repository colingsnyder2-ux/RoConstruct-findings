// roc 2011-06 008b8a80  unit: CXTRegistryManager  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008b8a80
//
// 008b8a80  56                   push esi
// 008b8a81  8bf1                 mov esi, ecx
// 008b8a83  837e0800             cmp dword ptr [esi + 8], 0
// 008b8a87  7406                 je 0x8b8a8f
// 008b8a89  837e0c00             cmp dword ptr [esi + 0xc], 0
// 008b8a8d  7524                 jne 0x8b8ab3
// 008b8a8f  e88818f5ff           call 0x80a31c
// 008b8a94  8b4004               mov eax, dword ptr [eax + 4]
// 008b8a97  85c0                 test eax, eax
// 008b8a99  740c                 je 0x8b8aa7
// 008b8a9b  8b4854               mov ecx, dword ptr [eax + 0x54]
// 008b8a9e  894e08               mov dword ptr [esi + 8], ecx
// 008b8aa1  8b5068               mov edx, dword ptr [eax + 0x68]
// 008b8aa4  89560c               mov dword ptr [esi + 0xc], edx
// 008b8aa7  837e0800             cmp dword ptr [esi + 8], 0
// 008b8aab  740d                 je 0x8b8aba
// 008b8aad  837e0c00             cmp dword ptr [esi + 0xc], 0
// 008b8ab1  7407                 je 0x8b8aba
// 008b8ab3  b801000000           mov eax, 1
// 008b8ab8  5e                   pop esi
// 008b8ab9  c3                   ret 
// 008b8aba  33c0                 xor eax, eax
// 008b8abc  5e                   pop esi
// 008b8abd  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTRegistryManager.cpp (function ?GetProfileInfo@CXTRegistryManager@@AAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTRegistryManager.cpp
