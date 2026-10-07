// roc 2011-06 008ec490  unit: CXTColorPageCustom  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008ec490
//
// 008ec490  56                   push esi
// 008ec491  8bf1                 mov esi, ecx
// 008ec493  8b8620010000         mov eax, dword ptr [esi + 0x120]
// 008ec499  c706b49aad00         mov dword ptr [esi], 0xad9ab4
// 008ec49f  85c0                 test eax, eax
// 008ec4a1  7407                 je 0x8ec4aa
// 008ec4a3  50                   push eax
// 008ec4a4  ff15b803a400         call dword ptr [0xa403b8]
// 008ec4aa  8bce                 mov ecx, esi
// 008ec4ac  5e                   pop esi
// 008ec4ad  e934e7f1ff           jmp 0x80abe6
// library xtp-15.2.1/Source\Common\XTPRichRender.cpp (function ??1CXTPRichRender@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPRichRender.cpp
