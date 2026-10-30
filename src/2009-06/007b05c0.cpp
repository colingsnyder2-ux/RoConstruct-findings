// roc 2009-06 007b05c0  unit: CXTPControlComboBoxEditCtrl  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007b05c0
//
// 007b05c0  53                   push ebx
// 007b05c1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 007b05c5  55                   push ebp
// 007b05c6  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 007b05ca  56                   push esi
// 007b05cb  8bf1                 mov esi, ecx
// 007b05cd  8b4660               mov eax, dword ptr [esi + 0x60]
// 007b05d0  8b8800010000         mov ecx, dword ptr [eax + 0x100]
// 007b05d6  57                   push edi
// 007b05d7  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 007b05db  85c9                 test ecx, ecx
// 007b05dd  7408                 je 0x7b05e7
// 007b05df  57                   push edi
// 007b05e0  53                   push ebx
// 007b05e1  55                   push ebp
// 007b05e2  e8a9d1f7ff           call 0x72d790
// 007b05e7  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007b05eb  51                   push ecx
// 007b05ec  57                   push edi
// 007b05ed  53                   push ebx
// 007b05ee  55                   push ebp
// 007b05ef  8bce                 mov ecx, esi
// 007b05f1  e8bc85f6ff           call 0x718bb2
// 007b05f6  5f                   pop edi
// 007b05f7  5e                   pop esi
// 007b05f8  5d                   pop ebp
// 007b05f9  5b                   pop ebx
// 007b05fa  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPControlComboBox.cpp (function ?OnWndMsg@CXTPControlComboBoxEditCtrl@@MAEHIIJPAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlComboBox.cpp
