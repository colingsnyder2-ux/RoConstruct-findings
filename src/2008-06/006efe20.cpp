// roc 2008-06 006efe20  unit: CXTPPopupBar  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006efe20
//
// 006efe20  8b442404             mov eax, dword ptr [esp + 4]
// 006efe24  56                   push esi
// 006efe25  8bf1                 mov esi, ecx
// 006efe27  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006efe2b  898684010000         mov dword ptr [esi + 0x184], eax
// 006efe31  8b442410             mov eax, dword ptr [esp + 0x10]
// 006efe35  898e88010000         mov dword ptr [esi + 0x188], ecx
// 006efe3b  85c0                 test eax, eax
// 006efe3d  740e                 je 0x6efe4d
// 006efe3f  50                   push eax
// 006efe40  8d868c010000         lea eax, [esi + 0x18c]
// 006efe46  50                   push eax
// 006efe47  ff15702d8000         call dword ptr [0x802d70]
// 006efe4d  8b16                 mov edx, dword ptr [esi]
// 006efe4f  8b8260010000         mov eax, dword ptr [edx + 0x160]
// 006efe55  6a00                 push 0
// 006efe57  6a00                 push 0
// 006efe59  8bce                 mov ecx, esi
// 006efe5b  ffd0                 call eax
// 006efe5d  5e                   pop esi
// 006efe5e  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPPopupBar.cpp (function ?Popup@CXTPPopupBar@@QAEHHHPBUtagRECT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPPopupBar.cpp
