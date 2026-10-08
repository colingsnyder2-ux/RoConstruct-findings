// roc 2010-06 0083f8e0  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0083f8e0
//
// 0083f8e0  56                   push esi
// 0083f8e1  8bf1                 mov esi, ecx
// 0083f8e3  e88886f6ff           call 0x7a7f70
// 0083f8e8  8b4660               mov eax, dword ptr [esi + 0x60]
// 0083f8eb  8b8000010000         mov eax, dword ptr [eax + 0x100]
// 0083f8f1  85c0                 test eax, eax
// 0083f8f3  7403                 je 0x83f8f8
// 0083f8f5  8b4020               mov eax, dword ptr [eax + 0x20]
// 0083f8f8  8b5620               mov edx, dword ptr [esi + 0x20]
// 0083f8fb  6a01                 push 1
// 0083f8fd  8d4c2410             lea ecx, [esp + 0x10]
// 0083f901  51                   push ecx
// 0083f902  50                   push eax
// 0083f903  52                   push edx
// 0083f904  ff157cba9e00         call dword ptr [0x9eba7c]
// 0083f90a  8b442410             mov eax, dword ptr [esp + 0x10]
// 0083f90e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0083f912  8b542408             mov edx, dword ptr [esp + 8]
// 0083f916  50                   push eax
// 0083f917  8b4660               mov eax, dword ptr [esi + 0x60]
// 0083f91a  51                   push ecx
// 0083f91b  8b8800010000         mov ecx, dword ptr [eax + 0x100]
// 0083f921  52                   push edx
// 0083f922  e81996f7ff           call 0x7b8f40
// 0083f927  5e                   pop esi
// 0083f928  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPControlComboBox.cpp (function ?OnMouseMove@CXTPControlComboBoxEditCtrl@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlComboBox.cpp
