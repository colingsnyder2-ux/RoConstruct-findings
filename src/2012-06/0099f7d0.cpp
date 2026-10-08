// roc 2012-06 0099f7d0  unit: CXTPToolBar  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0099f7d0
//
// 0099f7d0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0099f7d4  56                   push esi
// 0099f7d5  8bf1                 mov esi, ecx
// 0099f7d7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0099f7db  50                   push eax
// 0099f7dc  51                   push ecx
// 0099f7dd  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 0099f7e3  e8e8fc0200           call 0x9cf4d0
// 0099f7e8  85c0                 test eax, eax
// 0099f7ea  7515                 jne 0x99f801
// 0099f7ec  8b8e84010000         mov ecx, dword ptr [esi + 0x184]
// 0099f7f2  85c9                 test ecx, ecx
// 0099f7f4  740b                 je 0x99f801
// 0099f7f6  8b11                 mov edx, dword ptr [ecx]
// 0099f7f8  8b420c               mov eax, dword ptr [edx + 0xc]
// 0099f7fb  ffd0                 call eax
// 0099f7fd  5e                   pop esi
// 0099f7fe  c20c00               ret 0xc
// 0099f801  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0099f805  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0099f809  8b442408             mov eax, dword ptr [esp + 8]
// 0099f80d  51                   push ecx
// 0099f80e  52                   push edx
// 0099f80f  50                   push eax
// 0099f810  8bce                 mov ecx, esi
// 0099f812  e82940ffff           call 0x993840
// 0099f817  5e                   pop esi
// 0099f818  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPToolBar.cpp (function ?OnLButtonDblClk@CXTPToolBar@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPToolBar.cpp
