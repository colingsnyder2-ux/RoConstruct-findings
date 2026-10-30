// roc 2007-03 006c06f0  unit: seg_006c0000  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006c06f0
//
// 006c06f0  56                   push esi
// 006c06f1  8bf1                 mov esi, ecx
// 006c06f3  837e0800             cmp dword ptr [esi + 8], 0
// 006c06f7  7406                 je 0x6c06ff
// 006c06f9  837e0c00             cmp dword ptr [esi + 0xc], 0
// 006c06fd  7524                 jne 0x6c0723
// 006c06ff  e88cdcf5ff           call 0x61e390
// 006c0704  8b4004               mov eax, dword ptr [eax + 4]
// 006c0707  85c0                 test eax, eax
// 006c0709  740c                 je 0x6c0717
// 006c070b  8b4854               mov ecx, dword ptr [eax + 0x54]
// 006c070e  894e08               mov dword ptr [esi + 8], ecx
// 006c0711  8b5068               mov edx, dword ptr [eax + 0x68]
// 006c0714  89560c               mov dword ptr [esi + 0xc], edx
// 006c0717  837e0800             cmp dword ptr [esi + 8], 0
// 006c071b  740d                 je 0x6c072a
// 006c071d  837e0c00             cmp dword ptr [esi + 0xc], 0
// 006c0721  7407                 je 0x6c072a
// 006c0723  b801000000           mov eax, 1
// 006c0728  5e                   pop esi
// 006c0729  c3                   ret 
// 006c072a  33c0                 xor eax, eax
// 006c072c  5e                   pop esi
// 006c072d  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTRegistryManager.cpp (function ?GetProfileInfo@CXTRegistryManager@@AAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTRegistryManager.cpp
