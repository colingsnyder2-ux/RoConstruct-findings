// roc 2009-12 007f99b0  unit: CXTPControlComboBoxEditCtrl  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f99b0
//
// 007f99b0  53                   push ebx
// 007f99b1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 007f99b5  55                   push ebp
// 007f99b6  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 007f99ba  56                   push esi
// 007f99bb  8bf1                 mov esi, ecx
// 007f99bd  8b4660               mov eax, dword ptr [esi + 0x60]
// 007f99c0  8b8800010000         mov ecx, dword ptr [eax + 0x100]
// 007f99c6  57                   push edi
// 007f99c7  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 007f99cb  85c9                 test ecx, ecx
// 007f99cd  7408                 je 0x7f99d7
// 007f99cf  57                   push edi
// 007f99d0  53                   push ebx
// 007f99d1  55                   push ebp
// 007f99d2  e8f9ae0000           call 0x8048d0
// 007f99d7  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007f99db  51                   push ecx
// 007f99dc  57                   push edi
// 007f99dd  53                   push ebx
// 007f99de  55                   push ebp
// 007f99df  8bce                 mov ecx, esi
// 007f99e1  e8f49fffff           call 0x7f39da
// 007f99e6  5f                   pop edi
// 007f99e7  5e                   pop esi
// 007f99e8  5d                   pop ebp
// 007f99e9  5b                   pop ebx
// 007f99ea  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPControlComboBox.cpp (function ?OnWndMsg@CXTPControlComboBoxEditCtrl@@MAEHIIJPAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlComboBox.cpp
