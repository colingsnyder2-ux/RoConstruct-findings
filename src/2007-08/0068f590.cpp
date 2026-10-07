// roc 2007-08 0068f590  unit: CXTPDockingPane  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0068f590
//
// 0068f590  8b442404             mov eax, dword ptr [esp + 4]
// 0068f594  33d2                 xor edx, edx
// 0068f596  8910                 mov dword ptr [eax], edx
// 0068f598  895004               mov dword ptr [eax + 4], edx
// 0068f59b  895008               mov dword ptr [eax + 8], edx
// 0068f59e  89500c               mov dword ptr [eax + 0xc], edx
// 0068f5a1  895010               mov dword ptr [eax + 0x10], edx
// 0068f5a4  895014               mov dword ptr [eax + 0x14], edx
// 0068f5a7  895018               mov dword ptr [eax + 0x18], edx
// 0068f5aa  89501c               mov dword ptr [eax + 0x1c], edx
// 0068f5ad  895020               mov dword ptr [eax + 0x20], edx
// 0068f5b0  895024               mov dword ptr [eax + 0x24], edx
// 0068f5b3  8b91ac000000         mov edx, dword ptr [ecx + 0xac]
// 0068f5b9  895018               mov dword ptr [eax + 0x18], edx
// 0068f5bc  8b91b0000000         mov edx, dword ptr [ecx + 0xb0]
// 0068f5c2  89501c               mov dword ptr [eax + 0x1c], edx
// 0068f5c5  8b91b4000000         mov edx, dword ptr [ecx + 0xb4]
// 0068f5cb  895020               mov dword ptr [eax + 0x20], edx
// 0068f5ce  8b89b8000000         mov ecx, dword ptr [ecx + 0xb8]
// 0068f5d4  894824               mov dword ptr [eax + 0x24], ecx
// 0068f5d7  c20400               ret 4
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPane.cpp (function ?GetMinMaxInfo@CXTPDockingPane@@UBEXPAUtagMINMAXINFO@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPane.cpp
