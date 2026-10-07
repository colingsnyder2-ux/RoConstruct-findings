// roc 2008-06 007030c0  unit: CXTPTabClientWnd  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007030c0
//
// 007030c0  83ec14               sub esp, 0x14
// 007030c3  56                   push esi
// 007030c4  8bf1                 mov esi, ecx
// 007030c6  83be1001000000       cmp dword ptr [esi + 0x110], 0
// 007030cd  0f84b4000000         je 0x703187
// 007030d3  53                   push ebx
// 007030d4  55                   push ebp
// 007030d5  57                   push edi
// 007030d6  e881940b00           call 0x7bc55c
// 007030db  8b8ee0000000         mov ecx, dword ptr [esi + 0xe0]
// 007030e1  8b96e4000000         mov edx, dword ptr [esi + 0xe4]
// 007030e7  89442410             mov dword ptr [esp + 0x10], eax
// 007030eb  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 007030f1  894c2418             mov dword ptr [esp + 0x18], ecx
// 007030f5  8d4c2414             lea ecx, [esp + 0x14]
// 007030f9  89442414             mov dword ptr [esp + 0x14], eax
// 007030fd  8b86e8000000         mov eax, dword ptr [esi + 0xe8]
// 00703103  51                   push ecx
// 00703104  8bce                 mov ecx, esi
// 00703106  89542420             mov dword ptr [esp + 0x20], edx
// 0070310a  89442424             mov dword ptr [esp + 0x24], eax
// 0070310e  e81fdbf9ff           call 0x6a0c32
// 00703113  8b3d4c2d8000         mov edi, dword ptr [0x802d4c]
// 00703119  6a21                 push 0x21
// 0070311b  ffd7                 call edi
// 0070311d  6a20                 push 0x20
// 0070311f  8bd8                 mov ebx, eax
// 00703121  ffd7                 call edi
// 00703123  837c242800           cmp dword ptr [esp + 0x28], 0
// 00703128  8be8                 mov ebp, eax
// 0070312a  7404                 je 0x703130
// 0070312c  33db                 xor ebx, ebx
// 0070312e  33ed                 xor ebp, ebp
// 00703130  8b442410             mov eax, dword ptr [esp + 0x10]
// 00703134  8b960c010000         mov edx, dword ptr [esi + 0x10c]
// 0070313a  50                   push eax
// 0070313b  50                   push eax
// 0070313c  8b8608010000         mov eax, dword ptr [esi + 0x108]
// 00703142  52                   push edx
// 00703143  50                   push eax
// 00703144  8dbef8000000         lea edi, [esi + 0xf8]
// 0070314a  57                   push edi
// 0070314b  53                   push ebx
// 0070314c  55                   push ebp
// 0070314d  8d4c2430             lea ecx, [esp + 0x30]
// 00703151  51                   push ecx
// 00703152  8b8e10010000         mov ecx, dword ptr [esi + 0x110]
// 00703158  e8fb910b00           call 0x7bc358
// 0070315d  8b542414             mov edx, dword ptr [esp + 0x14]
// 00703161  8b442418             mov eax, dword ptr [esp + 0x18]
// 00703165  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00703169  8917                 mov dword ptr [edi], edx
// 0070316b  8b542420             mov edx, dword ptr [esp + 0x20]
// 0070316f  894704               mov dword ptr [edi + 4], eax
// 00703172  894f08               mov dword ptr [edi + 8], ecx
// 00703175  89570c               mov dword ptr [edi + 0xc], edx
// 00703178  5f                   pop edi
// 00703179  89ae08010000         mov dword ptr [esi + 0x108], ebp
// 0070317f  5d                   pop ebp
// 00703180  899e0c010000         mov dword ptr [esi + 0x10c], ebx
// 00703186  5b                   pop ebx
// 00703187  5e                   pop esi
// 00703188  83c414               add esp, 0x14
// 0070318b  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?DrawFocusRect@CXTPTabClientWnd@@IAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
