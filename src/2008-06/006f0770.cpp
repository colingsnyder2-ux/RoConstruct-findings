// roc 2008-06 006f0770  unit: CXTPPopupBar  size: 314 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f0770
//
// 006f0770  83ec10               sub esp, 0x10
// 006f0773  56                   push esi
// 006f0774  8bf1                 mov esi, ecx
// 006f0776  83be2c01000000       cmp dword ptr [esi + 0x12c], 0
// 006f077d  0f8f20010000         jg 0x6f08a3
// 006f0783  8b06                 mov eax, dword ptr [esi]
// 006f0785  8b9094010000         mov edx, dword ptr [eax + 0x194]
// 006f078b  55                   push ebp
// 006f078c  ffd2                 call edx
// 006f078e  8b2d2c2d8000         mov ebp, dword ptr [0x802d2c]
// 006f0794  85c0                 test eax, eax
// 006f0796  7446                 je 0x6f07de
// 006f0798  53                   push ebx
// 006f0799  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 006f079d  57                   push edi
// 006f079e  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 006f07a2  56                   push esi
// 006f07a3  8d4c2414             lea ecx, [esp + 0x14]
// 006f07a7  e884730000           call 0x6f7b30
// 006f07ac  53                   push ebx
// 006f07ad  57                   push edi
// 006f07ae  50                   push eax
// 006f07af  ffd5                 call ebp
// 006f07b1  5f                   pop edi
// 006f07b2  5b                   pop ebx
// 006f07b3  85c0                 test eax, eax
// 006f07b5  7427                 je 0x6f07de
// 006f07b7  8b06                 mov eax, dword ptr [esi]
// 006f07b9  8b9094010000         mov edx, dword ptr [eax + 0x194]
// 006f07bf  8bce                 mov ecx, esi
// 006f07c1  ffd2                 call edx
// 006f07c3  8b8e80010000         mov ecx, dword ptr [esi + 0x180]
// 006f07c9  8b8980000000         mov ecx, dword ptr [ecx + 0x80]
// 006f07cf  8b10                 mov edx, dword ptr [eax]
// 006f07d1  8b9250010000         mov edx, dword ptr [edx + 0x150]
// 006f07d7  6a00                 push 0
// 006f07d9  51                   push ecx
// 006f07da  8bc8                 mov ecx, eax
// 006f07dc  ffd2                 call edx
// 006f07de  83be1802000000       cmp dword ptr [esi + 0x218], 0
// 006f07e5  743d                 je 0x6f0824
// 006f07e7  8b442424             mov eax, dword ptr [esp + 0x24]
// 006f07eb  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006f07ef  50                   push eax
// 006f07f0  51                   push ecx
// 006f07f1  8d8e24020000         lea ecx, [esi + 0x224]
// 006f07f7  e864dfffff           call 0x6ee760
// 006f07fc  85c0                 test eax, eax
// 006f07fe  7519                 jne 0x6f0819
// 006f0800  8b542424             mov edx, dword ptr [esp + 0x24]
// 006f0804  8b442420             mov eax, dword ptr [esp + 0x20]
// 006f0808  52                   push edx
// 006f0809  50                   push eax
// 006f080a  8d8e40020000         lea ecx, [esi + 0x240]
// 006f0810  e84bdfffff           call 0x6ee760
// 006f0815  85c0                 test eax, eax
// 006f0817  740b                 je 0x6f0824
// 006f0819  6a00                 push 0
// 006f081b  6aff                 push -1
// 006f081d  8bce                 mov ecx, esi
// 006f081f  e8ac66fcff           call 0x6b6ed0
// 006f0824  83beb001000000       cmp dword ptr [esi + 0x1b0], 0
// 006f082b  745f                 je 0x6f088c
// 006f082d  8bce                 mov ecx, esi
// 006f082f  e80c46fcff           call 0x6b4e40
// 006f0834  85c0                 test eax, eax
// 006f0836  7554                 jne 0x6f088c
// 006f0838  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006f083c  8b542420             mov edx, dword ptr [esp + 0x20]
// 006f0840  51                   push ecx
// 006f0841  52                   push edx
// 006f0842  8d86b4010000         lea eax, [esi + 0x1b4]
// 006f0848  50                   push eax
// 006f0849  ffd5                 call ebp
// 006f084b  85c0                 test eax, eax
// 006f084d  743d                 je 0x6f088c
// 006f084f  83bed801000000       cmp dword ptr [esi + 0x1d8], 0
// 006f0856  7534                 jne 0x6f088c
// 006f0858  8b16                 mov edx, dword ptr [esi]
// 006f085a  8b8250010000         mov eax, dword ptr [edx + 0x150]
// 006f0860  6a00                 push 0
// 006f0862  6aff                 push -1
// 006f0864  8bce                 mov ecx, esi
// 006f0866  ffd0                 call eax
// 006f0868  6a00                 push 0
// 006f086a  6aff                 push -1
// 006f086c  8bce                 mov ecx, esi
// 006f086e  e85d66fcff           call 0x6b6ed0
// 006f0873  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 006f0876  6a00                 push 0
// 006f0878  6a50                 push 0x50
// 006f087a  688b130000           push 0x138b
// 006f087f  51                   push ecx
// 006f0880  ff157c2d8000         call dword ptr [0x802d7c]
// 006f0886  8986dc010000         mov dword ptr [esi + 0x1dc], eax
// 006f088c  8b542424             mov edx, dword ptr [esp + 0x24]
// 006f0890  8b442420             mov eax, dword ptr [esp + 0x20]
// 006f0894  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006f0898  52                   push edx
// 006f0899  50                   push eax
// 006f089a  51                   push ecx
// 006f089b  8bce                 mov ecx, esi
// 006f089d  e87e4efcff           call 0x6b5720
// 006f08a2  5d                   pop ebp
// 006f08a3  5e                   pop esi
// 006f08a4  83c410               add esp, 0x10
// 006f08a7  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPPopupBar.cpp (function ?OnMouseMove@CXTPPopupBar@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPPopupBar.cpp
