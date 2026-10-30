// roc 2011-06 0089ba50  unit: CXTPControlComboBoxEditCtrl  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0089ba50
//
// 0089ba50  53                   push ebx
// 0089ba51  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0089ba55  55                   push ebp
// 0089ba56  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0089ba5a  56                   push esi
// 0089ba5b  8bf1                 mov esi, ecx
// 0089ba5d  8b4660               mov eax, dword ptr [esi + 0x60]
// 0089ba60  8b8800010000         mov ecx, dword ptr [eax + 0x100]
// 0089ba66  57                   push edi
// 0089ba67  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0089ba6b  85c9                 test ecx, ecx
// 0089ba6d  7408                 je 0x89ba77
// 0089ba6f  57                   push edi
// 0089ba70  53                   push ebx
// 0089ba71  55                   push ebp
// 0089ba72  e829f4f7ff           call 0x81aea0
// 0089ba77  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0089ba7b  51                   push ecx
// 0089ba7c  57                   push edi
// 0089ba7d  53                   push ebx
// 0089ba7e  55                   push ebp
// 0089ba7f  8bce                 mov ecx, esi
// 0089ba81  e852e7f6ff           call 0x80a1d8
// 0089ba86  5f                   pop edi
// 0089ba87  5e                   pop esi
// 0089ba88  5d                   pop ebp
// 0089ba89  5b                   pop ebx
// 0089ba8a  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPControlComboBox.cpp (function ?OnWndMsg@CXTPControlComboBoxEditCtrl@@MAEHIIJPAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlComboBox.cpp
