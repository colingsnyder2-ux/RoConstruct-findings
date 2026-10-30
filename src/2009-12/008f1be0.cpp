// roc 2009-12 008f1be0  unit: CXTPRibbonSystemPopupBarPage  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f1be0
//
// 008f1be0  83ec10               sub esp, 0x10
// 008f1be3  56                   push esi
// 008f1be4  8bf1                 mov esi, ecx
// 008f1be6  8b8680010000         mov eax, dword ptr [esi + 0x180]
// 008f1bec  8b8800010000         mov ecx, dword ptr [eax + 0x100]
// 008f1bf2  e8e9fdffff           call 0x8f19e0
// 008f1bf7  50                   push eax
// 008f1bf8  e8eb21f0ff           call 0x7f3de8
// 008f1bfd  85c0                 test eax, eax
// 008f1bff  7518                 jne 0x8f1c19
// 008f1c01  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008f1c05  8b542418             mov edx, dword ptr [esp + 0x18]
// 008f1c09  51                   push ecx
// 008f1c0a  52                   push edx
// 008f1c0b  8bce                 mov ecx, esi
// 008f1c0d  e8aefff4ff           call 0x841bc0
// 008f1c12  5e                   pop esi
// 008f1c13  83c410               add esp, 0x10
// 008f1c16  c20800               ret 8
// 008f1c19  8b8680010000         mov eax, dword ptr [esi + 0x180]
// 008f1c1f  8b8800010000         mov ecx, dword ptr [eax + 0x100]
// 008f1c25  8b11                 mov edx, dword ptr [ecx]
// 008f1c27  8b92b8010000         mov edx, dword ptr [edx + 0x1b8]
// 008f1c2d  8d442404             lea eax, [esp + 4]
// 008f1c31  50                   push eax
// 008f1c32  ffd2                 call edx
// 008f1c34  8b4804               mov ecx, dword ptr [eax + 4]
// 008f1c37  8b442418             mov eax, dword ptr [esp + 0x18]
// 008f1c3b  41                   inc ecx
// 008f1c3c  ff4008               inc dword ptr [eax + 8]
// 008f1c3f  894804               mov dword ptr [eax + 4], ecx
// 008f1c42  5e                   pop esi
// 008f1c43  83c410               add esp, 0x10
// 008f1c46  c20800               ret 8
// copied from an identical function in another client (function ?AdjustExcludeRect@CXTPRibbonSystemPopupBarPage@@MAEXAAVCRect@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonSystemButton.cpp