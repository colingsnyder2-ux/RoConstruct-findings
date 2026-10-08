// roc 2009-06 0071d480  unit: CXTPControlComboBoxList  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0071d480
//
// 0071d480  56                   push esi
// 0071d481  8bf1                 mov esi, ecx
// 0071d483  e880bbffff           call 0x719008
// 0071d488  8b4660               mov eax, dword ptr [esi + 0x60]
// 0071d48b  8b8000010000         mov eax, dword ptr [eax + 0x100]
// 0071d491  85c0                 test eax, eax
// 0071d493  7403                 je 0x71d498
// 0071d495  8b4020               mov eax, dword ptr [eax + 0x20]
// 0071d498  8b5620               mov edx, dword ptr [esi + 0x20]
// 0071d49b  6a01                 push 1
// 0071d49d  8d4c2410             lea ecx, [esp + 0x10]
// 0071d4a1  51                   push ecx
// 0071d4a2  50                   push eax
// 0071d4a3  52                   push edx
// 0071d4a4  ff15b0ee8900         call dword ptr [0x89eeb0]
// 0071d4aa  8b442410             mov eax, dword ptr [esp + 0x10]
// 0071d4ae  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0071d4b2  8b542408             mov edx, dword ptr [esp + 8]
// 0071d4b6  50                   push eax
// 0071d4b7  8b4660               mov eax, dword ptr [esi + 0x60]
// 0071d4ba  51                   push ecx
// 0071d4bb  8b8800010000         mov ecx, dword ptr [eax + 0x100]
// 0071d4c1  52                   push edx
// 0071d4c2  e8c9070100           call 0x72dc90
// 0071d4c7  5e                   pop esi
// 0071d4c8  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPControlComboBox.cpp (function ?OnMouseMove@CXTPControlComboBoxEditCtrl@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlComboBox.cpp
