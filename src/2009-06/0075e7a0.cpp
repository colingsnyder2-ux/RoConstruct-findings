// roc 2009-06 0075e7a0  unit: CXTPDockingPaneManager  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0075e7a0
//
// 0075e7a0  51                   push ecx
// 0075e7a1  8b81d0000000         mov eax, dword ptr [ecx + 0xd0]
// 0075e7a7  890c24               mov dword ptr [esp], ecx
// 0075e7aa  85c0                 test eax, eax
// 0075e7ac  7506                 jne 0x75e7b4
// 0075e7ae  33c0                 xor eax, eax
// 0075e7b0  59                   pop ecx
// 0075e7b1  c20800               ret 8
// 0075e7b4  83783400             cmp dword ptr [eax + 0x34], 0
// 0075e7b8  74f4                 je 0x75e7ae
// 0075e7ba  53                   push ebx
// 0075e7bb  33c9                 xor ecx, ecx
// 0075e7bd  55                   push ebp
// 0075e7be  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0075e7c2  85ed                 test ebp, ebp
// 0075e7c4  0f95c1               setne cl
// 0075e7c7  837c241400           cmp dword ptr [esp + 0x14], 0
// 0075e7cc  894c2410             mov dword ptr [esp + 0x10], ecx
// 0075e7d0  7405                 je 0x75e7d7
// 0075e7d2  8b582c               mov ebx, dword ptr [eax + 0x2c]
// 0075e7d5  eb03                 jmp 0x75e7da
// 0075e7d7  8b5830               mov ebx, dword ptr [eax + 0x30]
// 0075e7da  56                   push esi
// 0075e7db  57                   push edi
// 0075e7dc  8bf3                 mov esi, ebx
// 0075e7de  85db                 test ebx, ebx
// 0075e7e0  7459                 je 0x75e83b
// 0075e7e2  8bc6                 mov eax, esi
// 0075e7e4  83c008               add eax, 8
// 0075e7e7  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 0075e7ec  7404                 je 0x75e7f2
// 0075e7ee  8b36                 mov esi, dword ptr [esi]
// 0075e7f0  eb03                 jmp 0x75e7f5
// 0075e7f2  8b7604               mov esi, dword ptr [esi + 4]
// 0075e7f5  8b38                 mov edi, dword ptr [eax]
// 0075e7f7  85f6                 test esi, esi
// 0075e7f9  7510                 jne 0x75e80b
// 0075e7fb  39742418             cmp dword ptr [esp + 0x18], esi
// 0075e7ff  740a                 je 0x75e80b
// 0075e801  8bf3                 mov esi, ebx
// 0075e803  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0075e80b  85ed                 test ebp, ebp
// 0075e80d  7522                 jne 0x75e831
// 0075e80f  8bcf                 mov ecx, edi
// 0075e811  e8ea2e0200           call 0x781700
// 0075e816  a801                 test al, 1
// 0075e818  741d                 je 0x75e837
// 0075e81a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0075e81e  6a01                 push 1
// 0075e820  57                   push edi
// 0075e821  e85afaffff           call 0x75e280
// 0075e826  5f                   pop edi
// 0075e827  5e                   pop esi
// 0075e828  8d4501               lea eax, [ebp + 1]
// 0075e82b  5d                   pop ebp
// 0075e82c  5b                   pop ebx
// 0075e82d  59                   pop ecx
// 0075e82e  c20800               ret 8
// 0075e831  3bfd                 cmp edi, ebp
// 0075e833  7502                 jne 0x75e837
// 0075e835  33ed                 xor ebp, ebp
// 0075e837  85f6                 test esi, esi
// 0075e839  75a7                 jne 0x75e7e2
// 0075e83b  5f                   pop edi
// 0075e83c  5e                   pop esi
// 0075e83d  5d                   pop ebp
// 0075e83e  33c0                 xor eax, eax
// 0075e840  5b                   pop ebx
// 0075e841  59                   pop ecx
// 0075e842  c20800               ret 8
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?ActivateNextPane@CXTPDockingPaneManager@@QAEHPAVCXTPDockingPane@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
