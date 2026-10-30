// roc 2007-03 00679590  unit: seg_00670000  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00679590
//
// 00679590  56                   push esi
// 00679591  8bf1                 mov esi, ecx
// 00679593  8b8694000000         mov eax, dword ptr [esi + 0x94]
// 00679599  85c0                 test eax, eax
// 0067959b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0067959f  894e10               mov dword ptr [esi + 0x10], ecx
// 006795a2  7449                 je 0x6795ed
// 006795a4  85c9                 test ecx, ecx
// 006795a6  7419                 je 0x6795c1
// 006795a8  8b01                 mov eax, dword ptr [ecx]
// 006795aa  8b5020               mov edx, dword ptr [eax + 0x20]
// 006795ad  ffd2                 call edx
// 006795af  50                   push eax
// 006795b0  8b8694000000         mov eax, dword ptr [esi + 0x94]
// 006795b6  50                   push eax
// 006795b7  ff1574ef7700         call dword ptr [0x77ef74]
// 006795bd  5e                   pop esi
// 006795be  c20400               ret 4
// 006795c1  6a00                 push 0
// 006795c3  50                   push eax
// 006795c4  ff1510ee7700         call dword ptr [0x77ee10]
// 006795ca  8bce                 mov ecx, esi
// 006795cc  e84fff0400           call 0x6c9520
// 006795d1  85c0                 test eax, eax
// 006795d3  7403                 je 0x6795d8
// 006795d5  8b4020               mov eax, dword ptr [eax + 0x20]
// 006795d8  8b8e94000000         mov ecx, dword ptr [esi + 0x94]
// 006795de  50                   push eax
// 006795df  51                   push ecx
// 006795e0  ff1574ef7700         call dword ptr [0x77ef74]
// 006795e6  c7461400000000       mov dword ptr [esi + 0x14], 0
// 006795ed  5e                   pop esi
// 006795ee  c20400               ret 4
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPane.cpp (function ?SetParentContainer@CXTPDockingPane@@MAEXPAVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPane.cpp
