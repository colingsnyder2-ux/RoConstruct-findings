// roc 2008-06 00741f30  unit: CXTPControlComboBoxEditCtrl  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00741f30
//
// 00741f30  53                   push ebx
// 00741f31  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00741f35  55                   push ebp
// 00741f36  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00741f3a  56                   push esi
// 00741f3b  8bf1                 mov esi, ecx
// 00741f3d  8b4660               mov eax, dword ptr [esi + 0x60]
// 00741f40  8b8800010000         mov ecx, dword ptr [eax + 0x100]
// 00741f46  57                   push edi
// 00741f47  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00741f4b  85c9                 test ecx, ecx
// 00741f4d  7408                 je 0x741f57
// 00741f4f  57                   push edi
// 00741f50  53                   push ebx
// 00741f51  55                   push ebp
// 00741f52  e8c932f7ff           call 0x6b5220
// 00741f57  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00741f5b  51                   push ecx
// 00741f5c  57                   push edi
// 00741f5d  53                   push ebx
// 00741f5e  55                   push ebp
// 00741f5f  8bce                 mov ecx, esi
// 00741f61  e89ae8f5ff           call 0x6a0800
// 00741f66  5f                   pop edi
// 00741f67  5e                   pop esi
// 00741f68  5d                   pop ebp
// 00741f69  5b                   pop ebx
// 00741f6a  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPControlComboBox.cpp (function ?OnWndMsg@CXTPControlComboBoxEditCtrl@@MAEHIIJPAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlComboBox.cpp
