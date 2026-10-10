// roc 2008-06 006e1b00  unit: CXTPToolBar::CControlButtonExpand  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e1b00
//
// 006e1b00  57                   push edi
// 006e1b01  8bf9                 mov edi, ecx
// 006e1b03  8b877c010000         mov eax, dword ptr [edi + 0x17c]
// 006e1b09  85c0                 test eax, eax
// 006e1b0b  7435                 je 0x6e1b42
// 006e1b0d  53                   push ebx
// 006e1b0e  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 006e1b12  56                   push esi
// 006e1b13  50                   push eax
// 006e1b14  8bcb                 mov ecx, ebx
// 006e1b16  e86538fdff           call 0x6b5380
// 006e1b1b  8bf0                 mov esi, eax
// 006e1b1d  85f6                 test esi, esi
// 006e1b1f  741f                 je 0x6e1b40
// 006e1b21  56                   push esi
// 006e1b22  8bcf                 mov ecx, edi
// 006e1b24  e837640000           call 0x6e7f60
// 006e1b29  c7877c01000000000000 mov dword ptr [edi + 0x17c], 0
// 006e1b33  8b06                 mov eax, dword ptr [esi]
// 006e1b35  8b90ec010000         mov edx, dword ptr [eax + 0x1ec]
// 006e1b3b  53                   push ebx
// 006e1b3c  8bce                 mov ecx, esi
// 006e1b3e  ffd2                 call edx
// 006e1b40  5e                   pop esi
// 006e1b41  5b                   pop ebx
// 006e1b42  5f                   pop edi
// 006e1b43  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPDockState.cpp (function ?RestoreCommandBarList@CXTPControlPopup@@MAEXPAVCXTPCommandBarList@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPDockState.cpp
