// roc 2008-06 006a7510  unit: CXTPControlComboBoxList  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a7510
//
// 006a7510  56                   push esi
// 006a7511  8bf1                 mov esi, ecx
// 006a7513  e87899ffff           call 0x6a0e90
// 006a7518  33c0                 xor eax, eax
// 006a751a  894654               mov dword ptr [esi + 0x54], eax
// 006a751d  894658               mov dword ptr [esi + 0x58], eax
// 006a7520  89465c               mov dword ptr [esi + 0x5c], eax
// 006a7523  c7063c118500         mov dword ptr [esi], 0x85113c
// 006a7529  8bc6                 mov eax, esi
// 006a752b  5e                   pop esi
// 006a752c  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlComboBox.cpp (function ??0CXTPEdit@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlComboBox.cpp
