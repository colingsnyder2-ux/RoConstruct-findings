// from server: 100% by auto
// roc 2007-08 007153d0  unit: CXTCaptionButton  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007153d0
//
// 007153d0  8b442404             mov eax, dword ptr [esp + 4]
// 007153d4  56                   push esi
// 007153d5  8bf1                 mov esi, ecx
// 007153d7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007153db  898e88000000         mov dword ptr [esi + 0x88], ecx
// 007153e1  8b8e9c000000         mov ecx, dword ptr [esi + 0x9c]
// 007153e7  85c9                 test ecx, ecx
// 007153e9  898684000000         mov dword ptr [esi + 0x84], eax
// 007153ef  740f                 je 0x715400
// 007153f1  e8eeadf1ff           call 0x6301e4
// 007153f6  c7869c00000000000000 mov dword ptr [esi + 0x9c], 0
// 00715400  8b4620               mov eax, dword ptr [esi + 0x20]
// 00715403  8b542410             mov edx, dword ptr [esp + 0x10]
// 00715407  50                   push eax
// 00715408  89969c000000         mov dword ptr [esi + 0x9c], edx
// 0071540e  ff15bced7700         call dword ptr [0x77edbc]
// 00715414  85c0                 test eax, eax
// 00715416  7415                 je 0x71542d
// 00715418  837c241400           cmp dword ptr [esp + 0x14], 0
// 0071541d  740e                 je 0x71542d
// 0071541f  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00715422  6a01                 push 1
// 00715424  6a00                 push 0
// 00715426  51                   push ecx
// 00715427  ff15dcec7700         call dword ptr [0x77ecdc]
// 0071542d  b801000000           mov eax, 1
// 00715432  5e                   pop esi
// 00715433  c21000               ret 0x10
// library xtp-11.2.2-vc8/Source\Controls\XTButton.cpp (function ?SetIcon@CXTButton@@QAEHVCSize@@PAVCXTPImageManagerIcon@@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTButton.cpp
