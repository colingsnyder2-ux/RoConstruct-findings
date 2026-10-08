// from server: 100% by auto
// roc 2011-06 0088e050  unit: CXTPRibbonTheme  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0088e050
//
// 0088e050  83ec20               sub esp, 0x20
// 0088e053  53                   push ebx
// 0088e054  55                   push ebp
// 0088e055  33ed                 xor ebp, ebp
// 0088e057  56                   push esi
// 0088e058  57                   push edi
// 0088e059  396c244c             cmp dword ptr [esp + 0x4c], ebp
// 0088e05d  0f848b000000         je 0x88e0ee
// 0088e063  68380bad00           push 0xad0b38
// 0088e068  e823120000           call 0x88f290
// 0088e06d  8bf0                 mov esi, eax
// 0088e06f  3bf5                 cmp esi, ebp
// 0088e071  747b                 je 0x88e0ee
// 0088e073  33c0                 xor eax, eax
// 0088e075  396c245c             cmp dword ptr [esp + 0x5c], ebp
// 0088e079  7505                 jne 0x88e080
// 0088e07b  8d4503               lea eax, [ebp + 3]
// 0088e07e  eb10                 jmp 0x88e090
// 0088e080  396c2450             cmp dword ptr [esp + 0x50], ebp
// 0088e084  740a                 je 0x88e090
// 0088e086  33c0                 xor eax, eax
// 0088e088  396c2454             cmp dword ptr [esp + 0x54], ebp
// 0088e08c  0f95c0               setne al
// 0088e08f  40                   inc eax
// 0088e090  396c2458             cmp dword ptr [esp + 0x58], ebp
// 0088e094  7403                 je 0x88e099
// 0088e096  83c004               add eax, 4
// 0088e099  6a08                 push 8
// 0088e09b  50                   push eax
// 0088e09c  8d442428             lea eax, [esp + 0x28]
// 0088e0a0  50                   push eax
// 0088e0a1  8bce                 mov ecx, esi
// 0088e0a3  33ff                 xor edi, edi
// 0088e0a5  33db                 xor ebx, ebx
// 0088e0a7  896c2428             mov dword ptr [esp + 0x28], ebp
// 0088e0ab  e860f60500           call 0x8ed710
// 0088e0b0  83ec10               sub esp, 0x10
// 0088e0b3  8bcc                 mov ecx, esp
// 0088e0b5  8939                 mov dword ptr [ecx], edi
// 0088e0b7  895904               mov dword ptr [ecx + 4], ebx
// 0088e0ba  896908               mov dword ptr [ecx + 8], ebp
// 0088e0bd  83ec10               sub esp, 0x10
// 0088e0c0  8bd5                 mov edx, ebp
// 0088e0c2  89510c               mov dword ptr [ecx + 0xc], edx
// 0088e0c5  8b10                 mov edx, dword ptr [eax]
// 0088e0c7  8bcc                 mov ecx, esp
// 0088e0c9  8911                 mov dword ptr [ecx], edx
// 0088e0cb  8b5004               mov edx, dword ptr [eax + 4]
// 0088e0ce  895104               mov dword ptr [ecx + 4], edx
// 0088e0d1  8b5008               mov edx, dword ptr [eax + 8]
// 0088e0d4  8b400c               mov eax, dword ptr [eax + 0xc]
// 0088e0d7  895108               mov dword ptr [ecx + 8], edx
// 0088e0da  8b542458             mov edx, dword ptr [esp + 0x58]
// 0088e0de  89410c               mov dword ptr [ecx + 0xc], eax
// 0088e0e1  8d4c245c             lea ecx, [esp + 0x5c]
// 0088e0e5  51                   push ecx
// 0088e0e6  52                   push edx
// 0088e0e7  8bce                 mov ecx, esi
// 0088e0e9  e8f2ee0500           call 0x8ecfe0
// 0088e0ee  8b442434             mov eax, dword ptr [esp + 0x34]
// 0088e0f2  5f                   pop edi
// 0088e0f3  5e                   pop esi
// 0088e0f4  5d                   pop ebp
// 0088e0f5  c7000d000000         mov dword ptr [eax], 0xd
// 0088e0fb  c740040d000000       mov dword ptr [eax + 4], 0xd
// 0088e102  5b                   pop ebx
// 0088e103  83c420               add esp, 0x20
// 0088e106  c22c00               ret 0x2c
// library xtp-15.2.1/Source\Ribbon\XTPRibbonTheme.cpp (function ?DrawControlRadioButtonMark@CXTPRibbonTheme@@MAE?AVCSize@@PAVCDC@@VCRect@@HHHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Ribbon/XTPRibbonTheme.cpp
