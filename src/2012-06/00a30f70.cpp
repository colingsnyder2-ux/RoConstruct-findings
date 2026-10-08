// roc 2012-06 00a30f70  unit: CXTRegistryManager  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a30f70
//
// 00a30f70  56                   push esi
// 00a30f71  8bf1                 mov esi, ecx
// 00a30f73  837e0800             cmp dword ptr [esi + 8], 0
// 00a30f77  7406                 je 0xa30f7f
// 00a30f79  837e0c00             cmp dword ptr [esi + 0xc], 0
// 00a30f7d  7524                 jne 0xa30fa3
// 00a30f7f  e84e14f5ff           call 0x9823d2
// 00a30f84  8b4004               mov eax, dword ptr [eax + 4]
// 00a30f87  85c0                 test eax, eax
// 00a30f89  740c                 je 0xa30f97
// 00a30f8b  8b4854               mov ecx, dword ptr [eax + 0x54]
// 00a30f8e  894e08               mov dword ptr [esi + 8], ecx
// 00a30f91  8b5068               mov edx, dword ptr [eax + 0x68]
// 00a30f94  89560c               mov dword ptr [esi + 0xc], edx
// 00a30f97  837e0800             cmp dword ptr [esi + 8], 0
// 00a30f9b  740d                 je 0xa30faa
// 00a30f9d  837e0c00             cmp dword ptr [esi + 0xc], 0
// 00a30fa1  7407                 je 0xa30faa
// 00a30fa3  b801000000           mov eax, 1
// 00a30fa8  5e                   pop esi
// 00a30fa9  c3                   ret 
// 00a30faa  33c0                 xor eax, eax
// 00a30fac  5e                   pop esi
// 00a30fad  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTRegistryManager.cpp (function ?GetProfileInfo@CXTRegistryManager@@AAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTRegistryManager.cpp
