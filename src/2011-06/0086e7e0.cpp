// roc 2011-06 0086e7e0  unit: CXTPDockingPane  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0086e7e0
//
// 0086e7e0  56                   push esi
// 0086e7e1  8bf1                 mov esi, ecx
// 0086e7e3  8b8694000000         mov eax, dword ptr [esi + 0x94]
// 0086e7e9  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0086e7ed  894e10               mov dword ptr [esi + 0x10], ecx
// 0086e7f0  85c0                 test eax, eax
// 0086e7f2  7449                 je 0x86e83d
// 0086e7f4  85c9                 test ecx, ecx
// 0086e7f6  7419                 je 0x86e811
// 0086e7f8  8b01                 mov eax, dword ptr [ecx]
// 0086e7fa  8b5020               mov edx, dword ptr [eax + 0x20]
// 0086e7fd  ffd2                 call edx
// 0086e7ff  50                   push eax
// 0086e800  8b8694000000         mov eax, dword ptr [esi + 0x94]
// 0086e806  50                   push eax
// 0086e807  ff15a01aa400         call dword ptr [0xa41aa0]
// 0086e80d  5e                   pop esi
// 0086e80e  c20400               ret 4
// 0086e811  6a00                 push 0
// 0086e813  50                   push eax
// 0086e814  ff153c1ca400         call dword ptr [0xa41c3c]
// 0086e81a  8bce                 mov ecx, esi
// 0086e81c  e83f350500           call 0x8c1d60
// 0086e821  85c0                 test eax, eax
// 0086e823  7403                 je 0x86e828
// 0086e825  8b4020               mov eax, dword ptr [eax + 0x20]
// 0086e828  8b8e94000000         mov ecx, dword ptr [esi + 0x94]
// 0086e82e  50                   push eax
// 0086e82f  51                   push ecx
// 0086e830  ff15a01aa400         call dword ptr [0xa41aa0]
// 0086e836  c7461400000000       mov dword ptr [esi + 0x14], 0
// 0086e83d  5e                   pop esi
// 0086e83e  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?SetParentContainer@CXTPDockingPane@@MAEXPAVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
