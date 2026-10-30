// roc 2011-06 0084ef10  unit: CXTPDockingPaneManager  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0084ef10
//
// 0084ef10  51                   push ecx
// 0084ef11  8b81d0000000         mov eax, dword ptr [ecx + 0xd0]
// 0084ef17  890c24               mov dword ptr [esp], ecx
// 0084ef1a  85c0                 test eax, eax
// 0084ef1c  7506                 jne 0x84ef24
// 0084ef1e  33c0                 xor eax, eax
// 0084ef20  59                   pop ecx
// 0084ef21  c20800               ret 8
// 0084ef24  83783400             cmp dword ptr [eax + 0x34], 0
// 0084ef28  74f4                 je 0x84ef1e
// 0084ef2a  53                   push ebx
// 0084ef2b  33c9                 xor ecx, ecx
// 0084ef2d  55                   push ebp
// 0084ef2e  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0084ef32  85ed                 test ebp, ebp
// 0084ef34  0f95c1               setne cl
// 0084ef37  837c241400           cmp dword ptr [esp + 0x14], 0
// 0084ef3c  894c2410             mov dword ptr [esp + 0x10], ecx
// 0084ef40  7405                 je 0x84ef47
// 0084ef42  8b582c               mov ebx, dword ptr [eax + 0x2c]
// 0084ef45  eb03                 jmp 0x84ef4a
// 0084ef47  8b5830               mov ebx, dword ptr [eax + 0x30]
// 0084ef4a  56                   push esi
// 0084ef4b  57                   push edi
// 0084ef4c  8bf3                 mov esi, ebx
// 0084ef4e  85db                 test ebx, ebx
// 0084ef50  7459                 je 0x84efab
// 0084ef52  8bc6                 mov eax, esi
// 0084ef54  83c008               add eax, 8
// 0084ef57  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 0084ef5c  7404                 je 0x84ef62
// 0084ef5e  8b36                 mov esi, dword ptr [esi]
// 0084ef60  eb03                 jmp 0x84ef65
// 0084ef62  8b7604               mov esi, dword ptr [esi + 4]
// 0084ef65  8b38                 mov edi, dword ptr [eax]
// 0084ef67  85f6                 test esi, esi
// 0084ef69  7510                 jne 0x84ef7b
// 0084ef6b  39742418             cmp dword ptr [esp + 0x18], esi
// 0084ef6f  740a                 je 0x84ef7b
// 0084ef71  8bf3                 mov esi, ebx
// 0084ef73  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0084ef7b  85ed                 test ebp, ebp
// 0084ef7d  7522                 jne 0x84efa1
// 0084ef7f  8bcf                 mov ecx, edi
// 0084ef81  e8aaef0100           call 0x86df30
// 0084ef86  a801                 test al, 1
// 0084ef88  741d                 je 0x84efa7
// 0084ef8a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0084ef8e  6a01                 push 1
// 0084ef90  57                   push edi
// 0084ef91  e85afaffff           call 0x84e9f0
// 0084ef96  5f                   pop edi
// 0084ef97  5e                   pop esi
// 0084ef98  8d4501               lea eax, [ebp + 1]
// 0084ef9b  5d                   pop ebp
// 0084ef9c  5b                   pop ebx
// 0084ef9d  59                   pop ecx
// 0084ef9e  c20800               ret 8
// 0084efa1  3bfd                 cmp edi, ebp
// 0084efa3  7502                 jne 0x84efa7
// 0084efa5  33ed                 xor ebp, ebp
// 0084efa7  85f6                 test esi, esi
// 0084efa9  75a7                 jne 0x84ef52
// 0084efab  5f                   pop edi
// 0084efac  5e                   pop esi
// 0084efad  5d                   pop ebp
// 0084efae  33c0                 xor eax, eax
// 0084efb0  5b                   pop ebx
// 0084efb1  59                   pop ecx
// 0084efb2  c20800               ret 8
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?ActivateNextPane@CXTPDockingPaneManager@@QAEHPAVCXTPDockingPane@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
