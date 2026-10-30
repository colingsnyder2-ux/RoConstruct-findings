// roc 2009-12 008115c0  unit: CXTPToolBar  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008115c0
//
// 008115c0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008115c4  56                   push esi
// 008115c5  8bf1                 mov esi, ecx
// 008115c7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008115cb  50                   push eax
// 008115cc  51                   push ecx
// 008115cd  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 008115d3  e848400300           call 0x845620
// 008115d8  85c0                 test eax, eax
// 008115da  7515                 jne 0x8115f1
// 008115dc  8b8e84010000         mov ecx, dword ptr [esi + 0x184]
// 008115e2  85c9                 test ecx, ecx
// 008115e4  740b                 je 0x8115f1
// 008115e6  8b11                 mov edx, dword ptr [ecx]
// 008115e8  8b420c               mov eax, dword ptr [edx + 0xc]
// 008115eb  ffd0                 call eax
// 008115ed  5e                   pop esi
// 008115ee  c20c00               ret 0xc
// 008115f1  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008115f5  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008115f9  8b442408             mov eax, dword ptr [esp + 8]
// 008115fd  51                   push ecx
// 008115fe  52                   push edx
// 008115ff  50                   push eax
// 00811600  8bce                 mov ecx, esi
// 00811602  e88939ffff           call 0x804f90
// 00811607  5e                   pop esi
// 00811608  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPToolBar.cpp (function ?OnLButtonDblClk@CXTPToolBar@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPToolBar.cpp
