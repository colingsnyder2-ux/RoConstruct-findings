// roc 2009-12 008a7770  unit: CXTRegistryManager  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a7770
//
// 008a7770  56                   push esi
// 008a7771  8bf1                 mov esi, ecx
// 008a7773  837e0800             cmp dword ptr [esi + 8], 0
// 008a7777  7406                 je 0x8a777f
// 008a7779  837e0c00             cmp dword ptr [esi + 0xc], 0
// 008a777d  7524                 jne 0x8a77a3
// 008a777f  e89ac3f4ff           call 0x7f3b1e
// 008a7784  8b4004               mov eax, dword ptr [eax + 4]
// 008a7787  85c0                 test eax, eax
// 008a7789  740c                 je 0x8a7797
// 008a778b  8b4854               mov ecx, dword ptr [eax + 0x54]
// 008a778e  894e08               mov dword ptr [esi + 8], ecx
// 008a7791  8b5068               mov edx, dword ptr [eax + 0x68]
// 008a7794  89560c               mov dword ptr [esi + 0xc], edx
// 008a7797  837e0800             cmp dword ptr [esi + 8], 0
// 008a779b  740d                 je 0x8a77aa
// 008a779d  837e0c00             cmp dword ptr [esi + 0xc], 0
// 008a77a1  7407                 je 0x8a77aa
// 008a77a3  b801000000           mov eax, 1
// 008a77a8  5e                   pop esi
// 008a77a9  c3                   ret 
// 008a77aa  33c0                 xor eax, eax
// 008a77ac  5e                   pop esi
// 008a77ad  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTRegistryManager.cpp (function ?GetProfileInfo@CXTRegistryManager@@AAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTRegistryManager.cpp
