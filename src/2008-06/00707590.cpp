// roc 2008-06 00707590  unit: CXTPDockingPane  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00707590
//
// 00707590  8b442404             mov eax, dword ptr [esp + 4]
// 00707594  33d2                 xor edx, edx
// 00707596  8910                 mov dword ptr [eax], edx
// 00707598  895004               mov dword ptr [eax + 4], edx
// 0070759b  895008               mov dword ptr [eax + 8], edx
// 0070759e  89500c               mov dword ptr [eax + 0xc], edx
// 007075a1  895010               mov dword ptr [eax + 0x10], edx
// 007075a4  895014               mov dword ptr [eax + 0x14], edx
// 007075a7  895018               mov dword ptr [eax + 0x18], edx
// 007075aa  89501c               mov dword ptr [eax + 0x1c], edx
// 007075ad  895020               mov dword ptr [eax + 0x20], edx
// 007075b0  895024               mov dword ptr [eax + 0x24], edx
// 007075b3  8b91ac000000         mov edx, dword ptr [ecx + 0xac]
// 007075b9  895018               mov dword ptr [eax + 0x18], edx
// 007075bc  8b91b0000000         mov edx, dword ptr [ecx + 0xb0]
// 007075c2  89501c               mov dword ptr [eax + 0x1c], edx
// 007075c5  8b91b4000000         mov edx, dword ptr [ecx + 0xb4]
// 007075cb  895020               mov dword ptr [eax + 0x20], edx
// 007075ce  8b89b8000000         mov ecx, dword ptr [ecx + 0xb8]
// 007075d4  894824               mov dword ptr [eax + 0x24], ecx
// 007075d7  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?GetMinMaxInfo@CXTPDockingPane@@UBEXPAUtagMINMAXINFO@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
