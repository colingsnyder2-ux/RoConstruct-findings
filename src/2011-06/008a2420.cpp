// roc 2011-06 008a2420  unit: ATL::CRegObject  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008a2420
//
// 008a2420  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008a2424  8bc1                 mov eax, ecx
// 008a2426  8b4c2404             mov ecx, dword ptr [esp + 4]
// 008a242a  56                   push esi
// 008a242b  8b742414             mov esi, dword ptr [esp + 0x14]
// 008a242f  8908                 mov dword ptr [eax], ecx
// 008a2431  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008a2435  894804               mov dword ptr [eax + 4], ecx
// 008a2438  894814               mov dword ptr [eax + 0x14], ecx
// 008a243b  57                   push edi
// 008a243c  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 008a2440  895008               mov dword ptr [eax + 8], edx
// 008a2443  895018               mov dword ptr [eax + 0x18], edx
// 008a2446  8b542420             mov edx, dword ptr [esp + 0x20]
// 008a244a  89700c               mov dword ptr [eax + 0xc], esi
// 008a244d  89701c               mov dword ptr [eax + 0x1c], esi
// 008a2450  897810               mov dword ptr [eax + 0x10], edi
// 008a2453  897820               mov dword ptr [eax + 0x20], edi
// 008a2456  33c9                 xor ecx, ecx
// 008a2458  5f                   pop edi
// 008a2459  895024               mov dword ptr [eax + 0x24], edx
// 008a245c  894828               mov dword ptr [eax + 0x28], ecx
// 008a245f  89482c               mov dword ptr [eax + 0x2c], ecx
// 008a2462  5e                   pop esi
// 008a2463  c21800               ret 0x18
// library xtp-15.2.1/Source\CommandBars\XTPDockBar.cpp (function ??0DOCK_INFO@CXTPDockBar@@QAE@PAVCXTPToolBar@@VCRect@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPDockBar.cpp
