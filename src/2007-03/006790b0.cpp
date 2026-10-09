// roc 2007-03 006790b0  unit: seg_00670000  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006790b0
//
// 006790b0  8b442404             mov eax, dword ptr [esp + 4]
// 006790b4  33d2                 xor edx, edx
// 006790b6  8910                 mov dword ptr [eax], edx
// 006790b8  895004               mov dword ptr [eax + 4], edx
// 006790bb  895008               mov dword ptr [eax + 8], edx
// 006790be  89500c               mov dword ptr [eax + 0xc], edx
// 006790c1  895010               mov dword ptr [eax + 0x10], edx
// 006790c4  895014               mov dword ptr [eax + 0x14], edx
// 006790c7  895018               mov dword ptr [eax + 0x18], edx
// 006790ca  89501c               mov dword ptr [eax + 0x1c], edx
// 006790cd  895020               mov dword ptr [eax + 0x20], edx
// 006790d0  895024               mov dword ptr [eax + 0x24], edx
// 006790d3  8b91ac000000         mov edx, dword ptr [ecx + 0xac]
// 006790d9  895018               mov dword ptr [eax + 0x18], edx
// 006790dc  8b91b0000000         mov edx, dword ptr [ecx + 0xb0]
// 006790e2  89501c               mov dword ptr [eax + 0x1c], edx
// 006790e5  8b91b4000000         mov edx, dword ptr [ecx + 0xb4]
// 006790eb  895020               mov dword ptr [eax + 0x20], edx
// 006790ee  8b89b8000000         mov ecx, dword ptr [ecx + 0xb8]
// 006790f4  894824               mov dword ptr [eax + 0x24], ecx
// 006790f7  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?GetMinMaxInfo@CXTPDockingPane@@UBEXPAUtagMINMAXINFO@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
