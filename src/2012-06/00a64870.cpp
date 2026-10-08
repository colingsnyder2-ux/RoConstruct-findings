// from server: 100% by auto
// roc 2012-06 00a64870  unit: CXTColorPageCustom  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a64870
//
// 00a64870  56                   push esi
// 00a64871  8bf1                 mov esi, ecx
// 00a64873  8b8620010000         mov eax, dword ptr [esi + 0x120]
// 00a64879  c7064c51c200         mov dword ptr [esi], 0xc2514c
// 00a6487f  85c0                 test eax, eax
// 00a64881  7407                 je 0xa6488a
// 00a64883  50                   push eax
// 00a64884  ff158c21b200         call dword ptr [0xb2218c]
// 00a6488a  8bce                 mov ecx, esi
// 00a6488c  5e                   pop esi
// 00a6488d  e9dae3f1ff           jmp 0x982c6c
// library xtp-15.2.1/Source\Common\XTPRichRender.cpp (function ??1CXTPRichRender@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPRichRender.cpp
