// from server: 100% by auto
// roc 2012-06 009e6df0  unit: CXTThemeManager  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e6df0
//
// 009e6df0  33c0                 xor eax, eax
// 009e6df2  56                   push esi
// 009e6df3  8bf1                 mov esi, ecx
// 009e6df5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 009e6df9  c7066078c100         mov dword ptr [esi], 0xc17860
// 009e6dff  894604               mov dword ptr [esi + 4], eax
// 009e6e02  894610               mov dword ptr [esi + 0x10], eax
// 009e6e05  89460c               mov dword ptr [esi + 0xc], eax
// 009e6e08  894614               mov dword ptr [esi + 0x14], eax
// 009e6e0b  894608               mov dword ptr [esi + 8], eax
// 009e6e0e  3bc8                 cmp ecx, eax
// 009e6e10  7408                 je 0x9e6e1a
// 009e6e12  51                   push ecx
// 009e6e13  8bce                 mov ecx, esi
// 009e6e15  e806ffffff           call 0x9e6d20
// 009e6e1a  8bc6                 mov eax, esi
// 009e6e1c  5e                   pop esi
// 009e6e1d  c20400               ret 4
// library xtp-15.2.1/Source\Controls\Deprecated\XTThemeManager.cpp (function ??0CXTThemeManagerStyleHost@@IAE@PAUCRuntimeClass@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Deprecated/XTThemeManager.cpp
