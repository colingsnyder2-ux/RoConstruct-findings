// from server: 100% by auto
// roc 2008-06 006a8dc0  unit: CXTPControlComboBoxList  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a8dc0
//
// 006a8dc0  56                   push esi
// 006a8dc1  8bf1                 mov esi, ecx
// 006a8dc3  e8a07effff           call 0x6a0c68
// 006a8dc8  8b4660               mov eax, dword ptr [esi + 0x60]
// 006a8dcb  8b8000010000         mov eax, dword ptr [eax + 0x100]
// 006a8dd1  85c0                 test eax, eax
// 006a8dd3  7403                 je 0x6a8dd8
// 006a8dd5  8b4020               mov eax, dword ptr [eax + 0x20]
// 006a8dd8  8b5620               mov edx, dword ptr [esi + 0x20]
// 006a8ddb  6a01                 push 1
// 006a8ddd  8d4c2410             lea ecx, [esp + 0x10]
// 006a8de1  51                   push ecx
// 006a8de2  50                   push eax
// 006a8de3  52                   push edx
// 006a8de4  ff15642c8000         call dword ptr [0x802c64]
// 006a8dea  8b442410             mov eax, dword ptr [esp + 0x10]
// 006a8dee  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006a8df2  8b542408             mov edx, dword ptr [esp + 8]
// 006a8df6  50                   push eax
// 006a8df7  8b4660               mov eax, dword ptr [esi + 0x60]
// 006a8dfa  51                   push ecx
// 006a8dfb  8b8800010000         mov ecx, dword ptr [eax + 0x100]
// 006a8e01  52                   push edx
// 006a8e02  e819c90000           call 0x6b5720
// 006a8e07  5e                   pop esi
// 006a8e08  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPControlComboBox.cpp (function ?OnMouseMove@CXTPControlComboBoxEditCtrl@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlComboBox.cpp
