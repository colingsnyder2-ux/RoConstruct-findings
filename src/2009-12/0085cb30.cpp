// roc 2009-12 0085cb30  unit: CXTPDockingPane  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085cb30
//
// 0085cb30  8b442404             mov eax, dword ptr [esp + 4]
// 0085cb34  33d2                 xor edx, edx
// 0085cb36  8910                 mov dword ptr [eax], edx
// 0085cb38  895004               mov dword ptr [eax + 4], edx
// 0085cb3b  895008               mov dword ptr [eax + 8], edx
// 0085cb3e  89500c               mov dword ptr [eax + 0xc], edx
// 0085cb41  895010               mov dword ptr [eax + 0x10], edx
// 0085cb44  895014               mov dword ptr [eax + 0x14], edx
// 0085cb47  895018               mov dword ptr [eax + 0x18], edx
// 0085cb4a  89501c               mov dword ptr [eax + 0x1c], edx
// 0085cb4d  895020               mov dword ptr [eax + 0x20], edx
// 0085cb50  895024               mov dword ptr [eax + 0x24], edx
// 0085cb53  8b91ac000000         mov edx, dword ptr [ecx + 0xac]
// 0085cb59  895018               mov dword ptr [eax + 0x18], edx
// 0085cb5c  8b91b0000000         mov edx, dword ptr [ecx + 0xb0]
// 0085cb62  89501c               mov dword ptr [eax + 0x1c], edx
// 0085cb65  8b91b4000000         mov edx, dword ptr [ecx + 0xb4]
// 0085cb6b  895020               mov dword ptr [eax + 0x20], edx
// 0085cb6e  8b89b8000000         mov ecx, dword ptr [ecx + 0xb8]
// 0085cb74  894824               mov dword ptr [eax + 0x24], ecx
// 0085cb77  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?GetMinMaxInfo@CXTPDockingPane@@UBEXPAUtagMINMAXINFO@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
