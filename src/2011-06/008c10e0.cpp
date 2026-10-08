// from server: 100% by auto
// roc 2011-06 008c10e0  unit: CXTPDockingPaneMiniWnd  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008c10e0
//
// 008c10e0  8b542404             mov edx, dword ptr [esp + 4]
// 008c10e4  8b4214               mov eax, dword ptr [edx + 0x14]
// 008c10e7  3df1240000           cmp eax, 0x24f1
// 008c10ec  7506                 jne 0x8c10f4
// 008c10ee  8b413c               mov eax, dword ptr [ecx + 0x3c]
// 008c10f1  c20400               ret 4
// 008c10f4  3df0240000           cmp eax, 0x24f0
// 008c10f9  7515                 jne 0x8c1110
// 008c10fb  8b4150               mov eax, dword ptr [ecx + 0x50]
// 008c10fe  f7d8                 neg eax
// 008c1100  1bc0                 sbb eax, eax
// 008c1102  83e002               and eax, 2
// 008c1105  894220               mov dword ptr [edx + 0x20], eax
// 008c1108  a13896c900           mov eax, dword ptr [0xc99638]
// 008c110d  c20400               ret 4
// 008c1110  3df4240000           cmp eax, 0x24f4
// 008c1115  751f                 jne 0x8c1136
// 008c1117  81c108ffffff         add ecx, 0xffffff08
// 008c111d  e8defeffff           call 0x8c1000
// 008c1122  85c0                 test eax, eax
// 008c1124  740b                 je 0x8c1131
// 008c1126  8bc8                 mov ecx, eax
// 008c1128  e833d2faff           call 0x86e360
// 008c112d  a810                 test al, 0x10
// 008c112f  7505                 jne 0x8c1136
// 008c1131  33c0                 xor eax, eax
// 008c1133  c20400               ret 4
// 008c1136  b801000000           mov eax, 1
// 008c113b  c20400               ret 4
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?IsCaptionButtonVisible@CXTPDockingPaneMiniWnd@@MAEHPAVCXTPDockingPaneCaptionButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
