// roc 2008-06 006e7730  unit: CXTPToolBar::CControlButtonExpand  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e7730
//
// 006e7730  56                   push esi
// 006e7731  8bf1                 mov esi, ecx
// 006e7733  8b8678010000         mov eax, dword ptr [esi + 0x178]
// 006e7739  50                   push eax
// 006e773a  e8816a0000           call 0x6ee1c0
// 006e773f  50                   push eax
// 006e7740  e8e194fbff           call 0x6a0c26
// 006e7745  83c408               add esp, 8
// 006e7748  83be7401000000       cmp dword ptr [esi + 0x174], 0
// 006e774f  7415                 je 0x6e7766
// 006e7751  85c0                 test eax, eax
// 006e7753  7411                 je 0x6e7766
// 006e7755  83befc00000002       cmp dword ptr [esi + 0xfc], 2
// 006e775c  7508                 jne 0x6e7766
// 006e775e  8bc8                 mov ecx, eax
// 006e7760  5e                   pop esi
// 006e7761  e97a960000           jmp 0x6f0de0
// 006e7766  5e                   pop esi
// 006e7767  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControlPopup.cpp (function ?ExpandCommandBar@CXTPControlPopup@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlPopup.cpp
