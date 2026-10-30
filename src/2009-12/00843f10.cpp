// roc 2009-12 00843f10  unit: CXTPPopupBar  size: 314 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00843f10
//
// 00843f10  83ec10               sub esp, 0x10
// 00843f13  56                   push esi
// 00843f14  8bf1                 mov esi, ecx
// 00843f16  83be2c01000000       cmp dword ptr [esi + 0x12c], 0
// 00843f1d  0f8f20010000         jg 0x844043
// 00843f23  8b06                 mov eax, dword ptr [esi]
// 00843f25  8b9094010000         mov edx, dword ptr [eax + 0x194]
// 00843f2b  55                   push ebp
// 00843f2c  ffd2                 call edx
// 00843f2e  8b2d5cca9800         mov ebp, dword ptr [0x98ca5c]
// 00843f34  85c0                 test eax, eax
// 00843f36  7446                 je 0x843f7e
// 00843f38  53                   push ebx
// 00843f39  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 00843f3d  57                   push edi
// 00843f3e  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00843f42  56                   push esi
// 00843f43  8d4c2414             lea ecx, [esp + 0x14]
// 00843f47  e884730000           call 0x84b2d0
// 00843f4c  53                   push ebx
// 00843f4d  57                   push edi
// 00843f4e  50                   push eax
// 00843f4f  ffd5                 call ebp
// 00843f51  5f                   pop edi
// 00843f52  5b                   pop ebx
// 00843f53  85c0                 test eax, eax
// 00843f55  7427                 je 0x843f7e
// 00843f57  8b06                 mov eax, dword ptr [esi]
// 00843f59  8b9094010000         mov edx, dword ptr [eax + 0x194]
// 00843f5f  8bce                 mov ecx, esi
// 00843f61  ffd2                 call edx
// 00843f63  8b8e80010000         mov ecx, dword ptr [esi + 0x180]
// 00843f69  8b8980000000         mov ecx, dword ptr [ecx + 0x80]
// 00843f6f  8b10                 mov edx, dword ptr [eax]
// 00843f71  8b9250010000         mov edx, dword ptr [edx + 0x150]
// 00843f77  6a00                 push 0
// 00843f79  51                   push ecx
// 00843f7a  8bc8                 mov ecx, eax
// 00843f7c  ffd2                 call edx
// 00843f7e  83be1802000000       cmp dword ptr [esi + 0x218], 0
// 00843f85  743d                 je 0x843fc4
// 00843f87  8b442424             mov eax, dword ptr [esp + 0x24]
// 00843f8b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00843f8f  50                   push eax
// 00843f90  51                   push ecx
// 00843f91  8d8e24020000         lea ecx, [esi + 0x224]
// 00843f97  e864dfffff           call 0x841f00
// 00843f9c  85c0                 test eax, eax
// 00843f9e  7519                 jne 0x843fb9
// 00843fa0  8b542424             mov edx, dword ptr [esp + 0x24]
// 00843fa4  8b442420             mov eax, dword ptr [esp + 0x20]
// 00843fa8  52                   push edx
// 00843fa9  50                   push eax
// 00843faa  8d8e40020000         lea ecx, [esi + 0x240]
// 00843fb0  e84bdfffff           call 0x841f00
// 00843fb5  85c0                 test eax, eax
// 00843fb7  740b                 je 0x843fc4
// 00843fb9  6a00                 push 0
// 00843fbb  6aff                 push -1
// 00843fbd  8bce                 mov ecx, esi
// 00843fbf  e8dc25fcff           call 0x8065a0
// 00843fc4  83beb001000000       cmp dword ptr [esi + 0x1b0], 0
// 00843fcb  745f                 je 0x84402c
// 00843fcd  8bce                 mov ecx, esi
// 00843fcf  e82c05fcff           call 0x804500
// 00843fd4  85c0                 test eax, eax
// 00843fd6  7554                 jne 0x84402c
// 00843fd8  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00843fdc  8b542420             mov edx, dword ptr [esp + 0x20]
// 00843fe0  51                   push ecx
// 00843fe1  52                   push edx
// 00843fe2  8d86b4010000         lea eax, [esi + 0x1b4]
// 00843fe8  50                   push eax
// 00843fe9  ffd5                 call ebp
// 00843feb  85c0                 test eax, eax
// 00843fed  743d                 je 0x84402c
// 00843fef  83bed801000000       cmp dword ptr [esi + 0x1d8], 0
// 00843ff6  7534                 jne 0x84402c
// 00843ff8  8b16                 mov edx, dword ptr [esi]
// 00843ffa  8b8250010000         mov eax, dword ptr [edx + 0x150]
// 00844000  6a00                 push 0
// 00844002  6aff                 push -1
// 00844004  8bce                 mov ecx, esi
// 00844006  ffd0                 call eax
// 00844008  6a00                 push 0
// 0084400a  6aff                 push -1
// 0084400c  8bce                 mov ecx, esi
// 0084400e  e88d25fcff           call 0x8065a0
// 00844013  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00844016  6a00                 push 0
// 00844018  6a50                 push 0x50
// 0084401a  688b130000           push 0x138b
// 0084401f  51                   push ecx
// 00844020  ff1558cc9800         call dword ptr [0x98cc58]
// 00844026  8986dc010000         mov dword ptr [esi + 0x1dc], eax
// 0084402c  8b542424             mov edx, dword ptr [esp + 0x24]
// 00844030  8b442420             mov eax, dword ptr [esp + 0x20]
// 00844034  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00844038  52                   push edx
// 00844039  50                   push eax
// 0084403a  51                   push ecx
// 0084403b  8bce                 mov ecx, esi
// 0084403d  e88e0dfcff           call 0x804dd0
// 00844042  5d                   pop ebp
// 00844043  5e                   pop esi
// 00844044  83c410               add esp, 0x10
// 00844047  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnMouseMove@CXTPPopupBar@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPPopupBar.cpp