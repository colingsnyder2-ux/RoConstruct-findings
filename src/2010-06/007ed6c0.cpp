// roc 2010-06 007ed6c0  unit: CXTPDockingPaneManager  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007ed6c0
//
// 007ed6c0  51                   push ecx
// 007ed6c1  8b81d0000000         mov eax, dword ptr [ecx + 0xd0]
// 007ed6c7  890c24               mov dword ptr [esp], ecx
// 007ed6ca  85c0                 test eax, eax
// 007ed6cc  7506                 jne 0x7ed6d4
// 007ed6ce  33c0                 xor eax, eax
// 007ed6d0  59                   pop ecx
// 007ed6d1  c20800               ret 8
// 007ed6d4  83783400             cmp dword ptr [eax + 0x34], 0
// 007ed6d8  74f4                 je 0x7ed6ce
// 007ed6da  53                   push ebx
// 007ed6db  33c9                 xor ecx, ecx
// 007ed6dd  55                   push ebp
// 007ed6de  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 007ed6e2  85ed                 test ebp, ebp
// 007ed6e4  0f95c1               setne cl
// 007ed6e7  837c241400           cmp dword ptr [esp + 0x14], 0
// 007ed6ec  894c2410             mov dword ptr [esp + 0x10], ecx
// 007ed6f0  7405                 je 0x7ed6f7
// 007ed6f2  8b582c               mov ebx, dword ptr [eax + 0x2c]
// 007ed6f5  eb03                 jmp 0x7ed6fa
// 007ed6f7  8b5830               mov ebx, dword ptr [eax + 0x30]
// 007ed6fa  56                   push esi
// 007ed6fb  57                   push edi
// 007ed6fc  8bf3                 mov esi, ebx
// 007ed6fe  85db                 test ebx, ebx
// 007ed700  7459                 je 0x7ed75b
// 007ed702  8bc6                 mov eax, esi
// 007ed704  83c008               add eax, 8
// 007ed707  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 007ed70c  7404                 je 0x7ed712
// 007ed70e  8b36                 mov esi, dword ptr [esi]
// 007ed710  eb03                 jmp 0x7ed715
// 007ed712  8b7604               mov esi, dword ptr [esi + 4]
// 007ed715  8b38                 mov edi, dword ptr [eax]
// 007ed717  85f6                 test esi, esi
// 007ed719  7510                 jne 0x7ed72b
// 007ed71b  39742418             cmp dword ptr [esp + 0x18], esi
// 007ed71f  740a                 je 0x7ed72b
// 007ed721  8bf3                 mov esi, ebx
// 007ed723  c744241800000000     mov dword ptr [esp + 0x18], 0
// 007ed72b  85ed                 test ebp, ebp
// 007ed72d  7522                 jne 0x7ed751
// 007ed72f  8bcf                 mov ecx, edi
// 007ed731  e8ba0befff           call 0x6de2f0
// 007ed736  a801                 test al, 1
// 007ed738  741d                 je 0x7ed757
// 007ed73a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007ed73e  6a01                 push 1
// 007ed740  57                   push edi
// 007ed741  e85afaffff           call 0x7ed1a0
// 007ed746  5f                   pop edi
// 007ed747  5e                   pop esi
// 007ed748  8d4501               lea eax, [ebp + 1]
// 007ed74b  5d                   pop ebp
// 007ed74c  5b                   pop ebx
// 007ed74d  59                   pop ecx
// 007ed74e  c20800               ret 8
// 007ed751  3bfd                 cmp edi, ebp
// 007ed753  7502                 jne 0x7ed757
// 007ed755  33ed                 xor ebp, ebp
// 007ed757  85f6                 test esi, esi
// 007ed759  75a7                 jne 0x7ed702
// 007ed75b  5f                   pop edi
// 007ed75c  5e                   pop esi
// 007ed75d  5d                   pop ebp
// 007ed75e  33c0                 xor eax, eax
// 007ed760  5b                   pop ebx
// 007ed761  59                   pop ecx
// 007ed762  c20800               ret 8
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?ActivateNextPane@CXTPDockingPaneManager@@QAEHPAVCXTPDockingPane@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
