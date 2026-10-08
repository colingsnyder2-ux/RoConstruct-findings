// roc 2010-06 0085b8c0  unit: CXTRegistryManager  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0085b8c0
//
// 0085b8c0  56                   push esi
// 0085b8c1  8bf1                 mov esi, ecx
// 0085b8c3  837e0800             cmp dword ptr [esi + 8], 0
// 0085b8c7  7406                 je 0x85b8cf
// 0085b8c9  837e0c00             cmp dword ptr [esi + 0xc], 0
// 0085b8cd  7524                 jne 0x85b8f3
// 0085b8cf  e88ac3f4ff           call 0x7a7c5e
// 0085b8d4  8b4004               mov eax, dword ptr [eax + 4]
// 0085b8d7  85c0                 test eax, eax
// 0085b8d9  740c                 je 0x85b8e7
// 0085b8db  8b4854               mov ecx, dword ptr [eax + 0x54]
// 0085b8de  894e08               mov dword ptr [esi + 8], ecx
// 0085b8e1  8b5068               mov edx, dword ptr [eax + 0x68]
// 0085b8e4  89560c               mov dword ptr [esi + 0xc], edx
// 0085b8e7  837e0800             cmp dword ptr [esi + 8], 0
// 0085b8eb  740d                 je 0x85b8fa
// 0085b8ed  837e0c00             cmp dword ptr [esi + 0xc], 0
// 0085b8f1  7407                 je 0x85b8fa
// 0085b8f3  b801000000           mov eax, 1
// 0085b8f8  5e                   pop esi
// 0085b8f9  c3                   ret 
// 0085b8fa  33c0                 xor eax, eax
// 0085b8fc  5e                   pop esi
// 0085b8fd  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTRegistryManager.cpp (function ?GetProfileInfo@CXTRegistryManager@@AAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTRegistryManager.cpp
