// from server: 100% by auto
// roc 2007-08 0068fa80  unit: CXTPDockingPane  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0068fa80
//
// 0068fa80  56                   push esi
// 0068fa81  8bf1                 mov esi, ecx
// 0068fa83  8b8694000000         mov eax, dword ptr [esi + 0x94]
// 0068fa89  85c0                 test eax, eax
// 0068fa8b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0068fa8f  894e10               mov dword ptr [esi + 0x10], ecx
// 0068fa92  7449                 je 0x68fadd
// 0068fa94  85c9                 test ecx, ecx
// 0068fa96  7419                 je 0x68fab1
// 0068fa98  8b01                 mov eax, dword ptr [ecx]
// 0068fa9a  8b5020               mov edx, dword ptr [eax + 0x20]
// 0068fa9d  ffd2                 call edx
// 0068fa9f  50                   push eax
// 0068faa0  8b8694000000         mov eax, dword ptr [esi + 0x94]
// 0068faa6  50                   push eax
// 0068faa7  ff15acee7700         call dword ptr [0x77eeac]
// 0068faad  5e                   pop esi
// 0068faae  c20400               ret 4
// 0068fab1  6a00                 push 0
// 0068fab3  50                   push eax
// 0068fab4  ff1520ed7700         call dword ptr [0x77ed20]
// 0068faba  8bce                 mov ecx, esi
// 0068fabc  e87f0a0500           call 0x6e0540
// 0068fac1  85c0                 test eax, eax
// 0068fac3  7403                 je 0x68fac8
// 0068fac5  8b4020               mov eax, dword ptr [eax + 0x20]
// 0068fac8  8b8e94000000         mov ecx, dword ptr [esi + 0x94]
// 0068face  50                   push eax
// 0068facf  51                   push ecx
// 0068fad0  ff15acee7700         call dword ptr [0x77eeac]
// 0068fad6  c7461400000000       mov dword ptr [esi + 0x14], 0
// 0068fadd  5e                   pop esi
// 0068fade  c20400               ret 4
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPane.cpp (function ?SetParentContainer@CXTPDockingPane@@MAEXPAVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPane.cpp
