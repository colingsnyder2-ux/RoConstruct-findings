// roc 2009-12 008af9e0  unit: CXTPDockingPaneMiniWnd  size: 222 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008af9e0
//
// 008af9e0  6aff                 push -1
// 008af9e2  68983c9600           push 0x963c98
// 008af9e7  64a100000000         mov eax, dword ptr fs:[0]
// 008af9ed  50                   push eax
// 008af9ee  83ec1c               sub esp, 0x1c
// 008af9f1  53                   push ebx
// 008af9f2  56                   push esi
// 008af9f3  57                   push edi
// 008af9f4  a10052b600           mov eax, dword ptr [0xb65200]
// 008af9f9  33c4                 xor eax, esp
// 008af9fb  50                   push eax
// 008af9fc  8d44242c             lea eax, [esp + 0x2c]
// 008afa00  64a300000000         mov dword ptr fs:[0], eax
// 008afa06  8db1f8000000         lea esi, [ecx + 0xf8]
// 008afa0c  8bce                 mov ecx, esi
// 008afa0e  e82d0e0000           call 0x8b0840
// 008afa13  6a0a                 push 0xa
// 008afa15  8d4c2414             lea ecx, [esp + 0x14]
// 008afa19  8bf8                 mov edi, eax
// 008afa1b  e8a09cf8ff           call 0x8396c0
// 008afa20  8b06                 mov eax, dword ptr [esi]
// 008afa22  8b500c               mov edx, dword ptr [eax + 0xc]
// 008afa25  8d4c2410             lea ecx, [esp + 0x10]
// 008afa29  51                   push ecx
// 008afa2a  6a00                 push 0
// 008afa2c  8bce                 mov ecx, esi
// 008afa2e  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 008afa36  ffd2                 call edx
// 008afa38  8b742414             mov esi, dword ptr [esp + 0x14]
// 008afa3c  85f6                 test esi, esi
// 008afa3e  742b                 je 0x8afa6b
// 008afa40  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 008afa44  8bc6                 mov eax, esi
// 008afa46  8b4008               mov eax, dword ptr [eax + 8]
// 008afa49  8b36                 mov esi, dword ptr [esi]
// 008afa4b  85c0                 test eax, eax
// 008afa4d  7405                 je 0x8afa54
// 008afa4f  83c0e0               add eax, -0x20
// 008afa52  eb02                 jmp 0x8afa56
// 008afa54  33c0                 xor eax, eax
// 008afa56  6a00                 push 0
// 008afa58  6a00                 push 0
// 008afa5a  50                   push eax
// 008afa5b  53                   push ebx
// 008afa5c  8bcf                 mov ecx, edi
// 008afa5e  e8bd8af8ff           call 0x838520
// 008afa63  85c0                 test eax, eax
// 008afa65  752c                 jne 0x8afa93
// 008afa67  85f6                 test esi, esi
// 008afa69  75d9                 jne 0x8afa44
// 008afa6b  8d4c2410             lea ecx, [esp + 0x10]
// 008afa6f  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 008afa77  e8749cf8ff           call 0x8396f0
// 008afa7c  33c0                 xor eax, eax
// 008afa7e  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008afa82  64890d00000000       mov dword ptr fs:[0], ecx
// 008afa89  59                   pop ecx
// 008afa8a  5f                   pop edi
// 008afa8b  5e                   pop esi
// 008afa8c  5b                   pop ebx
// 008afa8d  83c428               add esp, 0x28
// 008afa90  c20400               ret 4
// 008afa93  8d4c2410             lea ecx, [esp + 0x10]
// 008afa97  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 008afa9f  e84c9cf8ff           call 0x8396f0
// 008afaa4  b801000000           mov eax, 1
// 008afaa9  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008afaad  64890d00000000       mov dword ptr fs:[0], ecx
// 008afab4  59                   pop ecx
// 008afab5  5f                   pop edi
// 008afab6  5e                   pop esi
// 008afab7  5b                   pop ebx
// 008afab8  83c428               add esp, 0x28
// 008afabb  c20400               ret 4
// copied from an identical function in another client (function ?OnAction@CXTPDockingPaneMiniWnd@@IAEHW4XTPDockingPaneAction@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneMiniWnd.cpp