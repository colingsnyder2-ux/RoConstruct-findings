// roc 2007-08 00692160  unit: CXTThemeManagerStyleFactory  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00692160
//
// 00692160  33c0                 xor eax, eax
// 00692162  56                   push esi
// 00692163  8bf1                 mov esi, ecx
// 00692165  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00692169  3bc8                 cmp ecx, eax
// 0069216b  c70680087d00         mov dword ptr [esi], 0x7d0880
// 00692171  894604               mov dword ptr [esi + 4], eax
// 00692174  894610               mov dword ptr [esi + 0x10], eax
// 00692177  89460c               mov dword ptr [esi + 0xc], eax
// 0069217a  894614               mov dword ptr [esi + 0x14], eax
// 0069217d  894608               mov dword ptr [esi + 8], eax
// 00692180  7408                 je 0x69218a
// 00692182  51                   push ecx
// 00692183  8bce                 mov ecx, esi
// 00692185  e8f6feffff           call 0x692080
// 0069218a  8bc6                 mov eax, esi
// 0069218c  5e                   pop esi
// 0069218d  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Controls\XTThemeManager.cpp (function ??0CXTThemeManagerStyleHost@@IAE@PAUCRuntimeClass@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTThemeManager.cpp
