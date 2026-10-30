// from server: 100% by auto
// roc 2008-06 006e5e80  unit: CXTPDockingPaneManager  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e5e80
//
// 006e5e80  51                   push ecx
// 006e5e81  8b81d0000000         mov eax, dword ptr [ecx + 0xd0]
// 006e5e87  890c24               mov dword ptr [esp], ecx
// 006e5e8a  85c0                 test eax, eax
// 006e5e8c  7506                 jne 0x6e5e94
// 006e5e8e  33c0                 xor eax, eax
// 006e5e90  59                   pop ecx
// 006e5e91  c20800               ret 8
// 006e5e94  83783400             cmp dword ptr [eax + 0x34], 0
// 006e5e98  74f4                 je 0x6e5e8e
// 006e5e9a  53                   push ebx
// 006e5e9b  33c9                 xor ecx, ecx
// 006e5e9d  55                   push ebp
// 006e5e9e  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 006e5ea2  85ed                 test ebp, ebp
// 006e5ea4  0f95c1               setne cl
// 006e5ea7  837c241400           cmp dword ptr [esp + 0x14], 0
// 006e5eac  894c2410             mov dword ptr [esp + 0x10], ecx
// 006e5eb0  7405                 je 0x6e5eb7
// 006e5eb2  8b582c               mov ebx, dword ptr [eax + 0x2c]
// 006e5eb5  eb03                 jmp 0x6e5eba
// 006e5eb7  8b5830               mov ebx, dword ptr [eax + 0x30]
// 006e5eba  56                   push esi
// 006e5ebb  57                   push edi
// 006e5ebc  8bf3                 mov esi, ebx
// 006e5ebe  85db                 test ebx, ebx
// 006e5ec0  7459                 je 0x6e5f1b
// 006e5ec2  8bc6                 mov eax, esi
// 006e5ec4  83c008               add eax, 8
// 006e5ec7  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 006e5ecc  7404                 je 0x6e5ed2
// 006e5ece  8b36                 mov esi, dword ptr [esi]
// 006e5ed0  eb03                 jmp 0x6e5ed5
// 006e5ed2  8b7604               mov esi, dword ptr [esi + 4]
// 006e5ed5  8b38                 mov edi, dword ptr [eax]
// 006e5ed7  85f6                 test esi, esi
// 006e5ed9  7510                 jne 0x6e5eeb
// 006e5edb  39742418             cmp dword ptr [esp + 0x18], esi
// 006e5edf  740a                 je 0x6e5eeb
// 006e5ee1  8bf3                 mov esi, ebx
// 006e5ee3  c744241800000000     mov dword ptr [esp + 0x18], 0
// 006e5eeb  85ed                 test ebp, ebp
// 006e5eed  7522                 jne 0x6e5f11
// 006e5eef  8bcf                 mov ecx, edi
// 006e5ef1  e8caf0e8ff           call 0x574fc0
// 006e5ef6  a801                 test al, 1
// 006e5ef8  741d                 je 0x6e5f17
// 006e5efa  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006e5efe  6a01                 push 1
// 006e5f00  57                   push edi
// 006e5f01  e85afaffff           call 0x6e5960
// 006e5f06  5f                   pop edi
// 006e5f07  5e                   pop esi
// 006e5f08  8d4501               lea eax, [ebp + 1]
// 006e5f0b  5d                   pop ebp
// 006e5f0c  5b                   pop ebx
// 006e5f0d  59                   pop ecx
// 006e5f0e  c20800               ret 8
// 006e5f11  3bfd                 cmp edi, ebp
// 006e5f13  7502                 jne 0x6e5f17
// 006e5f15  33ed                 xor ebp, ebp
// 006e5f17  85f6                 test esi, esi
// 006e5f19  75a7                 jne 0x6e5ec2
// 006e5f1b  5f                   pop edi
// 006e5f1c  5e                   pop esi
// 006e5f1d  5d                   pop ebp
// 006e5f1e  33c0                 xor eax, eax
// 006e5f20  5b                   pop ebx
// 006e5f21  59                   pop ecx
// 006e5f22  c20800               ret 8
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?ActivateNextPane@CXTPDockingPaneManager@@QAEHPAVCXTPDockingPane@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
