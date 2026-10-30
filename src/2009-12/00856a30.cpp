// roc 2009-12 00856a30  unit: CXTPTabClientWnd  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00856a30
//
// 00856a30  83ec14               sub esp, 0x14
// 00856a33  56                   push esi
// 00856a34  8bf1                 mov esi, ecx
// 00856a36  83be1001000000       cmp dword ptr [esi + 0x110], 0
// 00856a3d  0f84b4000000         je 0x856af7
// 00856a43  53                   push ebx
// 00856a44  55                   push ebp
// 00856a45  57                   push edi
// 00856a46  e831ff0c00           call 0x92697c
// 00856a4b  8b8ee0000000         mov ecx, dword ptr [esi + 0xe0]
// 00856a51  8b96e4000000         mov edx, dword ptr [esi + 0xe4]
// 00856a57  89442410             mov dword ptr [esp + 0x10], eax
// 00856a5b  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 00856a61  894c2418             mov dword ptr [esp + 0x18], ecx
// 00856a65  8d4c2414             lea ecx, [esp + 0x14]
// 00856a69  89442414             mov dword ptr [esp + 0x14], eax
// 00856a6d  8b86e8000000         mov eax, dword ptr [esi + 0xe8]
// 00856a73  51                   push ecx
// 00856a74  8bce                 mov ecx, esi
// 00856a76  89542420             mov dword ptr [esp + 0x20], edx
// 00856a7a  89442424             mov dword ptr [esp + 0x24], eax
// 00856a7e  e877d3f9ff           call 0x7f3dfa
// 00856a83  8b3ddccb9800         mov edi, dword ptr [0x98cbdc]
// 00856a89  6a21                 push 0x21
// 00856a8b  ffd7                 call edi
// 00856a8d  6a20                 push 0x20
// 00856a8f  8bd8                 mov ebx, eax
// 00856a91  ffd7                 call edi
// 00856a93  837c242800           cmp dword ptr [esp + 0x28], 0
// 00856a98  8be8                 mov ebp, eax
// 00856a9a  7404                 je 0x856aa0
// 00856a9c  33db                 xor ebx, ebx
// 00856a9e  33ed                 xor ebp, ebp
// 00856aa0  8b442410             mov eax, dword ptr [esp + 0x10]
// 00856aa4  8b960c010000         mov edx, dword ptr [esi + 0x10c]
// 00856aaa  50                   push eax
// 00856aab  50                   push eax
// 00856aac  8b8608010000         mov eax, dword ptr [esi + 0x108]
// 00856ab2  52                   push edx
// 00856ab3  50                   push eax
// 00856ab4  8dbef8000000         lea edi, [esi + 0xf8]
// 00856aba  57                   push edi
// 00856abb  53                   push ebx
// 00856abc  55                   push ebp
// 00856abd  8d4c2430             lea ecx, [esp + 0x30]
// 00856ac1  51                   push ecx
// 00856ac2  8b8e10010000         mov ecx, dword ptr [esi + 0x110]
// 00856ac8  e875fc0c00           call 0x926742
// 00856acd  8b542414             mov edx, dword ptr [esp + 0x14]
// 00856ad1  8b442418             mov eax, dword ptr [esp + 0x18]
// 00856ad5  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00856ad9  8917                 mov dword ptr [edi], edx
// 00856adb  8b542420             mov edx, dword ptr [esp + 0x20]
// 00856adf  894704               mov dword ptr [edi + 4], eax
// 00856ae2  894f08               mov dword ptr [edi + 8], ecx
// 00856ae5  89570c               mov dword ptr [edi + 0xc], edx
// 00856ae8  5f                   pop edi
// 00856ae9  89ae08010000         mov dword ptr [esi + 0x108], ebp
// 00856aef  5d                   pop ebp
// 00856af0  899e0c010000         mov dword ptr [esi + 0x10c], ebx
// 00856af6  5b                   pop ebx
// 00856af7  5e                   pop esi
// 00856af8  83c414               add esp, 0x14
// 00856afb  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?DrawFocusRect@CXTPTabClientWnd@@IAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
