// roc 2009-12 00894bc0  unit: CXTPRibbonBarControlQuickAccessPopup  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00894bc0
//
// 00894bc0  6aff                 push -1
// 00894bc2  68e8639600           push 0x9663e8
// 00894bc7  64a100000000         mov eax, dword ptr fs:[0]
// 00894bcd  50                   push eax
// 00894bce  51                   push ecx
// 00894bcf  56                   push esi
// 00894bd0  a10052b600           mov eax, dword ptr [0xb65200]
// 00894bd5  33c4                 xor eax, esp
// 00894bd7  50                   push eax
// 00894bd8  8d44240c             lea eax, [esp + 0xc]
// 00894bdc  64a300000000         mov dword ptr fs:[0], eax
// 00894be2  8bf1                 mov esi, ecx
// 00894be4  89742408             mov dword ptr [esp + 8], esi
// 00894be8  e8e35efaff           call 0x83aad0
// 00894bed  6a18                 push 0x18
// 00894bef  8bce                 mov ecx, esi
// 00894bf1  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00894bf9  c706644ca000         mov dword ptr [esi], 0xa04c64
// 00894bff  c74620044ca000       mov dword ptr [esi + 0x20], 0xa04c04
// 00894c06  c786ac00000001000000 mov dword ptr [esi + 0xac], 1
// 00894c10  e84b14f6ff           call 0x7f6060
// 00894c15  8bc6                 mov eax, esi
// 00894c17  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00894c1b  64890d00000000       mov dword ptr fs:[0], ecx
// 00894c22  59                   pop ecx
// 00894c23  5e                   pop esi
// 00894c24  83c410               add esp, 0x10
// 00894c27  c3                   ret 
// copied from an identical function in another client (function ??0CXTPRibbonBarControlQuickAccessPopup@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonBar.cpp