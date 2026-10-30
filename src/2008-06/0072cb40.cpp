// from server: 100% by auto
// roc 2008-06 0072cb40  unit: CXTPRibbonTheme  size: 276 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0072cb40
//
// 0072cb40  8b442420             mov eax, dword ptr [esp + 0x20]
// 0072cb44  83ec30               sub esp, 0x30
// 0072cb47  53                   push ebx
// 0072cb48  55                   push ebp
// 0072cb49  33db                 xor ebx, ebx
// 0072cb4b  56                   push esi
// 0072cb4c  57                   push edi
// 0072cb4d  3bc3                 cmp eax, ebx
// 0072cb4f  7433                 je 0x72cb84
// 0072cb51  8b542458             mov edx, dword ptr [esp + 0x58]
// 0072cb55  50                   push eax
// 0072cb56  8b442460             mov eax, dword ptr [esp + 0x60]
// 0072cb5a  50                   push eax
// 0072cb5b  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 0072cb5f  52                   push edx
// 0072cb60  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 0072cb64  50                   push eax
// 0072cb65  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 0072cb69  52                   push edx
// 0072cb6a  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 0072cb6e  50                   push eax
// 0072cb6f  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 0072cb73  52                   push edx
// 0072cb74  50                   push eax
// 0072cb75  e8d62ef8ff           call 0x6afa50
// 0072cb7a  5f                   pop edi
// 0072cb7b  5e                   pop esi
// 0072cb7c  5d                   pop ebp
// 0072cb7d  5b                   pop ebx
// 0072cb7e  83c430               add esp, 0x30
// 0072cb81  c22000               ret 0x20
// 0072cb84  68d4208600           push 0x8620d4
// 0072cb89  e8628b0000           call 0x7356f0
// 0072cb8e  8bf8                 mov edi, eax
// 0072cb90  3bfb                 cmp edi, ebx
// 0072cb92  0f84b2000000         je 0x72cc4a
// 0072cb98  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0072cb9c  8d48fe               lea ecx, [eax - 2]
// 0072cb9f  894c2410             mov dword ptr [esp + 0x10], ecx
// 0072cba3  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0072cba7  8d51fe               lea edx, [ecx - 2]
// 0072cbaa  83c003               add eax, 3
// 0072cbad  83c102               add ecx, 2
// 0072cbb0  89542414             mov dword ptr [esp + 0x14], edx
// 0072cbb4  89442418             mov dword ptr [esp + 0x18], eax
// 0072cbb8  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0072cbbc  395c245c             cmp dword ptr [esp + 0x5c], ebx
// 0072cbc0  7507                 jne 0x72cbc9
// 0072cbc2  bd03000000           mov ebp, 3
// 0072cbc7  eb0b                 jmp 0x72cbd4
// 0072cbc9  33c0                 xor eax, eax
// 0072cbcb  395c2454             cmp dword ptr [esp + 0x54], ebx
// 0072cbcf  0f95c0               setne al
// 0072cbd2  8be8                 mov ebp, eax
// 0072cbd4  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0072cbd8  8b8100010000         mov eax, dword ptr [ecx + 0x100]
// 0072cbde  8d542410             lea edx, [esp + 0x10]
// 0072cbe2  52                   push edx
// 0072cbe3  50                   push eax
// 0072cbe4  e857bbffff           call 0x728740
// 0072cbe9  83c408               add esp, 8
// 0072cbec  8bf0                 mov esi, eax
// 0072cbee  6a04                 push 4
// 0072cbf0  f7de                 neg esi
// 0072cbf2  55                   push ebp
// 0072cbf3  8d442438             lea eax, [esp + 0x38]
// 0072cbf7  1bf6                 sbb esi, esi
// 0072cbf9  50                   push eax
// 0072cbfa  8bcf                 mov ecx, edi
// 0072cbfc  f7de                 neg esi
// 0072cbfe  895c242c             mov dword ptr [esp + 0x2c], ebx
// 0072cc02  895c2430             mov dword ptr [esp + 0x30], ebx
// 0072cc06  895c2434             mov dword ptr [esp + 0x34], ebx
// 0072cc0a  895c2438             mov dword ptr [esp + 0x38], ebx
// 0072cc0e  e81d0b0600           call 0x78d730
// 0072cc13  8b10                 mov edx, dword ptr [eax]
// 0072cc15  56                   push esi
// 0072cc16  68ff00ff00           push 0xff00ff
// 0072cc1b  8d4c2428             lea ecx, [esp + 0x28]
// 0072cc1f  51                   push ecx
// 0072cc20  83ec10               sub esp, 0x10
// 0072cc23  8bcc                 mov ecx, esp
// 0072cc25  8911                 mov dword ptr [ecx], edx
// 0072cc27  8b5004               mov edx, dword ptr [eax + 4]
// 0072cc2a  895104               mov dword ptr [ecx + 4], edx
// 0072cc2d  8b5008               mov edx, dword ptr [eax + 8]
// 0072cc30  8b400c               mov eax, dword ptr [eax + 0xc]
// 0072cc33  895108               mov dword ptr [ecx + 8], edx
// 0072cc36  8b542460             mov edx, dword ptr [esp + 0x60]
// 0072cc3a  89410c               mov dword ptr [ecx + 0xc], eax
// 0072cc3d  8d4c242c             lea ecx, [esp + 0x2c]
// 0072cc41  51                   push ecx
// 0072cc42  52                   push edx
// 0072cc43  8bcf                 mov ecx, edi
// 0072cc45  e8f6140600           call 0x78e140
// 0072cc4a  5f                   pop edi
// 0072cc4b  5e                   pop esi
// 0072cc4c  5d                   pop ebp
// 0072cc4d  5b                   pop ebx
// 0072cc4e  83c430               add esp, 0x30
// 0072cc51  c22000               ret 0x20
// library xtp-11.2.2/Source\Ribbon\XTPRibbonTheme.cpp (function ?DrawDropDownGlyph@CXTPRibbonTheme@@MAEXPAVCDC@@PAVCXTPControl@@VCPoint@@HHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonTheme.cpp
