// from server: 100% by auto
// roc 2008-06 00754360  unit: CXTRegistryManager  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00754360
//
// 00754360  56                   push esi
// 00754361  8bf1                 mov esi, ecx
// 00754363  837e0800             cmp dword ptr [esi + 8], 0
// 00754367  7406                 je 0x75436f
// 00754369  837e0c00             cmp dword ptr [esi + 0xc], 0
// 0075436d  7524                 jne 0x754393
// 0075436f  e8b2c5f4ff           call 0x6a0926
// 00754374  8b4004               mov eax, dword ptr [eax + 4]
// 00754377  85c0                 test eax, eax
// 00754379  740c                 je 0x754387
// 0075437b  8b4854               mov ecx, dword ptr [eax + 0x54]
// 0075437e  894e08               mov dword ptr [esi + 8], ecx
// 00754381  8b5068               mov edx, dword ptr [eax + 0x68]
// 00754384  89560c               mov dword ptr [esi + 0xc], edx
// 00754387  837e0800             cmp dword ptr [esi + 8], 0
// 0075438b  740d                 je 0x75439a
// 0075438d  837e0c00             cmp dword ptr [esi + 0xc], 0
// 00754391  7407                 je 0x75439a
// 00754393  b801000000           mov eax, 1
// 00754398  5e                   pop esi
// 00754399  c3                   ret 
// 0075439a  33c0                 xor eax, eax
// 0075439c  5e                   pop esi
// 0075439d  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTRegistryManager.cpp (function ?GetProfileInfo@CXTRegistryManager@@AAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTRegistryManager.cpp
