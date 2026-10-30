// roc 2009-12 008ebda0  unit: CXTPDialogBar::CControlButtonHide  size: 254 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ebda0
//
// 008ebda0  6aff                 push -1
// 008ebda2  6888149600           push 0x961488
// 008ebda7  64a100000000         mov eax, dword ptr fs:[0]
// 008ebdad  50                   push eax
// 008ebdae  83ec08               sub esp, 8
// 008ebdb1  53                   push ebx
// 008ebdb2  55                   push ebp
// 008ebdb3  56                   push esi
// 008ebdb4  57                   push edi
// 008ebdb5  a10052b600           mov eax, dword ptr [0xb65200]
// 008ebdba  33c4                 xor eax, esp
// 008ebdbc  50                   push eax
// 008ebdbd  8d44241c             lea eax, [esp + 0x1c]
// 008ebdc1  64a300000000         mov dword ptr fs:[0], eax
// 008ebdc7  8bf9                 mov edi, ecx
// 008ebdc9  33db                 xor ebx, ebx
// 008ebdcb  895c2418             mov dword ptr [esp + 0x18], ebx
// 008ebdcf  c744241498019b00     mov dword ptr [esp + 0x14], 0x9b0198
// 008ebdd7  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 008ebddb  8b4608               mov eax, dword ptr [esi + 8]
// 008ebdde  6a58                 push 0x58
// 008ebde0  50                   push eax
// 008ebde1  895c242c             mov dword ptr [esp + 0x2c], ebx
// 008ebde5  ff1564b19800         call dword ptr [0x98b164]
// 008ebdeb  53                   push ebx
// 008ebdec  68ac2a9f00           push 0x9f2aac
// 008ebdf1  50                   push eax
// 008ebdf2  6a60                 push 0x60
// 008ebdf4  6a50                 push 0x50
// 008ebdf6  ff15a0b29800         call dword ptr [0x98b2a0]
// 008ebdfc  50                   push eax
// 008ebdfd  8d4c2420             lea ecx, [esp + 0x20]
// 008ebe01  e89ca60300           call 0x9264a2
// 008ebe06  8b16                 mov edx, dword ptr [esi]
// 008ebe08  8b5230               mov edx, dword ptr [edx + 0x30]
// 008ebe0b  8d442414             lea eax, [esp + 0x14]
// 008ebe0f  50                   push eax
// 008ebe10  8bce                 mov ecx, esi
// 008ebe12  ffd2                 call edx
// 008ebe14  8bcf                 mov ecx, edi
// 008ebe16  8bd8                 mov ebx, eax
// 008ebe18  e823a1f0ff           call 0x7f5f40
// 008ebe1d  8b10                 mov edx, dword ptr [eax]
// 008ebe1f  57                   push edi
// 008ebe20  8bc8                 mov ecx, eax
// 008ebe22  8b4278               mov eax, dword ptr [edx + 0x78]
// 008ebe25  56                   push esi
// 008ebe26  ffd0                 call eax
// 008ebe28  8bcf                 mov ecx, edi
// 008ebe2a  e811a1f0ff           call 0x7f5f40
// 008ebe2f  8b10                 mov edx, dword ptr [eax]
// 008ebe31  8b2e                 mov ebp, dword ptr [esi]
// 008ebe33  8bc8                 mov ecx, eax
// 008ebe35  8b427c               mov eax, dword ptr [edx + 0x7c]
// 008ebe38  57                   push edi
// 008ebe39  ffd0                 call eax
// 008ebe3b  8b5538               mov edx, dword ptr [ebp + 0x38]
// 008ebe3e  50                   push eax
// 008ebe3f  8bce                 mov ecx, esi
// 008ebe41  ffd2                 call edx
// 008ebe43  6a01                 push 1
// 008ebe45  8bce                 mov ecx, esi
// 008ebe47  e844a60300           call 0x926490
// 008ebe4c  8b06                 mov eax, dword ptr [esi]
// 008ebe4e  8b5070               mov edx, dword ptr [eax + 0x70]
// 008ebe51  6a25                 push 0x25
// 008ebe53  81c7c0000000         add edi, 0xc0
// 008ebe59  57                   push edi
// 008ebe5a  6a01                 push 1
// 008ebe5c  68309d9e00           push 0x9e9d30
// 008ebe61  8bce                 mov ecx, esi
// 008ebe63  ffd2                 call edx
// 008ebe65  8b06                 mov eax, dword ptr [esi]
// 008ebe67  8b5030               mov edx, dword ptr [eax + 0x30]
// 008ebe6a  53                   push ebx
// 008ebe6b  8bce                 mov ecx, esi
// 008ebe6d  ffd2                 call edx
// 008ebe6f  8d4c2414             lea ecx, [esp + 0x14]
// 008ebe73  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 008ebe7b  c744241498019b00     mov dword ptr [esp + 0x14], 0x9b0198
// 008ebe83  e8a833b2ff           call 0x40f230
// 008ebe88  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008ebe8c  64890d00000000       mov dword ptr fs:[0], ecx
// 008ebe93  59                   pop ecx
// 008ebe94  5f                   pop edi
// 008ebe95  5e                   pop esi
// 008ebe96  5d                   pop ebp
// 008ebe97  5b                   pop ebx
// 008ebe98  83c414               add esp, 0x14
// 008ebe9b  c20400               ret 4
// copied from an identical function in another client (function ?Draw@CControlButtonHide@CXTPDialogBar@@UAEXPAVCDC@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source/CommandBars/XTPDialogBar.cpp