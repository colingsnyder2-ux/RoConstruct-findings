// roc 2009-12 008435c0  unit: CXTPPopupBar  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008435c0
//
// 008435c0  8b442404             mov eax, dword ptr [esp + 4]
// 008435c4  56                   push esi
// 008435c5  8bf1                 mov esi, ecx
// 008435c7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008435cb  898684010000         mov dword ptr [esi + 0x184], eax
// 008435d1  8b442410             mov eax, dword ptr [esp + 0x10]
// 008435d5  898e88010000         mov dword ptr [esi + 0x188], ecx
// 008435db  85c0                 test eax, eax
// 008435dd  740e                 je 0x8435ed
// 008435df  50                   push eax
// 008435e0  8d868c010000         lea eax, [esi + 0x18c]
// 008435e6  50                   push eax
// 008435e7  ff1564cc9800         call dword ptr [0x98cc64]
// 008435ed  8b16                 mov edx, dword ptr [esi]
// 008435ef  8b8260010000         mov eax, dword ptr [edx + 0x160]
// 008435f5  6a00                 push 0
// 008435f7  6a00                 push 0
// 008435f9  8bce                 mov ecx, esi
// 008435fb  ffd0                 call eax
// 008435fd  5e                   pop esi
// 008435fe  c20c00               ret 0xc
// copied from an identical function in another client (function ?Popup@CXTPPopupBar@@QAEHHHPBUtagRECT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPPopupBar.cpp