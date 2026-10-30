// roc 2009-06 00773790  unit: CXTPPropertyGrid  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00773790
//
// 00773790  56                   push esi
// 00773791  8bf1                 mov esi, ecx
// 00773793  83c8ff               or eax, 0xffffffff
// 00773796  398648010000         cmp dword ptr [esi + 0x148], eax
// 0077379c  7414                 je 0x7737b2
// 0077379e  6a00                 push 0
// 007737a0  898648010000         mov dword ptr [esi + 0x148], eax
// 007737a6  8b4620               mov eax, dword ptr [esi + 0x20]
// 007737a9  6a00                 push 0
// 007737ab  50                   push eax
// 007737ac  ff157cee8900         call dword ptr [0x89ee7c]
// 007737b2  8bce                 mov ecx, esi
// 007737b4  e84f58faff           call 0x719008
// 007737b9  5e                   pop esi
// 007737ba  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?OnKillFocus@CXTPPropertyGrid@@IAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGrid.cpp
