// roc 2009-06 0077b9d0  unit: CXTPTabClientWnd  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0077b9d0
//
// 0077b9d0  83ec14               sub esp, 0x14
// 0077b9d3  56                   push esi
// 0077b9d4  8bf1                 mov esi, ecx
// 0077b9d6  83be1001000000       cmp dword ptr [esi + 0x110], 0
// 0077b9dd  0f84b4000000         je 0x77ba97
// 0077b9e3  53                   push ebx
// 0077b9e4  55                   push ebp
// 0077b9e5  57                   push edi
// 0077b9e6  e8250a0d00           call 0x84c410
// 0077b9eb  8b8ee0000000         mov ecx, dword ptr [esi + 0xe0]
// 0077b9f1  8b96e4000000         mov edx, dword ptr [esi + 0xe4]
// 0077b9f7  89442410             mov dword ptr [esp + 0x10], eax
// 0077b9fb  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 0077ba01  894c2418             mov dword ptr [esp + 0x18], ecx
// 0077ba05  8d4c2414             lea ecx, [esp + 0x14]
// 0077ba09  89442414             mov dword ptr [esp + 0x14], eax
// 0077ba0d  8b86e8000000         mov eax, dword ptr [esi + 0xe8]
// 0077ba13  51                   push ecx
// 0077ba14  8bce                 mov ecx, esi
// 0077ba16  89542420             mov dword ptr [esp + 0x20], edx
// 0077ba1a  89442424             mov dword ptr [esp + 0x24], eax
// 0077ba1e  e8afd5f9ff           call 0x718fd2
// 0077ba23  8b3ddced8900         mov edi, dword ptr [0x89eddc]
// 0077ba29  6a21                 push 0x21
// 0077ba2b  ffd7                 call edi
// 0077ba2d  6a20                 push 0x20
// 0077ba2f  8bd8                 mov ebx, eax
// 0077ba31  ffd7                 call edi
// 0077ba33  837c242800           cmp dword ptr [esp + 0x28], 0
// 0077ba38  8be8                 mov ebp, eax
// 0077ba3a  7404                 je 0x77ba40
// 0077ba3c  33db                 xor ebx, ebx
// 0077ba3e  33ed                 xor ebp, ebp
// 0077ba40  8b442410             mov eax, dword ptr [esp + 0x10]
// 0077ba44  8b960c010000         mov edx, dword ptr [esi + 0x10c]
// 0077ba4a  50                   push eax
// 0077ba4b  50                   push eax
// 0077ba4c  8b8608010000         mov eax, dword ptr [esi + 0x108]
// 0077ba52  52                   push edx
// 0077ba53  50                   push eax
// 0077ba54  8dbef8000000         lea edi, [esi + 0xf8]
// 0077ba5a  57                   push edi
// 0077ba5b  53                   push ebx
// 0077ba5c  55                   push ebp
// 0077ba5d  8d4c2430             lea ecx, [esp + 0x30]
// 0077ba61  51                   push ecx
// 0077ba62  8b8e10010000         mov ecx, dword ptr [esi + 0x110]
// 0077ba68  e869070d00           call 0x84c1d6
// 0077ba6d  8b542414             mov edx, dword ptr [esp + 0x14]
// 0077ba71  8b442418             mov eax, dword ptr [esp + 0x18]
// 0077ba75  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0077ba79  8917                 mov dword ptr [edi], edx
// 0077ba7b  8b542420             mov edx, dword ptr [esp + 0x20]
// 0077ba7f  894704               mov dword ptr [edi + 4], eax
// 0077ba82  894f08               mov dword ptr [edi + 8], ecx
// 0077ba85  89570c               mov dword ptr [edi + 0xc], edx
// 0077ba88  5f                   pop edi
// 0077ba89  89ae08010000         mov dword ptr [esi + 0x108], ebp
// 0077ba8f  5d                   pop ebp
// 0077ba90  899e0c010000         mov dword ptr [esi + 0x10c], ebx
// 0077ba96  5b                   pop ebx
// 0077ba97  5e                   pop esi
// 0077ba98  83c414               add esp, 0x14
// 0077ba9b  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?DrawFocusRect@CXTPTabClientWnd@@IAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
