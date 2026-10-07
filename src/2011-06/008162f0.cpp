// roc 2011-06 008162f0  unit: CXTPEdit  size: 143 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008162f0
//
// 008162f0  83ec1c               sub esp, 0x1c
// 008162f3  57                   push edi
// 008162f4  8bf9                 mov edi, ecx
// 008162f6  837f0800             cmp dword ptr [edi + 8], 0
// 008162fa  7509                 jne 0x816305
// 008162fc  33c0                 xor eax, eax
// 008162fe  5f                   pop edi
// 008162ff  83c41c               add esp, 0x1c
// 00816302  c20800               ret 8
// 00816305  53                   push ebx
// 00816306  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0081630a  83fb26               cmp ebx, 0x26
// 0081630d  740f                 je 0x81631e
// 0081630f  83fb28               cmp ebx, 0x28
// 00816312  740a                 je 0x81631e
// 00816314  83fb22               cmp ebx, 0x22
// 00816317  7405                 je 0x81631e
// 00816319  83fb21               cmp ebx, 0x21
// 0081631c  750d                 jne 0x81632b
// 0081631e  6a12                 push 0x12
// 00816320  ff15601aa400         call dword ptr [0xa41a60]
// 00816326  6685c0               test ax, ax
// 00816329  7d0a                 jge 0x816335
// 0081632b  5b                   pop ebx
// 0081632c  33c0                 xor eax, eax
// 0081632e  5f                   pop edi
// 0081632f  83c41c               add esp, 0x1c
// 00816332  c20800               ret 8
// 00816335  8b4708               mov eax, dword ptr [edi + 8]
// 00816338  56                   push esi
// 00816339  8b35581ba400         mov esi, dword ptr [0xa41b58]
// 0081633f  6a05                 push 5
// 00816341  50                   push eax
// 00816342  ffd6                 call esi
// 00816344  6a01                 push 1
// 00816346  50                   push eax
// 00816347  ffd6                 call esi
// 00816349  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0081634d  8d54240c             lea edx, [esp + 0xc]
// 00816351  8944240c             mov dword ptr [esp + 0xc], eax
// 00816355  8b4708               mov eax, dword ptr [edi + 8]
// 00816358  52                   push edx
// 00816359  50                   push eax
// 0081635a  c744241800010000     mov dword ptr [esp + 0x18], 0x100
// 00816362  895c241c             mov dword ptr [esp + 0x1c], ebx
// 00816366  894c2420             mov dword ptr [esp + 0x20], ecx
// 0081636a  ff15141ba400         call dword ptr [0xa41b14]
// 00816370  f7d8                 neg eax
// 00816372  5e                   pop esi
// 00816373  1bc0                 sbb eax, eax
// 00816375  5b                   pop ebx
// 00816376  f7d8                 neg eax
// 00816378  5f                   pop edi
// 00816379  83c41c               add esp, 0x1c
// 0081637c  c20800               ret 8
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBox.cpp (function ?IsDialogCode@CXTPControlComboBoxAutoCompleteWnd@@QAEHIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBox.cpp
