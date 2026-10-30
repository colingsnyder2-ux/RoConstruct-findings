// roc 2009-06 007cc980  unit: CXTRegistryManager  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007cc980
//
// 007cc980  56                   push esi
// 007cc981  8bf1                 mov esi, ecx
// 007cc983  837e0800             cmp dword ptr [esi + 8], 0
// 007cc987  7406                 je 0x7cc98f
// 007cc989  837e0c00             cmp dword ptr [esi + 0xc], 0
// 007cc98d  7524                 jne 0x7cc9b3
// 007cc98f  e862c3f4ff           call 0x718cf6
// 007cc994  8b4004               mov eax, dword ptr [eax + 4]
// 007cc997  85c0                 test eax, eax
// 007cc999  740c                 je 0x7cc9a7
// 007cc99b  8b4854               mov ecx, dword ptr [eax + 0x54]
// 007cc99e  894e08               mov dword ptr [esi + 8], ecx
// 007cc9a1  8b5068               mov edx, dword ptr [eax + 0x68]
// 007cc9a4  89560c               mov dword ptr [esi + 0xc], edx
// 007cc9a7  837e0800             cmp dword ptr [esi + 8], 0
// 007cc9ab  740d                 je 0x7cc9ba
// 007cc9ad  837e0c00             cmp dword ptr [esi + 0xc], 0
// 007cc9b1  7407                 je 0x7cc9ba
// 007cc9b3  b801000000           mov eax, 1
// 007cc9b8  5e                   pop esi
// 007cc9b9  c3                   ret 
// 007cc9ba  33c0                 xor eax, eax
// 007cc9bc  5e                   pop esi
// 007cc9bd  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTRegistryManager.cpp (function ?GetProfileInfo@CXTRegistryManager@@AAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTRegistryManager.cpp
