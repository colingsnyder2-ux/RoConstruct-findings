// roc 2012-06 009c73e0  unit: CXTPDockingPaneManager  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c73e0
//
// 009c73e0  51                   push ecx
// 009c73e1  8b81d0000000         mov eax, dword ptr [ecx + 0xd0]
// 009c73e7  890c24               mov dword ptr [esp], ecx
// 009c73ea  85c0                 test eax, eax
// 009c73ec  7506                 jne 0x9c73f4
// 009c73ee  33c0                 xor eax, eax
// 009c73f0  59                   pop ecx
// 009c73f1  c20800               ret 8
// 009c73f4  83783400             cmp dword ptr [eax + 0x34], 0
// 009c73f8  74f4                 je 0x9c73ee
// 009c73fa  53                   push ebx
// 009c73fb  33c9                 xor ecx, ecx
// 009c73fd  55                   push ebp
// 009c73fe  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 009c7402  85ed                 test ebp, ebp
// 009c7404  0f95c1               setne cl
// 009c7407  837c241400           cmp dword ptr [esp + 0x14], 0
// 009c740c  894c2410             mov dword ptr [esp + 0x10], ecx
// 009c7410  7405                 je 0x9c7417
// 009c7412  8b582c               mov ebx, dword ptr [eax + 0x2c]
// 009c7415  eb03                 jmp 0x9c741a
// 009c7417  8b5830               mov ebx, dword ptr [eax + 0x30]
// 009c741a  56                   push esi
// 009c741b  57                   push edi
// 009c741c  8bf3                 mov esi, ebx
// 009c741e  85db                 test ebx, ebx
// 009c7420  7459                 je 0x9c747b
// 009c7422  8bc6                 mov eax, esi
// 009c7424  83c008               add eax, 8
// 009c7427  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 009c742c  7404                 je 0x9c7432
// 009c742e  8b36                 mov esi, dword ptr [esi]
// 009c7430  eb03                 jmp 0x9c7435
// 009c7432  8b7604               mov esi, dword ptr [esi + 4]
// 009c7435  8b38                 mov edi, dword ptr [eax]
// 009c7437  85f6                 test esi, esi
// 009c7439  7510                 jne 0x9c744b
// 009c743b  39742418             cmp dword ptr [esp + 0x18], esi
// 009c743f  740a                 je 0x9c744b
// 009c7441  8bf3                 mov esi, ebx
// 009c7443  c744241800000000     mov dword ptr [esp + 0x18], 0
// 009c744b  85ed                 test ebp, ebp
// 009c744d  7522                 jne 0x9c7471
// 009c744f  8bcf                 mov ecx, edi
// 009c7451  e80ac80100           call 0x9e3c60
// 009c7456  a801                 test al, 1
// 009c7458  741d                 je 0x9c7477
// 009c745a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 009c745e  6a01                 push 1
// 009c7460  57                   push edi
// 009c7461  e85afaffff           call 0x9c6ec0
// 009c7466  5f                   pop edi
// 009c7467  5e                   pop esi
// 009c7468  8d4501               lea eax, [ebp + 1]
// 009c746b  5d                   pop ebp
// 009c746c  5b                   pop ebx
// 009c746d  59                   pop ecx
// 009c746e  c20800               ret 8
// 009c7471  3bfd                 cmp edi, ebp
// 009c7473  7502                 jne 0x9c7477
// 009c7475  33ed                 xor ebp, ebp
// 009c7477  85f6                 test esi, esi
// 009c7479  75a7                 jne 0x9c7422
// 009c747b  5f                   pop edi
// 009c747c  5e                   pop esi
// 009c747d  5d                   pop ebp
// 009c747e  33c0                 xor eax, eax
// 009c7480  5b                   pop ebx
// 009c7481  59                   pop ecx
// 009c7482  c20800               ret 8
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?ActivateNextPane@CXTPDockingPaneManager@@QAEHPAVCXTPDockingPane@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
