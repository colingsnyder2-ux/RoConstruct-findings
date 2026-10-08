// roc 2009-06 00781ae0  unit: CXTPDockingPane  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00781ae0
//
// 00781ae0  8b442404             mov eax, dword ptr [esp + 4]
// 00781ae4  33d2                 xor edx, edx
// 00781ae6  8910                 mov dword ptr [eax], edx
// 00781ae8  895004               mov dword ptr [eax + 4], edx
// 00781aeb  895008               mov dword ptr [eax + 8], edx
// 00781aee  89500c               mov dword ptr [eax + 0xc], edx
// 00781af1  895010               mov dword ptr [eax + 0x10], edx
// 00781af4  895014               mov dword ptr [eax + 0x14], edx
// 00781af7  895018               mov dword ptr [eax + 0x18], edx
// 00781afa  89501c               mov dword ptr [eax + 0x1c], edx
// 00781afd  895020               mov dword ptr [eax + 0x20], edx
// 00781b00  895024               mov dword ptr [eax + 0x24], edx
// 00781b03  8b91ac000000         mov edx, dword ptr [ecx + 0xac]
// 00781b09  895018               mov dword ptr [eax + 0x18], edx
// 00781b0c  8b91b0000000         mov edx, dword ptr [ecx + 0xb0]
// 00781b12  89501c               mov dword ptr [eax + 0x1c], edx
// 00781b15  8b91b4000000         mov edx, dword ptr [ecx + 0xb4]
// 00781b1b  895020               mov dword ptr [eax + 0x20], edx
// 00781b1e  8b89b8000000         mov ecx, dword ptr [ecx + 0xb8]
// 00781b24  894824               mov dword ptr [eax + 0x24], ecx
// 00781b27  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?GetMinMaxInfo@CXTPDockingPane@@UBEXPAUtagMINMAXINFO@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
