// roc 2011-06 0043de30  unit: CXTTreeViewBase  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0043de30
//
// 0043de30  8b442404             mov eax, dword ptr [esp + 4]
// 0043de34  56                   push esi
// 0043de35  50                   push eax
// 0043de36  8bf1                 mov esi, ecx
// 0043de38  e843cd3c00           call 0x80ab80
// 0043de3d  83f8ff               cmp eax, -1
// 0043de40  7506                 jne 0x43de48
// 0043de42  0bc0                 or eax, eax
// 0043de44  5e                   pop esi
// 0043de45  c20400               ret 4
// 0043de48  8b5660               mov edx, dword ptr [esi + 0x60]
// 0043de4b  8b4248               mov eax, dword ptr [edx + 0x48]
// 0043de4e  8d4e60               lea ecx, [esi + 0x60]
// 0043de51  ffd0                 call eax
// 0043de53  33c0                 xor eax, eax
// 0043de55  5e                   pop esi
// 0043de56  c20400               ret 4
// library xtp-15.2.1/Source\Controls\Shell\XTPShellTreeCtrlView.cpp (function ?OnCreate@CXTPShellTreeBaseCTreeView@@IAEHPAUtagCREATESTRUCTA@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Shell/XTPShellTreeCtrlView.cpp
