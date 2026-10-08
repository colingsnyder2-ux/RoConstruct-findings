// roc 2012-06 009909d0  unit: CXTPControlComboBoxList  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009909d0
//
// 009909d0  56                   push esi
// 009909d1  8bf1                 mov esi, ecx
// 009909d3  e8061dffff           call 0x9826de
// 009909d8  8b4660               mov eax, dword ptr [esi + 0x60]
// 009909db  8b8000010000         mov eax, dword ptr [eax + 0x100]
// 009909e1  85c0                 test eax, eax
// 009909e3  7403                 je 0x9909e8
// 009909e5  8b4020               mov eax, dword ptr [eax + 0x20]
// 009909e8  8b5620               mov edx, dword ptr [esi + 0x20]
// 009909eb  6a01                 push 1
// 009909ed  8d4c2410             lea ecx, [esp + 0x10]
// 009909f1  51                   push ecx
// 009909f2  50                   push eax
// 009909f3  52                   push edx
// 009909f4  ff15e43cb200         call dword ptr [0xb23ce4]
// 009909fa  8b442410             mov eax, dword ptr [esp + 0x10]
// 009909fe  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00990a02  8b542408             mov edx, dword ptr [esp + 8]
// 00990a06  50                   push eax
// 00990a07  8b4660               mov eax, dword ptr [esi + 0x60]
// 00990a0a  51                   push ecx
// 00990a0b  8b8800010000         mov ecx, dword ptr [eax + 0x100]
// 00990a11  52                   push edx
// 00990a12  e8692c0000           call 0x993680
// 00990a17  5e                   pop esi
// 00990a18  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPControlComboBox.cpp (function ?OnMouseMove@CXTPControlComboBoxEditCtrl@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlComboBox.cpp
