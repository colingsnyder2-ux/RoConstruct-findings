// from server: 100% by auto
// roc 2008-06 0072ca80  unit: CXTPRibbonTheme  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0072ca80
//
// 0072ca80  83ec20               sub esp, 0x20
// 0072ca83  53                   push ebx
// 0072ca84  55                   push ebp
// 0072ca85  33ed                 xor ebp, ebp
// 0072ca87  56                   push esi
// 0072ca88  57                   push edi
// 0072ca89  396c244c             cmp dword ptr [esp + 0x4c], ebp
// 0072ca8d  0f848b000000         je 0x72cb1e
// 0072ca93  68b8208600           push 0x8620b8
// 0072ca98  e8538c0000           call 0x7356f0
// 0072ca9d  8bf0                 mov esi, eax
// 0072ca9f  3bf5                 cmp esi, ebp
// 0072caa1  747b                 je 0x72cb1e
// 0072caa3  33c0                 xor eax, eax
// 0072caa5  396c245c             cmp dword ptr [esp + 0x5c], ebp
// 0072caa9  7505                 jne 0x72cab0
// 0072caab  8d4503               lea eax, [ebp + 3]
// 0072caae  eb10                 jmp 0x72cac0
// 0072cab0  396c2450             cmp dword ptr [esp + 0x50], ebp
// 0072cab4  740a                 je 0x72cac0
// 0072cab6  33c0                 xor eax, eax
// 0072cab8  396c2454             cmp dword ptr [esp + 0x54], ebp
// 0072cabc  0f95c0               setne al
// 0072cabf  40                   inc eax
// 0072cac0  396c2458             cmp dword ptr [esp + 0x58], ebp
// 0072cac4  7403                 je 0x72cac9
// 0072cac6  83c004               add eax, 4
// 0072cac9  6a08                 push 8
// 0072cacb  50                   push eax
// 0072cacc  8d442428             lea eax, [esp + 0x28]
// 0072cad0  50                   push eax
// 0072cad1  8bce                 mov ecx, esi
// 0072cad3  33ff                 xor edi, edi
// 0072cad5  33db                 xor ebx, ebx
// 0072cad7  896c2428             mov dword ptr [esp + 0x28], ebp
// 0072cadb  e8500c0600           call 0x78d730
// 0072cae0  83ec10               sub esp, 0x10
// 0072cae3  8bcc                 mov ecx, esp
// 0072cae5  8939                 mov dword ptr [ecx], edi
// 0072cae7  895904               mov dword ptr [ecx + 4], ebx
// 0072caea  896908               mov dword ptr [ecx + 8], ebp
// 0072caed  83ec10               sub esp, 0x10
// 0072caf0  8bd5                 mov edx, ebp
// 0072caf2  89510c               mov dword ptr [ecx + 0xc], edx
// 0072caf5  8b10                 mov edx, dword ptr [eax]
// 0072caf7  8bcc                 mov ecx, esp
// 0072caf9  8911                 mov dword ptr [ecx], edx
// 0072cafb  8b5004               mov edx, dword ptr [eax + 4]
// 0072cafe  895104               mov dword ptr [ecx + 4], edx
// 0072cb01  8b5008               mov edx, dword ptr [eax + 8]
// 0072cb04  8b400c               mov eax, dword ptr [eax + 0xc]
// 0072cb07  895108               mov dword ptr [ecx + 8], edx
// 0072cb0a  8b542458             mov edx, dword ptr [esp + 0x58]
// 0072cb0e  89410c               mov dword ptr [ecx + 0xc], eax
// 0072cb11  8d4c245c             lea ecx, [esp + 0x5c]
// 0072cb15  51                   push ecx
// 0072cb16  52                   push edx
// 0072cb17  8bce                 mov ecx, esi
// 0072cb19  e8e2040600           call 0x78d000
// 0072cb1e  8b442434             mov eax, dword ptr [esp + 0x34]
// 0072cb22  5f                   pop edi
// 0072cb23  5e                   pop esi
// 0072cb24  5d                   pop ebp
// 0072cb25  c7000d000000         mov dword ptr [eax], 0xd
// 0072cb2b  c740040d000000       mov dword ptr [eax + 4], 0xd
// 0072cb32  5b                   pop ebx
// 0072cb33  83c420               add esp, 0x20
// 0072cb36  c22c00               ret 0x2c
// library xtp-11.2.2/Source\Ribbon\XTPRibbonTheme.cpp (function ?DrawControlRadioButtonMark@CXTPRibbonTheme@@MAE?AVCSize@@PAVCDC@@VCRect@@HHHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonTheme.cpp
