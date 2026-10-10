// roc 2008-06 006e4ed0  unit: CXTPControls  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e4ed0
//
// 006e4ed0  83ec14               sub esp, 0x14
// 006e4ed3  8b442418             mov eax, dword ptr [esp + 0x18]
// 006e4ed7  8b542420             mov edx, dword ptr [esp + 0x20]
// 006e4edb  56                   push esi
// 006e4edc  8bf1                 mov esi, ecx
// 006e4ede  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006e4ee2  89442404             mov dword ptr [esp + 4], eax
// 006e4ee6  8b442428             mov eax, dword ptr [esp + 0x28]
// 006e4eea  c744240800000000     mov dword ptr [esp + 8], 0
// 006e4ef2  894c240c             mov dword ptr [esp + 0xc], ecx
// 006e4ef6  89542410             mov dword ptr [esp + 0x10], edx
// 006e4efa  89442414             mov dword ptr [esp + 0x14], eax
// 006e4efe  e8bd00e9ff           call 0x574fc0
// 006e4f03  a802                 test al, 2
// 006e4f05  7508                 jne 0x6e4f0f
// 006e4f07  c744240801000000     mov dword ptr [esp + 8], 1
// 006e4f0f  8b16                 mov edx, dword ptr [esi]
// 006e4f11  8b9248010000         mov edx, dword ptr [edx + 0x148]
// 006e4f17  8d442404             lea eax, [esp + 4]
// 006e4f1b  50                   push eax
// 006e4f1c  6a04                 push 4
// 006e4f1e  8bce                 mov ecx, esi
// 006e4f20  ffd2                 call edx
// 006e4f22  8b442408             mov eax, dword ptr [esp + 8]
// 006e4f26  5e                   pop esi
// 006e4f27  83c414               add esp, 0x14
// 006e4f2a  c21000               ret 0x10
// library xtp-11.2.2-shared-mfc/Source\DockingPane\XTPDockingPaneManager.cpp (function ?_OnAction@CXTPDockingPaneManager@@AAEHW4XTPDockingPaneAction@@PAVCXTPDockingPane@@PAVCXTPDockingPaneBase@@W4XTPDockingPaneDirection@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneManager.cpp
