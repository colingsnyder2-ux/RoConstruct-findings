// roc 2011-06 0086e310  unit: CXTPDockingPane  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0086e310
//
// 0086e310  8b442404             mov eax, dword ptr [esp + 4]
// 0086e314  33d2                 xor edx, edx
// 0086e316  8910                 mov dword ptr [eax], edx
// 0086e318  895004               mov dword ptr [eax + 4], edx
// 0086e31b  895008               mov dword ptr [eax + 8], edx
// 0086e31e  89500c               mov dword ptr [eax + 0xc], edx
// 0086e321  895010               mov dword ptr [eax + 0x10], edx
// 0086e324  895014               mov dword ptr [eax + 0x14], edx
// 0086e327  895018               mov dword ptr [eax + 0x18], edx
// 0086e32a  89501c               mov dword ptr [eax + 0x1c], edx
// 0086e32d  895020               mov dword ptr [eax + 0x20], edx
// 0086e330  895024               mov dword ptr [eax + 0x24], edx
// 0086e333  8b91ac000000         mov edx, dword ptr [ecx + 0xac]
// 0086e339  895018               mov dword ptr [eax + 0x18], edx
// 0086e33c  8b91b0000000         mov edx, dword ptr [ecx + 0xb0]
// 0086e342  89501c               mov dword ptr [eax + 0x1c], edx
// 0086e345  8b91b4000000         mov edx, dword ptr [ecx + 0xb4]
// 0086e34b  895020               mov dword ptr [eax + 0x20], edx
// 0086e34e  8b89b8000000         mov ecx, dword ptr [ecx + 0xb8]
// 0086e354  894824               mov dword ptr [eax + 0x24], ecx
// 0086e357  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?GetMinMaxInfo@CXTPDockingPane@@UBEXPAUtagMINMAXINFO@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
