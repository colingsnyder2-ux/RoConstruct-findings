// roc 2011-06 00869c00  unit: CXTPPropertyGrid  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00869c00
//
// 00869c00  56                   push esi
// 00869c01  8bf1                 mov esi, ecx
// 00869c03  83c8ff               or eax, 0xffffffff
// 00869c06  398648010000         cmp dword ptr [esi + 0x148], eax
// 00869c0c  7414                 je 0x869c22
// 00869c0e  6a00                 push 0
// 00869c10  898648010000         mov dword ptr [esi + 0x148], eax
// 00869c16  8b4620               mov eax, dword ptr [esi + 0x20]
// 00869c19  6a00                 push 0
// 00869c1b  50                   push eax
// 00869c1c  ff15ec19a400         call dword ptr [0xa419ec]
// 00869c22  8bce                 mov ecx, esi
// 00869c24  e8050afaff           call 0x80a62e
// 00869c29  5e                   pop esi
// 00869c2a  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?OnKillFocus@CXTPPropertyGrid@@IAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGrid.cpp
