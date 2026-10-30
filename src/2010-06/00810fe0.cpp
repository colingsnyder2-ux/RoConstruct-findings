// roc 2010-06 00810fe0  unit: CXTPDockingPane  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00810fe0
//
// 00810fe0  56                   push esi
// 00810fe1  8bf1                 mov esi, ecx
// 00810fe3  8b8694000000         mov eax, dword ptr [esi + 0x94]
// 00810fe9  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00810fed  894e10               mov dword ptr [esi + 0x10], ecx
// 00810ff0  85c0                 test eax, eax
// 00810ff2  7449                 je 0x81103d
// 00810ff4  85c9                 test ecx, ecx
// 00810ff6  7419                 je 0x811011
// 00810ff8  8b01                 mov eax, dword ptr [ecx]
// 00810ffa  8b5020               mov edx, dword ptr [eax + 0x20]
// 00810ffd  ffd2                 call edx
// 00810fff  50                   push eax
// 00811000  8b8694000000         mov eax, dword ptr [esi + 0x94]
// 00811006  50                   push eax
// 00811007  ff15f0b99e00         call dword ptr [0x9eb9f0]
// 0081100d  5e                   pop esi
// 0081100e  c20400               ret 4
// 00811011  6a00                 push 0
// 00811013  50                   push eax
// 00811014  ff1518bc9e00         call dword ptr [0x9ebc18]
// 0081101a  8bce                 mov ecx, esi
// 0081101c  e8ef380500           call 0x864910
// 00811021  85c0                 test eax, eax
// 00811023  7403                 je 0x811028
// 00811025  8b4020               mov eax, dword ptr [eax + 0x20]
// 00811028  8b8e94000000         mov ecx, dword ptr [esi + 0x94]
// 0081102e  50                   push eax
// 0081102f  51                   push ecx
// 00811030  ff15f0b99e00         call dword ptr [0x9eb9f0]
// 00811036  c7461400000000       mov dword ptr [esi + 0x14], 0
// 0081103d  5e                   pop esi
// 0081103e  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?SetParentContainer@CXTPDockingPane@@MAEXPAVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
