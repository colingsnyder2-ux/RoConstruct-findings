// roc 2010-06 00810b00  unit: CXTPDockingPane  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00810b00
//
// 00810b00  8b442404             mov eax, dword ptr [esp + 4]
// 00810b04  33d2                 xor edx, edx
// 00810b06  8910                 mov dword ptr [eax], edx
// 00810b08  895004               mov dword ptr [eax + 4], edx
// 00810b0b  895008               mov dword ptr [eax + 8], edx
// 00810b0e  89500c               mov dword ptr [eax + 0xc], edx
// 00810b11  895010               mov dword ptr [eax + 0x10], edx
// 00810b14  895014               mov dword ptr [eax + 0x14], edx
// 00810b17  895018               mov dword ptr [eax + 0x18], edx
// 00810b1a  89501c               mov dword ptr [eax + 0x1c], edx
// 00810b1d  895020               mov dword ptr [eax + 0x20], edx
// 00810b20  895024               mov dword ptr [eax + 0x24], edx
// 00810b23  8b91ac000000         mov edx, dword ptr [ecx + 0xac]
// 00810b29  895018               mov dword ptr [eax + 0x18], edx
// 00810b2c  8b91b0000000         mov edx, dword ptr [ecx + 0xb0]
// 00810b32  89501c               mov dword ptr [eax + 0x1c], edx
// 00810b35  8b91b4000000         mov edx, dword ptr [ecx + 0xb4]
// 00810b3b  895020               mov dword ptr [eax + 0x20], edx
// 00810b3e  8b89b8000000         mov ecx, dword ptr [ecx + 0xb8]
// 00810b44  894824               mov dword ptr [eax + 0x24], ecx
// 00810b47  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?GetMinMaxInfo@CXTPDockingPane@@UBEXPAUtagMINMAXINFO@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
