// roc 2012-06 009e2160  unit: CXTPPropertyGrid  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e2160
//
// 009e2160  56                   push esi
// 009e2161  8bf1                 mov esi, ecx
// 009e2163  83c8ff               or eax, 0xffffffff
// 009e2166  398648010000         cmp dword ptr [esi + 0x148], eax
// 009e216c  7414                 je 0x9e2182
// 009e216e  6a00                 push 0
// 009e2170  898648010000         mov dword ptr [esi + 0x148], eax
// 009e2176  8b4620               mov eax, dword ptr [esi + 0x20]
// 009e2179  6a00                 push 0
// 009e217b  50                   push eax
// 009e217c  ff15ec3bb200         call dword ptr [0xb23bec]
// 009e2182  8bce                 mov ecx, esi
// 009e2184  e85505faff           call 0x9826de
// 009e2189  5e                   pop esi
// 009e218a  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?OnKillFocus@CXTPPropertyGrid@@IAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGrid.cpp
