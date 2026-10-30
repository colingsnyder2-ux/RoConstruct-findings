// roc 2009-06 00781fa0  unit: CXTPDockingPane  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00781fa0
//
// 00781fa0  56                   push esi
// 00781fa1  8bf1                 mov esi, ecx
// 00781fa3  8b8694000000         mov eax, dword ptr [esi + 0x94]
// 00781fa9  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00781fad  894e10               mov dword ptr [esi + 0x10], ecx
// 00781fb0  85c0                 test eax, eax
// 00781fb2  7449                 je 0x781ffd
// 00781fb4  85c9                 test ecx, ecx
// 00781fb6  7419                 je 0x781fd1
// 00781fb8  8b01                 mov eax, dword ptr [ecx]
// 00781fba  8b5020               mov edx, dword ptr [eax + 0x20]
// 00781fbd  ffd2                 call edx
// 00781fbf  50                   push eax
// 00781fc0  8b8694000000         mov eax, dword ptr [esi + 0x94]
// 00781fc6  50                   push eax
// 00781fc7  ff15a0ec8900         call dword ptr [0x89eca0]
// 00781fcd  5e                   pop esi
// 00781fce  c20400               ret 4
// 00781fd1  6a00                 push 0
// 00781fd3  50                   push eax
// 00781fd4  ff1538ed8900         call dword ptr [0x89ed38]
// 00781fda  8bce                 mov ecx, esi
// 00781fdc  e81f3d0500           call 0x7d5d00
// 00781fe1  85c0                 test eax, eax
// 00781fe3  7403                 je 0x781fe8
// 00781fe5  8b4020               mov eax, dword ptr [eax + 0x20]
// 00781fe8  8b8e94000000         mov ecx, dword ptr [esi + 0x94]
// 00781fee  50                   push eax
// 00781fef  51                   push ecx
// 00781ff0  ff15a0ec8900         call dword ptr [0x89eca0]
// 00781ff6  c7461400000000       mov dword ptr [esi + 0x14], 0
// 00781ffd  5e                   pop esi
// 00781ffe  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?SetParentContainer@CXTPDockingPane@@MAEXPAVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
