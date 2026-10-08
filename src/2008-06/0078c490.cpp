// from server: 100% by auto
// roc 2008-06 0078c490  unit: CXTSplitterWndThemeFactory  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0078c490
//
// 0078c490  56                   push esi
// 0078c491  8bf1                 mov esi, ecx
// 0078c493  8b8620010000         mov eax, dword ptr [esi + 0x120]
// 0078c499  c706fca78600         mov dword ptr [esi], 0x86a7fc
// 0078c49f  85c0                 test eax, eax
// 0078c4a1  7407                 je 0x78c4aa
// 0078c4a3  50                   push eax
// 0078c4a4  ff15a0218000         call dword ptr [0x8021a0]
// 0078c4aa  8bce                 mov ecx, esi
// 0078c4ac  5e                   pop esi
// 0078c4ad  e9844cf1ff           jmp 0x6a1136
// library xtp-11.2.2/Source\Common\XTPRichRender.cpp (function ??1CXTPRichRender@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPRichRender.cpp
