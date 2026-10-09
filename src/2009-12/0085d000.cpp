// roc 2009-12 0085d000  unit: CXTPDockingPane  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085d000
//
// 0085d000  56                   push esi
// 0085d001  8bf1                 mov esi, ecx
// 0085d003  8b8694000000         mov eax, dword ptr [esi + 0x94]
// 0085d009  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0085d00d  894e10               mov dword ptr [esi + 0x10], ecx
// 0085d010  85c0                 test eax, eax
// 0085d012  7449                 je 0x85d05d
// 0085d014  85c9                 test ecx, ecx
// 0085d016  7419                 je 0x85d031
// 0085d018  8b01                 mov eax, dword ptr [ecx]
// 0085d01a  8b5020               mov edx, dword ptr [eax + 0x20]
// 0085d01d  ffd2                 call edx
// 0085d01f  50                   push eax
// 0085d020  8b8694000000         mov eax, dword ptr [esi + 0x94]
// 0085d026  50                   push eax
// 0085d027  ff1538cb9800         call dword ptr [0x98cb38]
// 0085d02d  5e                   pop esi
// 0085d02e  c20400               ret 4
// 0085d031  6a00                 push 0
// 0085d033  50                   push eax
// 0085d034  ff1598ca9800         call dword ptr [0x98ca98]
// 0085d03a  8bce                 mov ecx, esi
// 0085d03c  e8ff370500           call 0x8b0840
// 0085d041  85c0                 test eax, eax
// 0085d043  7403                 je 0x85d048
// 0085d045  8b4020               mov eax, dword ptr [eax + 0x20]
// 0085d048  8b8e94000000         mov ecx, dword ptr [esi + 0x94]
// 0085d04e  50                   push eax
// 0085d04f  51                   push ecx
// 0085d050  ff1538cb9800         call dword ptr [0x98cb38]
// 0085d056  c7461400000000       mov dword ptr [esi + 0x14], 0
// 0085d05d  5e                   pop esi
// 0085d05e  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?SetParentContainer@CXTPDockingPane@@MAEXPAVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
