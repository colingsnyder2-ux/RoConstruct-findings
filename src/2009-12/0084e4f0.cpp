// roc 2009-12 0084e4f0  unit: CXTPPropertyGrid  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0084e4f0
//
// 0084e4f0  56                   push esi
// 0084e4f1  8bf1                 mov esi, ecx
// 0084e4f3  83c8ff               or eax, 0xffffffff
// 0084e4f6  398648010000         cmp dword ptr [esi + 0x148], eax
// 0084e4fc  7414                 je 0x84e512
// 0084e4fe  6a00                 push 0
// 0084e500  898648010000         mov dword ptr [esi + 0x148], eax
// 0084e506  8b4620               mov eax, dword ptr [esi + 0x20]
// 0084e509  6a00                 push 0
// 0084e50b  50                   push eax
// 0084e50c  ff15e8cb9800         call dword ptr [0x98cbe8]
// 0084e512  8bce                 mov ecx, esi
// 0084e514  e81759faff           call 0x7f3e30
// 0084e519  5e                   pop esi
// 0084e51a  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?OnKillFocus@CXTPPropertyGrid@@IAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGrid.cpp
