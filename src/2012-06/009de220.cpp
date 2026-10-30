// roc 2012-06 009de220  unit: CXTPTabClientWnd  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009de220
//
// 009de220  83ec14               sub esp, 0x14
// 009de223  56                   push esi
// 009de224  8bf1                 mov esi, ecx
// 009de226  83be1001000000       cmp dword ptr [esi + 0x110], 0
// 009de22d  0f84b4000000         je 0x9de2e7
// 009de233  53                   push ebx
// 009de234  55                   push ebp
// 009de235  57                   push edi
// 009de236  e8cdb60b00           call 0xa99908
// 009de23b  8b8ee0000000         mov ecx, dword ptr [esi + 0xe0]
// 009de241  8b96e4000000         mov edx, dword ptr [esi + 0xe4]
// 009de247  89442410             mov dword ptr [esp + 0x10], eax
// 009de24b  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 009de251  894c2418             mov dword ptr [esp + 0x18], ecx
// 009de255  8d4c2414             lea ecx, [esp + 0x14]
// 009de259  89442414             mov dword ptr [esp + 0x14], eax
// 009de25d  8b86e8000000         mov eax, dword ptr [esi + 0xe8]
// 009de263  51                   push ecx
// 009de264  8bce                 mov ecx, esi
// 009de266  89542420             mov dword ptr [esp + 0x20], edx
// 009de26a  89442424             mov dword ptr [esp + 0x24], eax
// 009de26e  e83b44faff           call 0x9826ae
// 009de273  8b3dfc3bb200         mov edi, dword ptr [0xb23bfc]
// 009de279  6a21                 push 0x21
// 009de27b  ffd7                 call edi
// 009de27d  6a20                 push 0x20
// 009de27f  8bd8                 mov ebx, eax
// 009de281  ffd7                 call edi
// 009de283  837c242800           cmp dword ptr [esp + 0x28], 0
// 009de288  8be8                 mov ebp, eax
// 009de28a  7404                 je 0x9de290
// 009de28c  33db                 xor ebx, ebx
// 009de28e  33ed                 xor ebp, ebp
// 009de290  8b442410             mov eax, dword ptr [esp + 0x10]
// 009de294  8b960c010000         mov edx, dword ptr [esi + 0x10c]
// 009de29a  50                   push eax
// 009de29b  50                   push eax
// 009de29c  8b8608010000         mov eax, dword ptr [esi + 0x108]
// 009de2a2  52                   push edx
// 009de2a3  50                   push eax
// 009de2a4  8dbef8000000         lea edi, [esi + 0xf8]
// 009de2aa  57                   push edi
// 009de2ab  53                   push ebx
// 009de2ac  55                   push ebp
// 009de2ad  8d4c2430             lea ecx, [esp + 0x30]
// 009de2b1  51                   push ecx
// 009de2b2  8b8e10010000         mov ecx, dword ptr [esi + 0x110]
// 009de2b8  e891b50b00           call 0xa9984e
// 009de2bd  8b542414             mov edx, dword ptr [esp + 0x14]
// 009de2c1  8b442418             mov eax, dword ptr [esp + 0x18]
// 009de2c5  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 009de2c9  8917                 mov dword ptr [edi], edx
// 009de2cb  8b542420             mov edx, dword ptr [esp + 0x20]
// 009de2cf  894704               mov dword ptr [edi + 4], eax
// 009de2d2  894f08               mov dword ptr [edi + 8], ecx
// 009de2d5  89570c               mov dword ptr [edi + 0xc], edx
// 009de2d8  5f                   pop edi
// 009de2d9  89ae08010000         mov dword ptr [esi + 0x108], ebp
// 009de2df  5d                   pop ebp
// 009de2e0  899e0c010000         mov dword ptr [esi + 0x10c], ebx
// 009de2e6  5b                   pop ebx
// 009de2e7  5e                   pop esi
// 009de2e8  83c414               add esp, 0x14
// 009de2eb  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?DrawFocusRect@CXTPTabClientWnd@@IAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
