// roc 2012-06 00988410  unit: CXTPPaintManager  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00988410
//
// 00988410  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00988414  8b4908               mov ecx, dword ptr [ecx + 8]
// 00988417  83ec08               sub esp, 8
// 0098841a  8d0424               lea eax, [esp]
// 0098841d  50                   push eax
// 0098841e  8b442414             mov eax, dword ptr [esp + 0x14]
// 00988422  52                   push edx
// 00988423  50                   push eax
// 00988424  51                   push ecx
// 00988425  ff154021b200         call dword ptr [0xb22140]
// 0098842b  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0098842f  8b1424               mov edx, dword ptr [esp]
// 00988432  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00988436  8910                 mov dword ptr [eax], edx
// 00988438  894804               mov dword ptr [eax + 4], ecx
// 0098843b  83c408               add esp, 8
// 0098843e  c20c00               ret 0xc
// library xtp-15.2.1/Source\Calendar\XTPCalendarControlView.cpp (function ?GetTextExtent@CDC@@QBE?AVCSize@@PBDH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarControlView.cpp
