// roc 2007-08 006df940  unit: CXTPDockingPaneMiniWnd  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006df940
//
// 006df940  8b542404             mov edx, dword ptr [esp + 4]
// 006df944  8b4214               mov eax, dword ptr [edx + 0x14]
// 006df947  3df1240000           cmp eax, 0x24f1
// 006df94c  7506                 jne 0x6df954
// 006df94e  8b413c               mov eax, dword ptr [ecx + 0x3c]
// 006df951  c20400               ret 4
// 006df954  3df0240000           cmp eax, 0x24f0
// 006df959  7515                 jne 0x6df970
// 006df95b  8b4150               mov eax, dword ptr [ecx + 0x50]
// 006df95e  f7d8                 neg eax
// 006df960  1bc0                 sbb eax, eax
// 006df962  83e002               and eax, 2
// 006df965  894220               mov dword ptr [edx + 0x20], eax
// 006df968  a1988b8b00           mov eax, dword ptr [0x8b8b98]
// 006df96d  c20400               ret 4
// 006df970  3df4240000           cmp eax, 0x24f4
// 006df975  751f                 jne 0x6df996
// 006df977  81c11cffffff         add ecx, 0xffffff1c
// 006df97d  e8eefeffff           call 0x6df870
// 006df982  85c0                 test eax, eax
// 006df984  740b                 je 0x6df991
// 006df986  8bc8                 mov ecx, eax
// 006df988  e853fcfaff           call 0x68f5e0
// 006df98d  a810                 test al, 0x10
// 006df98f  7505                 jne 0x6df996
// 006df991  33c0                 xor eax, eax
// 006df993  c20400               ret 4
// 006df996  b801000000           mov eax, 1
// 006df99b  c20400               ret 4
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?IsCaptionButtonVisible@CXTPDockingPaneMiniWnd@@MAEHPAVCXTPDockingPaneCaptionButton@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
