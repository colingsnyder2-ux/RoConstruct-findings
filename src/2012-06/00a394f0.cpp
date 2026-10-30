// from server: 100% by auto
// roc 2012-06 00a394f0  unit: CXTPDockingPaneMiniWnd  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a394f0
//
// 00a394f0  8b542404             mov edx, dword ptr [esp + 4]
// 00a394f4  8b4214               mov eax, dword ptr [edx + 0x14]
// 00a394f7  3df1240000           cmp eax, 0x24f1
// 00a394fc  7506                 jne 0xa39504
// 00a394fe  8b413c               mov eax, dword ptr [ecx + 0x3c]
// 00a39501  c20400               ret 4
// 00a39504  3df0240000           cmp eax, 0x24f0
// 00a39509  7515                 jne 0xa39520
// 00a3950b  8b4150               mov eax, dword ptr [ecx + 0x50]
// 00a3950e  f7d8                 neg eax
// 00a39510  1bc0                 sbb eax, eax
// 00a39512  83e002               and eax, 2
// 00a39515  894220               mov dword ptr [edx + 0x20], eax
// 00a39518  a11066e000           mov eax, dword ptr [0xe06610]
// 00a3951d  c20400               ret 4
// 00a39520  3df4240000           cmp eax, 0x24f4
// 00a39525  751f                 jne 0xa39546
// 00a39527  81c108ffffff         add ecx, 0xffffff08
// 00a3952d  e8defeffff           call 0xa39410
// 00a39532  85c0                 test eax, eax
// 00a39534  740b                 je 0xa39541
// 00a39536  8bc8                 mov ecx, eax
// 00a39538  e853abfaff           call 0x9e4090
// 00a3953d  a810                 test al, 0x10
// 00a3953f  7505                 jne 0xa39546
// 00a39541  33c0                 xor eax, eax
// 00a39543  c20400               ret 4
// 00a39546  b801000000           mov eax, 1
// 00a3954b  c20400               ret 4
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?IsCaptionButtonVisible@CXTPDockingPaneMiniWnd@@MAEHPAVCXTPDockingPaneCaptionButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
