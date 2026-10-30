// roc 2010-06 0083ea80  unit: CXTPControlComboBoxEditCtrl  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0083ea80
//
// 0083ea80  53                   push ebx
// 0083ea81  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0083ea85  55                   push ebp
// 0083ea86  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0083ea8a  56                   push esi
// 0083ea8b  8bf1                 mov esi, ecx
// 0083ea8d  8b4660               mov eax, dword ptr [esi + 0x60]
// 0083ea90  8b8800010000         mov ecx, dword ptr [eax + 0x100]
// 0083ea96  57                   push edi
// 0083ea97  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0083ea9b  85c9                 test ecx, ecx
// 0083ea9d  7408                 je 0x83eaa7
// 0083ea9f  57                   push edi
// 0083eaa0  53                   push ebx
// 0083eaa1  55                   push ebp
// 0083eaa2  e8299ff7ff           call 0x7b89d0
// 0083eaa7  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0083eaab  51                   push ecx
// 0083eaac  57                   push edi
// 0083eaad  53                   push ebx
// 0083eaae  55                   push ebp
// 0083eaaf  8bce                 mov ecx, esi
// 0083eab1  e86490f6ff           call 0x7a7b1a
// 0083eab6  5f                   pop edi
// 0083eab7  5e                   pop esi
// 0083eab8  5d                   pop ebp
// 0083eab9  5b                   pop ebx
// 0083eaba  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPControlComboBox.cpp (function ?OnWndMsg@CXTPControlComboBoxEditCtrl@@MAEHIIJPAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlComboBox.cpp
