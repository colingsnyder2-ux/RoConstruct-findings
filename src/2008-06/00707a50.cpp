// from server: 100% by auto
// roc 2008-06 00707a50  unit: CXTPDockingPane  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00707a50
//
// 00707a50  56                   push esi
// 00707a51  8bf1                 mov esi, ecx
// 00707a53  8b8694000000         mov eax, dword ptr [esi + 0x94]
// 00707a59  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00707a5d  894e10               mov dword ptr [esi + 0x10], ecx
// 00707a60  85c0                 test eax, eax
// 00707a62  7449                 je 0x707aad
// 00707a64  85c9                 test ecx, ecx
// 00707a66  7419                 je 0x707a81
// 00707a68  8b01                 mov eax, dword ptr [ecx]
// 00707a6a  8b5020               mov edx, dword ptr [eax + 0x20]
// 00707a6d  ffd2                 call edx
// 00707a6f  50                   push eax
// 00707a70  8b8694000000         mov eax, dword ptr [esi + 0x94]
// 00707a76  50                   push eax
// 00707a77  ff15b82b8000         call dword ptr [0x802bb8]
// 00707a7d  5e                   pop esi
// 00707a7e  c20400               ret 4
// 00707a81  6a00                 push 0
// 00707a83  50                   push eax
// 00707a84  ff15bc2c8000         call dword ptr [0x802cbc]
// 00707a8a  8bce                 mov ecx, esi
// 00707a8c  e80f5a0500           call 0x75d4a0
// 00707a91  85c0                 test eax, eax
// 00707a93  7403                 je 0x707a98
// 00707a95  8b4020               mov eax, dword ptr [eax + 0x20]
// 00707a98  8b8e94000000         mov ecx, dword ptr [esi + 0x94]
// 00707a9e  50                   push eax
// 00707a9f  51                   push ecx
// 00707aa0  ff15b82b8000         call dword ptr [0x802bb8]
// 00707aa6  c7461400000000       mov dword ptr [esi + 0x14], 0
// 00707aad  5e                   pop esi
// 00707aae  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?SetParentContainer@CXTPDockingPane@@MAEXPAVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
