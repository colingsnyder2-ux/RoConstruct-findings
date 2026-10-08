// roc 2012-06 0098ede0  unit: CXTPControlComboBoxEditCtrl  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0098ede0
//
// 0098ede0  53                   push ebx
// 0098ede1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0098ede5  55                   push ebp
// 0098ede6  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0098edea  56                   push esi
// 0098edeb  8bf1                 mov esi, ecx
// 0098eded  8b4660               mov eax, dword ptr [esi + 0x60]
// 0098edf0  8b8800010000         mov ecx, dword ptr [eax + 0x100]
// 0098edf6  57                   push edi
// 0098edf7  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0098edfb  85c9                 test ecx, ecx
// 0098edfd  7408                 je 0x98ee07
// 0098edff  57                   push edi
// 0098ee00  53                   push ebx
// 0098ee01  55                   push ebp
// 0098ee02  e8f9420000           call 0x993100
// 0098ee07  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0098ee0b  51                   push ecx
// 0098ee0c  57                   push edi
// 0098ee0d  53                   push ebx
// 0098ee0e  55                   push ebp
// 0098ee0f  8bce                 mov ecx, esi
// 0098ee11  e87e34ffff           call 0x982294
// 0098ee16  5f                   pop edi
// 0098ee17  5e                   pop esi
// 0098ee18  5d                   pop ebp
// 0098ee19  5b                   pop ebx
// 0098ee1a  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPControlComboBox.cpp (function ?OnWndMsg@CXTPControlComboBoxEditCtrl@@MAEHIIJPAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlComboBox.cpp
