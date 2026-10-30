// roc 2009-12 008ebc00  unit: CXTPDialogBar::CCaptionPopupBar  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ebc00
//
// 008ebc00  6aff                 push -1
// 008ebc02  6857669600           push 0x966657
// 008ebc07  64a100000000         mov eax, dword ptr fs:[0]
// 008ebc0d  50                   push eax
// 008ebc0e  51                   push ecx
// 008ebc0f  56                   push esi
// 008ebc10  a10052b600           mov eax, dword ptr [0xb65200]
// 008ebc15  33c4                 xor eax, esp
// 008ebc17  50                   push eax
// 008ebc18  8d44240c             lea eax, [esp + 0xc]
// 008ebc1c  64a300000000         mov dword ptr fs:[0], eax
// 008ebc22  8bf1                 mov esi, ecx
// 008ebc24  89742408             mov dword ptr [esp + 8], esi
// 008ebc28  c706ccd7a000         mov dword ptr [esi], 0xa0d7cc
// 008ebc2e  c74654bcd7a000       mov dword ptr [esi + 0x54], 0xa0d7bc
// 008ebc35  c7465c5cd7a000       mov dword ptr [esi + 0x5c], 0xa0d75c
// 008ebc3c  8b8ee8010000         mov ecx, dword ptr [esi + 0x1e8]
// 008ebc42  c744241401000000     mov dword ptr [esp + 0x14], 1
// 008ebc4a  e88d81f0ff           call 0x7f3ddc
// 008ebc4f  8d8ee4010000         lea ecx, [esi + 0x1e4]
// 008ebc55  ff15c0de9800         call dword ptr [0x98dec0]
// 008ebc5b  8bce                 mov ecx, esi
// 008ebc5d  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 008ebc65  e87658f2ff           call 0x8114e0
// 008ebc6a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008ebc6e  64890d00000000       mov dword ptr fs:[0], ecx
// 008ebc75  59                   pop ecx
// 008ebc76  5e                   pop esi
// 008ebc77  83c410               add esp, 0x10
// 008ebc7a  c3                   ret 
// copied from an identical function in another client (function ??1CXTPDialogBar@@UAE@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source/CommandBars/XTPDialogBar.cpp