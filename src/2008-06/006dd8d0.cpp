// from server: 100% by auto
// roc 2008-06 006dd8d0  unit: CXTTreeBase  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006dd8d0
//
// 006dd8d0  56                   push esi
// 006dd8d1  8bf1                 mov esi, ecx
// 006dd8d3  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 006dd8d6  e82fe70d00           call 0x7bc00a
// 006dd8db  a900020000           test eax, 0x200
// 006dd8e0  741e                 je 0x6dd900
// 006dd8e2  837e1400             cmp dword ptr [esi + 0x14], 0
// 006dd8e6  7418                 je 0x6dd900
// 006dd8e8  8b4634               mov eax, dword ptr [esi + 0x34]
// 006dd8eb  6a00                 push 0
// 006dd8ed  c7461400000000       mov dword ptr [esi + 0x14], 0
// 006dd8f4  8b4820               mov ecx, dword ptr [eax + 0x20]
// 006dd8f7  6a00                 push 0
// 006dd8f9  51                   push ecx
// 006dd8fa  ff15182e8000         call dword ptr [0x802e18]
// 006dd900  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 006dd903  e86033fcff           call 0x6a0c68
// 006dd908  5e                   pop esi
// 006dd909  c20c00               ret 0xc
// library xtp-11.2.2/Source\Controls\XTTreeBase.cpp (function ?OnNcMouseMove@CXTTreeBase@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTTreeBase.cpp
