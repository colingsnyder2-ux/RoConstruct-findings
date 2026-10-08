// roc 2011-06 008271b0  unit: CXTPToolBar  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008271b0
//
// 008271b0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008271b4  56                   push esi
// 008271b5  8bf1                 mov esi, ecx
// 008271b7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008271bb  50                   push eax
// 008271bc  51                   push ecx
// 008271bd  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 008271c3  e838fe0200           call 0x857000
// 008271c8  85c0                 test eax, eax
// 008271ca  7515                 jne 0x8271e1
// 008271cc  8b8e84010000         mov ecx, dword ptr [esi + 0x184]
// 008271d2  85c9                 test ecx, ecx
// 008271d4  740b                 je 0x8271e1
// 008271d6  8b11                 mov edx, dword ptr [ecx]
// 008271d8  8b420c               mov eax, dword ptr [edx + 0xc]
// 008271db  ffd0                 call eax
// 008271dd  5e                   pop esi
// 008271de  c20c00               ret 0xc
// 008271e1  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008271e5  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008271e9  8b442408             mov eax, dword ptr [esp + 8]
// 008271ed  51                   push ecx
// 008271ee  52                   push edx
// 008271ef  50                   push eax
// 008271f0  8bce                 mov ecx, esi
// 008271f2  e85943ffff           call 0x81b550
// 008271f7  5e                   pop esi
// 008271f8  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPToolBar.cpp (function ?OnLButtonDblClk@CXTPToolBar@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPToolBar.cpp
