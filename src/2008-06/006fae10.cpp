// from server: 100% by auto
// roc 2008-06 006fae10  unit: CXTPPropertyGrid  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006fae10
//
// 006fae10  56                   push esi
// 006fae11  8bf1                 mov esi, ecx
// 006fae13  83c8ff               or eax, 0xffffffff
// 006fae16  398648010000         cmp dword ptr [esi + 0x148], eax
// 006fae1c  7414                 je 0x6fae32
// 006fae1e  6a00                 push 0
// 006fae20  898648010000         mov dword ptr [esi + 0x148], eax
// 006fae26  8b4620               mov eax, dword ptr [esi + 0x20]
// 006fae29  6a00                 push 0
// 006fae2b  50                   push eax
// 006fae2c  ff15182e8000         call dword ptr [0x802e18]
// 006fae32  8bce                 mov ecx, esi
// 006fae34  e82f5efaff           call 0x6a0c68
// 006fae39  5e                   pop esi
// 006fae3a  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?OnKillFocus@CXTPPropertyGrid@@IAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGrid.cpp
