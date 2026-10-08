// roc 2012-06 009e4040  unit: CXTPDockingPane  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e4040
//
// 009e4040  8b442404             mov eax, dword ptr [esp + 4]
// 009e4044  33d2                 xor edx, edx
// 009e4046  8910                 mov dword ptr [eax], edx
// 009e4048  895004               mov dword ptr [eax + 4], edx
// 009e404b  895008               mov dword ptr [eax + 8], edx
// 009e404e  89500c               mov dword ptr [eax + 0xc], edx
// 009e4051  895010               mov dword ptr [eax + 0x10], edx
// 009e4054  895014               mov dword ptr [eax + 0x14], edx
// 009e4057  895018               mov dword ptr [eax + 0x18], edx
// 009e405a  89501c               mov dword ptr [eax + 0x1c], edx
// 009e405d  895020               mov dword ptr [eax + 0x20], edx
// 009e4060  895024               mov dword ptr [eax + 0x24], edx
// 009e4063  8b91ac000000         mov edx, dword ptr [ecx + 0xac]
// 009e4069  895018               mov dword ptr [eax + 0x18], edx
// 009e406c  8b91b0000000         mov edx, dword ptr [ecx + 0xb0]
// 009e4072  89501c               mov dword ptr [eax + 0x1c], edx
// 009e4075  8b91b4000000         mov edx, dword ptr [ecx + 0xb4]
// 009e407b  895020               mov dword ptr [eax + 0x20], edx
// 009e407e  8b89b8000000         mov ecx, dword ptr [ecx + 0xb8]
// 009e4084  894824               mov dword ptr [eax + 0x24], ecx
// 009e4087  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?GetMinMaxInfo@CXTPDockingPane@@UBEXPAUtagMINMAXINFO@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
