// roc 2011-06 00865c30  unit: CXTPTabClientWnd  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00865c30
//
// 00865c30  83ec14               sub esp, 0x14
// 00865c33  56                   push esi
// 00865c34  8bf1                 mov esi, ecx
// 00865c36  83be1001000000       cmp dword ptr [esi + 0x110], 0
// 00865c3d  0f84b4000000         je 0x865cf7
// 00865c43  53                   push ebx
// 00865c44  55                   push ebp
// 00865c45  57                   push edi
// 00865c46  e80f6d1600           call 0x9cc95a
// 00865c4b  8b8ee0000000         mov ecx, dword ptr [esi + 0xe0]
// 00865c51  8b96e4000000         mov edx, dword ptr [esi + 0xe4]
// 00865c57  89442410             mov dword ptr [esp + 0x10], eax
// 00865c5b  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 00865c61  894c2418             mov dword ptr [esp + 0x18], ecx
// 00865c65  8d4c2414             lea ecx, [esp + 0x14]
// 00865c69  89442414             mov dword ptr [esp + 0x14], eax
// 00865c6d  8b86e8000000         mov eax, dword ptr [esi + 0xe8]
// 00865c73  51                   push ecx
// 00865c74  8bce                 mov ecx, esi
// 00865c76  89542420             mov dword ptr [esp + 0x20], edx
// 00865c7a  89442424             mov dword ptr [esp + 0x24], eax
// 00865c7e  e87b49faff           call 0x80a5fe
// 00865c83  8b3de019a400         mov edi, dword ptr [0xa419e0]
// 00865c89  6a21                 push 0x21
// 00865c8b  ffd7                 call edi
// 00865c8d  6a20                 push 0x20
// 00865c8f  8bd8                 mov ebx, eax
// 00865c91  ffd7                 call edi
// 00865c93  837c242800           cmp dword ptr [esp + 0x28], 0
// 00865c98  8be8                 mov ebp, eax
// 00865c9a  7404                 je 0x865ca0
// 00865c9c  33db                 xor ebx, ebx
// 00865c9e  33ed                 xor ebp, ebp
// 00865ca0  8b442410             mov eax, dword ptr [esp + 0x10]
// 00865ca4  8b960c010000         mov edx, dword ptr [esi + 0x10c]
// 00865caa  50                   push eax
// 00865cab  50                   push eax
// 00865cac  8b8608010000         mov eax, dword ptr [esi + 0x108]
// 00865cb2  52                   push edx
// 00865cb3  50                   push eax
// 00865cb4  8dbef8000000         lea edi, [esi + 0xf8]
// 00865cba  57                   push edi
// 00865cbb  53                   push ebx
// 00865cbc  55                   push ebp
// 00865cbd  8d4c2430             lea ecx, [esp + 0x30]
// 00865cc1  51                   push ecx
// 00865cc2  8b8e10010000         mov ecx, dword ptr [esi + 0x110]
// 00865cc8  e8c76b1600           call 0x9cc894
// 00865ccd  8b542414             mov edx, dword ptr [esp + 0x14]
// 00865cd1  8b442418             mov eax, dword ptr [esp + 0x18]
// 00865cd5  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00865cd9  8917                 mov dword ptr [edi], edx
// 00865cdb  8b542420             mov edx, dword ptr [esp + 0x20]
// 00865cdf  894704               mov dword ptr [edi + 4], eax
// 00865ce2  894f08               mov dword ptr [edi + 8], ecx
// 00865ce5  89570c               mov dword ptr [edi + 0xc], edx
// 00865ce8  5f                   pop edi
// 00865ce9  89ae08010000         mov dword ptr [esi + 0x108], ebp
// 00865cef  5d                   pop ebp
// 00865cf0  899e0c010000         mov dword ptr [esi + 0x10c], ebx
// 00865cf6  5b                   pop ebx
// 00865cf7  5e                   pop esi
// 00865cf8  83c414               add esp, 0x14
// 00865cfb  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?DrawFocusRect@CXTPTabClientWnd@@IAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
