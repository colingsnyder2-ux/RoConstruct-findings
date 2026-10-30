// roc 2009-12 0086ab00  unit: CXTPPropertyGridItemColor::?8??OnInplaceButtonDown::CPropertyGridItemColorColorPopup  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086ab00
//
// 0086ab00  83ec10               sub esp, 0x10
// 0086ab03  56                   push esi
// 0086ab04  8bf1                 mov esi, ecx
// 0086ab06  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0086ab09  8d442404             lea eax, [esp + 4]
// 0086ab0d  50                   push eax
// 0086ab0e  51                   push ecx
// 0086ab0f  ff1550cc9800         call dword ptr [0x98cc50]
// 0086ab15  8b542420             mov edx, dword ptr [esp + 0x20]
// 0086ab19  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0086ab1d  52                   push edx
// 0086ab1e  50                   push eax
// 0086ab1f  8d4c240c             lea ecx, [esp + 0xc]
// 0086ab23  51                   push ecx
// 0086ab24  ff155cca9800         call dword ptr [0x98ca5c]
// 0086ab2a  85c0                 test eax, eax
// 0086ab2c  7520                 jne 0x86ab4e
// 0086ab2e  8bce                 mov ecx, esi
// 0086ab30  e89b6d0700           call 0x8e18d0
// 0086ab35  84c0                 test al, al
// 0086ab37  7515                 jne 0x86ab4e
// 0086ab39  8b16                 mov edx, dword ptr [esi]
// 0086ab3b  8b8248010000         mov eax, dword ptr [edx + 0x148]
// 0086ab41  6aff                 push -1
// 0086ab43  8bce                 mov ecx, esi
// 0086ab45  ffd0                 call eax
// 0086ab47  5e                   pop esi
// 0086ab48  83c410               add esp, 0x10
// 0086ab4b  c20c00               ret 0xc
// 0086ab4e  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0086ab52  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0086ab56  8b442418             mov eax, dword ptr [esp + 0x18]
// 0086ab5a  51                   push ecx
// 0086ab5b  52                   push edx
// 0086ab5c  50                   push eax
// 0086ab5d  8bce                 mov ecx, esi
// 0086ab5f  e88c700700           call 0x8e1bf0
// 0086ab64  5e                   pop esi
// 0086ab65  83c410               add esp, 0x10
// 0086ab68  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnLButtonDown@CXTColorPopup@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/Controls/XTColorPopup.cpp