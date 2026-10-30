// roc 2009-12 00871cc0  unit: CXTPTabPaintManager::CAppearanceSetFlat  size: 133 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00871cc0
//
// 00871cc0  6aff                 push -1
// 00871cc2  6856fe9500           push 0x95fe56
// 00871cc7  64a100000000         mov eax, dword ptr fs:[0]
// 00871ccd  50                   push eax
// 00871cce  51                   push ecx
// 00871ccf  56                   push esi
// 00871cd0  a10052b600           mov eax, dword ptr [0xb65200]
// 00871cd5  33c4                 xor eax, esp
// 00871cd7  50                   push eax
// 00871cd8  8d44240c             lea eax, [esp + 0xc]
// 00871cdc  64a300000000         mov dword ptr fs:[0], eax
// 00871ce2  8bf1                 mov esi, ecx
// 00871ce4  89742408             mov dword ptr [esp + 8], esi
// 00871ce8  c7065410a000         mov dword ptr [esi], 0xa01054
// 00871cee  8b8e68060000         mov ecx, dword ptr [esi + 0x668]
// 00871cf4  c744241401000000     mov dword ptr [esp + 0x14], 1
// 00871cfc  85c9                 test ecx, ecx
// 00871cfe  740f                 je 0x871d0f
// 00871d00  e8d720f8ff           call 0x7f3ddc
// 00871d05  c7866806000000000000 mov dword ptr [esi + 0x668], 0
// 00871d0f  8d8e54060000         lea ecx, [esi + 0x654]
// 00871d15  c644241400           mov byte ptr [esp + 0x14], 0
// 00871d1a  c70198019b00         mov dword ptr [ecx], 0x9b0198
// 00871d20  e80bd5b9ff           call 0x40f230
// 00871d25  8bce                 mov ecx, esi
// 00871d27  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00871d2f  e8bcd20000           call 0x87eff0
// 00871d34  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00871d38  64890d00000000       mov dword ptr fs:[0], ecx
// 00871d3f  59                   pop ecx
// 00871d40  5e                   pop esi
// 00871d41  83c410               add esp, 0x10
// 00871d44  c3                   ret 
// copied from an identical function in another client (function ??1CXTPRibbonTheme@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Ribbon/XTPRibbonTheme.cpp