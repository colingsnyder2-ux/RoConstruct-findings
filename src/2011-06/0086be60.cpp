// from server: 100% by auto
// roc 2011-06 0086be60  unit: CXTThemeManager  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0086be60
//
// 0086be60  33c0                 xor eax, eax
// 0086be62  56                   push esi
// 0086be63  8bf1                 mov esi, ecx
// 0086be65  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0086be69  c70658bdac00         mov dword ptr [esi], 0xacbd58
// 0086be6f  894604               mov dword ptr [esi + 4], eax
// 0086be72  894610               mov dword ptr [esi + 0x10], eax
// 0086be75  89460c               mov dword ptr [esi + 0xc], eax
// 0086be78  894614               mov dword ptr [esi + 0x14], eax
// 0086be7b  894608               mov dword ptr [esi + 8], eax
// 0086be7e  3bc8                 cmp ecx, eax
// 0086be80  7408                 je 0x86be8a
// 0086be82  51                   push ecx
// 0086be83  8bce                 mov ecx, esi
// 0086be85  e806ffffff           call 0x86bd90
// 0086be8a  8bc6                 mov eax, esi
// 0086be8c  5e                   pop esi
// 0086be8d  c20400               ret 4
// library xtp-15.2.1/Source\Controls\Deprecated\XTThemeManager.cpp (function ??0CXTThemeManagerStyleHost@@IAE@PAUCRuntimeClass@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Deprecated/XTThemeManager.cpp
