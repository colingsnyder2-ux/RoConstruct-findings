// roc 2007-03 0065afa0  unit: seg_00650000  size: 167 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0065afa0
//
// 0065afa0  51                   push ecx
// 0065afa1  8b81d0000000         mov eax, dword ptr [ecx + 0xd0]
// 0065afa7  85c0                 test eax, eax
// 0065afa9  890c24               mov dword ptr [esp], ecx
// 0065afac  7506                 jne 0x65afb4
// 0065afae  33c0                 xor eax, eax
// 0065afb0  59                   pop ecx
// 0065afb1  c20800               ret 8
// 0065afb4  83783400             cmp dword ptr [eax + 0x34], 0
// 0065afb8  74f4                 je 0x65afae
// 0065afba  53                   push ebx
// 0065afbb  33c9                 xor ecx, ecx
// 0065afbd  55                   push ebp
// 0065afbe  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0065afc2  85ed                 test ebp, ebp
// 0065afc4  0f95c1               setne cl
// 0065afc7  837c241400           cmp dword ptr [esp + 0x14], 0
// 0065afcc  894c2410             mov dword ptr [esp + 0x10], ecx
// 0065afd0  7405                 je 0x65afd7
// 0065afd2  8b582c               mov ebx, dword ptr [eax + 0x2c]
// 0065afd5  eb03                 jmp 0x65afda
// 0065afd7  8b5830               mov ebx, dword ptr [eax + 0x30]
// 0065afda  85db                 test ebx, ebx
// 0065afdc  56                   push esi
// 0065afdd  57                   push edi
// 0065afde  8bf3                 mov esi, ebx
// 0065afe0  745b                 je 0x65b03d
// 0065afe2  8bc6                 mov eax, esi
// 0065afe4  83c008               add eax, 8
// 0065afe7  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 0065afec  7404                 je 0x65aff2
// 0065afee  8b36                 mov esi, dword ptr [esi]
// 0065aff0  eb03                 jmp 0x65aff5
// 0065aff2  8b7604               mov esi, dword ptr [esi + 4]
// 0065aff5  85f6                 test esi, esi
// 0065aff7  8b38                 mov edi, dword ptr [eax]
// 0065aff9  7510                 jne 0x65b00b
// 0065affb  39742418             cmp dword ptr [esp + 0x18], esi
// 0065afff  740a                 je 0x65b00b
// 0065b001  8bf3                 mov esi, ebx
// 0065b003  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0065b00b  85ed                 test ebp, ebp
// 0065b00d  7524                 jne 0x65b033
// 0065b00f  8bcf                 mov ecx, edi
// 0065b011  e8badc0100           call 0x678cd0
// 0065b016  a801                 test al, 1
// 0065b018  741f                 je 0x65b039
// 0065b01a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0065b01e  6a01                 push 1
// 0065b020  57                   push edi
// 0065b021  e87afaffff           call 0x65aaa0
// 0065b026  5f                   pop edi
// 0065b027  5e                   pop esi
// 0065b028  5d                   pop ebp
// 0065b029  b801000000           mov eax, 1
// 0065b02e  5b                   pop ebx
// 0065b02f  59                   pop ecx
// 0065b030  c20800               ret 8
// 0065b033  3bfd                 cmp edi, ebp
// 0065b035  7502                 jne 0x65b039
// 0065b037  33ed                 xor ebp, ebp
// 0065b039  85f6                 test esi, esi
// 0065b03b  75a5                 jne 0x65afe2
// 0065b03d  5f                   pop edi
// 0065b03e  5e                   pop esi
// 0065b03f  5d                   pop ebp
// 0065b040  33c0                 xor eax, eax
// 0065b042  5b                   pop ebx
// 0065b043  59                   pop ecx
// 0065b044  c20800               ret 8
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneManager.cpp (function ?ActivateNextPane@CXTPDockingPaneManager@@QAEHPAVCXTPDockingPane@@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneManager.cpp
