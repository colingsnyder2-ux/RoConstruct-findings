// roc 2011-06 0089c860  unit: CXTPControlEdit  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0089c860
//
// 0089c860  56                   push esi
// 0089c861  8bf1                 mov esi, ecx
// 0089c863  e8c6ddf6ff           call 0x80a62e
// 0089c868  8b4660               mov eax, dword ptr [esi + 0x60]
// 0089c86b  8b8000010000         mov eax, dword ptr [eax + 0x100]
// 0089c871  85c0                 test eax, eax
// 0089c873  7403                 je 0x89c878
// 0089c875  8b4020               mov eax, dword ptr [eax + 0x20]
// 0089c878  8b5620               mov edx, dword ptr [esi + 0x20]
// 0089c87b  6a01                 push 1
// 0089c87d  8d4c2410             lea ecx, [esp + 0x10]
// 0089c881  51                   push ecx
// 0089c882  50                   push eax
// 0089c883  52                   push edx
// 0089c884  ff15101ba400         call dword ptr [0xa41b10]
// 0089c88a  8b442410             mov eax, dword ptr [esp + 0x10]
// 0089c88e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0089c892  8b542408             mov edx, dword ptr [esp + 8]
// 0089c896  50                   push eax
// 0089c897  8b4660               mov eax, dword ptr [esi + 0x60]
// 0089c89a  51                   push ecx
// 0089c89b  8b8800010000         mov ecx, dword ptr [eax + 0x100]
// 0089c8a1  52                   push edx
// 0089c8a2  e8e9eaf7ff           call 0x81b390
// 0089c8a7  5e                   pop esi
// 0089c8a8  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPControlComboBox.cpp (function ?OnMouseMove@CXTPControlComboBoxEditCtrl@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlComboBox.cpp
