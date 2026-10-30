// roc 2009-12 00839560  unit: CXTPDockingPaneManager  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00839560
//
// 00839560  51                   push ecx
// 00839561  8b81d0000000         mov eax, dword ptr [ecx + 0xd0]
// 00839567  890c24               mov dword ptr [esp], ecx
// 0083956a  85c0                 test eax, eax
// 0083956c  7506                 jne 0x839574
// 0083956e  33c0                 xor eax, eax
// 00839570  59                   pop ecx
// 00839571  c20800               ret 8
// 00839574  83783400             cmp dword ptr [eax + 0x34], 0
// 00839578  74f4                 je 0x83956e
// 0083957a  53                   push ebx
// 0083957b  33c9                 xor ecx, ecx
// 0083957d  55                   push ebp
// 0083957e  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00839582  85ed                 test ebp, ebp
// 00839584  0f95c1               setne cl
// 00839587  837c241400           cmp dword ptr [esp + 0x14], 0
// 0083958c  894c2410             mov dword ptr [esp + 0x10], ecx
// 00839590  7405                 je 0x839597
// 00839592  8b582c               mov ebx, dword ptr [eax + 0x2c]
// 00839595  eb03                 jmp 0x83959a
// 00839597  8b5830               mov ebx, dword ptr [eax + 0x30]
// 0083959a  56                   push esi
// 0083959b  57                   push edi
// 0083959c  8bf3                 mov esi, ebx
// 0083959e  85db                 test ebx, ebx
// 008395a0  7459                 je 0x8395fb
// 008395a2  8bc6                 mov eax, esi
// 008395a4  83c008               add eax, 8
// 008395a7  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 008395ac  7404                 je 0x8395b2
// 008395ae  8b36                 mov esi, dword ptr [esi]
// 008395b0  eb03                 jmp 0x8395b5
// 008395b2  8b7604               mov esi, dword ptr [esi + 4]
// 008395b5  8b38                 mov edi, dword ptr [eax]
// 008395b7  85f6                 test esi, esi
// 008395b9  7510                 jne 0x8395cb
// 008395bb  39742418             cmp dword ptr [esp + 0x18], esi
// 008395bf  740a                 je 0x8395cb
// 008395c1  8bf3                 mov esi, ebx
// 008395c3  c744241800000000     mov dword ptr [esp + 0x18], 0
// 008395cb  85ed                 test ebp, ebp
// 008395cd  7522                 jne 0x8395f1
// 008395cf  8bcf                 mov ecx, edi
// 008395d1  e85ae1f1ff           call 0x757730
// 008395d6  a801                 test al, 1
// 008395d8  741d                 je 0x8395f7
// 008395da  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008395de  6a01                 push 1
// 008395e0  57                   push edi
// 008395e1  e85afaffff           call 0x839040
// 008395e6  5f                   pop edi
// 008395e7  5e                   pop esi
// 008395e8  8d4501               lea eax, [ebp + 1]
// 008395eb  5d                   pop ebp
// 008395ec  5b                   pop ebx
// 008395ed  59                   pop ecx
// 008395ee  c20800               ret 8
// 008395f1  3bfd                 cmp edi, ebp
// 008395f3  7502                 jne 0x8395f7
// 008395f5  33ed                 xor ebp, ebp
// 008395f7  85f6                 test esi, esi
// 008395f9  75a7                 jne 0x8395a2
// 008395fb  5f                   pop edi
// 008395fc  5e                   pop esi
// 008395fd  5d                   pop ebp
// 008395fe  33c0                 xor eax, eax
// 00839600  5b                   pop ebx
// 00839601  59                   pop ecx
// 00839602  c20800               ret 8
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?ActivateNextPane@CXTPDockingPaneManager@@QAEHPAVCXTPDockingPane@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
