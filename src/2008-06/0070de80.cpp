// roc 2008-06 0070de80  unit: CXTThemeManager  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0070de80
//
// 0070de80  33c0                 xor eax, eax
// 0070de82  56                   push esi
// 0070de83  8bf1                 mov esi, ecx
// 0070de85  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0070de89  c70658cf8500         mov dword ptr [esi], 0x85cf58
// 0070de8f  894604               mov dword ptr [esi + 4], eax
// 0070de92  894610               mov dword ptr [esi + 0x10], eax
// 0070de95  89460c               mov dword ptr [esi + 0xc], eax
// 0070de98  894614               mov dword ptr [esi + 0x14], eax
// 0070de9b  894608               mov dword ptr [esi + 8], eax
// 0070de9e  3bc8                 cmp ecx, eax
// 0070dea0  7408                 je 0x70deaa
// 0070dea2  51                   push ecx
// 0070dea3  8bce                 mov ecx, esi
// 0070dea5  e806ffffff           call 0x70ddb0
// 0070deaa  8bc6                 mov eax, esi
// 0070deac  5e                   pop esi
// 0070dead  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTThemeManager.cpp (function ??0CXTThemeManagerStyleHost@@IAE@PAUCRuntimeClass@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTThemeManager.cpp
