// roc 2008-06 0075c820  unit: CXTPDockingPaneMiniWnd  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0075c820
//
// 0075c820  8b542404             mov edx, dword ptr [esp + 4]
// 0075c824  8b4214               mov eax, dword ptr [edx + 0x14]
// 0075c827  3df1240000           cmp eax, 0x24f1
// 0075c82c  7506                 jne 0x75c834
// 0075c82e  8b413c               mov eax, dword ptr [ecx + 0x3c]
// 0075c831  c20400               ret 4
// 0075c834  3df0240000           cmp eax, 0x24f0
// 0075c839  7515                 jne 0x75c850
// 0075c83b  8b4150               mov eax, dword ptr [ecx + 0x50]
// 0075c83e  f7d8                 neg eax
// 0075c840  1bc0                 sbb eax, eax
// 0075c842  83e002               and eax, 2
// 0075c845  894220               mov dword ptr [edx + 0x20], eax
// 0075c848  a1c09c9600           mov eax, dword ptr [0x969cc0]
// 0075c84d  c20400               ret 4
// 0075c850  3df4240000           cmp eax, 0x24f4
// 0075c855  751f                 jne 0x75c876
// 0075c857  81c108ffffff         add ecx, 0xffffff08
// 0075c85d  e8defeffff           call 0x75c740
// 0075c862  85c0                 test eax, eax
// 0075c864  740b                 je 0x75c871
// 0075c866  8bc8                 mov ecx, eax
// 0075c868  e873adfaff           call 0x7075e0
// 0075c86d  a810                 test al, 0x10
// 0075c86f  7505                 jne 0x75c876
// 0075c871  33c0                 xor eax, eax
// 0075c873  c20400               ret 4
// 0075c876  b801000000           mov eax, 1
// 0075c87b  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?IsCaptionButtonVisible@CXTPDockingPaneMiniWnd@@MAEHPAVCXTPDockingPaneCaptionButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
