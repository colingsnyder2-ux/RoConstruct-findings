// from server: 100% by auto
// roc 2007-08 006d7490  unit: CXTRegistryManager  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d7490
//
// 006d7490  56                   push esi
// 006d7491  8bf1                 mov esi, ecx
// 006d7493  837e0800             cmp dword ptr [esi + 8], 0
// 006d7497  7406                 je 0x6d749f
// 006d7499  837e0c00             cmp dword ptr [esi + 0xc], 0
// 006d749d  7524                 jne 0x6d74c3
// 006d749f  e85e8af5ff           call 0x62ff02
// 006d74a4  8b4004               mov eax, dword ptr [eax + 4]
// 006d74a7  85c0                 test eax, eax
// 006d74a9  740c                 je 0x6d74b7
// 006d74ab  8b4854               mov ecx, dword ptr [eax + 0x54]
// 006d74ae  894e08               mov dword ptr [esi + 8], ecx
// 006d74b1  8b5068               mov edx, dword ptr [eax + 0x68]
// 006d74b4  89560c               mov dword ptr [esi + 0xc], edx
// 006d74b7  837e0800             cmp dword ptr [esi + 8], 0
// 006d74bb  740d                 je 0x6d74ca
// 006d74bd  837e0c00             cmp dword ptr [esi + 0xc], 0
// 006d74c1  7407                 je 0x6d74ca
// 006d74c3  b801000000           mov eax, 1
// 006d74c8  5e                   pop esi
// 006d74c9  c3                   ret 
// 006d74ca  33c0                 xor eax, eax
// 006d74cc  5e                   pop esi
// 006d74cd  c3                   ret 
// library xtp-11.2.2-vc8/Source\Controls\XTRegistryManager.cpp (function ?GetProfileInfo@CXTRegistryManager@@AAEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTRegistryManager.cpp
