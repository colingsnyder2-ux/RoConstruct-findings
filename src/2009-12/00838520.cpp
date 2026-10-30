// roc 2009-12 00838520  unit: CXTPControls  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00838520
//
// 00838520  83ec14               sub esp, 0x14
// 00838523  8b442418             mov eax, dword ptr [esp + 0x18]
// 00838527  8b542420             mov edx, dword ptr [esp + 0x20]
// 0083852b  56                   push esi
// 0083852c  8bf1                 mov esi, ecx
// 0083852e  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00838532  89442404             mov dword ptr [esp + 4], eax
// 00838536  8b442428             mov eax, dword ptr [esp + 0x28]
// 0083853a  c744240800000000     mov dword ptr [esp + 8], 0
// 00838542  894c240c             mov dword ptr [esp + 0xc], ecx
// 00838546  89542410             mov dword ptr [esp + 0x10], edx
// 0083854a  89442414             mov dword ptr [esp + 0x14], eax
// 0083854e  e8ddf1f1ff           call 0x757730
// 00838553  a802                 test al, 2
// 00838555  7508                 jne 0x83855f
// 00838557  c744240801000000     mov dword ptr [esp + 8], 1
// 0083855f  8b16                 mov edx, dword ptr [esi]
// 00838561  8b9248010000         mov edx, dword ptr [edx + 0x148]
// 00838567  8d442404             lea eax, [esp + 4]
// 0083856b  50                   push eax
// 0083856c  6a04                 push 4
// 0083856e  8bce                 mov ecx, esi
// 00838570  ffd2                 call edx
// 00838572  8b442408             mov eax, dword ptr [esp + 8]
// 00838576  5e                   pop esi
// 00838577  83c414               add esp, 0x14
// 0083857a  c21000               ret 0x10
// copied from an identical function in another client (function ?_OnAction@CXTPDockingPaneManager@@AAEHW4XTPDockingPaneAction@@PAVCXTPDockingPane@@PAVCXTPDockingPaneBase@@W4XTPDockingPaneDirection@@@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneManager.cpp