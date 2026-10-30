// roc 2009-12 00894a70  unit: CXTPRibbonBar::CControlQuickAccessCommand  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00894a70
//
// 00894a70  6aff                 push -1
// 00894a72  6888169600           push 0x961688
// 00894a77  64a100000000         mov eax, dword ptr fs:[0]
// 00894a7d  50                   push eax
// 00894a7e  51                   push ecx
// 00894a7f  56                   push esi
// 00894a80  a10052b600           mov eax, dword ptr [0xb65200]
// 00894a85  33c4                 xor eax, esp
// 00894a87  50                   push eax
// 00894a88  8d44240c             lea eax, [esp + 0xc]
// 00894a8c  64a300000000         mov dword ptr fs:[0], eax
// 00894a92  8bf1                 mov esi, ecx
// 00894a94  89742408             mov dword ptr [esp + 8], esi
// 00894a98  e8c3b6ffff           call 0x890160
// 00894a9d  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00894aa1  6a1a                 push 0x1a
// 00894aa3  8bce                 mov ecx, esi
// 00894aa5  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00894aad  c706fc48a000         mov dword ptr [esi], 0xa048fc
// 00894ab3  c746209c48a000       mov dword ptr [esi + 0x20], 0xa0489c
// 00894aba  898674010000         mov dword ptr [esi + 0x174], eax
// 00894ac0  c786ac00000001000000 mov dword ptr [esi + 0xac], 1
// 00894aca  e89115f6ff           call 0x7f6060
// 00894acf  8bc6                 mov eax, esi
// 00894ad1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00894ad5  64890d00000000       mov dword ptr fs:[0], ecx
// 00894adc  59                   pop ecx
// 00894add  5e                   pop esi
// 00894ade  83c410               add esp, 0x10
// 00894ae1  c20400               ret 4
// copied from an identical function in another client (function ??0CControlCaptionButton@CXTPRibbonBar@@QAE@PAVCXTPOffice2007FrameHook@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonBar.cpp