// from server: 100% by auto
// roc 2012-06 00449a10  unit: CXTTreeViewBase  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00449a10
//
// 00449a10  8b442404             mov eax, dword ptr [esp + 4]
// 00449a14  56                   push esi
// 00449a15  50                   push eax
// 00449a16  8bf1                 mov esi, ecx
// 00449a18  e8e9915300           call 0x982c06
// 00449a1d  83f8ff               cmp eax, -1
// 00449a20  7506                 jne 0x449a28
// 00449a22  0bc0                 or eax, eax
// 00449a24  5e                   pop esi
// 00449a25  c20400               ret 4
// 00449a28  8b5660               mov edx, dword ptr [esi + 0x60]
// 00449a2b  8b4248               mov eax, dword ptr [edx + 0x48]
// 00449a2e  8d4e60               lea ecx, [esi + 0x60]
// 00449a31  ffd0                 call eax
// 00449a33  33c0                 xor eax, eax
// 00449a35  5e                   pop esi
// 00449a36  c20400               ret 4
// library xtp-15.2.1/Source\Controls\Shell\XTPShellTreeCtrlView.cpp (function ?OnCreate@CXTPShellTreeBaseCTreeView@@IAEHPAUtagCREATESTRUCTA@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Shell/XTPShellTreeCtrlView.cpp
