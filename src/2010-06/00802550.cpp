// roc 2010-06 00802550  unit: CXTPPropertyGrid  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00802550
//
// 00802550  56                   push esi
// 00802551  8bf1                 mov esi, ecx
// 00802553  83c8ff               or eax, 0xffffffff
// 00802556  398648010000         cmp dword ptr [esi + 0x148], eax
// 0080255c  7414                 je 0x802572
// 0080255e  6a00                 push 0
// 00802560  898648010000         mov dword ptr [esi + 0x148], eax
// 00802566  8b4620               mov eax, dword ptr [esi + 0x20]
// 00802569  6a00                 push 0
// 0080256b  50                   push eax
// 0080256c  ff1578ba9e00         call dword ptr [0x9eba78]
// 00802572  8bce                 mov ecx, esi
// 00802574  e8f759faff           call 0x7a7f70
// 00802579  5e                   pop esi
// 0080257a  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?OnKillFocus@CXTPPropertyGrid@@IAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGrid.cpp
