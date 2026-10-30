// roc 2009-12 00846b70  unit: CXTPControls  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00846b70
//
// 00846b70  6aff                 push -1
// 00846b72  6803d19500           push 0x95d103
// 00846b77  64a100000000         mov eax, dword ptr fs:[0]
// 00846b7d  50                   push eax
// 00846b7e  51                   push ecx
// 00846b7f  56                   push esi
// 00846b80  57                   push edi
// 00846b81  a10052b600           mov eax, dword ptr [0xb65200]
// 00846b86  33c4                 xor eax, esp
// 00846b88  50                   push eax
// 00846b89  8d442410             lea eax, [esp + 0x10]
// 00846b8d  64a300000000         mov dword ptr fs:[0], eax
// 00846b93  8bf1                 mov esi, ecx
// 00846b95  8974240c             mov dword ptr [esp + 0xc], esi
// 00846b99  e8a4f80d00           call 0x926442
// 00846b9e  33ff                 xor edi, edi
// 00846ba0  8d4e24               lea ecx, [esi + 0x24]
// 00846ba3  897c2418             mov dword ptr [esp + 0x18], edi
// 00846ba7  c706fca59f00         mov dword ptr [esi], 0x9fa5fc
// 00846bad  e8ce0cfbff           call 0x7f7880
// 00846bb2  8bce                 mov ecx, esi
// 00846bb4  c644241801           mov byte ptr [esp + 0x18], 1
// 00846bb9  e88af80d00           call 0x926448
// 00846bbe  897e20               mov dword ptr [esi + 0x20], edi
// 00846bc1  897e38               mov dword ptr [esi + 0x38], edi
// 00846bc4  897e3c               mov dword ptr [esi + 0x3c], edi
// 00846bc7  897e40               mov dword ptr [esi + 0x40], edi
// 00846bca  8bc6                 mov eax, esi
// 00846bcc  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00846bd0  64890d00000000       mov dword ptr fs:[0], ecx
// 00846bd7  59                   pop ecx
// 00846bd8  5f                   pop edi
// 00846bd9  5e                   pop esi
// 00846bda  83c410               add esp, 0x10
// 00846bdd  c3                   ret 
// copied from an identical function in another client (function ??0CXTPControls@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControls.cpp