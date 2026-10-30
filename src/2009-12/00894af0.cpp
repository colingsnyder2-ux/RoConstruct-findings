// roc 2009-12 00894af0  unit: CXTPRibbonBar::CControlQuickAccessCommand  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00894af0
//
// 00894af0  6aff                 push -1
// 00894af2  68e8639600           push 0x9663e8
// 00894af7  64a100000000         mov eax, dword ptr fs:[0]
// 00894afd  50                   push eax
// 00894afe  51                   push ecx
// 00894aff  56                   push esi
// 00894b00  a10052b600           mov eax, dword ptr [0xb65200]
// 00894b05  33c4                 xor eax, esp
// 00894b07  50                   push eax
// 00894b08  8d44240c             lea eax, [esp + 0xc]
// 00894b0c  64a300000000         mov dword ptr fs:[0], eax
// 00894b12  8bf1                 mov esi, ecx
// 00894b14  89742408             mov dword ptr [esp + 8], esi
// 00894b18  e8b35ffaff           call 0x83aad0
// 00894b1d  6a18                 push 0x18
// 00894b1f  8bce                 mov ecx, esi
// 00894b21  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00894b29  c706ac4aa000         mov dword ptr [esi], 0xa04aac
// 00894b2f  c746204c4aa000       mov dword ptr [esi + 0x20], 0xa04a4c
// 00894b36  c786ac00000001000000 mov dword ptr [esi + 0xac], 1
// 00894b40  e81b15f6ff           call 0x7f6060
// 00894b45  8bc6                 mov eax, esi
// 00894b47  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00894b4b  64890d00000000       mov dword ptr fs:[0], ecx
// 00894b52  59                   pop ecx
// 00894b53  5e                   pop esi
// 00894b54  83c410               add esp, 0x10
// 00894b57  c3                   ret 
// copied from an identical function in another client (function ??0CXTPRibbonBarControlQuickAccessPopup@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonBar.cpp