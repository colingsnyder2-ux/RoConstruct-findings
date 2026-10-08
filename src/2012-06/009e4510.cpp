// roc 2012-06 009e4510  unit: CXTPDockingPane  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e4510
//
// 009e4510  56                   push esi
// 009e4511  8bf1                 mov esi, ecx
// 009e4513  8b8694000000         mov eax, dword ptr [esi + 0x94]
// 009e4519  8b4c2408             mov ecx, dword ptr [esp + 8]
// 009e451d  894e10               mov dword ptr [esi + 0x10], ecx
// 009e4520  85c0                 test eax, eax
// 009e4522  7449                 je 0x9e456d
// 009e4524  85c9                 test ecx, ecx
// 009e4526  7419                 je 0x9e4541
// 009e4528  8b01                 mov eax, dword ptr [ecx]
// 009e452a  8b5020               mov edx, dword ptr [eax + 0x20]
// 009e452d  ffd2                 call edx
// 009e452f  50                   push eax
// 009e4530  8b8694000000         mov eax, dword ptr [esi + 0x94]
// 009e4536  50                   push eax
// 009e4537  ff15ac3cb200         call dword ptr [0xb23cac]
// 009e453d  5e                   pop esi
// 009e453e  c20400               ret 4
// 009e4541  6a00                 push 0
// 009e4543  50                   push eax
// 009e4544  ff15203bb200         call dword ptr [0xb23b20]
// 009e454a  8bce                 mov ecx, esi
// 009e454c  e81f5c0500           call 0xa3a170
// 009e4551  85c0                 test eax, eax
// 009e4553  7403                 je 0x9e4558
// 009e4555  8b4020               mov eax, dword ptr [eax + 0x20]
// 009e4558  8b8e94000000         mov ecx, dword ptr [esi + 0x94]
// 009e455e  50                   push eax
// 009e455f  51                   push ecx
// 009e4560  ff15ac3cb200         call dword ptr [0xb23cac]
// 009e4566  c7461400000000       mov dword ptr [esi + 0x14], 0
// 009e456d  5e                   pop esi
// 009e456e  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?SetParentContainer@CXTPDockingPane@@MAEXPAVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
